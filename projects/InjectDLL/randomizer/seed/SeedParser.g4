parser grammar SeedParser;

options { tokenVocab=SeedLexer; }

file:
    lines EOF;

lines:
    NEWLINE* ( line ( NEWLINE+ line )* NEWLINE* )?;

line:
    triggerLine |
    setupDef |
    metadataDef;

setupDef:
    SETUP WHITESPACE+ action;

metadataDef:
    '#' metadataKey (':' WHITESPACE* metadataValue)?;

metadataKey:
    ~(':' | NEWLINE)+;

metadataValue:
    ~(NEWLINE)+;

triggerLine:
    trigger '|' action;

trigger:
    uberGroup '|' uberState;

uberGroup:
    INT;

uberStateId:
    INT;

uberState:
    uberStateId | uberStateCondition;

uberStateCondition:
    uberStateId comparison number;

action:
    actionType '|' actionArgument ('|' actionArgument)*;

actionType:
    INT;

actionArgument:
    number |
    expression |
    identifier |
    commaSeparatedNumbers |
    '"' interpolatableString '"' |
    '"' string '"';

commaSeparatedNumbers:
    number (',' WHITESPACE* number)*;

identifier:
    IDENTIFIER_CHAR+;

string:
    ~(NEWLINE)+;

interpolatableStringPart:
    ~('"' | '$[' | '$(' | NEWLINE)+;

interpolatableString:
    interpolatableStringPart* ( interpolation ( interpolatableStringPart+ interpolation )* interpolatableStringPart* )?;

expressionKey:
    identifier;

expression:
    expressionKey comparison number;

comparison:
    EQ | NEQ | GT | LT | GTE | LTE;

number:
    INT | FLOAT;

interpolation:
    actionNameInterpolation |
    locationActionNameInterpolation |
    uberValueInterpolation |
    storedStringInterpolation;

actionNameInterpolation:
    '$[' action ']';

locationActionNameInterpolation:
    '$[' '(' (uberGroup | uberValueInterpolation) '|' (uberState | uberValueInterpolation) ')' ']';

uberValueInterpolation:
    '$(' (uberGroup | uberValueInterpolation) '|' (uberState | uberValueInterpolation) ')';

storedStringInterpolation:
    '${' storedStringId '}';

storedStringId:
    INT;