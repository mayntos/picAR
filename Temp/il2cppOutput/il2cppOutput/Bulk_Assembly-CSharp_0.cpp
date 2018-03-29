#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ButtonDisplay
struct ButtonDisplay_t1230321846;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// IOSBridge
struct IOSBridge_t3780229521;
// UnityEngine.GUIContent
struct GUIContent_t3050628031;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// System.String
struct String_t;
// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_t3109936861;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t1949122020;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t3593217305;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1588957063;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// UnityEngine.Object
struct Object_t631007953;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// ExifLib.ExifReader
struct ExifReader_t3571911595;
// System.IO.Stream
struct Stream_t1273022909;
// ExifLib.JpegInfo
struct JpegInfo_t890611979;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// ExifLib.ExifTag
struct ExifTag_t2496373222;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Text.StringBuilder
struct StringBuilder_t;
// PicScript
struct PicScript_t1716259096;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// PicScript/<AssignTexture>c__Iterator0
struct U3CAssignTextureU3Ec__Iterator0_t1513172786;
// UnityEngine.WWW
struct WWW_t3688466362;
// UnityEngine.Material
struct Material_t340375123;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// SceneLoadScript
struct SceneLoadScript_t1246790847;
// TextEditScript
struct TextEditScript_t810641699;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration
struct DatabaseLoadConfiguration_t449697234;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// Vuforia.Trackable
struct Trackable_t2451999991;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;

extern const RuntimeMethod* GameObject_GetComponent_TisIOSBridge_t3780229521_m215940497_RuntimeMethod_var;
extern const uint32_t ButtonDisplay_Awake_m4175616066_MetadataUsageId;
extern RuntimeClass* GUIContent_t3050628031_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1208990579;
extern const uint32_t ButtonDisplay_Start_m1111455104_MetadataUsageId;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern const uint32_t ButtonDisplay_OnGUI_m2396612983_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId;
extern RuntimeClass* VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3593217305_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2713332384_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId;
extern String_t* _stringLiteral2016908147;
extern String_t* _stringLiteral3483484711;
extern const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId;
extern RuntimeClass* InitError_t3420749710_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3279329212;
extern String_t* _stringLiteral3325583105;
extern String_t* _stringLiteral1253325676;
extern String_t* _stringLiteral2959890895;
extern String_t* _stringLiteral2293327149;
extern String_t* _stringLiteral2746077084;
extern String_t* _stringLiteral2746058527;
extern String_t* _stringLiteral491174246;
extern String_t* _stringLiteral3034338515;
extern String_t* _stringLiteral3122929577;
extern String_t* _stringLiteral3567432369;
extern String_t* _stringLiteral229317972;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral2072581803;
extern String_t* _stringLiteral2642543365;
extern String_t* _stringLiteral3752705136;
extern String_t* _stringLiteral3453007782;
extern const uint32_t DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1431967569;
extern String_t* _stringLiteral3797279721;
extern String_t* _stringLiteral1108443480;
extern String_t* _stringLiteral2072975055;
extern String_t* _stringLiteral1498400317;
extern const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var;
extern String_t* _stringLiteral2974894664;
extern const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral3073488411;
extern String_t* _stringLiteral3483481617;
extern const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t ExifIO_ReadShort_m3860138891_MetadataUsageId;
extern const uint32_t ExifIO_ReadUShort_m868989271_MetadataUsageId;
extern const uint32_t ExifIO_ReadInt_m2520572571_MetadataUsageId;
extern const uint32_t ExifIO_ReadUInt_m2073734979_MetadataUsageId;
extern const uint32_t ExifIO_ReadSingle_m2491294796_MetadataUsageId;
extern const uint32_t ExifIO_ReadDouble_m214976151_MetadataUsageId;
extern RuntimeClass* JpegInfo_t890611979_il2cpp_TypeInfo_var;
extern const uint32_t ExifReader__ctor_m314026112_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* ExifReader_t3571911595_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t ExifReader_ReadJpeg_m1439447182_MetadataUsageId;
extern RuntimeClass* ExifTag_t2496373222_il2cpp_TypeInfo_var;
extern const uint32_t ExifReader_ProcessExifDir_m613744390_MetadataUsageId;
extern const uint32_t ExifTag__ctor_m1996171450_MetadataUsageId;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0_FieldInfo_var;
extern String_t* _stringLiteral3452614529;
extern const uint32_t ExifTag_GetStringValue_m935421799_MetadataUsageId;
extern String_t* _stringLiteral3452614626;
extern String_t* _stringLiteral3452614637;
extern String_t* _stringLiteral3452614619;
extern String_t* _stringLiteral3452614633;
extern const uint32_t ExifTag_Populate_m3525940055_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ExifId_t4133188253_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3456284560;
extern String_t* _stringLiteral3451303928;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3429825544;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3452614535;
extern const uint32_t ExifTag_ToString_m290878038_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1_FieldInfo_var;
extern const uint32_t ExifTag__cctor_m372371328_MetadataUsageId;
extern RuntimeClass* DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var;
extern const uint32_t JpegInfo__ctor_m1819165455_MetadataUsageId;
extern String_t* _stringLiteral2744270595;
extern const uint32_t IOSBridge_OpenImagePickerHelper_m546079777_MetadataUsageId;
extern RuntimeClass* PicScript_t1716259096_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral815815298;
extern const uint32_t IOSBridge_ImagePicked_m3273236912_MetadataUsageId;
extern const uint32_t IOSBridge_LoadCameraScene_m4072798933_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var;
extern const uint32_t PicScript_Awake_m2923284338_MetadataUsageId;
extern const uint32_t PicScript_Start_m329900146_MetadataUsageId;
extern RuntimeClass* U3CAssignTextureU3Ec__Iterator0_t1513172786_il2cpp_TypeInfo_var;
extern const uint32_t PicScript_AssignTexture_m1267995811_MetadataUsageId;
extern RuntimeClass* WWW_t3688466362_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2506556873;
extern const uint32_t U3CAssignTextureU3Ec__Iterator0_MoveNext_m1665342726_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CAssignTextureU3Ec__Iterator0_Reset_m4194145313_MetadataUsageId;
extern const uint32_t U3CAssignTextureU3Ec__Iterator0_U3CU3E__Finally0_m1523758864_MetadataUsageId;
extern String_t* _stringLiteral3896133421;
extern const uint32_t SceneLoadScript_LoadMainScene_m1722017152_MetadataUsageId;
extern const uint32_t TextEditScript__ctor_m3813137441_MetadataUsageId;
extern String_t* _stringLiteral3452614566;
extern const uint32_t TextEditScript_StringNewline_m4258088781_MetadataUsageId;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct RendererU5BU5D_t3210418286;
struct ColliderU5BU5D_t4234922487;
struct CanvasU5BU5D_t682926938;
struct ByteU5BU5D_t4116647657;
struct Int32U5BU5D_t385246372;
struct CharU5BU5D_t3528271667;
struct DoubleU5BU5D_t3413330114;


#ifndef U3CMODULEU3E_T692745551_H
#define U3CMODULEU3E_T692745551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745551 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745551_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef BITCONVERTER_T3118986983_H
#define BITCONVERTER_T3118986983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3118986983  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3118986983_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3118986983_H
#ifndef EXIFREADER_T3571911595_H
#define EXIFREADER_T3571911595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifReader
struct  ExifReader_t3571911595  : public RuntimeObject
{
public:
	// ExifLib.JpegInfo ExifLib.ExifReader::<info>k__BackingField
	JpegInfo_t890611979 * ___U3CinfoU3Ek__BackingField_0;
	// System.Boolean ExifLib.ExifReader::littleEndian
	bool ___littleEndian_1;

public:
	inline static int32_t get_offset_of_U3CinfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ExifReader_t3571911595, ___U3CinfoU3Ek__BackingField_0)); }
	inline JpegInfo_t890611979 * get_U3CinfoU3Ek__BackingField_0() const { return ___U3CinfoU3Ek__BackingField_0; }
	inline JpegInfo_t890611979 ** get_address_of_U3CinfoU3Ek__BackingField_0() { return &___U3CinfoU3Ek__BackingField_0; }
	inline void set_U3CinfoU3Ek__BackingField_0(JpegInfo_t890611979 * value)
	{
		___U3CinfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CinfoU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_littleEndian_1() { return static_cast<int32_t>(offsetof(ExifReader_t3571911595, ___littleEndian_1)); }
	inline bool get_littleEndian_1() const { return ___littleEndian_1; }
	inline bool* get_address_of_littleEndian_1() { return &___littleEndian_1; }
	inline void set_littleEndian_1(bool value)
	{
		___littleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFREADER_T3571911595_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef GUICONTENT_T3050628031_H
#define GUICONTENT_T3050628031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t3050628031  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t3661962703 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Image_1)); }
	inline Texture_t3661962703 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t3661962703 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t3661962703 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}
};

struct GUIContent_t3050628031_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t3050628031 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t3050628031 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t3050628031 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t3050628031 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_Text_3)); }
	inline GUIContent_t3050628031 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t3050628031 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t3050628031 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_Text_3), value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_Image_4)); }
	inline GUIContent_t3050628031 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t3050628031 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t3050628031 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Image_4), value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t3050628031 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t3050628031 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t3050628031 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TextImage_5), value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___none_6)); }
	inline GUIContent_t3050628031 * get_none_6() const { return ___none_6; }
	inline GUIContent_t3050628031 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t3050628031 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((&___none_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t3050628031_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t3661962703 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t3050628031_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t3661962703 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
#endif // GUICONTENT_T3050628031_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef EXIFIO_T4130632349_H
#define EXIFIO_T4130632349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifIO
struct  ExifIO_t4130632349  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFIO_T4130632349_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef U3CASSIGNTEXTUREU3EC__ITERATOR0_T1513172786_H
#define U3CASSIGNTEXTUREU3EC__ITERATOR0_T1513172786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PicScript/<AssignTexture>c__Iterator0
struct  U3CAssignTextureU3Ec__Iterator0_t1513172786  : public RuntimeObject
{
public:
	// UnityEngine.WWW PicScript/<AssignTexture>c__Iterator0::<www>__1
	WWW_t3688466362 * ___U3CwwwU3E__1_0;
	// System.String PicScript/<AssignTexture>c__Iterator0::path
	String_t* ___path_1;
	// ExifLib.JpegInfo PicScript/<AssignTexture>c__Iterator0::<jpi>__2
	JpegInfo_t890611979 * ___U3CjpiU3E__2_2;
	// PicScript PicScript/<AssignTexture>c__Iterator0::$this
	PicScript_t1716259096 * ___U24this_3;
	// System.Object PicScript/<AssignTexture>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean PicScript/<AssignTexture>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 PicScript/<AssignTexture>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CwwwU3E__1_0() { return static_cast<int32_t>(offsetof(U3CAssignTextureU3Ec__Iterator0_t1513172786, ___U3CwwwU3E__1_0)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__1_0() const { return ___U3CwwwU3E__1_0; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__1_0() { return &___U3CwwwU3E__1_0; }
	inline void set_U3CwwwU3E__1_0(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__1_0), value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(U3CAssignTextureU3Ec__Iterator0_t1513172786, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier((&___path_1), value);
	}

	inline static int32_t get_offset_of_U3CjpiU3E__2_2() { return static_cast<int32_t>(offsetof(U3CAssignTextureU3Ec__Iterator0_t1513172786, ___U3CjpiU3E__2_2)); }
	inline JpegInfo_t890611979 * get_U3CjpiU3E__2_2() const { return ___U3CjpiU3E__2_2; }
	inline JpegInfo_t890611979 ** get_address_of_U3CjpiU3E__2_2() { return &___U3CjpiU3E__2_2; }
	inline void set_U3CjpiU3E__2_2(JpegInfo_t890611979 * value)
	{
		___U3CjpiU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CjpiU3E__2_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CAssignTextureU3Ec__Iterator0_t1513172786, ___U24this_3)); }
	inline PicScript_t1716259096 * get_U24this_3() const { return ___U24this_3; }
	inline PicScript_t1716259096 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(PicScript_t1716259096 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CAssignTextureU3Ec__Iterator0_t1513172786, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CAssignTextureU3Ec__Iterator0_t1513172786, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CAssignTextureU3Ec__Iterator0_t1513172786, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CASSIGNTEXTUREU3EC__ITERATOR0_T1513172786_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef JPEGID_T224806312_H
#define JPEGID_T224806312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.JpegId
struct  JpegId_t224806312  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JPEGID_T224806312_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef WWW_T3688466362_H
#define WWW_T3688466362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWW
struct  WWW_t3688466362  : public CustomYieldInstruction_t1895667560
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t463507806 * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_t3688466362, ____uwr_0)); }
	inline UnityWebRequest_t463507806 * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_t463507806 ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_t463507806 * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((&____uwr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWW_T3688466362_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef U24ARRAYTYPEU3D12_T2488454197_H
#define U24ARRAYTYPEU3D12_T2488454197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454197 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454197__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454197_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef U24ARRAYTYPEU3D52_T519085728_H
#define U24ARRAYTYPEU3D52_T519085728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=52
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D52_t519085728 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D52_t519085728__padding[52];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D52_T519085728_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef EXIFORIENTATION_T2007794381_H
#define EXIFORIENTATION_T2007794381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifOrientation
struct  ExifOrientation_t2007794381 
{
public:
	// System.Int32 ExifLib.ExifOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExifOrientation_t2007794381, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFORIENTATION_T2007794381_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITERROR_T3420749710_H
#ifndef EXIFTAGFORMAT_T3444781270_H
#define EXIFTAGFORMAT_T3444781270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifTagFormat
struct  ExifTagFormat_t3444781270 
{
public:
	// System.Int32 ExifLib.ExifTagFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExifTagFormat_t3444781270, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFTAGFORMAT_T3444781270_H
#ifndef EXIFIFD_T27449218_H
#define EXIFIFD_T27449218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifIFD
struct  ExifIFD_t27449218 
{
public:
	// System.Int32 ExifLib.ExifIFD::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExifIFD_t27449218, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFIFD_T27449218_H
#ifndef EXIFUNIT_T2536868637_H
#define EXIFUNIT_T2536868637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifUnit
struct  ExifUnit_t2536868637 
{
public:
	// System.Int32 ExifLib.ExifUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExifUnit_t2536868637, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFUNIT_T2536868637_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-82E371CA10D0D69A107BAEC0F50D274845971C1D
	U24ArrayTypeU3D12_t2488454197  ___U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0;
	// <PrivateImplementationDetails>/$ArrayType=52 <PrivateImplementationDetails>::$field-FCA0D902EC01054C3A221BFDCE2E1E13882E2C50
	U24ArrayTypeU3D52_t519085728  ___U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1;

public:
	inline static int32_t get_offset_of_U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0)); }
	inline U24ArrayTypeU3D12_t2488454197  get_U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0() const { return ___U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0; }
	inline U24ArrayTypeU3D12_t2488454197 * get_address_of_U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0() { return &___U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0; }
	inline void set_U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0(U24ArrayTypeU3D12_t2488454197  value)
	{
		___U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1)); }
	inline U24ArrayTypeU3D52_t519085728  get_U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1() const { return ___U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1; }
	inline U24ArrayTypeU3D52_t519085728 * get_address_of_U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1() { return &___U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1; }
	inline void set_U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1(U24ArrayTypeU3D52_t519085728  value)
	{
		___U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef TOUCHSCREENKEYBOARD_T731888065_H
#define TOUCHSCREENKEYBOARD_T731888065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t731888065  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t731888065, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T731888065_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef EXIFFLASH_T2461863226_H
#define EXIFFLASH_T2461863226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifFlash
struct  ExifFlash_t2461863226 
{
public:
	// System.Int32 ExifLib.ExifFlash::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExifFlash_t2461863226, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFFLASH_T2461863226_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef EXIFGPS_T884349245_H
#define EXIFGPS_T884349245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifGps
struct  ExifGps_t884349245 
{
public:
	// System.Int32 ExifLib.ExifGps::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExifGps_t884349245, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFGPS_T884349245_H
#ifndef EXIFID_T4133188253_H
#define EXIFID_T4133188253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifId
struct  ExifId_t4133188253 
{
public:
	// System.Int32 ExifLib.ExifId::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExifId_t4133188253, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFID_T4133188253_H
#ifndef EXIFGPSLATITUDEREF_T795035716_H
#define EXIFGPSLATITUDEREF_T795035716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifGpsLatitudeRef
struct  ExifGpsLatitudeRef_t795035716 
{
public:
	// System.Int32 ExifLib.ExifGpsLatitudeRef::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExifGpsLatitudeRef_t795035716, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFGPSLATITUDEREF_T795035716_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3840446185 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Background_2)); }
	inline Texture2D_t3840446185 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3840446185 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef EXIFGPSLONGITUDEREF_T1840957949_H
#define EXIFGPSLONGITUDEREF_T1840957949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifGpsLongitudeRef
struct  ExifGpsLongitudeRef_t1840957949 
{
public:
	// System.Int32 ExifLib.ExifGpsLongitudeRef::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExifGpsLongitudeRef_t1840957949, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFGPSLONGITUDEREF_T1840957949_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef EXIFTAG_T2496373222_H
#define EXIFTAG_T2496373222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.ExifTag
struct  ExifTag_t2496373222  : public RuntimeObject
{
public:
	// System.Int32 ExifLib.ExifTag::<Tag>k__BackingField
	int32_t ___U3CTagU3Ek__BackingField_0;
	// ExifLib.ExifTagFormat ExifLib.ExifTag::<Format>k__BackingField
	int32_t ___U3CFormatU3Ek__BackingField_1;
	// System.Int32 ExifLib.ExifTag::<Components>k__BackingField
	int32_t ___U3CComponentsU3Ek__BackingField_2;
	// System.Byte[] ExifLib.ExifTag::<Data>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CDataU3Ek__BackingField_3;
	// System.Boolean ExifLib.ExifTag::<LittleEndian>k__BackingField
	bool ___U3CLittleEndianU3Ek__BackingField_4;
	// System.Boolean ExifLib.ExifTag::<IsValid>k__BackingField
	bool ___U3CIsValidU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ExifTag_t2496373222, ___U3CTagU3Ek__BackingField_0)); }
	inline int32_t get_U3CTagU3Ek__BackingField_0() const { return ___U3CTagU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTagU3Ek__BackingField_0() { return &___U3CTagU3Ek__BackingField_0; }
	inline void set_U3CTagU3Ek__BackingField_0(int32_t value)
	{
		___U3CTagU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ExifTag_t2496373222, ___U3CFormatU3Ek__BackingField_1)); }
	inline int32_t get_U3CFormatU3Ek__BackingField_1() const { return ___U3CFormatU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFormatU3Ek__BackingField_1() { return &___U3CFormatU3Ek__BackingField_1; }
	inline void set_U3CFormatU3Ek__BackingField_1(int32_t value)
	{
		___U3CFormatU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CComponentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ExifTag_t2496373222, ___U3CComponentsU3Ek__BackingField_2)); }
	inline int32_t get_U3CComponentsU3Ek__BackingField_2() const { return ___U3CComponentsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CComponentsU3Ek__BackingField_2() { return &___U3CComponentsU3Ek__BackingField_2; }
	inline void set_U3CComponentsU3Ek__BackingField_2(int32_t value)
	{
		___U3CComponentsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ExifTag_t2496373222, ___U3CDataU3Ek__BackingField_3)); }
	inline ByteU5BU5D_t4116647657* get_U3CDataU3Ek__BackingField_3() const { return ___U3CDataU3Ek__BackingField_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CDataU3Ek__BackingField_3() { return &___U3CDataU3Ek__BackingField_3; }
	inline void set_U3CDataU3Ek__BackingField_3(ByteU5BU5D_t4116647657* value)
	{
		___U3CDataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CLittleEndianU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ExifTag_t2496373222, ___U3CLittleEndianU3Ek__BackingField_4)); }
	inline bool get_U3CLittleEndianU3Ek__BackingField_4() const { return ___U3CLittleEndianU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CLittleEndianU3Ek__BackingField_4() { return &___U3CLittleEndianU3Ek__BackingField_4; }
	inline void set_U3CLittleEndianU3Ek__BackingField_4(bool value)
	{
		___U3CLittleEndianU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsValidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ExifTag_t2496373222, ___U3CIsValidU3Ek__BackingField_6)); }
	inline bool get_U3CIsValidU3Ek__BackingField_6() const { return ___U3CIsValidU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsValidU3Ek__BackingField_6() { return &___U3CIsValidU3Ek__BackingField_6; }
	inline void set_U3CIsValidU3Ek__BackingField_6(bool value)
	{
		___U3CIsValidU3Ek__BackingField_6 = value;
	}
};

struct ExifTag_t2496373222_StaticFields
{
public:
	// System.Int32[] ExifLib.ExifTag::BytesPerFormat
	Int32U5BU5D_t385246372* ___BytesPerFormat_5;

public:
	inline static int32_t get_offset_of_BytesPerFormat_5() { return static_cast<int32_t>(offsetof(ExifTag_t2496373222_StaticFields, ___BytesPerFormat_5)); }
	inline Int32U5BU5D_t385246372* get_BytesPerFormat_5() const { return ___BytesPerFormat_5; }
	inline Int32U5BU5D_t385246372** get_address_of_BytesPerFormat_5() { return &___BytesPerFormat_5; }
	inline void set_BytesPerFormat_5(Int32U5BU5D_t385246372* value)
	{
		___BytesPerFormat_5 = value;
		Il2CppCodeGenWriteBarrier((&___BytesPerFormat_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXIFTAG_T2496373222_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t2129269699 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t2129269699 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef JPEGINFO_T890611979_H
#define JPEGINFO_T890611979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExifLib.JpegInfo
struct  JpegInfo_t890611979  : public RuntimeObject
{
public:
	// System.String ExifLib.JpegInfo::FileName
	String_t* ___FileName_0;
	// System.Int32 ExifLib.JpegInfo::FileSize
	int32_t ___FileSize_1;
	// System.Boolean ExifLib.JpegInfo::IsValid
	bool ___IsValid_2;
	// System.Int32 ExifLib.JpegInfo::Width
	int32_t ___Width_3;
	// System.Int32 ExifLib.JpegInfo::Height
	int32_t ___Height_4;
	// System.Boolean ExifLib.JpegInfo::IsColor
	bool ___IsColor_5;
	// ExifLib.ExifOrientation ExifLib.JpegInfo::Orientation
	int32_t ___Orientation_6;
	// System.Double ExifLib.JpegInfo::XResolution
	double ___XResolution_7;
	// System.Double ExifLib.JpegInfo::YResolution
	double ___YResolution_8;
	// ExifLib.ExifUnit ExifLib.JpegInfo::ResolutionUnit
	int32_t ___ResolutionUnit_9;
	// System.String ExifLib.JpegInfo::DateTime
	String_t* ___DateTime_10;
	// System.String ExifLib.JpegInfo::Description
	String_t* ___Description_11;
	// System.String ExifLib.JpegInfo::Make
	String_t* ___Make_12;
	// System.String ExifLib.JpegInfo::Model
	String_t* ___Model_13;
	// System.String ExifLib.JpegInfo::Software
	String_t* ___Software_14;
	// System.String ExifLib.JpegInfo::Artist
	String_t* ___Artist_15;
	// System.String ExifLib.JpegInfo::Copyright
	String_t* ___Copyright_16;
	// System.String ExifLib.JpegInfo::UserComment
	String_t* ___UserComment_17;
	// System.Double ExifLib.JpegInfo::ExposureTime
	double ___ExposureTime_18;
	// System.Double ExifLib.JpegInfo::FNumber
	double ___FNumber_19;
	// ExifLib.ExifFlash ExifLib.JpegInfo::Flash
	int32_t ___Flash_20;
	// ExifLib.ExifGpsLatitudeRef ExifLib.JpegInfo::GpsLatitudeRef
	int32_t ___GpsLatitudeRef_21;
	// System.Double[] ExifLib.JpegInfo::GpsLatitude
	DoubleU5BU5D_t3413330114* ___GpsLatitude_22;
	// ExifLib.ExifGpsLongitudeRef ExifLib.JpegInfo::GpsLongitudeRef
	int32_t ___GpsLongitudeRef_23;
	// System.Double[] ExifLib.JpegInfo::GpsLongitude
	DoubleU5BU5D_t3413330114* ___GpsLongitude_24;
	// System.Int32 ExifLib.JpegInfo::ThumbnailOffset
	int32_t ___ThumbnailOffset_25;
	// System.Int32 ExifLib.JpegInfo::ThumbnailSize
	int32_t ___ThumbnailSize_26;
	// System.Byte[] ExifLib.JpegInfo::ThumbnailData
	ByteU5BU5D_t4116647657* ___ThumbnailData_27;
	// System.TimeSpan ExifLib.JpegInfo::LoadTime
	TimeSpan_t881159249  ___LoadTime_28;

public:
	inline static int32_t get_offset_of_FileName_0() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___FileName_0)); }
	inline String_t* get_FileName_0() const { return ___FileName_0; }
	inline String_t** get_address_of_FileName_0() { return &___FileName_0; }
	inline void set_FileName_0(String_t* value)
	{
		___FileName_0 = value;
		Il2CppCodeGenWriteBarrier((&___FileName_0), value);
	}

	inline static int32_t get_offset_of_FileSize_1() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___FileSize_1)); }
	inline int32_t get_FileSize_1() const { return ___FileSize_1; }
	inline int32_t* get_address_of_FileSize_1() { return &___FileSize_1; }
	inline void set_FileSize_1(int32_t value)
	{
		___FileSize_1 = value;
	}

	inline static int32_t get_offset_of_IsValid_2() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___IsValid_2)); }
	inline bool get_IsValid_2() const { return ___IsValid_2; }
	inline bool* get_address_of_IsValid_2() { return &___IsValid_2; }
	inline void set_IsValid_2(bool value)
	{
		___IsValid_2 = value;
	}

	inline static int32_t get_offset_of_Width_3() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Width_3)); }
	inline int32_t get_Width_3() const { return ___Width_3; }
	inline int32_t* get_address_of_Width_3() { return &___Width_3; }
	inline void set_Width_3(int32_t value)
	{
		___Width_3 = value;
	}

	inline static int32_t get_offset_of_Height_4() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Height_4)); }
	inline int32_t get_Height_4() const { return ___Height_4; }
	inline int32_t* get_address_of_Height_4() { return &___Height_4; }
	inline void set_Height_4(int32_t value)
	{
		___Height_4 = value;
	}

	inline static int32_t get_offset_of_IsColor_5() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___IsColor_5)); }
	inline bool get_IsColor_5() const { return ___IsColor_5; }
	inline bool* get_address_of_IsColor_5() { return &___IsColor_5; }
	inline void set_IsColor_5(bool value)
	{
		___IsColor_5 = value;
	}

	inline static int32_t get_offset_of_Orientation_6() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Orientation_6)); }
	inline int32_t get_Orientation_6() const { return ___Orientation_6; }
	inline int32_t* get_address_of_Orientation_6() { return &___Orientation_6; }
	inline void set_Orientation_6(int32_t value)
	{
		___Orientation_6 = value;
	}

	inline static int32_t get_offset_of_XResolution_7() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___XResolution_7)); }
	inline double get_XResolution_7() const { return ___XResolution_7; }
	inline double* get_address_of_XResolution_7() { return &___XResolution_7; }
	inline void set_XResolution_7(double value)
	{
		___XResolution_7 = value;
	}

	inline static int32_t get_offset_of_YResolution_8() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___YResolution_8)); }
	inline double get_YResolution_8() const { return ___YResolution_8; }
	inline double* get_address_of_YResolution_8() { return &___YResolution_8; }
	inline void set_YResolution_8(double value)
	{
		___YResolution_8 = value;
	}

	inline static int32_t get_offset_of_ResolutionUnit_9() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___ResolutionUnit_9)); }
	inline int32_t get_ResolutionUnit_9() const { return ___ResolutionUnit_9; }
	inline int32_t* get_address_of_ResolutionUnit_9() { return &___ResolutionUnit_9; }
	inline void set_ResolutionUnit_9(int32_t value)
	{
		___ResolutionUnit_9 = value;
	}

	inline static int32_t get_offset_of_DateTime_10() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___DateTime_10)); }
	inline String_t* get_DateTime_10() const { return ___DateTime_10; }
	inline String_t** get_address_of_DateTime_10() { return &___DateTime_10; }
	inline void set_DateTime_10(String_t* value)
	{
		___DateTime_10 = value;
		Il2CppCodeGenWriteBarrier((&___DateTime_10), value);
	}

	inline static int32_t get_offset_of_Description_11() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Description_11)); }
	inline String_t* get_Description_11() const { return ___Description_11; }
	inline String_t** get_address_of_Description_11() { return &___Description_11; }
	inline void set_Description_11(String_t* value)
	{
		___Description_11 = value;
		Il2CppCodeGenWriteBarrier((&___Description_11), value);
	}

	inline static int32_t get_offset_of_Make_12() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Make_12)); }
	inline String_t* get_Make_12() const { return ___Make_12; }
	inline String_t** get_address_of_Make_12() { return &___Make_12; }
	inline void set_Make_12(String_t* value)
	{
		___Make_12 = value;
		Il2CppCodeGenWriteBarrier((&___Make_12), value);
	}

	inline static int32_t get_offset_of_Model_13() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Model_13)); }
	inline String_t* get_Model_13() const { return ___Model_13; }
	inline String_t** get_address_of_Model_13() { return &___Model_13; }
	inline void set_Model_13(String_t* value)
	{
		___Model_13 = value;
		Il2CppCodeGenWriteBarrier((&___Model_13), value);
	}

	inline static int32_t get_offset_of_Software_14() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Software_14)); }
	inline String_t* get_Software_14() const { return ___Software_14; }
	inline String_t** get_address_of_Software_14() { return &___Software_14; }
	inline void set_Software_14(String_t* value)
	{
		___Software_14 = value;
		Il2CppCodeGenWriteBarrier((&___Software_14), value);
	}

	inline static int32_t get_offset_of_Artist_15() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Artist_15)); }
	inline String_t* get_Artist_15() const { return ___Artist_15; }
	inline String_t** get_address_of_Artist_15() { return &___Artist_15; }
	inline void set_Artist_15(String_t* value)
	{
		___Artist_15 = value;
		Il2CppCodeGenWriteBarrier((&___Artist_15), value);
	}

	inline static int32_t get_offset_of_Copyright_16() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Copyright_16)); }
	inline String_t* get_Copyright_16() const { return ___Copyright_16; }
	inline String_t** get_address_of_Copyright_16() { return &___Copyright_16; }
	inline void set_Copyright_16(String_t* value)
	{
		___Copyright_16 = value;
		Il2CppCodeGenWriteBarrier((&___Copyright_16), value);
	}

	inline static int32_t get_offset_of_UserComment_17() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___UserComment_17)); }
	inline String_t* get_UserComment_17() const { return ___UserComment_17; }
	inline String_t** get_address_of_UserComment_17() { return &___UserComment_17; }
	inline void set_UserComment_17(String_t* value)
	{
		___UserComment_17 = value;
		Il2CppCodeGenWriteBarrier((&___UserComment_17), value);
	}

	inline static int32_t get_offset_of_ExposureTime_18() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___ExposureTime_18)); }
	inline double get_ExposureTime_18() const { return ___ExposureTime_18; }
	inline double* get_address_of_ExposureTime_18() { return &___ExposureTime_18; }
	inline void set_ExposureTime_18(double value)
	{
		___ExposureTime_18 = value;
	}

	inline static int32_t get_offset_of_FNumber_19() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___FNumber_19)); }
	inline double get_FNumber_19() const { return ___FNumber_19; }
	inline double* get_address_of_FNumber_19() { return &___FNumber_19; }
	inline void set_FNumber_19(double value)
	{
		___FNumber_19 = value;
	}

	inline static int32_t get_offset_of_Flash_20() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___Flash_20)); }
	inline int32_t get_Flash_20() const { return ___Flash_20; }
	inline int32_t* get_address_of_Flash_20() { return &___Flash_20; }
	inline void set_Flash_20(int32_t value)
	{
		___Flash_20 = value;
	}

	inline static int32_t get_offset_of_GpsLatitudeRef_21() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___GpsLatitudeRef_21)); }
	inline int32_t get_GpsLatitudeRef_21() const { return ___GpsLatitudeRef_21; }
	inline int32_t* get_address_of_GpsLatitudeRef_21() { return &___GpsLatitudeRef_21; }
	inline void set_GpsLatitudeRef_21(int32_t value)
	{
		___GpsLatitudeRef_21 = value;
	}

	inline static int32_t get_offset_of_GpsLatitude_22() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___GpsLatitude_22)); }
	inline DoubleU5BU5D_t3413330114* get_GpsLatitude_22() const { return ___GpsLatitude_22; }
	inline DoubleU5BU5D_t3413330114** get_address_of_GpsLatitude_22() { return &___GpsLatitude_22; }
	inline void set_GpsLatitude_22(DoubleU5BU5D_t3413330114* value)
	{
		___GpsLatitude_22 = value;
		Il2CppCodeGenWriteBarrier((&___GpsLatitude_22), value);
	}

	inline static int32_t get_offset_of_GpsLongitudeRef_23() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___GpsLongitudeRef_23)); }
	inline int32_t get_GpsLongitudeRef_23() const { return ___GpsLongitudeRef_23; }
	inline int32_t* get_address_of_GpsLongitudeRef_23() { return &___GpsLongitudeRef_23; }
	inline void set_GpsLongitudeRef_23(int32_t value)
	{
		___GpsLongitudeRef_23 = value;
	}

	inline static int32_t get_offset_of_GpsLongitude_24() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___GpsLongitude_24)); }
	inline DoubleU5BU5D_t3413330114* get_GpsLongitude_24() const { return ___GpsLongitude_24; }
	inline DoubleU5BU5D_t3413330114** get_address_of_GpsLongitude_24() { return &___GpsLongitude_24; }
	inline void set_GpsLongitude_24(DoubleU5BU5D_t3413330114* value)
	{
		___GpsLongitude_24 = value;
		Il2CppCodeGenWriteBarrier((&___GpsLongitude_24), value);
	}

	inline static int32_t get_offset_of_ThumbnailOffset_25() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___ThumbnailOffset_25)); }
	inline int32_t get_ThumbnailOffset_25() const { return ___ThumbnailOffset_25; }
	inline int32_t* get_address_of_ThumbnailOffset_25() { return &___ThumbnailOffset_25; }
	inline void set_ThumbnailOffset_25(int32_t value)
	{
		___ThumbnailOffset_25 = value;
	}

	inline static int32_t get_offset_of_ThumbnailSize_26() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___ThumbnailSize_26)); }
	inline int32_t get_ThumbnailSize_26() const { return ___ThumbnailSize_26; }
	inline int32_t* get_address_of_ThumbnailSize_26() { return &___ThumbnailSize_26; }
	inline void set_ThumbnailSize_26(int32_t value)
	{
		___ThumbnailSize_26 = value;
	}

	inline static int32_t get_offset_of_ThumbnailData_27() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___ThumbnailData_27)); }
	inline ByteU5BU5D_t4116647657* get_ThumbnailData_27() const { return ___ThumbnailData_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_ThumbnailData_27() { return &___ThumbnailData_27; }
	inline void set_ThumbnailData_27(ByteU5BU5D_t4116647657* value)
	{
		___ThumbnailData_27 = value;
		Il2CppCodeGenWriteBarrier((&___ThumbnailData_27), value);
	}

	inline static int32_t get_offset_of_LoadTime_28() { return static_cast<int32_t>(offsetof(JpegInfo_t890611979, ___LoadTime_28)); }
	inline TimeSpan_t881159249  get_LoadTime_28() const { return ___LoadTime_28; }
	inline TimeSpan_t881159249 * get_address_of_LoadTime_28() { return &___LoadTime_28; }
	inline void set_LoadTime_28(TimeSpan_t881159249  value)
	{
		___LoadTime_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JPEGINFO_T890611979_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef GENERICVUFORIACONFIGURATION_T3697830469_H
#define GENERICVUFORIACONFIGURATION_T3697830469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3697830469  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_9;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICVUFORIACONFIGURATION_T3697830469_H
#ifndef VUFORIARUNTIME_T1949122020_H
#define VUFORIARUNTIME_T1949122020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t1949122020  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t3593217305 * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// System.Boolean Vuforia.VuforiaRuntime::mHasInitialized
	bool ___mHasInitialized_4;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mOnVuforiaInitError_1)); }
	inline Action_1_t3593217305 * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_t3593217305 ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_t3593217305 * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_1), value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mHasInitialized_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mHasInitialized_4)); }
	inline bool get_mHasInitialized_4() const { return ___mHasInitialized_4; }
	inline bool* get_address_of_mHasInitialized_4() { return &___mHasInitialized_4; }
	inline void set_mHasInitialized_4(bool value)
	{
		___mHasInitialized_4 = value;
	}
};

struct VuforiaRuntime_t1949122020_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t1949122020 * ___mInstance_5;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mInstance_5)); }
	inline VuforiaRuntime_t1949122020 * get_mInstance_5() const { return ___mInstance_5; }
	inline VuforiaRuntime_t1949122020 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(VuforiaRuntime_t1949122020 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_5), value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mPadlock_6)); }
	inline RuntimeObject * get_mPadlock_6() const { return ___mPadlock_6; }
	inline RuntimeObject ** get_address_of_mPadlock_6() { return &___mPadlock_6; }
	inline void set_mPadlock_6(RuntimeObject * value)
	{
		___mPadlock_6 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIME_T1949122020_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_4;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_5;
	// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration Vuforia.VuforiaConfiguration::databaseLoad
	DatabaseLoadConfiguration_t449697234 * ___databaseLoad_6;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_7;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_8;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_9;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_10;

public:
	inline static int32_t get_offset_of_vuforia_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_4)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_4() const { return ___vuforia_4; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_4() { return &___vuforia_4; }
	inline void set_vuforia_4(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_4), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_5)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_5() const { return ___digitalEyewear_5; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_5() { return &___digitalEyewear_5; }
	inline void set_digitalEyewear_5(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_5 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_5), value);
	}

	inline static int32_t get_offset_of_databaseLoad_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___databaseLoad_6)); }
	inline DatabaseLoadConfiguration_t449697234 * get_databaseLoad_6() const { return ___databaseLoad_6; }
	inline DatabaseLoadConfiguration_t449697234 ** get_address_of_databaseLoad_6() { return &___databaseLoad_6; }
	inline void set_databaseLoad_6(DatabaseLoadConfiguration_t449697234 * value)
	{
		___databaseLoad_6 = value;
		Il2CppCodeGenWriteBarrier((&___databaseLoad_6), value);
	}

	inline static int32_t get_offset_of_videoBackground_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_7)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_7() const { return ___videoBackground_7; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_7() { return &___videoBackground_7; }
	inline void set_videoBackground_7(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_7 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_7), value);
	}

	inline static int32_t get_offset_of_deviceTracker_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_8)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_8() const { return ___deviceTracker_8; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_8() { return &___deviceTracker_8; }
	inline void set_deviceTracker_8(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_8 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_8), value);
	}

	inline static int32_t get_offset_of_smartTerrain_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_9)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_9() const { return ___smartTerrain_9; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_9() { return &___smartTerrain_9; }
	inline void set_smartTerrain_9(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_9 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_9), value);
	}

	inline static int32_t get_offset_of_webcam_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_10)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_10() const { return ___webcam_10; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_10() { return &___webcam_10; }
	inline void set_webcam_10(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_10 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_10), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_2;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_3;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_2)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_2() const { return ___mInstance_2; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_2), value);
	}

	inline static int32_t get_offset_of_mPadlock_3() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_3)); }
	inline RuntimeObject * get_mPadlock_3() const { return ___mPadlock_3; }
	inline RuntimeObject ** get_address_of_mPadlock_3() { return &___mPadlock_3; }
	inline void set_mPadlock_3(RuntimeObject * value)
	{
		___mPadlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef ACTION_1_T3593217305_H
#define ACTION_1_T3593217305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct  Action_1_t3593217305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3593217305_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef TEXTMESH_T1536577757_H
#define TEXTMESH_T1536577757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t1536577757  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T1536577757_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef PICSCRIPT_T1716259096_H
#define PICSCRIPT_T1716259096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PicScript
struct  PicScript_t1716259096  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Renderer PicScript::renderer
	Renderer_t2627027031 * ___renderer_3;
	// UnityEngine.Transform PicScript::tref
	Transform_t3600365921 * ___tref_4;

public:
	inline static int32_t get_offset_of_renderer_3() { return static_cast<int32_t>(offsetof(PicScript_t1716259096, ___renderer_3)); }
	inline Renderer_t2627027031 * get_renderer_3() const { return ___renderer_3; }
	inline Renderer_t2627027031 ** get_address_of_renderer_3() { return &___renderer_3; }
	inline void set_renderer_3(Renderer_t2627027031 * value)
	{
		___renderer_3 = value;
		Il2CppCodeGenWriteBarrier((&___renderer_3), value);
	}

	inline static int32_t get_offset_of_tref_4() { return static_cast<int32_t>(offsetof(PicScript_t1716259096, ___tref_4)); }
	inline Transform_t3600365921 * get_tref_4() const { return ___tref_4; }
	inline Transform_t3600365921 ** get_address_of_tref_4() { return &___tref_4; }
	inline void set_tref_4(Transform_t3600365921 * value)
	{
		___tref_4 = value;
		Il2CppCodeGenWriteBarrier((&___tref_4), value);
	}
};

struct PicScript_t1716259096_StaticFields
{
public:
	// System.String PicScript::picPath
	String_t* ___picPath_2;

public:
	inline static int32_t get_offset_of_picPath_2() { return static_cast<int32_t>(offsetof(PicScript_t1716259096_StaticFields, ___picPath_2)); }
	inline String_t* get_picPath_2() const { return ___picPath_2; }
	inline String_t** get_address_of_picPath_2() { return &___picPath_2; }
	inline void set_picPath_2(String_t* value)
	{
		___picPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___picPath_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PICSCRIPT_T1716259096_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public MonoBehaviour_t3962482529
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_6;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_7;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_8;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_10;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_5)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_5() const { return ___bodyStyle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_5() { return &___bodyStyle_5; }
	inline void set_bodyStyle_5(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_5), value);
	}

	inline static int32_t get_offset_of_headerStyle_6() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_6)); }
	inline GUIStyle_t3956901511 * get_headerStyle_6() const { return ___headerStyle_6; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_6() { return &___headerStyle_6; }
	inline void set_headerStyle_6(GUIStyle_t3956901511 * value)
	{
		___headerStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_6), value);
	}

	inline static int32_t get_offset_of_footerStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_7)); }
	inline GUIStyle_t3956901511 * get_footerStyle_7() const { return ___footerStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_7() { return &___footerStyle_7; }
	inline void set_footerStyle_7(GUIStyle_t3956901511 * value)
	{
		___footerStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_7), value);
	}

	inline static int32_t get_offset_of_bodyTexture_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_8)); }
	inline Texture2D_t3840446185 * get_bodyTexture_8() const { return ___bodyTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_8() { return &___bodyTexture_8; }
	inline void set_bodyTexture_8(Texture2D_t3840446185 * value)
	{
		___bodyTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_8), value);
	}

	inline static int32_t get_offset_of_headerTexture_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_9)); }
	inline Texture2D_t3840446185 * get_headerTexture_9() const { return ___headerTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_9() { return &___headerTexture_9; }
	inline void set_headerTexture_9(Texture2D_t3840446185 * value)
	{
		___headerTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_9), value);
	}

	inline static int32_t get_offset_of_footerTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_10)); }
	inline Texture2D_t3840446185 * get_footerTexture_10() const { return ___footerTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_10() { return &___footerTexture_10; }
	inline void set_footerTexture_10(Texture2D_t3840446185 * value)
	{
		___footerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifndef BUTTONDISPLAY_T1230321846_H
#define BUTTONDISPLAY_T1230321846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonDisplay
struct  ButtonDisplay_t1230321846  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rect ButtonDisplay::button1
	Rect_t2360479859  ___button1_2;
	// System.Single ButtonDisplay::buttonWidth
	float ___buttonWidth_3;
	// System.Int32 ButtonDisplay::widthValue
	int32_t ___widthValue_4;
	// System.Single ButtonDisplay::buttonHeight
	float ___buttonHeight_5;
	// System.Int32 ButtonDisplay::heightValue
	int32_t ___heightValue_6;
	// UnityEngine.Vector2 ButtonDisplay::buttonPosition
	Vector2_t2156229523  ___buttonPosition_7;
	// UnityEngine.Vector2 ButtonDisplay::buttonScale
	Vector2_t2156229523  ___buttonScale_8;
	// UnityEngine.GUIContent ButtonDisplay::buttonContent
	GUIContent_t3050628031 * ___buttonContent_9;
	// UnityEngine.GUIStyle ButtonDisplay::buttonStyle
	GUIStyle_t3956901511 * ___buttonStyle_10;
	// UnityEngine.Texture ButtonDisplay::icon
	Texture_t3661962703 * ___icon_11;
	// UnityEngine.Texture ButtonDisplay::activeIcon
	Texture_t3661962703 * ___activeIcon_12;
	// IOSBridge ButtonDisplay::bridgeRef
	IOSBridge_t3780229521 * ___bridgeRef_13;

public:
	inline static int32_t get_offset_of_button1_2() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___button1_2)); }
	inline Rect_t2360479859  get_button1_2() const { return ___button1_2; }
	inline Rect_t2360479859 * get_address_of_button1_2() { return &___button1_2; }
	inline void set_button1_2(Rect_t2360479859  value)
	{
		___button1_2 = value;
	}

	inline static int32_t get_offset_of_buttonWidth_3() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___buttonWidth_3)); }
	inline float get_buttonWidth_3() const { return ___buttonWidth_3; }
	inline float* get_address_of_buttonWidth_3() { return &___buttonWidth_3; }
	inline void set_buttonWidth_3(float value)
	{
		___buttonWidth_3 = value;
	}

	inline static int32_t get_offset_of_widthValue_4() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___widthValue_4)); }
	inline int32_t get_widthValue_4() const { return ___widthValue_4; }
	inline int32_t* get_address_of_widthValue_4() { return &___widthValue_4; }
	inline void set_widthValue_4(int32_t value)
	{
		___widthValue_4 = value;
	}

	inline static int32_t get_offset_of_buttonHeight_5() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___buttonHeight_5)); }
	inline float get_buttonHeight_5() const { return ___buttonHeight_5; }
	inline float* get_address_of_buttonHeight_5() { return &___buttonHeight_5; }
	inline void set_buttonHeight_5(float value)
	{
		___buttonHeight_5 = value;
	}

	inline static int32_t get_offset_of_heightValue_6() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___heightValue_6)); }
	inline int32_t get_heightValue_6() const { return ___heightValue_6; }
	inline int32_t* get_address_of_heightValue_6() { return &___heightValue_6; }
	inline void set_heightValue_6(int32_t value)
	{
		___heightValue_6 = value;
	}

	inline static int32_t get_offset_of_buttonPosition_7() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___buttonPosition_7)); }
	inline Vector2_t2156229523  get_buttonPosition_7() const { return ___buttonPosition_7; }
	inline Vector2_t2156229523 * get_address_of_buttonPosition_7() { return &___buttonPosition_7; }
	inline void set_buttonPosition_7(Vector2_t2156229523  value)
	{
		___buttonPosition_7 = value;
	}

	inline static int32_t get_offset_of_buttonScale_8() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___buttonScale_8)); }
	inline Vector2_t2156229523  get_buttonScale_8() const { return ___buttonScale_8; }
	inline Vector2_t2156229523 * get_address_of_buttonScale_8() { return &___buttonScale_8; }
	inline void set_buttonScale_8(Vector2_t2156229523  value)
	{
		___buttonScale_8 = value;
	}

	inline static int32_t get_offset_of_buttonContent_9() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___buttonContent_9)); }
	inline GUIContent_t3050628031 * get_buttonContent_9() const { return ___buttonContent_9; }
	inline GUIContent_t3050628031 ** get_address_of_buttonContent_9() { return &___buttonContent_9; }
	inline void set_buttonContent_9(GUIContent_t3050628031 * value)
	{
		___buttonContent_9 = value;
		Il2CppCodeGenWriteBarrier((&___buttonContent_9), value);
	}

	inline static int32_t get_offset_of_buttonStyle_10() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___buttonStyle_10)); }
	inline GUIStyle_t3956901511 * get_buttonStyle_10() const { return ___buttonStyle_10; }
	inline GUIStyle_t3956901511 ** get_address_of_buttonStyle_10() { return &___buttonStyle_10; }
	inline void set_buttonStyle_10(GUIStyle_t3956901511 * value)
	{
		___buttonStyle_10 = value;
		Il2CppCodeGenWriteBarrier((&___buttonStyle_10), value);
	}

	inline static int32_t get_offset_of_icon_11() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___icon_11)); }
	inline Texture_t3661962703 * get_icon_11() const { return ___icon_11; }
	inline Texture_t3661962703 ** get_address_of_icon_11() { return &___icon_11; }
	inline void set_icon_11(Texture_t3661962703 * value)
	{
		___icon_11 = value;
		Il2CppCodeGenWriteBarrier((&___icon_11), value);
	}

	inline static int32_t get_offset_of_activeIcon_12() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___activeIcon_12)); }
	inline Texture_t3661962703 * get_activeIcon_12() const { return ___activeIcon_12; }
	inline Texture_t3661962703 ** get_address_of_activeIcon_12() { return &___activeIcon_12; }
	inline void set_activeIcon_12(Texture_t3661962703 * value)
	{
		___activeIcon_12 = value;
		Il2CppCodeGenWriteBarrier((&___activeIcon_12), value);
	}

	inline static int32_t get_offset_of_bridgeRef_13() { return static_cast<int32_t>(offsetof(ButtonDisplay_t1230321846, ___bridgeRef_13)); }
	inline IOSBridge_t3780229521 * get_bridgeRef_13() const { return ___bridgeRef_13; }
	inline IOSBridge_t3780229521 ** get_address_of_bridgeRef_13() { return &___bridgeRef_13; }
	inline void set_bridgeRef_13(IOSBridge_t3780229521 * value)
	{
		___bridgeRef_13 = value;
		Il2CppCodeGenWriteBarrier((&___bridgeRef_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONDISPLAY_T1230321846_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef SCENELOADSCRIPT_T1246790847_H
#define SCENELOADSCRIPT_T1246790847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneLoadScript
struct  SceneLoadScript_t1246790847  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENELOADSCRIPT_T1246790847_H
#ifndef TEXTEDITSCRIPT_T810641699_H
#define TEXTEDITSCRIPT_T810641699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextEditScript
struct  TextEditScript_t810641699  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh TextEditScript::photoDesc
	TextMesh_t1536577757 * ___photoDesc_2;
	// System.Int32 TextEditScript::descLineLength
	int32_t ___descLineLength_3;
	// System.String TextEditScript::desc
	String_t* ___desc_4;
	// UnityEngine.TouchScreenKeyboard TextEditScript::userKeyboard
	TouchScreenKeyboard_t731888065 * ___userKeyboard_5;

public:
	inline static int32_t get_offset_of_photoDesc_2() { return static_cast<int32_t>(offsetof(TextEditScript_t810641699, ___photoDesc_2)); }
	inline TextMesh_t1536577757 * get_photoDesc_2() const { return ___photoDesc_2; }
	inline TextMesh_t1536577757 ** get_address_of_photoDesc_2() { return &___photoDesc_2; }
	inline void set_photoDesc_2(TextMesh_t1536577757 * value)
	{
		___photoDesc_2 = value;
		Il2CppCodeGenWriteBarrier((&___photoDesc_2), value);
	}

	inline static int32_t get_offset_of_descLineLength_3() { return static_cast<int32_t>(offsetof(TextEditScript_t810641699, ___descLineLength_3)); }
	inline int32_t get_descLineLength_3() const { return ___descLineLength_3; }
	inline int32_t* get_address_of_descLineLength_3() { return &___descLineLength_3; }
	inline void set_descLineLength_3(int32_t value)
	{
		___descLineLength_3 = value;
	}

	inline static int32_t get_offset_of_desc_4() { return static_cast<int32_t>(offsetof(TextEditScript_t810641699, ___desc_4)); }
	inline String_t* get_desc_4() const { return ___desc_4; }
	inline String_t** get_address_of_desc_4() { return &___desc_4; }
	inline void set_desc_4(String_t* value)
	{
		___desc_4 = value;
		Il2CppCodeGenWriteBarrier((&___desc_4), value);
	}

	inline static int32_t get_offset_of_userKeyboard_5() { return static_cast<int32_t>(offsetof(TextEditScript_t810641699, ___userKeyboard_5)); }
	inline TouchScreenKeyboard_t731888065 * get_userKeyboard_5() const { return ___userKeyboard_5; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_userKeyboard_5() { return &___userKeyboard_5; }
	inline void set_userKeyboard_5(TouchScreenKeyboard_t731888065 * value)
	{
		___userKeyboard_5 = value;
		Il2CppCodeGenWriteBarrier((&___userKeyboard_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTEDITSCRIPT_T810641699_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public MonoBehaviour_t3962482529
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_3), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_6)); }
	inline Vector3_t3722313464  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t3722313464  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_8)); }
	inline RuntimeObject* get_mTrackable_8() const { return ___mTrackable_8; }
	inline RuntimeObject** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(RuntimeObject* value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_8), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_9)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef IOSBRIDGE_T3780229521_H
#define IOSBRIDGE_T3780229521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSBridge
struct  IOSBridge_t3780229521  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSBRIDGE_T3780229521_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t3310196443 * m_Items[1];

public:
	inline Canvas_t3310196443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t3310196443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2713332384_gshared (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<IOSBridge>()
#define GameObject_GetComponent_TisIOSBridge_t3780229521_m215940497(__this, method) ((  IOSBridge_t3780229521 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.Texture)
extern "C"  void GUIContent__ctor_m4122571310 (GUIContent_t3050628031 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
extern "C"  GUIStyle_t3956901511 * GUIStyle_op_Implicit_m2142407647 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C"  void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Rect__ctor_m1342368573 (Rect_t2360479859 * __this, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
extern "C"  void GUI_set_backgroundColor_m2936584335 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m1546789121 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, GUIContent_t3050628031 * p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
extern "C"  void GUIContent_set_image_m1091531865 (GUIContent_t3050628031 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C"  VuforiaRuntime_t1949122020 * VuforiaRuntime_get_Instance_m1058251676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2713332384(__this, p0, p1, method) ((  void (*) (Action_1_t3593217305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2713332384_gshared)(__this, p0, p1, method)
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t2360479859  GUI_Window_m1088326791 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m2223708732 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C"  VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C"  GenericVuforiaConfiguration_t3697830469 * VuforiaConfiguration_get_Vuforia_m1588208597 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
extern "C"  String_t* GenericVuforiaConfiguration_get_LicenseKey_m2270076687 (GenericVuforiaConfiguration_t3697830469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Screen::get_dpi()
extern "C"  float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C"  void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C"  GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C"  void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
#define Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(__this /* static, unused */, p0, method) ((  Font_t1956802104 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C"  void GUIStyle_set_font_m2490449107 (GUIStyle_t3956901511 * __this, Font_t1956802104 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C"  void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C"  void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C"  void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C"  void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_padding_m3302456044 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
#define Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, method) ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
#define Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, p0, method) ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
#define Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, p0, method) ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
#define Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, p0, method) ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
extern "C"  int16_t BitConverter_ToInt16_m2376388426 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
extern "C"  uint16_t BitConverter_ToUInt16_m4076849680 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C"  int32_t BitConverter_ToInt32_m1089563119 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
extern "C"  uint32_t BitConverter_ToUInt32_m3737646381 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
extern "C"  float BitConverter_ToSingle_m2597008633 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
extern "C"  double BitConverter_ToDouble_m527296068 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.JpegInfo::.ctor()
extern "C"  void JpegInfo__ctor_m1819165455 (JpegInfo_t890611979 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifReader::set_info(ExifLib.JpegInfo)
extern "C"  void ExifReader_set_info_m3348235338 (ExifReader_t3571911595 * __this, JpegInfo_t890611979 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExifLib.JpegInfo ExifLib.ExifReader::get_info()
extern "C"  JpegInfo_t890611979 * ExifReader_get_info_m633487092 (ExifReader_t3571911595 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifReader::ProcessExif(System.Byte[])
extern "C"  void ExifReader_ProcessExif_m210861036 (ExifReader_t3571911595 * __this, ByteU5BU5D_t4116647657* ___section0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifReader::ProcessSOF(System.Byte[],System.Int32)
extern "C"  void ExifReader_ProcessSOF_m1125152025 (ExifReader_t3571911595 * __this, ByteU5BU5D_t4116647657* ___section0, int32_t ___marker1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::Collect()
extern "C"  void GC_Collect_m743975114 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C"  void MemoryStream__ctor_m4100805873 (MemoryStream_t94973147 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifReader::.ctor(System.IO.Stream)
extern "C"  void ExifReader__ctor_m314026112 (ExifReader_t3571911595 * __this, Stream_t1273022909 * ___stream0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
extern "C"  TimeSpan_t881159249  DateTime_op_Subtraction_m3579235380 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 ExifLib.ExifIO::ReadUShort(System.Byte[],System.Int32,System.Boolean)
extern "C"  uint16_t ExifIO_ReadUShort_m868989271 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExifLib.ExifIO::ReadInt(System.Byte[],System.Int32,System.Boolean)
extern "C"  int32_t ExifIO_ReadInt_m2520572571 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifReader::ProcessExifDir(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,ExifLib.ExifIFD)
extern "C"  void ExifReader_ProcessExifDir_m613744390 (ExifReader_t3571911595 * __this, ByteU5BU5D_t4116647657* ___section0, int32_t ___offsetDir1, int32_t ___offsetBase2, int32_t ___length3, int32_t ___depth4, int32_t ___ifd5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExifLib.ExifReader::DirOffset(System.Int32,System.Int32)
extern "C"  int32_t ExifReader_DirOffset_m1501897435 (ExifReader_t3571911595 * __this, int32_t ___start0, int32_t ___num1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifTag::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void ExifTag__ctor_m1996171450 (ExifTag_t2496373222 * __this, ByteU5BU5D_t4116647657* ___section0, int32_t ___sectionOffset1, int32_t ___offsetBase2, int32_t ___length3, bool ___littleEndian4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExifLib.ExifTag::get_IsValid()
extern "C"  bool ExifTag_get_IsValid_m1926805274 (ExifTag_t2496373222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExifLib.ExifTag::get_Tag()
extern "C"  int32_t ExifTag_get_Tag_m1393451932 (ExifTag_t2496373222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExifLib.ExifTag::GetInt(System.Int32)
extern "C"  int32_t ExifTag_GetInt_m1307753442 (ExifTag_t2496373222 * __this, int32_t ___componentIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifTag::set_IsValid(System.Boolean)
extern "C"  void ExifTag_set_IsValid_m2894412743 (ExifTag_t2496373222 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifTag::set_Tag(System.Int32)
extern "C"  void ExifTag_set_Tag_m133286759 (ExifTag_t2496373222 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifTag::set_Format(ExifLib.ExifTagFormat)
extern "C"  void ExifTag_set_Format_m474907940 (ExifTag_t2496373222 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifTag::set_Components(System.Int32)
extern "C"  void ExifTag_set_Components_m3742742878 (ExifTag_t2496373222 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExifLib.ExifTag::get_Components()
extern "C"  int32_t ExifTag_get_Components_m3807414858 (ExifTag_t2496373222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifTag::set_LittleEndian(System.Boolean)
extern "C"  void ExifTag_set_LittleEndian_m3687655741 (ExifTag_t2496373222 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExifLib.ExifTag::set_Data(System.Byte[])
extern "C"  void ExifTag_set_Data_m4055696809 (ExifTag_t2496373222 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExifLib.ExifTag::get_Data()
extern "C"  ByteU5BU5D_t4116647657* ExifTag_get_Data_m2886868544 (ExifTag_t2496373222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExifLib.ExifTag::get_LittleEndian()
extern "C"  bool ExifTag_get_LittleEndian_m3749007144 (ExifTag_t2496373222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExifLib.ExifIO::ReadShort(System.Byte[],System.Int32,System.Boolean)
extern "C"  int16_t ExifIO_ReadShort_m3860138891 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ExifLib.ExifIO::ReadUInt(System.Byte[],System.Int32,System.Boolean)
extern "C"  uint32_t ExifIO_ReadUInt_m2073734979 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single ExifLib.ExifIO::ReadSingle(System.Byte[],System.Int32,System.Boolean)
extern "C"  float ExifIO_ReadSingle_m2491294796 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double ExifLib.ExifIO::ReadDouble(System.Byte[],System.Int32,System.Boolean)
extern "C"  double ExifIO_ReadDouble_m214976151 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExifLib.ExifTagFormat ExifLib.ExifTag::get_Format()
extern "C"  int32_t ExifTag_get_Format_m4009193219 (ExifTag_t2496373222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double ExifLib.ExifTag::GetNumericValue(System.Int32)
extern "C"  double ExifTag_GetNumericValue_m78339362 (ExifTag_t2496373222 * __this, int32_t ___componentIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 ExifLib.ExifTag::ReadUShort(System.Int32)
extern "C"  uint16_t ExifTag_ReadUShort_m2625065345 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ExifLib.ExifTag::ReadUInt(System.Int32)
extern "C"  uint32_t ExifTag_ReadUInt_m3368419728 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExifLib.ExifTag::ReadShort(System.Int32)
extern "C"  int16_t ExifTag_ReadShort_m267728558 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExifLib.ExifTag::ReadInt(System.Int32)
extern "C"  int32_t ExifTag_ReadInt_m579302204 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single ExifLib.ExifTag::ReadSingle(System.Int32)
extern "C"  float ExifTag_ReadSingle_m2712062965 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double ExifLib.ExifTag::ReadDouble(System.Int32)
extern "C"  double ExifTag_ReadDouble_m1690842170 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ExifLib.ExifTag::GetStringValue(System.Int32)
extern "C"  String_t* ExifTag_GetStringValue_m935421799 (ExifTag_t2496373222 * __this, int32_t ___componentIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
extern "C"  String_t* String_Trim_m3384720403 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString()
extern "C"  String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString()
extern "C"  String_t* Double_ToString_m1229922074 (double* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ExifLib.ExifTag::GetStringValue()
extern "C"  String_t* ExifTag_GetStringValue_m1060216929 (ExifTag_t2496373222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
extern "C"  String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IOSBridge::OpenImagePicker(System.String,System.String)
extern "C"  void IOSBridge_OpenImagePicker_m3264067964 (RuntimeObject * __this /* static, unused */, String_t* ___game_object_name0, String_t* ___function_name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(__this, method) ((  Renderer_t2627027031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
#define GameObject_GetComponent_TisTransform_t3600365921_m3348034436(__this, method) ((  Transform_t3600365921 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Collections.IEnumerator PicScript::AssignTexture(System.String)
extern "C"  RuntimeObject* PicScript_AssignTexture_m1267995811 (PicScript_t1716259096 * __this, String_t* ___path0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PicScript/<AssignTexture>c__Iterator0::.ctor()
extern "C"  void U3CAssignTextureU3Ec__Iterator0__ctor_m1154174765 (U3CAssignTextureU3Ec__Iterator0_t1513172786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m2915079343 (WWW_t3688466362 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C"  ByteU5BU5D_t4116647657* WWW_get_bytes_m3061182897 (WWW_t3688466362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ExifLib.JpegInfo ExifLib.ExifReader::ReadJpeg(System.Byte[],System.String)
extern "C"  JpegInfo_t890611979 * ExifReader_ReadJpeg_m1439447182 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___fiBYTES0, String_t* ___Name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_localEulerAngles_m4202601546 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C"  Texture2D_t3840446185 * WWW_get_texture_m3513075325 (WWW_t3688466362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C"  void Material_set_mainTexture_m544811714 (Material_t340375123 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PicScript/<AssignTexture>c__Iterator0::<>__Finally0()
extern "C"  void U3CAssignTextureU3Ec__Iterator0_U3CU3E__Finally0_m1523758864 (U3CAssignTextureU3Ec__Iterator0_t1513172786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern "C"  bool TouchScreenKeyboard_get_done_m3615485155 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern "C"  String_t* TouchScreenKeyboard_get_text_m1797464608 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String TextEditScript::StringNewline(System.String,System.Int32)
extern "C"  String_t* TextEditScript_StringNewline_m4258088781 (TextEditScript_t810641699 * __this, String_t* ___s0, int32_t ___lineLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C"  void TextMesh_set_text_m446189179 (TextMesh_t1536577757 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType)
extern "C"  TouchScreenKeyboard_t731888065 * TouchScreenKeyboard_Open_m871123569 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
extern "C"  String_t* String_Insert_m3534971326 (String_t* __this, int32_t p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonDisplay::.ctor()
extern "C"  void ButtonDisplay__ctor_m3916541234 (ButtonDisplay_t1230321846 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonDisplay::Awake()
extern "C"  void ButtonDisplay_Awake_m4175616066 (ButtonDisplay_t1230321846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonDisplay_Awake_m4175616066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IOSBridge_t3780229521 * L_1 = GameObject_GetComponent_TisIOSBridge_t3780229521_m215940497(L_0, /*hidden argument*/GameObject_GetComponent_TisIOSBridge_t3780229521_m215940497_RuntimeMethod_var);
		__this->set_bridgeRef_13(L_1);
		return;
	}
}
// System.Void ButtonDisplay::Start()
extern "C"  void ButtonDisplay_Start_m1111455104 (ButtonDisplay_t1230321846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonDisplay_Start_m1111455104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture_t3661962703 * L_0 = __this->get_icon_11();
		GUIContent_t3050628031 * L_1 = (GUIContent_t3050628031 *)il2cpp_codegen_object_new(GUIContent_t3050628031_il2cpp_TypeInfo_var);
		GUIContent__ctor_m4122571310(L_1, L_0, /*hidden argument*/NULL);
		__this->set_buttonContent_9(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle_t3956901511 * L_2 = GUIStyle_op_Implicit_m2142407647(NULL /*static, unused*/, _stringLiteral1208990579, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_3 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_3, L_2, /*hidden argument*/NULL);
		__this->set_buttonStyle_10(L_3);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_heightValue_6();
		__this->set_buttonHeight_5((((float)((float)((int32_t)((int32_t)L_4/(int32_t)L_5))))));
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_widthValue_4();
		__this->set_buttonWidth_3((((float)((float)((int32_t)((int32_t)L_6/(int32_t)L_7))))));
		float L_8 = __this->get_buttonWidth_3();
		float L_9 = __this->get_buttonHeight_5();
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), L_8, L_9, /*hidden argument*/NULL);
		__this->set_buttonScale_8(L_10);
		int32_t L_11 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = __this->get_buttonWidth_3();
		int32_t L_13 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_buttonHeight_5();
		Vector2_t2156229523  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector2__ctor_m3970636864((&L_15), ((float)((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_11))), (float)L_12))/(float)(2.0f))), ((float)((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_13))), (float)L_14))/(float)(2.0f))), /*hidden argument*/NULL);
		__this->set_buttonPosition_7(L_15);
		Vector2_t2156229523  L_16 = __this->get_buttonPosition_7();
		Vector2_t2156229523  L_17 = __this->get_buttonScale_8();
		Rect_t2360479859  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Rect__ctor_m1342368573((&L_18), L_16, L_17, /*hidden argument*/NULL);
		__this->set_button1_2(L_18);
		return;
	}
}
// System.Void ButtonDisplay::Update()
extern "C"  void ButtonDisplay_Update_m1814854018 (ButtonDisplay_t1230321846 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ButtonDisplay::OnGUI()
extern "C"  void ButtonDisplay_OnGUI_m2396612983 (ButtonDisplay_t1230321846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonDisplay_OnGUI_m2396612983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2943235014((&L_0), (50.0f), (50.0f), (50.0f), (0.8f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_set_backgroundColor_m2936584335(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Rect_t2360479859  L_1 = __this->get_button1_2();
		GUIContent_t3050628031 * L_2 = __this->get_buttonContent_9();
		GUIStyle_t3956901511 * L_3 = __this->get_buttonStyle_10();
		bool L_4 = GUI_Button_m1546789121(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		GUIContent_t3050628031 * L_5 = __this->get_buttonContent_9();
		Texture_t3661962703 * L_6 = __this->get_activeIcon_12();
		NullCheck(L_5);
		GUIContent_set_image_m1091531865(L_5, L_6, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DefaultInitializationErrorHandler::.ctor()
extern "C"  void DefaultInitializationErrorHandler__ctor_m2145257936 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_mErrorText_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_m599033302(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
extern "C"  void DefaultInitializationErrorHandler_Awake_m1713298888 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
extern "C"  void DefaultInitializationErrorHandler_Start_m2498604264 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
extern "C"  void DefaultInitializationErrorHandler_OnGUI_m2338842741 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_3();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Window_m1088326791(NULL /*static, unused*/, 0, L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
extern "C"  void DefaultInitializationErrorHandler_OnDestroy_m3668093536 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C"  void DefaultInitializationErrorHandler_DrawWindowContent_m2208378571 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_2), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_9 = V_0;
		GUIStyle_t3956901511 * L_10 = __this->get_headerStyle_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2420537077(NULL /*static, unused*/, L_9, _stringLiteral2016908147, L_10, /*hidden argument*/NULL);
		Rect_t2360479859  L_11 = V_1;
		String_t* L_12 = __this->get_mErrorText_2();
		GUIStyle_t3956901511 * L_13 = __this->get_bodyStyle_5();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		Rect_t2360479859  L_14 = V_2;
		GUIStyle_t3956901511 * L_15 = __this->get_footerStyle_7();
		bool L_16 = GUI_Button_m2223708732(NULL /*static, unused*/, L_14, _stringLiteral3483484711, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00dc;
			}
			case 9:
			{
				goto IL_00ec;
			}
		}
	}
	{
		goto IL_00fc;
	}

IL_0036:
	{
		__this->set_mErrorText_2(_stringLiteral3279329212);
		goto IL_00fc;
	}

IL_0046:
	{
		__this->set_mErrorText_2(_stringLiteral3325583105);
		goto IL_00fc;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1253325676, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_2);
		goto IL_00fc;
	}

IL_0071:
	{
		__this->set_mErrorText_2(_stringLiteral2959890895);
		goto IL_00fc;
	}

IL_0081:
	{
		__this->set_mErrorText_2(_stringLiteral2293327149);
		goto IL_00fc;
	}

IL_0091:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2746077084, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_4);
		goto IL_00fc;
	}

IL_00ac:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2746058527, L_5, _stringLiteral491174246, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_6);
		goto IL_00fc;
	}

IL_00cc:
	{
		__this->set_mErrorText_2(_stringLiteral3034338515);
		goto IL_00fc;
	}

IL_00dc:
	{
		__this->set_mErrorText_2(_stringLiteral3122929577);
		goto IL_00fc;
	}

IL_00ec:
	{
		__this->set_mErrorText_2(_stringLiteral3567432369);
		goto IL_00fc;
	}

IL_00fc:
	{
		RuntimeObject * L_7 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		___errorCode0 = *(int32_t*)UnBox(L_7);
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m1273907647(L_8, _stringLiteral3452614641, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_10 = __this->get_mErrorText_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral229317972, L_9, _stringLiteral2072581803, L_10, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_11);
		String_t* L_12 = __this->get_mErrorText_2();
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_12);
		String_t* L_14 = String_Replace_m1273907647(L_12, _stringLiteral229317972, L_13, /*hidden argument*/NULL);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral2642543365, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		ObjectU5BU5D_t2843939325* L_17 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral3752705136);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3752705136);
		ObjectU5BU5D_t2843939325* L_18 = L_17;
		int32_t L_19 = ___errorCode0;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t2843939325* L_22 = L_18;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral3453007782);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3453007782);
		ObjectU5BU5D_t2843939325* L_23 = L_22;
		String_t* L_24 = V_0;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_24);
		String_t* L_25 = String_Concat_m2971454694(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_3(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1431967569);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3797279721);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = String_Substring_m1610150815(L_13, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1108443480);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_20 = String_Substring_m1610150815(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_16;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral2072975055);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2971454694(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_00af;
	}

IL_0079:
	{
		ObjectU5BU5D_t2843939325* L_23 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral1431967569);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		String_t* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m3847582255(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_24;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral1498400317);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_30 = L_29;
		String_t* L_31 = V_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_30;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral2072975055);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m2971454694(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_1 = L_33;
	}

IL_00af:
	{
		String_t* L_34 = V_1;
		return L_34;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0019:
	{
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		float L_5 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_4)))/(float)L_5));
		float L_6 = V_1;
		if ((!(((float)L_6) > ((float)(4.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_003a;
	}

IL_0039:
	{
		G_B6_0 = 1;
	}

IL_003a:
	{
		V_2 = G_B6_0;
		Color_t2555686324  L_7 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_7, /*hidden argument*/NULL);
		__this->set_bodyTexture_8(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_10 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_11 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m286683560((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_13 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_12, /*hidden argument*/NULL);
		__this->set_headerTexture_9(L_13);
		float L_14 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_15 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_16 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Color__ctor_m286683560((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_18 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_17, /*hidden argument*/NULL);
		__this->set_footerTexture_10(L_18);
		GUIStyle_t3956901511 * L_19 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_19, /*hidden argument*/NULL);
		__this->set_bodyStyle_5(L_19);
		GUIStyle_t3956901511 * L_20 = __this->get_bodyStyle_5();
		NullCheck(L_20);
		GUIStyleState_t1397964415 * L_21 = GUIStyle_get_normal_m729441812(L_20, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_22 = __this->get_bodyTexture_8();
		NullCheck(L_21);
		GUIStyleState_set_background_m369476077(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_23 = __this->get_bodyStyle_5();
		Font_t1956802104 * L_24 = Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(NULL /*static, unused*/, _stringLiteral2974894664, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var);
		NullCheck(L_23);
		GUIStyle_set_font_m2490449107(L_23, L_24, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_25 = __this->get_bodyStyle_5();
		int32_t L_26 = V_2;
		float L_27 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		GUIStyle_set_fontSize_m1566850023(L_25, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_26))))), (float)L_27))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_28 = __this->get_bodyStyle_5();
		NullCheck(L_28);
		GUIStyleState_t1397964415 * L_29 = GUIStyle_get_normal_m729441812(L_28, /*hidden argument*/NULL);
		Color_t2555686324  L_30 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m1105876047(L_29, L_30, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_31 = __this->get_bodyStyle_5();
		NullCheck(L_31);
		GUIStyle_set_wordWrap_m1419501823(L_31, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_32 = __this->get_bodyStyle_5();
		NullCheck(L_32);
		GUIStyle_set_alignment_m3944619660(L_32, 4, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_33 = __this->get_bodyStyle_5();
		RectOffset_t1369453676 * L_34 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_34, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_set_padding_m3302456044(L_33, L_34, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_35 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_36 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_36, L_35, /*hidden argument*/NULL);
		__this->set_headerStyle_6(L_36);
		GUIStyle_t3956901511 * L_37 = __this->get_headerStyle_6();
		NullCheck(L_37);
		GUIStyleState_t1397964415 * L_38 = GUIStyle_get_normal_m729441812(L_37, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_39 = __this->get_headerTexture_9();
		NullCheck(L_38);
		GUIStyleState_set_background_m369476077(L_38, L_39, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_40 = __this->get_headerStyle_6();
		int32_t L_41 = V_2;
		float L_42 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		GUIStyle_set_fontSize_m1566850023(L_40, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_41))))), (float)L_42))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_43 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_44 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_44, L_43, /*hidden argument*/NULL);
		__this->set_footerStyle_7(L_44);
		GUIStyle_t3956901511 * L_45 = __this->get_footerStyle_7();
		NullCheck(L_45);
		GUIStyleState_t1397964415 * L_46 = GUIStyle_get_normal_m729441812(L_45, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_47 = __this->get_footerTexture_10();
		NullCheck(L_46);
		GUIStyleState_set_background_m369476077(L_46, L_47, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_48 = __this->get_footerStyle_7();
		NullCheck(L_48);
		GUIStyleState_t1397964415 * L_49 = GUIStyle_get_normal_m729441812(L_48, /*hidden argument*/NULL);
		Color_t2555686324  L_50 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyleState_set_textColor_m1105876047(L_49, L_50, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_51 = __this->get_footerStyle_7();
		int32_t L_52 = V_2;
		float L_53 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_51);
		GUIStyle_set_fontSize_m1566850023(L_51, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_52))))), (float)L_53))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		Color_t2555686324  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m2984741184(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = V_0;
		NullCheck(L_3);
		Texture2D_Apply_m2271746283(L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C"  void DefaultTrackableEventHandler__ctor_m2856359002 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::Start()
extern "C"  void DefaultTrackableEventHandler_Start_m796446126 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_2(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C"  void DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111 (DefaultTrackableEventHandler_t1588957063 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___newStatus1;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___newStatus1;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___newStatus1;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_003f;
		}
	}

IL_0015:
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		String_t* L_4 = TrackableBehaviour_get_TrackableName_m3644057705(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_4, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(6 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		goto IL_007d;
	}

IL_003f:
	{
		int32_t L_6 = ___previousStatus0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_7 = ___newStatus1;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_8 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_8);
		String_t* L_9 = TrackableBehaviour_get_TrackableName_m3644057705(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_9, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		goto IL_007d;
	}

IL_0077:
	{
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
	}

IL_007d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C"  void DefaultTrackableEventHandler_OnTrackingFound_m4202593607 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)1, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)1, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)1, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C"  void DefaultTrackableEventHandler_OnTrackingLost_m424172778 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)0, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int16 ExifLib.ExifIO::ReadShort(System.Byte[],System.Int32,System.Boolean)
extern "C"  int16_t ExifIO_ReadShort_m3860138891 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifIO_ReadShort_m3860138891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		bool L_0 = ___littleEndian2;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_1 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = ___littleEndian2;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_3 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_3)
		{
			goto IL_0028;
		}
	}

IL_0020:
	{
		ByteU5BU5D_t4116647657* L_4 = ___Data0;
		int32_t L_5 = ___offset1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int16_t L_6 = BitConverter_ToInt16_m2376388426(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0028:
	{
		ByteU5BU5D_t4116647657* L_7 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)2));
		ByteU5BU5D_t4116647657* L_8 = ___Data0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_t4116647657* L_12 = L_7;
		ByteU5BU5D_t4116647657* L_13 = ___Data0;
		int32_t L_14 = ___offset1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_16);
		V_0 = L_12;
		ByteU5BU5D_t4116647657* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int16_t L_18 = BitConverter_ToInt16_m2376388426(NULL /*static, unused*/, L_17, 0, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.UInt16 ExifLib.ExifIO::ReadUShort(System.Byte[],System.Int32,System.Boolean)
extern "C"  uint16_t ExifIO_ReadUShort_m868989271 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifIO_ReadUShort_m868989271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		bool L_0 = ___littleEndian2;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_1 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = ___littleEndian2;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_3 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_3)
		{
			goto IL_0028;
		}
	}

IL_0020:
	{
		ByteU5BU5D_t4116647657* L_4 = ___Data0;
		int32_t L_5 = ___offset1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		uint16_t L_6 = BitConverter_ToUInt16_m4076849680(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0028:
	{
		ByteU5BU5D_t4116647657* L_7 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)2));
		ByteU5BU5D_t4116647657* L_8 = ___Data0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_t4116647657* L_12 = L_7;
		ByteU5BU5D_t4116647657* L_13 = ___Data0;
		int32_t L_14 = ___offset1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_16);
		V_0 = L_12;
		ByteU5BU5D_t4116647657* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		uint16_t L_18 = BitConverter_ToUInt16_m4076849680(NULL /*static, unused*/, L_17, 0, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Int32 ExifLib.ExifIO::ReadInt(System.Byte[],System.Int32,System.Boolean)
extern "C"  int32_t ExifIO_ReadInt_m2520572571 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifIO_ReadInt_m2520572571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		bool L_0 = ___littleEndian2;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_1 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = ___littleEndian2;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_3 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_3)
		{
			goto IL_0028;
		}
	}

IL_0020:
	{
		ByteU5BU5D_t4116647657* L_4 = ___Data0;
		int32_t L_5 = ___offset1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int32_t L_6 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0028:
	{
		ByteU5BU5D_t4116647657* L_7 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4));
		ByteU5BU5D_t4116647657* L_8 = ___Data0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)3));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_t4116647657* L_12 = L_7;
		ByteU5BU5D_t4116647657* L_13 = ___Data0;
		int32_t L_14 = ___offset1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_16);
		ByteU5BU5D_t4116647657* L_17 = L_12;
		ByteU5BU5D_t4116647657* L_18 = ___Data0;
		int32_t L_19 = ___offset1;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_21);
		ByteU5BU5D_t4116647657* L_22 = L_17;
		ByteU5BU5D_t4116647657* L_23 = ___Data0;
		int32_t L_24 = ___offset1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_26);
		V_0 = L_22;
		ByteU5BU5D_t4116647657* L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int32_t L_28 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_27, 0, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.UInt32 ExifLib.ExifIO::ReadUInt(System.Byte[],System.Int32,System.Boolean)
extern "C"  uint32_t ExifIO_ReadUInt_m2073734979 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifIO_ReadUInt_m2073734979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		bool L_0 = ___littleEndian2;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_1 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = ___littleEndian2;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_3 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_3)
		{
			goto IL_0028;
		}
	}

IL_0020:
	{
		ByteU5BU5D_t4116647657* L_4 = ___Data0;
		int32_t L_5 = ___offset1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		uint32_t L_6 = BitConverter_ToUInt32_m3737646381(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0028:
	{
		ByteU5BU5D_t4116647657* L_7 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4));
		ByteU5BU5D_t4116647657* L_8 = ___Data0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)3));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_t4116647657* L_12 = L_7;
		ByteU5BU5D_t4116647657* L_13 = ___Data0;
		int32_t L_14 = ___offset1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_16);
		ByteU5BU5D_t4116647657* L_17 = L_12;
		ByteU5BU5D_t4116647657* L_18 = ___Data0;
		int32_t L_19 = ___offset1;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_21);
		ByteU5BU5D_t4116647657* L_22 = L_17;
		ByteU5BU5D_t4116647657* L_23 = ___Data0;
		int32_t L_24 = ___offset1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_26);
		V_0 = L_22;
		ByteU5BU5D_t4116647657* L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		uint32_t L_28 = BitConverter_ToUInt32_m3737646381(NULL /*static, unused*/, L_27, 0, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Single ExifLib.ExifIO::ReadSingle(System.Byte[],System.Int32,System.Boolean)
extern "C"  float ExifIO_ReadSingle_m2491294796 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifIO_ReadSingle_m2491294796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		bool L_0 = ___littleEndian2;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_1 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = ___littleEndian2;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_3 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_3)
		{
			goto IL_0028;
		}
	}

IL_0020:
	{
		ByteU5BU5D_t4116647657* L_4 = ___Data0;
		int32_t L_5 = ___offset1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_6 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0028:
	{
		ByteU5BU5D_t4116647657* L_7 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4));
		ByteU5BU5D_t4116647657* L_8 = ___Data0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)3));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_t4116647657* L_12 = L_7;
		ByteU5BU5D_t4116647657* L_13 = ___Data0;
		int32_t L_14 = ___offset1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_16);
		ByteU5BU5D_t4116647657* L_17 = L_12;
		ByteU5BU5D_t4116647657* L_18 = ___Data0;
		int32_t L_19 = ___offset1;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_21);
		ByteU5BU5D_t4116647657* L_22 = L_17;
		ByteU5BU5D_t4116647657* L_23 = ___Data0;
		int32_t L_24 = ___offset1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_26);
		V_0 = L_22;
		ByteU5BU5D_t4116647657* L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		float L_28 = BitConverter_ToSingle_m2597008633(NULL /*static, unused*/, L_27, 0, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Double ExifLib.ExifIO::ReadDouble(System.Byte[],System.Int32,System.Boolean)
extern "C"  double ExifIO_ReadDouble_m214976151 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___offset1, bool ___littleEndian2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifIO_ReadDouble_m214976151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		bool L_0 = ___littleEndian2;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_1 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = ___littleEndian2;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_3 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_3)
		{
			goto IL_0028;
		}
	}

IL_0020:
	{
		ByteU5BU5D_t4116647657* L_4 = ___Data0;
		int32_t L_5 = ___offset1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		double L_6 = BitConverter_ToDouble_m527296068(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0028:
	{
		ByteU5BU5D_t4116647657* L_7 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		ByteU5BU5D_t4116647657* L_8 = ___Data0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)7));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_t4116647657* L_12 = L_7;
		ByteU5BU5D_t4116647657* L_13 = ___Data0;
		int32_t L_14 = ___offset1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)6));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_16);
		ByteU5BU5D_t4116647657* L_17 = L_12;
		ByteU5BU5D_t4116647657* L_18 = ___Data0;
		int32_t L_19 = ___offset1;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)5));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_21);
		ByteU5BU5D_t4116647657* L_22 = L_17;
		ByteU5BU5D_t4116647657* L_23 = ___Data0;
		int32_t L_24 = ___offset1;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)4));
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_26);
		ByteU5BU5D_t4116647657* L_27 = L_22;
		ByteU5BU5D_t4116647657* L_28 = ___Data0;
		int32_t L_29 = ___offset1;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)3));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_31);
		ByteU5BU5D_t4116647657* L_32 = L_27;
		ByteU5BU5D_t4116647657* L_33 = ___Data0;
		int32_t L_34 = ___offset1;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)2));
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_36);
		ByteU5BU5D_t4116647657* L_37 = L_32;
		ByteU5BU5D_t4116647657* L_38 = ___Data0;
		int32_t L_39 = ___offset1;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_41);
		ByteU5BU5D_t4116647657* L_42 = L_37;
		ByteU5BU5D_t4116647657* L_43 = ___Data0;
		int32_t L_44 = ___offset1;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_46);
		V_0 = L_42;
		ByteU5BU5D_t4116647657* L_47 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		double L_48 = BitConverter_ToDouble_m527296068(NULL /*static, unused*/, L_47, 0, /*hidden argument*/NULL);
		return L_48;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExifLib.ExifReader::.ctor(System.IO.Stream)
extern "C"  void ExifReader__ctor_m314026112 (ExifReader_t3571911595 * __this, Stream_t1273022909 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifReader__ctor_m314026112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	int32_t V_7 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		JpegInfo_t890611979 * L_0 = (JpegInfo_t890611979 *)il2cpp_codegen_object_new(JpegInfo_t890611979_il2cpp_TypeInfo_var);
		JpegInfo__ctor_m1819165455(L_0, /*hidden argument*/NULL);
		ExifReader_set_info_m3348235338(__this, L_0, /*hidden argument*/NULL);
		Stream_t1273022909 * L_1 = ___stream0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0033;
		}
	}
	{
		Stream_t1273022909 * L_4 = ___stream0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)216))))
		{
			goto IL_0034;
		}
	}

IL_0033:
	{
		return;
	}

IL_0034:
	{
		JpegInfo_t890611979 * L_6 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_IsValid_2((bool)1);
		goto IL_01b3;
	}

IL_0045:
	{
		V_1 = 0;
		V_2 = 0;
		V_0 = 0;
		goto IL_0078;
	}

IL_0050:
	{
		Stream_t1273022909 * L_7 = ___stream0;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::ReadByte() */, L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)255))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_007d;
	}

IL_0072:
	{
		int32_t L_11 = V_1;
		V_2 = L_11;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0078:
	{
		goto IL_0050;
	}

IL_007d:
	{
		Stream_t1273022909 * L_13 = ___stream0;
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::ReadByte() */, L_13);
		V_3 = L_14;
		Stream_t1273022909 * L_15 = ___stream0;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::ReadByte() */, L_15);
		V_4 = L_16;
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))|(int32_t)L_18));
		int32_t L_19 = V_5;
		V_6 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_19));
		ByteU5BU5D_t4116647657* L_20 = V_6;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)L_21))));
		ByteU5BU5D_t4116647657* L_22 = V_6;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)L_23))));
		Stream_t1273022909 * L_24 = ___stream0;
		ByteU5BU5D_t4116647657* L_25 = V_6;
		int32_t L_26 = V_5;
		NullCheck(L_24);
		int32_t L_27 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)2)));
		V_7 = L_27;
		int32_t L_28 = V_7;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)2)))))
		{
			goto IL_00c5;
		}
	}
	{
		return;
	}

IL_00c5:
	{
		int32_t L_30 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)192))))
		{
			case 0:
			{
				goto IL_0198;
			}
			case 1:
			{
				goto IL_0198;
			}
			case 2:
			{
				goto IL_0198;
			}
			case 3:
			{
				goto IL_0198;
			}
			case 4:
			{
				goto IL_013d;
			}
			case 5:
			{
				goto IL_0198;
			}
			case 6:
			{
				goto IL_0198;
			}
			case 7:
			{
				goto IL_0198;
			}
			case 8:
			{
				goto IL_013d;
			}
			case 9:
			{
				goto IL_0198;
			}
			case 10:
			{
				goto IL_0198;
			}
			case 11:
			{
				goto IL_0198;
			}
			case 12:
			{
				goto IL_013d;
			}
			case 13:
			{
				goto IL_0198;
			}
			case 14:
			{
				goto IL_0198;
			}
			case 15:
			{
				goto IL_0198;
			}
			case 16:
			{
				goto IL_013d;
			}
			case 17:
			{
				goto IL_013d;
			}
			case 18:
			{
				goto IL_013d;
			}
			case 19:
			{
				goto IL_013d;
			}
			case 20:
			{
				goto IL_013d;
			}
			case 21:
			{
				goto IL_013d;
			}
			case 22:
			{
				goto IL_013d;
			}
			case 23:
			{
				goto IL_013d;
			}
			case 24:
			{
				goto IL_013d;
			}
			case 25:
			{
				goto IL_0159;
			}
			case 26:
			{
				goto IL_0158;
			}
		}
	}

IL_013d:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)225))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)237))))
		{
			goto IL_0193;
		}
	}
	{
		goto IL_01a6;
	}

IL_0158:
	{
		return;
	}

IL_0159:
	{
		return;
	}

IL_015a:
	{
		ByteU5BU5D_t4116647657* L_33 = V_6;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_018e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_36 = V_6;
		NullCheck(L_36);
		int32_t L_37 = 3;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)120)))))
		{
			goto IL_018e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_39 = V_6;
		NullCheck(L_39);
		int32_t L_40 = 4;
		uint8_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)105)))))
		{
			goto IL_018e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_42 = V_6;
		NullCheck(L_42);
		int32_t L_43 = 5;
		uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_018e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_45 = V_6;
		ExifReader_ProcessExif_m210861036(__this, L_45, /*hidden argument*/NULL);
	}

IL_018e:
	{
		goto IL_01ab;
	}

IL_0193:
	{
		goto IL_01ab;
	}

IL_0198:
	{
		ByteU5BU5D_t4116647657* L_46 = V_6;
		int32_t L_47 = V_1;
		ExifReader_ProcessSOF_m1125152025(__this, L_46, L_47, /*hidden argument*/NULL);
		goto IL_01ab;
	}

IL_01a6:
	{
		goto IL_01ab;
	}

IL_01ab:
	{
		V_6 = (ByteU5BU5D_t4116647657*)NULL;
		GC_Collect_m743975114(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_01b3:
	{
		goto IL_0045;
	}
}
// ExifLib.JpegInfo ExifLib.ExifReader::get_info()
extern "C"  JpegInfo_t890611979 * ExifReader_get_info_m633487092 (ExifReader_t3571911595 * __this, const RuntimeMethod* method)
{
	{
		JpegInfo_t890611979 * L_0 = __this->get_U3CinfoU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ExifLib.ExifReader::set_info(ExifLib.JpegInfo)
extern "C"  void ExifReader_set_info_m3348235338 (ExifReader_t3571911595 * __this, JpegInfo_t890611979 * ___value0, const RuntimeMethod* method)
{
	{
		JpegInfo_t890611979 * L_0 = ___value0;
		__this->set_U3CinfoU3Ek__BackingField_0(L_0);
		return;
	}
}
// ExifLib.JpegInfo ExifLib.ExifReader::ReadJpeg(System.Byte[],System.String)
extern "C"  JpegInfo_t890611979 * ExifReader_ReadJpeg_m1439447182 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___fiBYTES0, String_t* ___Name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifReader_ReadJpeg_m1439447182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MemoryStream_t94973147 * V_1 = NULL;
	ExifReader_t3571911595 * V_2 = NULL;
	JpegInfo_t890611979 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = ___fiBYTES0;
		MemoryStream_t94973147 * L_2 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		MemoryStream_t94973147 * L_3 = V_1;
		ExifReader_t3571911595 * L_4 = (ExifReader_t3571911595 *)il2cpp_codegen_object_new(ExifReader_t3571911595_il2cpp_TypeInfo_var);
		ExifReader__ctor_m314026112(L_4, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		ExifReader_t3571911595 * L_5 = V_2;
		NullCheck(L_5);
		JpegInfo_t890611979 * L_6 = ExifReader_get_info_m633487092(L_5, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_7 = V_1;
		NullCheck(L_7);
		int64_t L_8 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_7);
		NullCheck(L_6);
		L_6->set_FileSize_1((((int32_t)((int32_t)L_8))));
		ExifReader_t3571911595 * L_9 = V_2;
		NullCheck(L_9);
		JpegInfo_t890611979 * L_10 = ExifReader_get_info_m633487092(L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___Name1;
		NullCheck(L_10);
		L_10->set_FileName_0(L_11);
		ExifReader_t3571911595 * L_12 = V_2;
		NullCheck(L_12);
		JpegInfo_t890611979 * L_13 = ExifReader_get_info_m633487092(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_14 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t3738529785  L_15 = V_0;
		TimeSpan_t881159249  L_16 = DateTime_op_Subtraction_m3579235380(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set_LoadTime_28(L_16);
		ExifReader_t3571911595 * L_17 = V_2;
		NullCheck(L_17);
		JpegInfo_t890611979 * L_18 = ExifReader_get_info_m633487092(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		IL2CPP_LEAVE(0x61, FINALLY_0054);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_19 = V_1;
			if (!L_19)
			{
				goto IL_0060;
			}
		}

IL_005a:
		{
			MemoryStream_t94973147 * L_20 = V_1;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_20);
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0061:
	{
		JpegInfo_t890611979 * L_21 = V_3;
		return L_21;
	}
}
// System.Void ExifLib.ExifReader::ProcessExif(System.Byte[])
extern "C"  void ExifReader_ProcessExif_m210861036 (ExifReader_t3571911595 * __this, ByteU5BU5D_t4116647657* ___section0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 6;
		ByteU5BU5D_t4116647657* L_0 = ___section0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_5 = ___section0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		ByteU5BU5D_t4116647657* L_10 = ___section0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_14 = ___section0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_003d;
		}
	}
	{
		__this->set_littleEndian_1((bool)1);
		goto IL_0060;
	}

IL_003d:
	{
		ByteU5BU5D_t4116647657* L_18 = ___section0;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_005f;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_22 = ___section0;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_005f;
		}
	}
	{
		__this->set_littleEndian_1((bool)0);
		goto IL_0060;
	}

IL_005f:
	{
		return;
	}

IL_0060:
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)2));
		ByteU5BU5D_t4116647657* L_27 = ___section0;
		int32_t L_28 = V_0;
		bool L_29 = __this->get_littleEndian_1();
		uint16_t L_30 = ExifIO_ReadUShort_m868989271(NULL /*static, unused*/, L_27, L_28, L_29, /*hidden argument*/NULL);
		V_1 = L_30;
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)2));
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)42))))
		{
			goto IL_007f;
		}
	}
	{
		return;
	}

IL_007f:
	{
		ByteU5BU5D_t4116647657* L_33 = ___section0;
		int32_t L_34 = V_0;
		bool L_35 = __this->get_littleEndian_1();
		int32_t L_36 = ExifIO_ReadInt_m2520572571(NULL /*static, unused*/, L_33, L_34, L_35, /*hidden argument*/NULL);
		V_1 = L_36;
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)4));
		int32_t L_38 = V_1;
		if ((((int32_t)L_38) < ((int32_t)8)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_39 = V_1;
		if ((((int32_t)L_39) <= ((int32_t)((int32_t)16))))
		{
			goto IL_00b5;
		}
	}

IL_00a0:
	{
		int32_t L_40 = V_1;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)16))))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_41 = V_1;
		ByteU5BU5D_t4116647657* L_42 = ___section0;
		NullCheck(L_42);
		if ((((int32_t)L_41) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_42)->max_length)))), (int32_t)((int32_t)16))))))
		{
			goto IL_00b5;
		}
	}

IL_00b4:
	{
		return;
	}

IL_00b5:
	{
		ByteU5BU5D_t4116647657* L_43 = ___section0;
		int32_t L_44 = V_1;
		ByteU5BU5D_t4116647657* L_45 = ___section0;
		NullCheck(L_45);
		ExifReader_ProcessExifDir_m613744390(__this, L_43, ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)8)), 8, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))), (int32_t)8)), 0, ((int32_t)34665), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExifLib.ExifReader::DirOffset(System.Int32,System.Int32)
extern "C"  int32_t ExifReader_DirOffset_m1501897435 (ExifReader_t3571911595 * __this, int32_t ___start0, int32_t ___num1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = ___num1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_1))));
	}
}
// System.Void ExifLib.ExifReader::ProcessExifDir(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,ExifLib.ExifIFD)
extern "C"  void ExifReader_ProcessExifDir_m613744390 (ExifReader_t3571911595 * __this, ByteU5BU5D_t4116647657* ___section0, int32_t ___offsetDir1, int32_t ___offsetBase2, int32_t ___length3, int32_t ___depth4, int32_t ___ifd5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifReader_ProcessExifDir_m613744390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ExifTag_t2496373222 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = ___depth4;
		if ((((int32_t)L_0) <= ((int32_t)4)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ByteU5BU5D_t4116647657* L_1 = ___section0;
		int32_t L_2 = ___offsetDir1;
		bool L_3 = __this->get_littleEndian_1();
		uint16_t L_4 = ExifIO_ReadUShort_m868989271(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___offsetDir1;
		uint16_t L_6 = V_0;
		int32_t L_7 = ___offsetDir1;
		int32_t L_8 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_6))))) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)))))
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		V_1 = 0;
		V_2 = 0;
		goto IL_00f8;
	}

IL_0032:
	{
		int32_t L_9 = ___offsetDir1;
		int32_t L_10 = V_2;
		int32_t L_11 = ExifReader_DirOffset_m1501897435(__this, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		ByteU5BU5D_t4116647657* L_12 = ___section0;
		int32_t L_13 = V_1;
		int32_t L_14 = ___offsetBase2;
		int32_t L_15 = ___length3;
		bool L_16 = __this->get_littleEndian_1();
		ExifTag_t2496373222 * L_17 = (ExifTag_t2496373222 *)il2cpp_codegen_object_new(ExifTag_t2496373222_il2cpp_TypeInfo_var);
		ExifTag__ctor_m1996171450(L_17, L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		ExifTag_t2496373222 * L_18 = V_3;
		NullCheck(L_18);
		bool L_19 = ExifTag_get_IsValid_m1926805274(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_005c;
		}
	}
	{
		goto IL_00f4;
	}

IL_005c:
	{
		ExifTag_t2496373222 * L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = ExifTag_get_Tag_m1393451932(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)34665))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)34853))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_00e1;
	}

IL_0081:
	{
		int32_t L_24 = ___offsetBase2;
		ExifTag_t2496373222 * L_25 = V_3;
		NullCheck(L_25);
		int32_t L_26 = ExifTag_GetInt_m1307753442(L_25, 0, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_26));
		int32_t L_27 = V_5;
		int32_t L_28 = ___offsetBase2;
		int32_t L_29 = ___length3;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29)))))
		{
			goto IL_00ac;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_30 = ___section0;
		int32_t L_31 = V_5;
		int32_t L_32 = ___offsetBase2;
		int32_t L_33 = ___length3;
		int32_t L_34 = ___depth4;
		ExifReader_ProcessExifDir_m613744390(__this, L_30, L_31, L_32, L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)), ((int32_t)34665), /*hidden argument*/NULL);
	}

IL_00ac:
	{
		goto IL_00f4;
	}

IL_00b1:
	{
		int32_t L_35 = ___offsetBase2;
		ExifTag_t2496373222 * L_36 = V_3;
		NullCheck(L_36);
		int32_t L_37 = ExifTag_GetInt_m1307753442(L_36, 0, /*hidden argument*/NULL);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_37));
		int32_t L_38 = V_6;
		int32_t L_39 = ___offsetBase2;
		int32_t L_40 = ___length3;
		if ((((int32_t)L_38) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40)))))
		{
			goto IL_00dc;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_41 = ___section0;
		int32_t L_42 = V_6;
		int32_t L_43 = ___offsetBase2;
		int32_t L_44 = ___length3;
		int32_t L_45 = ___depth4;
		ExifReader_ProcessExifDir_m613744390(__this, L_41, L_42, L_43, L_44, ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)), ((int32_t)34853), /*hidden argument*/NULL);
	}

IL_00dc:
	{
		goto IL_00f4;
	}

IL_00e1:
	{
		ExifTag_t2496373222 * L_46 = V_3;
		JpegInfo_t890611979 * L_47 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		int32_t L_48 = ___ifd5;
		NullCheck(L_46);
		VirtActionInvoker2< JpegInfo_t890611979 *, int32_t >::Invoke(4 /* System.Void ExifLib.ExifTag::Populate(ExifLib.JpegInfo,ExifLib.ExifIFD) */, L_46, L_47, L_48);
		goto IL_00f4;
	}

IL_00f4:
	{
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00f8:
	{
		int32_t L_50 = V_2;
		uint16_t L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_52 = ___offsetDir1;
		uint16_t L_53 = V_0;
		int32_t L_54 = ExifReader_DirOffset_m1501897435(__this, L_52, L_53, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)4));
		int32_t L_55 = V_1;
		int32_t L_56 = ___offsetBase2;
		int32_t L_57 = ___length3;
		if ((((int32_t)L_55) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)L_57)))))
		{
			goto IL_015a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_58 = ___section0;
		int32_t L_59 = ___offsetDir1;
		uint16_t L_60 = V_0;
		bool L_61 = __this->get_littleEndian_1();
		int32_t L_62 = ExifIO_ReadInt_m2520572571(NULL /*static, unused*/, L_58, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)12), (int32_t)L_60)))), L_61, /*hidden argument*/NULL);
		V_1 = L_62;
		int32_t L_63 = V_1;
		if ((((int32_t)L_63) <= ((int32_t)0)))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_64 = ___offsetBase2;
		int32_t L_65 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65));
		int32_t L_66 = V_7;
		int32_t L_67 = ___offsetBase2;
		int32_t L_68 = ___length3;
		if ((((int32_t)L_66) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)L_68)))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_69 = V_7;
		int32_t L_70 = ___offsetBase2;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_015a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_71 = ___section0;
		int32_t L_72 = V_7;
		int32_t L_73 = ___offsetBase2;
		int32_t L_74 = ___length3;
		int32_t L_75 = ___depth4;
		int32_t L_76 = ___ifd5;
		ExifReader_ProcessExifDir_m613744390(__this, L_71, L_72, L_73, L_74, ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1)), L_76, /*hidden argument*/NULL);
	}

IL_015a:
	{
		JpegInfo_t890611979 * L_77 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		NullCheck(L_77);
		ByteU5BU5D_t4116647657* L_78 = L_77->get_ThumbnailData_27();
		if (L_78)
		{
			goto IL_01d1;
		}
	}
	{
		JpegInfo_t890611979 * L_79 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		NullCheck(L_79);
		int32_t L_80 = L_79->get_ThumbnailOffset_25();
		if ((((int32_t)L_80) <= ((int32_t)0)))
		{
			goto IL_01d1;
		}
	}
	{
		JpegInfo_t890611979 * L_81 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		int32_t L_82 = L_81->get_ThumbnailSize_26();
		if ((((int32_t)L_82) <= ((int32_t)0)))
		{
			goto IL_01d1;
		}
	}
	{
		JpegInfo_t890611979 * L_83 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		JpegInfo_t890611979 * L_84 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		NullCheck(L_84);
		int32_t L_85 = L_84->get_ThumbnailSize_26();
		NullCheck(L_83);
		L_83->set_ThumbnailData_27(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_85)));
		ByteU5BU5D_t4116647657* L_86 = ___section0;
		int32_t L_87 = ___offsetBase2;
		JpegInfo_t890611979 * L_88 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		NullCheck(L_88);
		int32_t L_89 = L_88->get_ThumbnailOffset_25();
		JpegInfo_t890611979 * L_90 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		NullCheck(L_90);
		ByteU5BU5D_t4116647657* L_91 = L_90->get_ThumbnailData_27();
		JpegInfo_t890611979 * L_92 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		NullCheck(L_92);
		int32_t L_93 = L_92->get_ThumbnailSize_26();
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_86, ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_89)), (RuntimeArray *)(RuntimeArray *)L_91, 0, L_93, /*hidden argument*/NULL);
	}

IL_01d1:
	{
		return;
	}
}
// System.Void ExifLib.ExifReader::ProcessSOF(System.Byte[],System.Int32)
extern "C"  void ExifReader_ProcessSOF_m1125152025 (ExifReader_t3571911595 * __this, ByteU5BU5D_t4116647657* ___section0, int32_t ___marker1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		JpegInfo_t890611979 * L_0 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = ___section0;
		NullCheck(L_1);
		int32_t L_2 = 3;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_t4116647657* L_4 = ___section0;
		NullCheck(L_4);
		int32_t L_5 = 4;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_0);
		L_0->set_Height_4(((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)8))|(int32_t)L_6)));
		JpegInfo_t890611979 * L_7 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = ___section0;
		NullCheck(L_8);
		int32_t L_9 = 5;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_t4116647657* L_11 = ___section0;
		NullCheck(L_11);
		int32_t L_12 = 6;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		L_7->set_Width_3(((int32_t)((int32_t)((int32_t)((int32_t)L_10<<(int32_t)8))|(int32_t)L_13)));
		ByteU5BU5D_t4116647657* L_14 = ___section0;
		NullCheck(L_14);
		int32_t L_15 = 7;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = L_16;
		JpegInfo_t890611979 * L_17 = ExifReader_get_info_m633487092(__this, /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		L_17->set_IsColor_5((bool)((((int32_t)L_18) == ((int32_t)3))? 1 : 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExifLib.ExifTag::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void ExifTag__ctor_m1996171450 (ExifTag_t2496373222 * __this, ByteU5BU5D_t4116647657* ___section0, int32_t ___sectionOffset1, int32_t ___offsetBase2, int32_t ___length3, bool ___littleEndian4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifTag__ctor_m1996171450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ExifTag_set_IsValid_m2894412743(__this, (bool)0, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___section0;
		int32_t L_1 = ___sectionOffset1;
		bool L_2 = ___littleEndian4;
		uint16_t L_3 = ExifIO_ReadUShort_m868989271(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		ExifTag_set_Tag_m133286759(__this, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = ___section0;
		int32_t L_5 = ___sectionOffset1;
		bool L_6 = ___littleEndian4;
		uint16_t L_7 = ExifIO_ReadUShort_m868989271(NULL /*static, unused*/, L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)2)), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0038;
		}
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		ExifTag_set_Format_m474907940(__this, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_11 = ___section0;
		int32_t L_12 = ___sectionOffset1;
		bool L_13 = ___littleEndian4;
		int32_t L_14 = ExifIO_ReadInt_m2520572571(NULL /*static, unused*/, L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)4)), L_13, /*hidden argument*/NULL);
		ExifTag_set_Components_m3742742878(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = ExifTag_get_Components_m3807414858(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)65536))))
		{
			goto IL_0061;
		}
	}
	{
		return;
	}

IL_0061:
	{
		bool L_16 = ___littleEndian4;
		ExifTag_set_LittleEndian_m3687655741(__this, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ExifTag_get_Components_m3807414858(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExifTag_t2496373222_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_18 = ((ExifTag_t2496373222_StaticFields*)il2cpp_codegen_static_fields_for(ExifTag_t2496373222_il2cpp_TypeInfo_var))->get_BytesPerFormat_5();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_21));
		V_2 = 0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) <= ((int32_t)4)))
		{
			goto IL_00a1;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_23 = ___section0;
		int32_t L_24 = ___sectionOffset1;
		bool L_25 = ___littleEndian4;
		int32_t L_26 = ExifIO_ReadInt_m2520572571(NULL /*static, unused*/, L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)8)), L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		int32_t L_29 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28))) <= ((int32_t)L_29)))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_0098:
	{
		int32_t L_30 = ___offsetBase2;
		int32_t L_31 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31));
		goto IL_00a5;
	}

IL_00a1:
	{
		int32_t L_32 = ___sectionOffset1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)8));
	}

IL_00a5:
	{
		int32_t L_33 = V_1;
		ExifTag_set_Data_m4055696809(__this, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_33)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_34 = ___section0;
		int32_t L_35 = V_2;
		ByteU5BU5D_t4116647657* L_36 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		int32_t L_37 = V_1;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_34, L_35, (RuntimeArray *)(RuntimeArray *)L_36, 0, L_37, /*hidden argument*/NULL);
		ExifTag_set_IsValid_m2894412743(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExifLib.ExifTag::get_Tag()
extern "C"  int32_t ExifTag_get_Tag_m1393451932 (ExifTag_t2496373222 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTagU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ExifLib.ExifTag::set_Tag(System.Int32)
extern "C"  void ExifTag_set_Tag_m133286759 (ExifTag_t2496373222 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTagU3Ek__BackingField_0(L_0);
		return;
	}
}
// ExifLib.ExifTagFormat ExifLib.ExifTag::get_Format()
extern "C"  int32_t ExifTag_get_Format_m4009193219 (ExifTag_t2496373222 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFormatU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ExifLib.ExifTag::set_Format(ExifLib.ExifTagFormat)
extern "C"  void ExifTag_set_Format_m474907940 (ExifTag_t2496373222 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFormatU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 ExifLib.ExifTag::get_Components()
extern "C"  int32_t ExifTag_get_Components_m3807414858 (ExifTag_t2496373222 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CComponentsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExifLib.ExifTag::set_Components(System.Int32)
extern "C"  void ExifTag_set_Components_m3742742878 (ExifTag_t2496373222 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CComponentsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Byte[] ExifLib.ExifTag::get_Data()
extern "C"  ByteU5BU5D_t4116647657* ExifTag_get_Data_m2886868544 (ExifTag_t2496373222 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_U3CDataU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExifLib.ExifTag::set_Data(System.Byte[])
extern "C"  void ExifTag_set_Data_m4055696809 (ExifTag_t2496373222 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean ExifLib.ExifTag::get_LittleEndian()
extern "C"  bool ExifTag_get_LittleEndian_m3749007144 (ExifTag_t2496373222 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CLittleEndianU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExifLib.ExifTag::set_LittleEndian(System.Boolean)
extern "C"  void ExifTag_set_LittleEndian_m3687655741 (ExifTag_t2496373222 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CLittleEndianU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean ExifLib.ExifTag::get_IsValid()
extern "C"  bool ExifTag_get_IsValid_m1926805274 (ExifTag_t2496373222 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsValidU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExifLib.ExifTag::set_IsValid(System.Boolean)
extern "C"  void ExifTag_set_IsValid_m2894412743 (ExifTag_t2496373222 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsValidU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int16 ExifLib.ExifTag::ReadShort(System.Int32)
extern "C"  int16_t ExifTag_ReadShort_m267728558 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		bool L_2 = ExifTag_get_LittleEndian_m3749007144(__this, /*hidden argument*/NULL);
		int16_t L_3 = ExifIO_ReadShort_m3860138891(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt16 ExifLib.ExifTag::ReadUShort(System.Int32)
extern "C"  uint16_t ExifTag_ReadUShort_m2625065345 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		bool L_2 = ExifTag_get_LittleEndian_m3749007144(__this, /*hidden argument*/NULL);
		uint16_t L_3 = ExifIO_ReadUShort_m868989271(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 ExifLib.ExifTag::ReadInt(System.Int32)
extern "C"  int32_t ExifTag_ReadInt_m579302204 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		bool L_2 = ExifTag_get_LittleEndian_m3749007144(__this, /*hidden argument*/NULL);
		int32_t L_3 = ExifIO_ReadInt_m2520572571(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt32 ExifLib.ExifTag::ReadUInt(System.Int32)
extern "C"  uint32_t ExifTag_ReadUInt_m3368419728 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		bool L_2 = ExifTag_get_LittleEndian_m3749007144(__this, /*hidden argument*/NULL);
		uint32_t L_3 = ExifIO_ReadUInt_m2073734979(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single ExifLib.ExifTag::ReadSingle(System.Int32)
extern "C"  float ExifTag_ReadSingle_m2712062965 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		bool L_2 = ExifTag_get_LittleEndian_m3749007144(__this, /*hidden argument*/NULL);
		float L_3 = ExifIO_ReadSingle_m2491294796(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Double ExifLib.ExifTag::ReadDouble(System.Int32)
extern "C"  double ExifTag_ReadDouble_m1690842170 (ExifTag_t2496373222 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___offset0;
		bool L_2 = ExifTag_get_LittleEndian_m3749007144(__this, /*hidden argument*/NULL);
		double L_3 = ExifIO_ReadDouble_m214976151(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean ExifLib.ExifTag::get_IsNumeric()
extern "C"  bool ExifTag_get_IsNumeric_m2012998591 (ExifTag_t2496373222 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ExifTag_get_Format_m4009193219(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_001c;
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		return (bool)1;
	}
}
// System.Int32 ExifLib.ExifTag::GetInt(System.Int32)
extern "C"  int32_t ExifTag_GetInt_m1307753442 (ExifTag_t2496373222 * __this, int32_t ___componentIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___componentIndex0;
		double L_1 = ExifTag_GetNumericValue_m78339362(__this, L_0, /*hidden argument*/NULL);
		return (((int32_t)((int32_t)L_1)));
	}
}
// System.Double ExifLib.ExifTag::GetNumericValue(System.Int32)
extern "C"  double ExifTag_GetNumericValue_m78339362 (ExifTag_t2496373222 * __this, int32_t ___componentIndex0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ExifTag_get_Format_m4009193219(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_0059;
			}
			case 4:
			{
				goto IL_0065;
			}
			case 5:
			{
				goto IL_007f;
			}
			case 6:
			{
				goto IL_00cd;
			}
			case 7:
			{
				goto IL_008a;
			}
			case 8:
			{
				goto IL_0095;
			}
			case 9:
			{
				goto IL_00a0;
			}
			case 10:
			{
				goto IL_00b8;
			}
			case 11:
			{
				goto IL_00c3;
			}
		}
	}
	{
		goto IL_00cd;
	}

IL_0044:
	{
		ByteU5BU5D_t4116647657* L_2 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___componentIndex0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return (((double)((double)L_5)));
	}

IL_004e:
	{
		int32_t L_6 = ___componentIndex0;
		uint16_t L_7 = ExifTag_ReadUShort_m2625065345(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2)), /*hidden argument*/NULL);
		return (((double)((double)L_7)));
	}

IL_0059:
	{
		int32_t L_8 = ___componentIndex0;
		uint32_t L_9 = ExifTag_ReadUInt_m3368419728(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), /*hidden argument*/NULL);
		return (((double)((double)(((double)((uint32_t)L_9))))));
	}

IL_0065:
	{
		int32_t L_10 = ___componentIndex0;
		uint32_t L_11 = ExifTag_ReadUInt_m3368419728(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)8)), /*hidden argument*/NULL);
		int32_t L_12 = ___componentIndex0;
		uint32_t L_13 = ExifTag_ReadUInt_m3368419728(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)8)), (int32_t)4)), /*hidden argument*/NULL);
		return ((double)((double)(((double)((double)(((double)((uint32_t)L_11))))))/(double)(((double)((double)(((double)((uint32_t)L_13))))))));
	}

IL_007f:
	{
		ByteU5BU5D_t4116647657* L_14 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		int32_t L_15 = ___componentIndex0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		return (((double)((double)(((int8_t)((int8_t)L_17))))));
	}

IL_008a:
	{
		int32_t L_18 = ___componentIndex0;
		int16_t L_19 = ExifTag_ReadShort_m267728558(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)2)), /*hidden argument*/NULL);
		return (((double)((double)L_19)));
	}

IL_0095:
	{
		int32_t L_20 = ___componentIndex0;
		int32_t L_21 = ExifTag_ReadInt_m579302204(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)4)), /*hidden argument*/NULL);
		return (((double)((double)L_21)));
	}

IL_00a0:
	{
		int32_t L_22 = ___componentIndex0;
		int32_t L_23 = ExifTag_ReadInt_m579302204(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)8)), /*hidden argument*/NULL);
		int32_t L_24 = ___componentIndex0;
		int32_t L_25 = ExifTag_ReadInt_m579302204(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)8)), (int32_t)4)), /*hidden argument*/NULL);
		return ((double)((double)(((double)((double)L_23)))/(double)(((double)((double)L_25)))));
	}

IL_00b8:
	{
		int32_t L_26 = ___componentIndex0;
		float L_27 = ExifTag_ReadSingle_m2712062965(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)4)), /*hidden argument*/NULL);
		return (((double)((double)L_27)));
	}

IL_00c3:
	{
		int32_t L_28 = ___componentIndex0;
		double L_29 = ExifTag_ReadDouble_m1690842170(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)8)), /*hidden argument*/NULL);
		return L_29;
	}

IL_00cd:
	{
		return (0.0);
	}
}
// System.String ExifLib.ExifTag::GetStringValue()
extern "C"  String_t* ExifTag_GetStringValue_m1060216929 (ExifTag_t2496373222 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ExifTag_GetStringValue_m935421799(__this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String ExifLib.ExifTag::GetStringValue(System.Int32)
extern "C"  String_t* ExifTag_GetStringValue_m935421799 (ExifTag_t2496373222 * __this, int32_t ___componentIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifTag_GetStringValue_m935421799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	{
		int32_t L_0 = ExifTag_get_Format_m4009193219(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0064;
			}
			case 4:
			{
				goto IL_0027;
			}
			case 5:
			{
				goto IL_0034;
			}
		}
	}

IL_0027:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_00db;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_3 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = ExifTag_get_Data_m2886868544(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		CharU5BU5D_t3528271667* L_7 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)5));
		RuntimeFieldHandle_t1871169219  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2D82E371CA10D0D69A107BAEC0F50D274845971C1D_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_9 = String_Trim_m3384720403(L_6, L_7, /*hidden argument*/NULL);
		return L_9;
	}

IL_0064:
	{
		int32_t L_10 = ___componentIndex0;
		uint32_t L_11 = ExifTag_ReadUInt_m3368419728(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)8)), /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = UInt32_ToString_m2574561716((&V_1), /*hidden argument*/NULL);
		int32_t L_13 = ___componentIndex0;
		uint32_t L_14 = ExifTag_ReadUInt_m3368419728(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)8)), (int32_t)4)), /*hidden argument*/NULL);
		V_2 = L_14;
		String_t* L_15 = UInt32_ToString_m2574561716((&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3755062657(NULL /*static, unused*/, L_12, _stringLiteral3452614529, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_009f:
	{
		int32_t L_17 = ___componentIndex0;
		int32_t L_18 = ExifTag_ReadInt_m579302204(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)8)), /*hidden argument*/NULL);
		V_3 = L_18;
		String_t* L_19 = Int32_ToString_m141394615((&V_3), /*hidden argument*/NULL);
		int32_t L_20 = ___componentIndex0;
		int32_t L_21 = ExifTag_ReadInt_m579302204(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)8)), (int32_t)4)), /*hidden argument*/NULL);
		V_4 = L_21;
		String_t* L_22 = Int32_ToString_m141394615((&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m3755062657(NULL /*static, unused*/, L_19, _stringLiteral3452614529, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_00db:
	{
		int32_t L_24 = ___componentIndex0;
		double L_25 = ExifTag_GetNumericValue_m78339362(__this, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		String_t* L_26 = Double_ToString_m1229922074((&V_5), /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Void ExifLib.ExifTag::Populate(ExifLib.JpegInfo,ExifLib.ExifIFD)
extern "C"  void ExifTag_Populate_m3525940055 (ExifTag_t2496373222 * __this, JpegInfo_t890611979 * ___info0, int32_t ___ifd1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifTag_Populate_m3525940055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___ifd1;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)34665)))))
		{
			goto IL_0237;
		}
	}
	{
		int32_t L_1 = ExifTag_get_Tag_m1393451932(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)270))))
		{
			case 0:
			{
				goto IL_015c;
			}
			case 1:
			{
				goto IL_016d;
			}
			case 2:
			{
				goto IL_017e;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_0103;
			}
		}
	}

IL_0032:
	{
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)33432))))
		{
			case 0:
			{
				goto IL_01d5;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_01f7;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0209;
			}
		}
	}

IL_0056:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)256))))
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)257))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)282))))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)283))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)305))))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)306))))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)513))))
		{
			goto IL_01b1;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)514))))
		{
			goto IL_01c3;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)296))))
		{
			goto IL_0139;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)315))))
		{
			goto IL_01a0;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)37385))))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)37510))))
		{
			goto IL_01e6;
		}
	}
	{
		goto IL_022d;
	}

IL_00df:
	{
		JpegInfo_t890611979 * L_16 = ___info0;
		int32_t L_17 = ExifTag_GetInt_m1307753442(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_Width_3(L_17);
		goto IL_0232;
	}

IL_00f1:
	{
		JpegInfo_t890611979 * L_18 = ___info0;
		int32_t L_19 = ExifTag_GetInt_m1307753442(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_Height_4(L_19);
		goto IL_0232;
	}

IL_0103:
	{
		JpegInfo_t890611979 * L_20 = ___info0;
		int32_t L_21 = ExifTag_GetInt_m1307753442(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_Orientation_6(L_21);
		goto IL_0232;
	}

IL_0115:
	{
		JpegInfo_t890611979 * L_22 = ___info0;
		double L_23 = ExifTag_GetNumericValue_m78339362(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_XResolution_7(L_23);
		goto IL_0232;
	}

IL_0127:
	{
		JpegInfo_t890611979 * L_24 = ___info0;
		double L_25 = ExifTag_GetNumericValue_m78339362(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_YResolution_8(L_25);
		goto IL_0232;
	}

IL_0139:
	{
		JpegInfo_t890611979 * L_26 = ___info0;
		int32_t L_27 = ExifTag_GetInt_m1307753442(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_ResolutionUnit_9(L_27);
		goto IL_0232;
	}

IL_014b:
	{
		JpegInfo_t890611979 * L_28 = ___info0;
		String_t* L_29 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->set_DateTime_10(L_29);
		goto IL_0232;
	}

IL_015c:
	{
		JpegInfo_t890611979 * L_30 = ___info0;
		String_t* L_31 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		L_30->set_Description_11(L_31);
		goto IL_0232;
	}

IL_016d:
	{
		JpegInfo_t890611979 * L_32 = ___info0;
		String_t* L_33 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set_Make_12(L_33);
		goto IL_0232;
	}

IL_017e:
	{
		JpegInfo_t890611979 * L_34 = ___info0;
		String_t* L_35 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		L_34->set_Model_13(L_35);
		goto IL_0232;
	}

IL_018f:
	{
		JpegInfo_t890611979 * L_36 = ___info0;
		String_t* L_37 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->set_Software_14(L_37);
		goto IL_0232;
	}

IL_01a0:
	{
		JpegInfo_t890611979 * L_38 = ___info0;
		String_t* L_39 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		L_38->set_Artist_15(L_39);
		goto IL_0232;
	}

IL_01b1:
	{
		JpegInfo_t890611979 * L_40 = ___info0;
		int32_t L_41 = ExifTag_GetInt_m1307753442(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_40);
		L_40->set_ThumbnailOffset_25(L_41);
		goto IL_0232;
	}

IL_01c3:
	{
		JpegInfo_t890611979 * L_42 = ___info0;
		int32_t L_43 = ExifTag_GetInt_m1307753442(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_42);
		L_42->set_ThumbnailSize_26(L_43);
		goto IL_0232;
	}

IL_01d5:
	{
		JpegInfo_t890611979 * L_44 = ___info0;
		String_t* L_45 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		L_44->set_Copyright_16(L_45);
		goto IL_0232;
	}

IL_01e6:
	{
		JpegInfo_t890611979 * L_46 = ___info0;
		String_t* L_47 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		L_46->set_UserComment_17(L_47);
		goto IL_0232;
	}

IL_01f7:
	{
		JpegInfo_t890611979 * L_48 = ___info0;
		double L_49 = ExifTag_GetNumericValue_m78339362(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_48);
		L_48->set_ExposureTime_18(L_49);
		goto IL_0232;
	}

IL_0209:
	{
		JpegInfo_t890611979 * L_50 = ___info0;
		double L_51 = ExifTag_GetNumericValue_m78339362(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_50);
		L_50->set_FNumber_19(L_51);
		goto IL_0232;
	}

IL_021b:
	{
		JpegInfo_t890611979 * L_52 = ___info0;
		int32_t L_53 = ExifTag_GetInt_m1307753442(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_52);
		L_52->set_Flash_20(L_53);
		goto IL_0232;
	}

IL_022d:
	{
		goto IL_0232;
	}

IL_0232:
	{
		goto IL_0366;
	}

IL_0237:
	{
		int32_t L_54 = ___ifd1;
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)34853)))))
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_55 = ExifTag_get_Tag_m1393451932(__this, /*hidden argument*/NULL);
		V_1 = L_55;
		int32_t L_56 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0266;
			}
			case 1:
			{
				goto IL_02ea;
			}
			case 2:
			{
				goto IL_02a8;
			}
			case 3:
			{
				goto IL_0328;
			}
		}
	}
	{
		goto IL_0366;
	}

IL_0266:
	{
		String_t* L_57 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m920492651(NULL /*static, unused*/, L_57, _stringLiteral3452614626, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0287;
		}
	}
	{
		JpegInfo_t890611979 * L_59 = ___info0;
		NullCheck(L_59);
		L_59->set_GpsLatitudeRef_21(1);
		goto IL_02a3;
	}

IL_0287:
	{
		String_t* L_60 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_61 = String_op_Equality_m920492651(NULL /*static, unused*/, L_60, _stringLiteral3452614637, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_02a3;
		}
	}
	{
		JpegInfo_t890611979 * L_62 = ___info0;
		NullCheck(L_62);
		L_62->set_GpsLatitudeRef_21(2);
	}

IL_02a3:
	{
		goto IL_0366;
	}

IL_02a8:
	{
		String_t* L_63 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_64 = String_op_Equality_m920492651(NULL /*static, unused*/, L_63, _stringLiteral3452614619, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_02c9;
		}
	}
	{
		JpegInfo_t890611979 * L_65 = ___info0;
		NullCheck(L_65);
		L_65->set_GpsLongitudeRef_23(1);
		goto IL_02e5;
	}

IL_02c9:
	{
		String_t* L_66 = ExifTag_GetStringValue_m1060216929(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_67 = String_op_Equality_m920492651(NULL /*static, unused*/, L_66, _stringLiteral3452614633, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_02e5;
		}
	}
	{
		JpegInfo_t890611979 * L_68 = ___info0;
		NullCheck(L_68);
		L_68->set_GpsLongitudeRef_23(2);
	}

IL_02e5:
	{
		goto IL_0366;
	}

IL_02ea:
	{
		int32_t L_69 = ExifTag_get_Components_m3807414858(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_69) == ((uint32_t)3))))
		{
			goto IL_0323;
		}
	}
	{
		JpegInfo_t890611979 * L_70 = ___info0;
		NullCheck(L_70);
		DoubleU5BU5D_t3413330114* L_71 = L_70->get_GpsLatitude_22();
		double L_72 = ExifTag_GetNumericValue_m78339362(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_72);
		JpegInfo_t890611979 * L_73 = ___info0;
		NullCheck(L_73);
		DoubleU5BU5D_t3413330114* L_74 = L_73->get_GpsLatitude_22();
		double L_75 = ExifTag_GetNumericValue_m78339362(__this, 1, /*hidden argument*/NULL);
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_75);
		JpegInfo_t890611979 * L_76 = ___info0;
		NullCheck(L_76);
		DoubleU5BU5D_t3413330114* L_77 = L_76->get_GpsLatitude_22();
		double L_78 = ExifTag_GetNumericValue_m78339362(__this, 2, /*hidden argument*/NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)L_78);
	}

IL_0323:
	{
		goto IL_0366;
	}

IL_0328:
	{
		int32_t L_79 = ExifTag_get_Components_m3807414858(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_79) == ((uint32_t)3))))
		{
			goto IL_0361;
		}
	}
	{
		JpegInfo_t890611979 * L_80 = ___info0;
		NullCheck(L_80);
		DoubleU5BU5D_t3413330114* L_81 = L_80->get_GpsLongitude_24();
		double L_82 = ExifTag_GetNumericValue_m78339362(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_82);
		JpegInfo_t890611979 * L_83 = ___info0;
		NullCheck(L_83);
		DoubleU5BU5D_t3413330114* L_84 = L_83->get_GpsLongitude_24();
		double L_85 = ExifTag_GetNumericValue_m78339362(__this, 1, /*hidden argument*/NULL);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_85);
		JpegInfo_t890611979 * L_86 = ___info0;
		NullCheck(L_86);
		DoubleU5BU5D_t3413330114* L_87 = L_86->get_GpsLongitude_24();
		double L_88 = ExifTag_GetNumericValue_m78339362(__this, 2, /*hidden argument*/NULL);
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)L_88);
	}

IL_0361:
	{
		goto IL_0366;
	}

IL_0366:
	{
		return;
	}
}
// System.String ExifLib.ExifTag::ToString()
extern "C"  String_t* ExifTag_ToString_m290878038 (ExifTag_t2496373222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifTag_ToString_m290878038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)64), /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, _stringLiteral3456284560, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		int32_t L_3 = ExifTag_get_Tag_m1393451932(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = Int32_ToString_m372259452((&V_1), _stringLiteral3451303928, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_Append_m1965104174(L_2, L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_Append_m1965104174(L_5, _stringLiteral3452614531, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = V_0;
		int32_t L_7 = ExifTag_get_Tag_m1393451932(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		RuntimeObject * L_8 = Box(ExifId_t4133188253_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		V_2 = *(int32_t*)UnBox(L_8);
		NullCheck(L_6);
		StringBuilder_Append_m1965104174(L_6, L_9, /*hidden argument*/NULL);
		int32_t L_10 = ExifTag_get_Components_m3807414858(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_00ce;
		}
	}
	{
		StringBuilder_t * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3429825544, /*hidden argument*/NULL);
		StringBuilder_t * L_12 = V_0;
		String_t* L_13 = ExifTag_GetStringValue_m935421799(__this, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, L_13, /*hidden argument*/NULL);
		int32_t L_14 = ExifTag_get_Format_m4009193219(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)7)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_15 = ExifTag_get_Format_m4009193219(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_00c2;
		}
	}
	{
		V_3 = 1;
		goto IL_00b6;
	}

IL_009a:
	{
		StringBuilder_t * L_16 = V_0;
		int32_t L_17 = V_3;
		String_t* L_18 = ExifTag_GetStringValue_m935421799(__this, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3450517380, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = ExifTag_get_Components_m3807414858(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_009a;
		}
	}

IL_00c2:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m1965104174(L_23, _stringLiteral3452614535, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		return L_25;
	}
}
// System.Void ExifLib.ExifTag::.cctor()
extern "C"  void ExifTag__cctor_m372371328 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExifTag__cctor_m372371328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2DFCA0D902EC01054C3A221BFDCE2E1E13882E2C50_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((ExifTag_t2496373222_StaticFields*)il2cpp_codegen_static_fields_for(ExifTag_t2496373222_il2cpp_TypeInfo_var))->set_BytesPerFormat_5(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExifLib.JpegInfo::.ctor()
extern "C"  void JpegInfo__ctor_m1819165455 (JpegInfo_t890611979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JpegInfo__ctor_m1819165455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_GpsLatitude_22(((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)3)));
		__this->set_GpsLongitude_24(((DoubleU5BU5D_t3413330114*)SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, (uint32_t)3)));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IOSBridge::.ctor()
extern "C"  void IOSBridge__ctor_m1544919344 (IOSBridge_t3780229521 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL OpenImagePicker(char*, char*);
// System.Void IOSBridge::OpenImagePicker(System.String,System.String)
extern "C"  void IOSBridge_OpenImagePicker_m3264067964 (RuntimeObject * __this /* static, unused */, String_t* ___game_object_name0, String_t* ___function_name1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___game_object_name0' to native representation
	char* ____game_object_name0_marshaled = NULL;
	____game_object_name0_marshaled = il2cpp_codegen_marshal_string(___game_object_name0);

	// Marshaling of parameter '___function_name1' to native representation
	char* ____function_name1_marshaled = NULL;
	____function_name1_marshaled = il2cpp_codegen_marshal_string(___function_name1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OpenImagePicker)(____game_object_name0_marshaled, ____function_name1_marshaled);

	// Marshaling cleanup of parameter '___game_object_name0' native representation
	il2cpp_codegen_marshal_free(____game_object_name0_marshaled);
	____game_object_name0_marshaled = NULL;

	// Marshaling cleanup of parameter '___function_name1' native representation
	il2cpp_codegen_marshal_free(____function_name1_marshaled);
	____function_name1_marshaled = NULL;

}
// System.Void IOSBridge::OpenImagePickerHelper()
extern "C"  void IOSBridge_OpenImagePickerHelper_m546079777 (IOSBridge_t3780229521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IOSBridge_OpenImagePickerHelper_m546079777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m4211327027(L_0, /*hidden argument*/NULL);
		IOSBridge_OpenImagePicker_m3264067964(NULL /*static, unused*/, L_1, _stringLiteral2744270595, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSBridge::ImagePicked(System.String)
extern "C"  void IOSBridge_ImagePicked_m3273236912 (IOSBridge_t3780229521 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IOSBridge_ImagePicked_m3273236912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		((PicScript_t1716259096_StaticFields*)il2cpp_codegen_static_fields_for(PicScript_t1716259096_il2cpp_TypeInfo_var))->set_picPath_2(L_0);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral815815298, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSBridge::LoadCameraScene()
extern "C"  void IOSBridge_LoadCameraScene_m4072798933 (IOSBridge_t3780229521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IOSBridge_LoadCameraScene_m4072798933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral815815298, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PicScript::.ctor()
extern "C"  void PicScript__ctor_m4268398610 (PicScript_t1716259096 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PicScript::Awake()
extern "C"  void PicScript_Awake_m2923284338 (PicScript_t1716259096 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PicScript_Awake_m2923284338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_t2627027031 * L_1 = GameObject_GetComponent_TisRenderer_t2627027031_m1619941042(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1619941042_RuntimeMethod_var);
		__this->set_renderer_3(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_GetComponent_TisTransform_t3600365921_m3348034436(L_2, /*hidden argument*/GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var);
		__this->set_tref_4(L_3);
		return;
	}
}
// System.Void PicScript::Start()
extern "C"  void PicScript_Start_m329900146 (PicScript_t1716259096 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PicScript_Start_m329900146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((PicScript_t1716259096_StaticFields*)il2cpp_codegen_static_fields_for(PicScript_t1716259096_il2cpp_TypeInfo_var))->get_picPath_2();
		RuntimeObject* L_1 = PicScript_AssignTexture_m1267995811(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PicScript::AssignTexture(System.String)
extern "C"  RuntimeObject* PicScript_AssignTexture_m1267995811 (PicScript_t1716259096 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PicScript_AssignTexture_m1267995811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAssignTextureU3Ec__Iterator0_t1513172786 * V_0 = NULL;
	{
		U3CAssignTextureU3Ec__Iterator0_t1513172786 * L_0 = (U3CAssignTextureU3Ec__Iterator0_t1513172786 *)il2cpp_codegen_object_new(U3CAssignTextureU3Ec__Iterator0_t1513172786_il2cpp_TypeInfo_var);
		U3CAssignTextureU3Ec__Iterator0__ctor_m1154174765(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAssignTextureU3Ec__Iterator0_t1513172786 * L_1 = V_0;
		String_t* L_2 = ___path0;
		NullCheck(L_1);
		L_1->set_path_1(L_2);
		U3CAssignTextureU3Ec__Iterator0_t1513172786 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_3(__this);
		U3CAssignTextureU3Ec__Iterator0_t1513172786 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PicScript/<AssignTexture>c__Iterator0::.ctor()
extern "C"  void U3CAssignTextureU3Ec__Iterator0__ctor_m1154174765 (U3CAssignTextureU3Ec__Iterator0_t1513172786 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PicScript/<AssignTexture>c__Iterator0::MoveNext()
extern "C"  bool U3CAssignTextureU3Ec__Iterator0_MoveNext_m1665342726 (U3CAssignTextureU3Ec__Iterator0_t1513172786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAssignTextureU3Ec__Iterator0_MoveNext_m1665342726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_0168;
	}

IL_0023:
	{
		String_t* L_2 = __this->get_path_1();
		WWW_t3688466362 * L_3 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__1_0(L_3);
		V_0 = ((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0065;
				}
			}
		}

IL_0043:
		{
			WWW_t3688466362 * L_5 = __this->get_U3CwwwU3E__1_0();
			__this->set_U24current_4(L_5);
			bool L_6 = __this->get_U24disposing_5();
			if (L_6)
			{
				goto IL_005e;
			}
		}

IL_0057:
		{
			__this->set_U24PC_6(1);
		}

IL_005e:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x16A, FINALLY_0156);
		}

IL_0065:
		{
			WWW_t3688466362 * L_7 = __this->get_U3CwwwU3E__1_0();
			NullCheck(L_7);
			ByteU5BU5D_t4116647657* L_8 = WWW_get_bytes_m3061182897(L_7, /*hidden argument*/NULL);
			JpegInfo_t890611979 * L_9 = ExifReader_ReadJpeg_m1439447182(NULL /*static, unused*/, L_8, _stringLiteral2506556873, /*hidden argument*/NULL);
			__this->set_U3CjpiU3E__2_2(L_9);
			JpegInfo_t890611979 * L_10 = __this->get_U3CjpiU3E__2_2();
			NullCheck(L_10);
			int32_t L_11 = L_10->get_Orientation_6();
			V_2 = L_11;
			int32_t L_12 = V_2;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)3)))
			{
				case 0:
				{
					goto IL_0103;
				}
				case 1:
				{
					goto IL_012c;
				}
				case 2:
				{
					goto IL_012c;
				}
				case 3:
				{
					goto IL_00b1;
				}
				case 4:
				{
					goto IL_012c;
				}
				case 5:
				{
					goto IL_00da;
				}
			}
		}

IL_00ac:
		{
			goto IL_012c;
		}

IL_00b1:
		{
			PicScript_t1716259096 * L_13 = __this->get_U24this_3();
			NullCheck(L_13);
			Transform_t3600365921 * L_14 = L_13->get_tref_4();
			Vector3_t3722313464  L_15;
			memset(&L_15, 0, sizeof(L_15));
			Vector3__ctor_m3353183577((&L_15), (90.0f), (90.0f), (-90.0f), /*hidden argument*/NULL);
			NullCheck(L_14);
			Transform_set_localEulerAngles_m4202601546(L_14, L_15, /*hidden argument*/NULL);
			goto IL_0131;
		}

IL_00da:
		{
			PicScript_t1716259096 * L_16 = __this->get_U24this_3();
			NullCheck(L_16);
			Transform_t3600365921 * L_17 = L_16->get_tref_4();
			Vector3_t3722313464  L_18;
			memset(&L_18, 0, sizeof(L_18));
			Vector3__ctor_m3353183577((&L_18), (90.0f), (90.0f), (90.0f), /*hidden argument*/NULL);
			NullCheck(L_17);
			Transform_set_localEulerAngles_m4202601546(L_17, L_18, /*hidden argument*/NULL);
			goto IL_0131;
		}

IL_0103:
		{
			PicScript_t1716259096 * L_19 = __this->get_U24this_3();
			NullCheck(L_19);
			Transform_t3600365921 * L_20 = L_19->get_tref_4();
			Vector3_t3722313464  L_21;
			memset(&L_21, 0, sizeof(L_21));
			Vector3__ctor_m3353183577((&L_21), (90.0f), (90.0f), (180.0f), /*hidden argument*/NULL);
			NullCheck(L_20);
			Transform_set_localEulerAngles_m4202601546(L_20, L_21, /*hidden argument*/NULL);
			goto IL_0131;
		}

IL_012c:
		{
			goto IL_0131;
		}

IL_0131:
		{
			PicScript_t1716259096 * L_22 = __this->get_U24this_3();
			NullCheck(L_22);
			Renderer_t2627027031 * L_23 = L_22->get_renderer_3();
			NullCheck(L_23);
			Material_t340375123 * L_24 = Renderer_get_material_m4171603682(L_23, /*hidden argument*/NULL);
			WWW_t3688466362 * L_25 = __this->get_U3CwwwU3E__1_0();
			NullCheck(L_25);
			Texture2D_t3840446185 * L_26 = WWW_get_texture_m3513075325(L_25, /*hidden argument*/NULL);
			NullCheck(L_24);
			Material_set_mainTexture_m544811714(L_24, L_26, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x161, FINALLY_0156);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0156;
	}

FINALLY_0156:
	{ // begin finally (depth: 1)
		{
			bool L_27 = V_1;
			if (!L_27)
			{
				goto IL_015a;
			}
		}

IL_0159:
		{
			IL2CPP_END_FINALLY(342)
		}

IL_015a:
		{
			U3CAssignTextureU3Ec__Iterator0_U3CU3E__Finally0_m1523758864(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(342)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(342)
	{
		IL2CPP_JUMP_TBL(0x16A, IL_016a)
		IL2CPP_JUMP_TBL(0x161, IL_0161)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0161:
	{
		__this->set_U24PC_6((-1));
	}

IL_0168:
	{
		return (bool)0;
	}

IL_016a:
	{
		return (bool)1;
	}
}
// System.Object PicScript/<AssignTexture>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CAssignTextureU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1406674103 (U3CAssignTextureU3Ec__Iterator0_t1513172786 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object PicScript/<AssignTexture>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CAssignTextureU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3720213982 (U3CAssignTextureU3Ec__Iterator0_t1513172786 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void PicScript/<AssignTexture>c__Iterator0::Dispose()
extern "C"  void U3CAssignTextureU3Ec__Iterator0_Dispose_m1013991480 (U3CAssignTextureU3Ec__Iterator0_t1513172786 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		U3CAssignTextureU3Ec__Iterator0_U3CU3E__Finally0_m1523758864(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		return;
	}
}
// System.Void PicScript/<AssignTexture>c__Iterator0::Reset()
extern "C"  void U3CAssignTextureU3Ec__Iterator0_Reset_m4194145313 (U3CAssignTextureU3Ec__Iterator0_t1513172786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAssignTextureU3Ec__Iterator0_Reset_m4194145313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void PicScript/<AssignTexture>c__Iterator0::<>__Finally0()
extern "C"  void U3CAssignTextureU3Ec__Iterator0_U3CU3E__Finally0_m1523758864 (U3CAssignTextureU3Ec__Iterator0_t1513172786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAssignTextureU3Ec__Iterator0_U3CU3E__Finally0_m1523758864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WWW_t3688466362 * L_0 = __this->get_U3CwwwU3E__1_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		WWW_t3688466362 * L_1 = __this->get_U3CwwwU3E__1_0();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_1);
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoadScript::.ctor()
extern "C"  void SceneLoadScript__ctor_m3074408861 (SceneLoadScript_t1246790847 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneLoadScript::LoadMainScene()
extern "C"  void SceneLoadScript_LoadMainScene_m1722017152 (SceneLoadScript_t1246790847 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneLoadScript_LoadMainScene_m1722017152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3896133421, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextEditScript::.ctor()
extern "C"  void TextEditScript__ctor_m3813137441 (TextEditScript_t810641699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditScript__ctor_m3813137441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_desc_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextEditScript::Update()
extern "C"  void TextEditScript_Update_m1436742071 (TextEditScript_t810641699 * __this, const RuntimeMethod* method)
{
	{
		TouchScreenKeyboard_t731888065 * L_0 = __this->get_userKeyboard_5();
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		TouchScreenKeyboard_t731888065 * L_1 = __this->get_userKeyboard_5();
		NullCheck(L_1);
		bool L_2 = TouchScreenKeyboard_get_done_m3615485155(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		TouchScreenKeyboard_t731888065 * L_3 = __this->get_userKeyboard_5();
		NullCheck(L_3);
		String_t* L_4 = TouchScreenKeyboard_get_text_m1797464608(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_descLineLength_3();
		String_t* L_6 = TextEditScript_StringNewline_m4258088781(__this, L_4, L_5, /*hidden argument*/NULL);
		__this->set_desc_4(L_6);
		TextMesh_t1536577757 * L_7 = __this->get_photoDesc_2();
		String_t* L_8 = __this->get_desc_4();
		NullCheck(L_7);
		TextMesh_set_text_m446189179(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void TextEditScript::OpenKeyboard()
extern "C"  void TextEditScript_OpenKeyboard_m349707011 (TextEditScript_t810641699 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_desc_4();
		TouchScreenKeyboard_t731888065 * L_1 = TouchScreenKeyboard_Open_m871123569(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		__this->set_userKeyboard_5(L_1);
		return;
	}
}
// System.String TextEditScript::StringNewline(System.String,System.Int32)
extern "C"  String_t* TextEditScript_StringNewline_m4258088781 (TextEditScript_t810641699 * __this, String_t* ___s0, int32_t ___lineLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextEditScript_StringNewline_m4258088781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2 = String_Insert_m3534971326(L_0, L_1, _stringLiteral3452614566, /*hidden argument*/NULL);
		___s0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___lineLength1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		String_t* L_8 = ___s0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
