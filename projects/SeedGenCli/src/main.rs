use std::path::PathBuf;
use std::fs::File;
use std::io::{self, Read, BufReader, Error, ErrorKind};
use std::io::prelude::*;

use structopt::StructOpt;
use bugsalot::debugger;
use atty;

#[derive(StructOpt)]
struct Arguments {
    #[structopt(long = "validate")]
    validate: bool,
    #[structopt(long = "debug")]
    wait_on_debugger: bool,
    #[structopt(long = "spoilers")]
    spoilers: bool,
    #[structopt(parse(from_os_str), long = "area")]
    area: PathBuf,
    #[structopt(parse(from_os_str), long = "output")]
    output: PathBuf,
    #[structopt(long = "gen_flags", required = true, min_values = 1)]
    generation_flags: Vec<String>,
    #[structopt(parse(from_os_str), long = "headers")]
    header_paths: Vec<PathBuf>,
    headers: Vec<String>
}

fn read_header() -> String {
    // If we do not have input, skip.
    if atty::is(atty::Stream::Stdin) {
        return String::new();
    }
    
    let stdin = io::stdin();
    let mut stdin = stdin.lock(); // locking is optional
    let mut output = String::new();

    // Could also `match` on the `Result` if you wanted to handle `Err` 
    loop {
        let result = stdin.read_to_string(&mut output);
        match result {
            Ok(n) => {
                if n == 0 {
                    break;
                }

                output += "\n";
            },
            Err(error) => {
                panic!("failed to read standard input ({:?})", error);
            }
        }
    }

    return output;
}

fn read_header_from_file(path: &PathBuf) -> Result<String, io::Error> {
    let file = File::open(path)?;
    let mut buf_reader = BufReader::new(file);
    let mut contents = String::new();
    buf_reader.read_to_string(&mut contents)?;
    if contents.is_empty() {
        return Err(Error::new(ErrorKind::InvalidData, "Empty header"));
    }

    return Ok(contents);
}

fn main() {
    let mut args = Arguments::from_args();
    if args.wait_on_debugger {
        debugger::wait_until_attached(None).expect("state() not implemented on this platform");
    }

    let header = read_header();
    if !header.is_empty() {
        args.headers.push(header)
    }

    for path in args.header_paths {
        match read_header_from_file(&path) {
            Ok(header) => args.headers.push(header),
            Err(error) => println!("Error from {}: {:?}", path.display(), error)
        }
    }

    // TODO: Call tokenizer, parser etc with arguments.
}