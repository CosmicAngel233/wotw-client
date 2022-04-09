namespace app {

struct LightTorchZone__Fields {
  struct MonoBehaviour__Fields _;
  struct CageStructureTool * CageStructureTool;
};
struct LightTorchZone {
  struct LightTorchZone__Class *klass;
  struct MonitorData *monitor;
  struct LightTorchZone__Fields fields;
};
struct LightTorchZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightTorchZone__StaticFields {
  struct LightTorchZone * Instance;
};
struct LightTorchZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightTorchZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightTorchZone__VTable vtable;
};

struct SaveInTheDarkZone__Fields {
  struct MonoBehaviour__Fields _;
  struct CageStructureTool * CageStructureTool;
};
struct SaveInTheDarkZone {
  struct SaveInTheDarkZone__Class *klass;
  struct MonitorData *monitor;
  struct SaveInTheDarkZone__Fields fields;
};
struct SaveInTheDarkZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveInTheDarkZone__StaticFields {
  struct SaveInTheDarkZone * Instance;
};
struct SaveInTheDarkZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveInTheDarkZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveInTheDarkZone__VTable vtable;
};

struct SmoothTransformFollower__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * TargetToFollow;
  struct Vector3 TargetOffset;
  float RotationFactor;
  float RotationOffset;
  float SpeedSmoothingFactor;
  float ResetDistance;
  struct Vector3 m_currentPosition;
};
struct SmoothTransformFollower {
  struct SmoothTransformFollower__Class *klass;
  struct MonitorData *monitor;
  struct SmoothTransformFollower__Fields fields;
};
struct SmoothTransformFollower__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SmoothTransformFollower__StaticFields {
};
struct SmoothTransformFollower__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SmoothTransformFollower__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SmoothTransformFollower__VTable vtable;
};

enum SpiritLightAffectorBasedTrigger_State__Enum : int32_t {
  SpiritLightAffectorBasedTrigger_State__Enum_Unknown = 0,
  SpiritLightAffectorBasedTrigger_State__Enum_NoPointsCovered = 1,
  SpiritLightAffectorBasedTrigger_State__Enum_SomePointsCovered = 2,
  SpiritLightAffectorBasedTrigger_State__Enum_AllPointsCovered = 3,
};
struct SpiritLightAffectorBasedTrigger_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiritLightAffectorBasedTrigger_State__Enum value;
};
struct SpiritLightAffectorBasedTrigger__Fields {
  struct MonoBehaviour__Fields _;
  float RadiusModulation;
  enum SpiritLightType__Enum LightType;
  struct LocalSpacePointSet * TriggerPoints;
  struct ActionMethod * AllPointsCoveredInLightAction;
  struct ActionMethod * NoPointsCoveredInLightAction;
  struct ActionMethod * SomePointsCoveredInLightAction;
  struct ActionMethod * FirstPointCoveredInLightAction;
  bool AssumeAllPointsCoveredIfDarknessIsLifted;
  bool InvertedTrigger;
  enum SpiritLightAffectorBasedTrigger_State__Enum m_currentState;
};
struct SpiritLightAffectorBasedTrigger {
  struct SpiritLightAffectorBasedTrigger__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLightAffectorBasedTrigger__Fields fields;
};
struct LocalSpacePointSet__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * ParentTransform;
  bool IsParentDynamic;
  struct Color PointColor;
  struct Vector3__Array * LocalSpaceInteractionPoints;
  struct List_1_UnityEngine_Vector3_ * m_cachedWorldSpaceInteractionPoints;
};
struct LocalSpacePointSet {
  struct LocalSpacePointSet__Class *klass;
  struct MonitorData *monitor;
  struct LocalSpacePointSet__Fields fields;
};
struct LocalSpacePointSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_WorldSpaceWorldSpaceInteractionPoints;
  VirtualInvokeData set_WorldSpaceWorldSpaceInteractionPoints;
  VirtualInvokeData UpdateWorldSpacePointCache;
};
struct LocalSpacePointSet__StaticFields {
};
struct LocalSpacePointSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LocalSpacePointSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LocalSpacePointSet__VTable vtable;
};
struct SpiritLightAffectorBasedTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritLightAffectorBasedTrigger__StaticFields {
};
struct SpiritLightAffectorBasedTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLightAffectorBasedTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLightAffectorBasedTrigger__VTable vtable;
};

struct SpiritLightAffectorIntensityAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * IntensityAnimationCurve;
  float IntensityCurveMagnitude;
  struct SpiritLightRadialVisualAffector * Target;
  float OriginalLightIntensity;
};
struct SpiritLightAffectorIntensityAnimator {
  struct SpiritLightAffectorIntensityAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLightAffectorIntensityAnimator__Fields fields;
};
struct SpiritLightAffectorIntensityAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct SpiritLightAffectorIntensityAnimator__StaticFields {
};
struct SpiritLightAffectorIntensityAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLightAffectorIntensityAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLightAffectorIntensityAnimator__VTable vtable;
};

struct SpiritLightAffectorRadiusAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * RadiusAnimationCurve;
  float RadiusCurveMagnitude;
  struct SpiritLightRadialVisualAffector * Target;
  float OriginalLightRadius;
};
struct SpiritLightAffectorRadiusAnimator {
  struct SpiritLightAffectorRadiusAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLightAffectorRadiusAnimator__Fields fields;
};
struct SpiritLightAffectorRadiusAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct SpiritLightAffectorRadiusAnimator__StaticFields {
};
struct SpiritLightAffectorRadiusAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLightAffectorRadiusAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLightAffectorRadiusAnimator__VTable vtable;
};

struct SpiritLightCapsuleVisualAffector__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * StartPoint;
  struct Transform * EndPoint;
  float LightIntensity;
  float StartRadius;
  float EndRadius;
  struct SpiritLightTurbulence * LightRadiusTurbulence;
  struct SpiritLightTurbulence * LightIntensityTurbulence;
};
struct SpiritLightCapsuleVisualAffector {
  struct SpiritLightCapsuleVisualAffector__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLightCapsuleVisualAffector__Fields fields;
};
struct __declspec(align(8)) List_1_SpiritLightCapsuleVisualAffector___Fields {
  struct SpiritLightCapsuleVisualAffector__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SpiritLightCapsuleVisualAffector_ {
  struct List_1_SpiritLightCapsuleVisualAffector___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SpiritLightCapsuleVisualAffector___Fields fields;
};
struct SpiritLightCapsuleVisualAffector__Array {
  struct SpiritLightCapsuleVisualAffector__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpiritLightCapsuleVisualAffector * vector[32];
};
struct IEnumerator_1_SpiritLightCapsuleVisualAffector_ {
  struct IEnumerator_1_SpiritLightCapsuleVisualAffector___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SpiritLightCapsuleVisualAffector___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SpiritLightCapsuleVisualAffector___StaticFields {
};
struct IEnumerator_1_SpiritLightCapsuleVisualAffector___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SpiritLightCapsuleVisualAffector___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SpiritLightCapsuleVisualAffector___VTable vtable;
};
struct List_1_SpiritLightCapsuleVisualAffector___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_SpiritLightCapsuleVisualAffector___StaticFields {
  struct SpiritLightCapsuleVisualAffector__Array * _emptyArray;
};
struct List_1_SpiritLightCapsuleVisualAffector___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SpiritLightCapsuleVisualAffector___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SpiritLightCapsuleVisualAffector___VTable vtable;
};
struct SpiritLightCapsuleVisualAffector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnActivate;
  VirtualInvokeData OnDeactivate;
};
struct SpiritLightCapsuleVisualAffector__StaticFields {
  struct List_1_SpiritLightCapsuleVisualAffector_ * All;
  bool ShouldDrawGizmos;
};
struct SpiritLightCapsuleVisualAffector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLightCapsuleVisualAffector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLightCapsuleVisualAffector__VTable vtable;
};

struct SpiritLightDarknessZone__Fields {
  struct MonoBehaviour__Fields _;
};
struct SpiritLightDarknessZone {
  struct SpiritLightDarknessZone__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLightDarknessZone__Fields fields;
};
struct __declspec(align(8)) List_1_SpiritLightDarknessZone___Fields {
  struct SpiritLightDarknessZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SpiritLightDarknessZone_ {
  struct List_1_SpiritLightDarknessZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SpiritLightDarknessZone___Fields fields;
};
struct SpiritLightDarknessZone__Array {
  struct SpiritLightDarknessZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpiritLightDarknessZone * vector[32];
};
struct IEnumerator_1_SpiritLightDarknessZone_ {
  struct IEnumerator_1_SpiritLightDarknessZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SpiritLightDarknessZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SpiritLightDarknessZone___StaticFields {
};
struct IEnumerator_1_SpiritLightDarknessZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SpiritLightDarknessZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SpiritLightDarknessZone___VTable vtable;
};
struct List_1_SpiritLightDarknessZone___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_SpiritLightDarknessZone___StaticFields {
  struct SpiritLightDarknessZone__Array * _emptyArray;
};
struct List_1_SpiritLightDarknessZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SpiritLightDarknessZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SpiritLightDarknessZone___VTable vtable;
};
struct SpiritLightDarknessZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritLightDarknessZone__StaticFields {
  struct List_1_SpiritLightDarknessZone_ * All;
};
struct SpiritLightDarknessZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLightDarknessZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLightDarknessZone__VTable vtable;
};

struct SpiritLightTrailController__Fields {
  struct MonoBehaviour__Fields _;
  struct UberGhostTrail * UberTrail;
};
struct SpiritLightTrailController {
  struct SpiritLightTrailController__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLightTrailController__Fields fields;
};
struct SpiritLightTrailController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritLightTrailController__StaticFields {
};
struct SpiritLightTrailController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLightTrailController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLightTrailController__VTable vtable;
};

struct SpiritLightVisualAffectorManager__Fields {
  struct MonoBehaviour__Fields _;
  float m_globalLightAffectorOverride;
  bool GlobalInstance;
};
struct SpiritLightVisualAffectorManager {
  struct SpiritLightVisualAffectorManager__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLightVisualAffectorManager__Fields fields;
};
struct SpiritLightVisualAffectorManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritLightVisualAffectorManager__StaticFields {
  struct Int32__Array * s_lightSettingPropertyNames;
  struct Int32__Array * s_capsuleLightPropertyNames;
  int32_t s_lightVesselLightPropertyName;
  bool DeactivateLightMechanics;
  int32_t SPIRIT_LIGHT_GLOBAL_OVERRIDE_SHADER_PROPERTY;
  struct SpiritLightVisualAffectorManager * Instance;
};
struct SpiritLightVisualAffectorManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLightVisualAffectorManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLightVisualAffectorManager__VTable vtable;
};

struct LoadingBootstrap__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyTransparencyAnimator * Fader;
  float FadeDuration;
  struct Coroutine * m_eofCoroutine;
  struct Material * m_material;
  bool m_drawDebugInFinal;
  struct String__Array * m_slotNames;
  int32_t m_nameWidth;
};
struct LoadingBootstrap {
  struct LoadingBootstrap__Class *klass;
  struct MonitorData *monitor;
  struct LoadingBootstrap__Fields fields;
};
struct __declspec(align(8)) List_1_frameworks_loading_Prewarmers_IPrewarmOperation___Fields {
  struct IPrewarmOperation__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation_ {
  struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation___Class *klass;
  struct MonitorData *monitor;
  struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation___Fields fields;
};
struct IPrewarmOperation {
  struct IPrewarmOperation__Class *klass;
  struct MonitorData *monitor;
};
struct IPrewarmOperation__Array {
  struct IPrewarmOperation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IPrewarmOperation * vector[32];
};
struct IEnumerator_1_frameworks_loading_Prewarmers_IPrewarmOperation_ {
  struct IEnumerator_1_frameworks_loading_Prewarmers_IPrewarmOperation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_ThreadPriority_System_Double___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_ThreadPriority_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_ThreadPriority_System_Double_ {
  struct Dictionary_2_UnityEngine_ThreadPriority_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_ThreadPriority_System_Double___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double_ {
  int32_t hashCode;
  int32_t next;
  enum ThreadPriority__Enum_1 key;
  double value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_ThreadPriority_ {
  struct IEqualityComparer_1_UnityEngine_ThreadPriority___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double___Fields {
  struct Dictionary_2_UnityEngine_ThreadPriority_System_Double_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double___Fields fields;
};
struct ThreadPriority__Enum_1__Array {
  struct ThreadPriority__Enum_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum ThreadPriority__Enum_1 vector[32];
};
struct IEnumerator_1_UnityEngine_ThreadPriority_ {
  struct IEnumerator_1_UnityEngine_ThreadPriority___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double___Fields {
  struct Dictionary_2_UnityEngine_ThreadPriority_System_Double_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double___Fields fields;
};
struct ICollection_1_UnityEngine_ThreadPriority_ {
  struct ICollection_1_UnityEngine_ThreadPriority___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Double_ {
  struct ICollection_1_System_Double___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double_ {
  enum ThreadPriority__Enum_1 key;
  double value;
};
struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___Boxed {
  struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double_ fields;
};
struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___Array {
  struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_ThreadPriority_System_Double_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_ThreadPriority_ {
  struct IEnumerable_1_UnityEngine_ThreadPriority___Class *klass;
  struct MonitorData *monitor;
};
struct IPrewarmOperation__VTable {
  VirtualInvokeData get_OperationType;
  VirtualInvokeData get_OperationSlot;
  VirtualInvokeData get_PrewarmOperationOrder;
  VirtualInvokeData get_ShouldExecute;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_IsDone;
  VirtualInvokeData get_HasBegun;
  VirtualInvokeData get_PercentDone;
  VirtualInvokeData get_TimeElapsed;
  VirtualInvokeData Begin;
  VirtualInvokeData Update;
  VirtualInvokeData FinishImmediately;
  VirtualInvokeData DebugDrawStatus;
};
struct IPrewarmOperation__StaticFields {
};
struct IPrewarmOperation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPrewarmOperation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPrewarmOperation__VTable vtable;
};
struct IEnumerator_1_frameworks_loading_Prewarmers_IPrewarmOperation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_frameworks_loading_Prewarmers_IPrewarmOperation___StaticFields {
};
struct IEnumerator_1_frameworks_loading_Prewarmers_IPrewarmOperation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_frameworks_loading_Prewarmers_IPrewarmOperation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_frameworks_loading_Prewarmers_IPrewarmOperation___VTable vtable;
};
struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation___StaticFields {
  struct IPrewarmOperation__Array * _emptyArray;
};
struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ThreadPriority_System_Double___VTable vtable;
};
struct IEqualityComparer_1_UnityEngine_ThreadPriority___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_UnityEngine_ThreadPriority___StaticFields {
};
struct IEqualityComparer_1_UnityEngine_ThreadPriority___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_UnityEngine_ThreadPriority___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_UnityEngine_ThreadPriority___VTable vtable;
};
struct IEnumerator_1_UnityEngine_ThreadPriority___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_ThreadPriority___StaticFields {
};
struct IEnumerator_1_UnityEngine_ThreadPriority___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_ThreadPriority___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_ThreadPriority___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ThreadPriority_System_Double___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ThreadPriority_System_Double___VTable vtable;
};
struct ICollection_1_UnityEngine_ThreadPriority___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_ThreadPriority___StaticFields {
};
struct ICollection_1_UnityEngine_ThreadPriority___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_ThreadPriority___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_ThreadPriority___VTable vtable;
};
struct ICollection_1_System_Double___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Double___StaticFields {
};
struct ICollection_1_System_Double___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Double___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Double___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___StaticFields {
};
struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_ThreadPriority_System_Double___VTable vtable;
};
struct IEnumerable_1_UnityEngine_ThreadPriority___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_ThreadPriority___StaticFields {
};
struct IEnumerable_1_UnityEngine_ThreadPriority___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_ThreadPriority___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_ThreadPriority___VTable vtable;
};
struct Dictionary_2_UnityEngine_ThreadPriority_System_Double___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};