﻿#include "il2cpp-config.h"

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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>>
struct Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4;
// System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF;
// System.Exception
struct Exception_t;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ResolveEventHandler
struct ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Texture2DArray
struct Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8;
// UnityEngine.Texture3D
struct Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform/Enumerator
struct Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC;
// UnityEngine.U2D.SpriteAtlas
struct SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A;
// UnityEngine.UnityException
struct UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28;
// UnityEngine.UnityLogWriter
struct UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057;
// UnityEngine.UnitySynchronizationContext
struct UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87;
// UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate
struct ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD;
// UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate
struct StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166;
// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0;
// UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D;
// UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44;
// UnityEngineInternal.GenericStack
struct GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC;

extern RuntimeClass* Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285_il2cpp_TypeInfo_var;
extern RuntimeClass* ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36_il2cpp_TypeInfo_var;
extern RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408_il2cpp_TypeInfo_var;
extern RuntimeClass* MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_il2cpp_TypeInfo_var;
extern RuntimeClass* PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A_il2cpp_TypeInfo_var;
extern RuntimeClass* SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeechError_tF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317_il2cpp_TypeInfo_var;
extern RuntimeClass* SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_il2cpp_TypeInfo_var;
extern RuntimeClass* UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE_il2cpp_TypeInfo_var;
extern RuntimeClass* UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057_il2cpp_TypeInfo_var;
extern RuntimeClass* UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral30FA981B61585D6DE94376CB539A04A8A53C8580;
extern String_t* _stringLiteral4933CA96CF0AAE548DADE4A62F9E8129B5F1CC51;
extern String_t* _stringLiteral4F90C928BC21C17D86B46ADE7645DD1CF4D18346;
extern String_t* _stringLiteral5E1FAEFEBCA2C780744CF670E527AE37E3B7757E;
extern String_t* _stringLiteralA1AB8D43BB437DC1B58FC2E16B8304F6AB2BDA8F;
extern String_t* _stringLiteralB29BEC3A893F5759BD9E96C91C9F612E3591BE59;
extern String_t* _stringLiteralC21795AE8BD7A7002E8884AC9BF9FA8A63E03A2A;
extern const RuntimeMethod* Action_1_Invoke_m8196A911FEFF1B1CCF99728FA4F31C74795B7BE2_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3410995AC0E42939031462C4335B4BB5D6B65703_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_mF869CA06F0E5E20E3F4324AC19C43EE97B3F8A00_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m6CEDA29BC149C289844153D76DC5C3C0C08E60F5_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_mCB85E366C009F0103C201FC598C333739551C90A_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m1D0B3CE530D0868FE6EC47C9DEB8597E35F1FA02_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m3C8C1A0E9F46D5E873D295E87A03A2ED14C4C67F_RuntimeMethod_var;
extern const RuntimeMethod* SpriteAtlasManager_Register_m2C324F6E122AF09D44E4EE3F8F024323663670D2_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_RuntimeMethod_var;
extern const RuntimeMethod* Texture2DArray_Internal_Create_m01110342339A90ABB2DB4ED1E79C84CBE1DD794D_RuntimeMethod_var;
extern const RuntimeMethod* Texture3D_Internal_Create_mC9DE34B29A25742A7443EF94E1233587D2311212_RuntimeMethod_var;
extern const RuntimeMethod* UnhandledExceptionHandler_U3CRegisterUECatcherU3Em__0_mF2D7F9D1368BC0FABA9E4EE76C54D0482BCAD07B_RuntimeMethod_var;
extern const uint32_t DictationCompletedDelegate_BeginInvoke_m86D73A3A2CE70124C65709ADABB270C4F4A981F1_MetadataUsageId;
extern const uint32_t DictationErrorHandler_BeginInvoke_mD24E9C40E56521AC36B8D32518198DFB89D9827C_MetadataUsageId;
extern const uint32_t DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7_MetadataUsageId;
extern const uint32_t DictationRecognizer_Finalize_m3A9F239077BE32E93F9CA8431E79EE353822DDF2_MetadataUsageId;
extern const uint32_t DictationResultDelegate_BeginInvoke_mB1DAE084A144180C6B6C3FBB95FC11C953E51872_MetadataUsageId;
extern const uint32_t ErrorDelegate_BeginInvoke_m3A859400873FD62B71B597C2771E50F94B344E09_MetadataUsageId;
extern const uint32_t GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848_MetadataUsageId;
extern const uint32_t MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F_MetadataUsageId;
extern const uint32_t PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeErrorEvent_m9FF196C06264F6035686945A734E1AC01A0E2E33_MetadataUsageId;
extern const uint32_t PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeStatusChangedEvent_mF25930BC6443439CCBAF346B89799358451239D8_MetadataUsageId;
extern const uint32_t PhraseRecognizedDelegate_BeginInvoke_m262B7DABBDF14FCBFF43293BF2FB06AC676CB962_MetadataUsageId;
extern const uint32_t PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A_MetadataUsageId;
extern const uint32_t PhraseRecognizer_Finalize_m8B1591B513FE69C370C9AC8FCD13E2A091499E76_MetadataUsageId;
extern const uint32_t PhraseRecognizer_InvokePhraseRecognizedEvent_mDBD38FADAC58DF9B960342AC84EE32CF221B0F02_MetadataUsageId;
extern const uint32_t PhraseRecognizer_MarshalSemanticMeaning_m444804CA07F778FD0E23E78432EE0E377579C26A_MetadataUsageId;
extern const uint32_t SpriteAtlasManager_PostRegisteredAtlas_m2FCA85EDC754279C0A90CC3AF5E12C3E8F6A61CB_MetadataUsageId;
extern const uint32_t SpriteAtlasManager_RequestAtlas_m792F61C44C634D9E8F1E15401C8CECB7A12F5DDE_MetadataUsageId;
extern const uint32_t SpriteAtlasManager__cctor_m826C9096AB53C9C6CFCF342FA9FDC345A726B6C6_MetadataUsageId;
extern const uint32_t StatusDelegate_BeginInvoke_m814D9105249F941053622B079479E04A4FB6D227_MetadataUsageId;
extern const uint32_t Texture2DArray_Internal_Create_m01110342339A90ABB2DB4ED1E79C84CBE1DD794D_MetadataUsageId;
extern const uint32_t Texture3D_Internal_Create_mC9DE34B29A25742A7443EF94E1233587D2311212_MetadataUsageId;
extern const uint32_t TouchScreenKeyboard_Destroy_m916AE9DA740DBD435A5EDD93C6BC55CCEC8310C3_MetadataUsageId;
extern const uint32_t TrackedReference_Equals_mB1E157BE74CB5240DA6C4D3A38047A015B067C20_MetadataUsageId;
extern const uint32_t TrackedReference_op_Equality_m6176AA0B99576B1734E9A9D7DDA0A27ECACBAA96_MetadataUsageId;
extern const uint32_t Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC_MetadataUsageId;
extern const uint32_t Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD_MetadataUsageId;
extern const uint32_t Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282_MetadataUsageId;
extern const uint32_t UnhandledExceptionHandler_RegisterUECatcher_mE45C6A0301C35F6193F5774B7683683EF78D21DA_MetadataUsageId;
extern const uint32_t UnhandledExceptionHandler_U3CRegisterUECatcherU3Em__0_mF2D7F9D1368BC0FABA9E4EE76C54D0482BCAD07B_MetadataUsageId;
extern const uint32_t UnityException__ctor_m68C827240B217197615D8DA06FD3A443127D81DE_MetadataUsageId;
extern const uint32_t UnityException__ctor_mE42363D886E6DD7F075A6AEA689434C8E96722D9_MetadataUsageId;
extern const uint32_t UnityLogWriter_Init_mAD1F3BFE2183E39CFA1E7BEFB948B368547D9E99_MetadataUsageId;
extern const uint32_t UnityLogWriter__ctor_mE8DC0EAD466C5F290F6D32CC07F0F70590688833_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_CreateCopy_mC20AC170E7947120E65ED75D71889CDAC957A5CD_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_Exec_m07342201E337E047B73C8B3259710820EFF75A9C_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_ExecuteTasks_m027AF329D90D6451B83A2EAF3528C9021800A962_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_InitializeSynchronizationContext_m0F2A055040D6848FAD84A08DBC410E56B2D9E6A3_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_Post_mB4E900B6E9350E8E944011B6BF3D16C0657375FE_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_Send_m25CDC5B5ABF8D55B70EB314AA46923E3CF2AD4B9_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext__ctor_mCABD0C784640450930DF24FAD73E8AD6D1B52037_MetadataUsageId;
extern const uint32_t Vector2_Equals_m4A2A75BC3D09933321220BCEF21219B38AF643AE_MetadataUsageId;
extern const uint32_t Vector2_ToString_m83C7C331834382748956B053E252AE3BD21807C4_MetadataUsageId;
extern const uint32_t Vector2__cctor_m13D18E02B3AC28597F5049D2F54830C9E4BDBE84_MetadataUsageId;
extern const uint32_t Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8_MetadataUsageId;
extern const uint32_t Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588_MetadataUsageId;
extern const uint32_t Vector3Int_Equals_m704D204F83B9C64C7AF06152F98B542C5C400DC7_MetadataUsageId;
extern const uint32_t Vector3Int_Equals_m9F98F28666ADF5AD0575C4CABAF6881F1317D4C1_MetadataUsageId;
extern const uint32_t Vector3Int_ToString_m08AB1BE6A674B2669839B1C44ACCF6D85EBCFB91_MetadataUsageId;
extern const uint32_t Vector3Int__cctor_m0EE114B6FDC7C783EF7B206D4E25F5CE900003C9_MetadataUsageId;
extern const uint32_t Vector3_Equals_m1F74B1FB7EE51589FFFA61D894F616B8F258C056_MetadataUsageId;
extern const uint32_t Vector3_Magnitude_m3958BE20951093E6B035C5F90493027063B39437_MetadataUsageId;
extern const uint32_t Vector3_Normalize_mDEA51D0C131125535DA2B49B7281E0086ED583DC_MetadataUsageId;
extern const uint32_t Vector3_ToString_m2682D27AB50CD1CE4677C38D0720A302D582348D_MetadataUsageId;
extern const uint32_t Vector3__cctor_m83F3F89A8A8AFDBB54273660ABCA2E5AE1EAFDBD_MetadataUsageId;
extern const uint32_t Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D_MetadataUsageId;
extern const uint32_t Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274_MetadataUsageId;
extern const uint32_t Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B_MetadataUsageId;
extern const uint32_t Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7_MetadataUsageId;
extern const uint32_t Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2_MetadataUsageId;
extern const uint32_t Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806_MetadataUsageId;
extern const uint32_t Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E_MetadataUsageId;
extern const uint32_t Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5_MetadataUsageId;
extern const uint32_t Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9_MetadataUsageId;
extern const uint32_t Vector4__cctor_m478FA6A83B8E23F8323F150FF90B1FB934B1C251_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C;;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com;;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke;;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D;


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
#ifndef QUEUE_1_T5013087B759B43C61E25C7F29059343AA2B85B7A_H
#define QUEUE_1_T5013087B759B43C61E25C7F29059343AA2B85B7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct  Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A, ____array_0)); }
	inline WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0* get__array_0() const { return ____array_0; }
	inline WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T5013087B759B43C61E25C7F29059343AA2B85B7A_H
#ifndef STACK_1_T0D197BFD9E4E8ABDD6CB59029EE175E24078F45D_H
#define STACK_1_T0D197BFD9E4E8ABDD6CB59029EE175E24078F45D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T0D197BFD9E4E8ABDD6CB59029EE175E24078F45D_H
#ifndef EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#define EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
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
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CRITICALFINALIZEROBJECT_T8B006E1DEE084E781F5C0F3283E9226E28894DD9_H
#define CRITICALFINALIZEROBJECT_T8B006E1DEE084E781F5C0F3283E9226E28894DD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T8B006E1DEE084E781F5C0F3283E9226E28894DD9_H
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
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef SYNCHRONIZATIONCONTEXT_T06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_H
#define SYNCHRONIZATIONCONTEXT_T06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ENUMERATOR_T638F7B8050EF8C37413868F2AF7EA5E1D36123CC_H
#define ENUMERATOR_T638F7B8050EF8C37413868F2AF7EA5E1D36123CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC, ___outer_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_outer_0() const { return ___outer_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T638F7B8050EF8C37413868F2AF7EA5E1D36123CC_H
#ifndef SPRITEATLASMANAGER_T1C01B60566565F3F93DB97484F390383781FF98F_H
#define SPRITEATLASMANAGER_T1C01B60566565F3F93DB97484F390383781FF98F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields
{
public:
	// System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::atlasRegistered
	Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * ___atlasRegistered_1;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields, ___atlasRequested_0)); }
	inline Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_atlasRegistered_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields, ___atlasRegistered_1)); }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * get_atlasRegistered_1() const { return ___atlasRegistered_1; }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 ** get_address_of_atlasRegistered_1() { return &___atlasRegistered_1; }
	inline void set_atlasRegistered_1(Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * value)
	{
		___atlasRegistered_1 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRegistered_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T1C01B60566565F3F93DB97484F390383781FF98F_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_TF4F8A50BB2C5592177E80592BB181B43297850AC_H
#define UNHANDLEDEXCEPTIONHANDLER_TF4F8A50BB2C5592177E80592BB181B43297850AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__am$cache0
	UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * ___U3CU3Ef__amU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_TF4F8A50BB2C5592177E80592BB181B43297850AC_H
#ifndef PHRASERECOGNITIONSYSTEM_T0C199C0F115356F4FEB8DD938B25FB290B17FB7A_H
#define PHRASERECOGNITIONSYSTEM_T0C199C0F115356F4FEB8DD938B25FB290B17FB7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognitionSystem
struct  PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A  : public RuntimeObject
{
public:

public:
};

struct PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields
{
public:
	// UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate UnityEngine.Windows.Speech.PhraseRecognitionSystem::OnError
	ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * ___OnError_0;
	// UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate UnityEngine.Windows.Speech.PhraseRecognitionSystem::OnStatusChanged
	StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * ___OnStatusChanged_1;

public:
	inline static int32_t get_offset_of_OnError_0() { return static_cast<int32_t>(offsetof(PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields, ___OnError_0)); }
	inline ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * get_OnError_0() const { return ___OnError_0; }
	inline ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD ** get_address_of_OnError_0() { return &___OnError_0; }
	inline void set_OnError_0(ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * value)
	{
		___OnError_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnError_0), value);
	}

	inline static int32_t get_offset_of_OnStatusChanged_1() { return static_cast<int32_t>(offsetof(PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields, ___OnStatusChanged_1)); }
	inline StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * get_OnStatusChanged_1() const { return ___OnStatusChanged_1; }
	inline StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 ** get_address_of_OnStatusChanged_1() { return &___OnStatusChanged_1; }
	inline void set_OnStatusChanged_1(StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * value)
	{
		___OnStatusChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnStatusChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHRASERECOGNITIONSYSTEM_T0C199C0F115356F4FEB8DD938B25FB290B17FB7A_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef NETFXCOREEXTENSIONS_T7D32855D478E08AB317D48832133C0584F744747_H
#define NETFXCOREEXTENSIONS_T7D32855D478E08AB317D48832133C0584F744747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t7D32855D478E08AB317D48832133C0584F744747  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T7D32855D478E08AB317D48832133C0584F744747_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef TEXTWRITER_T92451D929322093838C41489883D5B2D7ABAF3F0_H
#define TEXTWRITER_T92451D929322093838C41489883D5B2D7ABAF3F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_9), value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalFormatProvider_10), value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharDelegate_2), value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&____WriteStringDelegate_3), value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharArrayRangeDelegate_4), value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharDelegate_5), value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineStringDelegate_6), value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharArrayRangeDelegate_7), value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____FlushDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T92451D929322093838C41489883D5B2D7ABAF3F0_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
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
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
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
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef THREAD_TF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_H
#define THREAD_TF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((&___internal_thread_6), value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_ThreadStartArg_7), value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_8), value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((&___principal_9), value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Delegate_12), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutionContext_13), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStoreMgr_0), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentCulture_4), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentUICulture_5), value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStore_1), value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentCulture_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentUICulture_3), value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((&___current_thread_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_TF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
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
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T39DD47D43B0D764FE2C9847FBE760031FBEA0FD1_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T39DD47D43B0D764FE2C9847FBE760031FBEA0FD1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.Object System.UnhandledExceptionEventArgs::_Exception
	RuntimeObject * ____Exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_IsTerminating
	bool ____IsTerminating_2;

public:
	inline static int32_t get_offset_of__Exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1, ____Exception_1)); }
	inline RuntimeObject * get__Exception_1() const { return ____Exception_1; }
	inline RuntimeObject ** get_address_of__Exception_1() { return &____Exception_1; }
	inline void set__Exception_1(RuntimeObject * value)
	{
		____Exception_1 = value;
		Il2CppCodeGenWriteBarrier((&____Exception_1), value);
	}

	inline static int32_t get_offset_of__IsTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1, ____IsTerminating_2)); }
	inline bool get__IsTerminating_2() const { return ____IsTerminating_2; }
	inline bool* get_address_of__IsTerminating_2() { return &____IsTerminating_2; }
	inline void set__IsTerminating_2(bool value)
	{
		____IsTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T39DD47D43B0D764FE2C9847FBE760031FBEA0FD1_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef UNITYEXCEPTION_T513F7D97037DB40AE78D7C3AAA2F9E011D050C28_H
#define UNITYEXCEPTION_T513F7D97037DB40AE78D7C3AAA2F9E011D050C28_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T513F7D97037DB40AE78D7C3AAA2F9E011D050C28_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T29A85681F976537109A84D2316E781568619F55F_H
#define UNITYSYNCHRONIZATIONCONTEXT_T29A85681F976537109A84D2316E781568619F55F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F  : public SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * ___m_AsyncWorkQueue_0;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_1;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_0() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F, ___m_AsyncWorkQueue_0)); }
	inline Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * get_m_AsyncWorkQueue_0() const { return ___m_AsyncWorkQueue_0; }
	inline Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A ** get_address_of_m_AsyncWorkQueue_0() { return &___m_AsyncWorkQueue_0; }
	inline void set_m_AsyncWorkQueue_0(Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * value)
	{
		___m_AsyncWorkQueue_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_0), value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F, ___m_MainThreadID_1)); }
	inline int32_t get_m_MainThreadID_1() const { return ___m_MainThreadID_1; }
	inline int32_t* get_address_of_m_MainThreadID_1() { return &___m_MainThreadID_1; }
	inline void set_m_MainThreadID_1(int32_t value)
	{
		___m_MainThreadID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T29A85681F976537109A84D2316E781568619F55F_H
#ifndef WORKREQUEST_T0247B62D135204EAA95FC0B2EC829CB27B433F94_H
#define WORKREQUEST_T0247B62D135204EAA95FC0B2EC829CB27B433F94_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_WaitHandle_2)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T0247B62D135204EAA95FC0B2EC829CB27B433F94_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR3INT_TA843C5F8C2EB42492786C5AF82C3E1F4929942B4_H
#define VECTOR3INT_TA843C5F8C2EB42492786C5AF82C3E1F4929942B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3Int
struct  Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Right_8;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_One_4)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Up_5)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Down_6)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Left_7)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Right_8)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Right_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3INT_TA843C5F8C2EB42492786C5AF82C3E1F4929942B4_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef WAITFORENDOFFRAME_T75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_H
#define WAITFORENDOFFRAME_T75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_H
#ifndef WAITFORFIXEDUPDATE_T8801328F075019AF6B6150B20EC343935A29FF97_H
#define WAITFORFIXEDUPDATE_T8801328F075019AF6B6150B20EC343935A29FF97_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T8801328F075019AF6B6150B20EC343935A29FF97_H
#ifndef WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#define WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifndef SEMANTICMEANING_TF87995FD36CA45112E60A5F76AA211FA13351F0C_H
#define SEMANTICMEANING_TF87995FD36CA45112E60A5F76AA211FA13351F0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.SemanticMeaning
struct  SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C 
{
public:
	// System.String UnityEngine.Windows.Speech.SemanticMeaning::key
	String_t* ___key_0;
	// System.String[] UnityEngine.Windows.Speech.SemanticMeaning::values
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C, ___values_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_values_1() const { return ___values_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke
{
	char* ___key_0;
	char** ___values_1;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com
{
	Il2CppChar* ___key_0;
	Il2CppChar** ___values_1;
};
#endif // SEMANTICMEANING_TF87995FD36CA45112E60A5F76AA211FA13351F0C_H
#ifndef GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#define GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC  : public Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#ifndef APPDOMAIN_T1B59572328F60585904DF52A59FE47CF5B5FFFF8_H
#define APPDOMAIN_T1B59572328F60585904DF52A59FE47CF5B5FFFF8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomain
struct  AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_6), value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((&____granted_7), value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyLoad_11), value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyResolve_12), value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___DomainUnload_13)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((&___DomainUnload_13), value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ProcessExit_14)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((&___ProcessExit_14), value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ResourceResolve_15)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceResolve_15), value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___TypeResolve_16)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((&___TypeResolve_16), value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((&___UnhandledException_17), value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___FirstChanceException_18)); }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((&___FirstChanceException_18), value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((&____domain_manager_19), value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectionOnlyAssemblyResolve_20), value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((&____activation_21), value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((&____applicationIdentity_22), value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___compatibility_switch_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((&___compatibility_switch_23), value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((&____process_guid_2), value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ___default_domain_10)); }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((&___default_domain_10), value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_resolve_in_progress_3), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_4), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_refonly_5), value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((&____principal_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
};
#endif // APPDOMAIN_T1B59572328F60585904DF52A59FE47CF5B5FFFF8_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef WAITHANDLE_TFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_H
#define WAITHANDLE_TFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___safeWaitHandle_4), value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
#endif // WAITHANDLE_TFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_H
#ifndef TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#define TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifndef FORMATUSAGE_T117AE34283B21B51894E10162A58F65FBF9E4D83_H
#define FORMATUSAGE_T117AE34283B21B51894E10162A58F65FBF9E4D83_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.FormatUsage
struct  FormatUsage_t117AE34283B21B51894E10162A58F65FBF9E4D83 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.FormatUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatUsage_t117AE34283B21B51894E10162A58F65FBF9E4D83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATUSAGE_T117AE34283B21B51894E10162A58F65FBF9E4D83_H
#ifndef GRAPHICSFORMAT_T512915BBE299AE115F4DB0B96DF1DA2E72ECA181_H
#define GRAPHICSFORMAT_T512915BBE299AE115F4DB0B96DF1DA2E72ECA181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct  GraphicsFormat_t512915BBE299AE115F4DB0B96DF1DA2E72ECA181 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t512915BBE299AE115F4DB0B96DF1DA2E72ECA181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHICSFORMAT_T512915BBE299AE115F4DB0B96DF1DA2E72ECA181_H
#ifndef TEXTURECREATIONFLAGS_T53DF64FEEF1551EC3224A2930BDFAAC63133E870_H
#define TEXTURECREATIONFLAGS_T53DF64FEEF1551EC3224A2930BDFAAC63133E870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.TextureCreationFlags
struct  TextureCreationFlags_t53DF64FEEF1551EC3224A2930BDFAAC63133E870 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.TextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureCreationFlags_t53DF64FEEF1551EC3224A2930BDFAAC63133E870, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURECREATIONFLAGS_T53DF64FEEF1551EC3224A2930BDFAAC63133E870_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#define SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#ifndef TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#define TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifndef TOUCHSCREENKEYBOARD_T2A69F85698E9780470181532D3F2BC903623FD90_H
#define TOUCHSCREENKEYBOARD_T2A69F85698E9780470181532D3F2BC903623FD90_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90, ___m_Ptr_0)); }
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
#endif // TOUCHSCREENKEYBOARD_T2A69F85698E9780470181532D3F2BC903623FD90_H
#ifndef TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#define TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#ifndef UNITYLOGWRITER_TC410B1D6FCF9C74F0B6915C8F97C75E103ED0057_H
#define UNITYLOGWRITER_TC410B1D6FCF9C74F0B6915C8F97C75E103ED0057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057  : public TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_TC410B1D6FCF9C74F0B6915C8F97C75E103ED0057_H
#ifndef VRTEXTUREUSAGE_T2D7C2397ABF03DD28086B969100F7D91DDD978A0_H
#define VRTEXTUREUSAGE_T2D7C2397ABF03DD28086B969100F7D91DDD978A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t2D7C2397ABF03DD28086B969100F7D91DDD978A0 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t2D7C2397ABF03DD28086B969100F7D91DDD978A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRTEXTUREUSAGE_T2D7C2397ABF03DD28086B969100F7D91DDD978A0_H
#ifndef CONFIDENCELEVEL_T56554EC6B602F1294B9E933704E2EC961906AA36_H
#define CONFIDENCELEVEL_T56554EC6B602F1294B9E933704E2EC961906AA36_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.ConfidenceLevel
struct  ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCELEVEL_T56554EC6B602F1294B9E933704E2EC961906AA36_H
#ifndef DICTATIONCOMPLETIONCAUSE_TAF978578CFACB799A3DB54BA549C780C5E181FC1_H
#define DICTATIONCOMPLETIONCAUSE_TAF978578CFACB799A3DB54BA549C780C5E181FC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationCompletionCause
struct  DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.DictationCompletionCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONCOMPLETIONCAUSE_TAF978578CFACB799A3DB54BA549C780C5E181FC1_H
#ifndef DICTATIONRECOGNIZER_TAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_H
#define DICTATIONRECOGNIZER_TAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer
struct  DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationHypothesis
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * ___DictationHypothesis_1;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationResult
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * ___DictationResult_2;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationComplete
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * ___DictationComplete_3;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler UnityEngine.Windows.Speech.DictationRecognizer::DictationError
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * ___DictationError_4;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesis_1() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationHypothesis_1)); }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * get_DictationHypothesis_1() const { return ___DictationHypothesis_1; }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF ** get_address_of_DictationHypothesis_1() { return &___DictationHypothesis_1; }
	inline void set_DictationHypothesis_1(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * value)
	{
		___DictationHypothesis_1 = value;
		Il2CppCodeGenWriteBarrier((&___DictationHypothesis_1), value);
	}

	inline static int32_t get_offset_of_DictationResult_2() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationResult_2)); }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * get_DictationResult_2() const { return ___DictationResult_2; }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 ** get_address_of_DictationResult_2() { return &___DictationResult_2; }
	inline void set_DictationResult_2(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * value)
	{
		___DictationResult_2 = value;
		Il2CppCodeGenWriteBarrier((&___DictationResult_2), value);
	}

	inline static int32_t get_offset_of_DictationComplete_3() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationComplete_3)); }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * get_DictationComplete_3() const { return ___DictationComplete_3; }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC ** get_address_of_DictationComplete_3() { return &___DictationComplete_3; }
	inline void set_DictationComplete_3(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * value)
	{
		___DictationComplete_3 = value;
		Il2CppCodeGenWriteBarrier((&___DictationComplete_3), value);
	}

	inline static int32_t get_offset_of_DictationError_4() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationError_4)); }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * get_DictationError_4() const { return ___DictationError_4; }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 ** get_address_of_DictationError_4() { return &___DictationError_4; }
	inline void set_DictationError_4(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * value)
	{
		___DictationError_4 = value;
		Il2CppCodeGenWriteBarrier((&___DictationError_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONRECOGNIZER_TAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_H
#ifndef PHRASERECOGNIZER_T3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F_H
#define PHRASERECOGNIZER_T3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognizer
struct  PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnPhraseRecognized_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHRASERECOGNIZER_T3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F_H
#ifndef SPEECHERROR_TF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7_H
#define SPEECHERROR_TF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.SpeechError
struct  SpeechError_tF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechError_tF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHERROR_TF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7_H
#ifndef SPEECHSYSTEMSTATUS_T2CCB4587008A89270736621140A65C1B5BB22317_H
#define SPEECHSYSTEMSTATUS_T2CCB4587008A89270736621140A65C1B5BB22317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.SpeechSystemStatus
struct  SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechSystemStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYSTEMSTATUS_T2CCB4587008A89270736621140A65C1B5BB22317_H
#ifndef MATHFINTERNAL_T3E913BDEA2E88DF117AEBE6A099B5922A78A1693_H
#define MATHFINTERNAL_T3E913BDEA2E88DF117AEBE6A099B5922A78A1693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693__padding[1];
	};

public:
};

struct MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T3E913BDEA2E88DF117AEBE6A099B5922A78A1693_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef EVENTWAITHANDLE_T7603BF1D3D30FE42DD07A450C8D09E2684DC4D98_H
#define EVENTWAITHANDLE_T7603BF1D3D30FE42DD07A450C8D09E2684DC4D98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98  : public WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T7603BF1D3D30FE42DD07A450C8D09E2684DC4D98_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#define TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifndef SPRITEATLAS_T3CCE7E93E25959957EF61B2A875FEF42DAD8537A_H
#define SPRITEATLAS_T3CCE7E93E25959957EF61B2A875FEF42DAD8537A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T3CCE7E93E25959957EF61B2A875FEF42DAD8537A_H
#ifndef PHRASERECOGNIZEDEVENTARGS_T5045E5956BF185A7C661A2B56466E9C6101BAFAD_H
#define PHRASERECOGNIZEDEVENTARGS_T5045E5956BF185A7C661A2B56466E9C6101BAFAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct  PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD 
{
public:
	// UnityEngine.Windows.Speech.ConfidenceLevel UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::confidence
	int32_t ___confidence_0;
	// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::semanticMeanings
	SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings_1;
	// System.String UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::text
	String_t* ___text_2;
	// System.DateTime UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseStartTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	// System.TimeSpan UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseDuration
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;

public:
	inline static int32_t get_offset_of_confidence_0() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___confidence_0)); }
	inline int32_t get_confidence_0() const { return ___confidence_0; }
	inline int32_t* get_address_of_confidence_0() { return &___confidence_0; }
	inline void set_confidence_0(int32_t value)
	{
		___confidence_0 = value;
	}

	inline static int32_t get_offset_of_semanticMeanings_1() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___semanticMeanings_1)); }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* get_semanticMeanings_1() const { return ___semanticMeanings_1; }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D** get_address_of_semanticMeanings_1() { return &___semanticMeanings_1; }
	inline void set_semanticMeanings_1(SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* value)
	{
		___semanticMeanings_1 = value;
		Il2CppCodeGenWriteBarrier((&___semanticMeanings_1), value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((&___text_2), value);
	}

	inline static int32_t get_offset_of_phraseStartTime_3() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseStartTime_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_phraseStartTime_3() const { return ___phraseStartTime_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_phraseStartTime_3() { return &___phraseStartTime_3; }
	inline void set_phraseStartTime_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___phraseStartTime_3 = value;
	}

	inline static int32_t get_offset_of_phraseDuration_4() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseDuration_4)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_phraseDuration_4() const { return ___phraseDuration_4; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_phraseDuration_4() { return &___phraseDuration_4; }
	inline void set_phraseDuration_4(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___phraseDuration_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke* ___semanticMeanings_1;
	char* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com* ___semanticMeanings_1;
	Il2CppChar* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
};
#endif // PHRASERECOGNIZEDEVENTARGS_T5045E5956BF185A7C661A2B56466E9C6101BAFAD_H
#ifndef ACTION_1_T148D4FE58B48D51DD45913A7B6EAA61E30D4B285_H
#define ACTION_1_T148D4FE58B48D51DD45913A7B6EAA61E30D4B285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct  Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T148D4FE58B48D51DD45913A7B6EAA61E30D4B285_H
#ifndef ACTION_2_T93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4_H
#define ACTION_2_T93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>>
struct  Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef MANUALRESETEVENT_TDFAF117B200ECA4CCF4FD09593F949A016D55408_H
#define MANUALRESETEVENT_TDFAF117B200ECA4CCF4FD09593F949A016D55408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408  : public EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_TDFAF117B200ECA4CCF4FD09593F949A016D55408_H
#ifndef SENDORPOSTCALLBACK_T3F9C0164860E4AA5138DF8B4488DFB0D33147F01_H
#define SENDORPOSTCALLBACK_T3F9C0164860E4AA5138DF8B4488DFB0D33147F01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T3F9C0164860E4AA5138DF8B4488DFB0D33147F01_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_TB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_TB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_TB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE_H
#ifndef TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#define TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifndef TEXTURE2DARRAY_T78E2A31569610CAD1EA2115AD121B771C4E454B8_H
#define TEXTURE2DARRAY_T78E2A31569610CAD1EA2115AD121B771C4E454B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2DArray
struct  Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2DARRAY_T78E2A31569610CAD1EA2115AD121B771C4E454B8_H
#ifndef TEXTURE3D_T041D3C554E80910E92D1EAAA85E0F70655FD66B4_H
#define TEXTURE3D_T041D3C554E80910E92D1EAAA85E0F70655FD66B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture3D
struct  Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE3D_T041D3C554E80910E92D1EAAA85E0F70655FD66B4_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef DICTATIONCOMPLETEDDELEGATE_TA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_H
#define DICTATIONCOMPLETEDDELEGATE_TA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct  DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONCOMPLETEDDELEGATE_TA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_H
#ifndef DICTATIONERRORHANDLER_T2FD4C7DAA73E5B75D13591C4D45523577C66FF13_H
#define DICTATIONERRORHANDLER_T2FD4C7DAA73E5B75D13591C4D45523577C66FF13_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct  DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONERRORHANDLER_T2FD4C7DAA73E5B75D13591C4D45523577C66FF13_H
#ifndef DICTATIONHYPOTHESISDELEGATE_TC4A57853B520FE11F0C48C80E2C8009B7A1691FF_H
#define DICTATIONHYPOTHESISDELEGATE_TC4A57853B520FE11F0C48C80E2C8009B7A1691FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct  DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONHYPOTHESISDELEGATE_TC4A57853B520FE11F0C48C80E2C8009B7A1691FF_H
#ifndef DICTATIONRESULTDELEGATE_T7827401C3739DC46ED8973A260871DC62D84DB87_H
#define DICTATIONRESULTDELEGATE_T7827401C3739DC46ED8973A260871DC62D84DB87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct  DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONRESULTDELEGATE_T7827401C3739DC46ED8973A260871DC62D84DB87_H
#ifndef ERRORDELEGATE_T26E96242D4BDCC52B918557A3AE80025E37FADBD_H
#define ERRORDELEGATE_T26E96242D4BDCC52B918557A3AE80025E37FADBD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate
struct  ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORDELEGATE_T26E96242D4BDCC52B918557A3AE80025E37FADBD_H
#ifndef STATUSDELEGATE_T2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166_H
#define STATUSDELEGATE_T2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate
struct  StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUSDELEGATE_T2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166_H
#ifndef PHRASERECOGNIZEDDELEGATE_TC74E35BB76ACD314D7112D01626D41BEDC01B0D0_H
#define PHRASERECOGNIZEDDELEGATE_TC74E35BB76ACD314D7112D01626D41BEDC01B0D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct  PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHRASERECOGNIZEDDELEGATE_TC74E35BB76ACD314D7112D01626D41BEDC01B0D0_H
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  m_Items[1];

public:
	inline SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled);
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke_back(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled);
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke_cleanup(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled);
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled);
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com_back(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled);
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com_cleanup(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled);

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m1D0B3CE530D0868FE6EC47C9DEB8597E35F1FA02_gshared (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCB85E366C009F0103C201FC598C333739551C90A_gshared (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * __this, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m3C8C1A0E9F46D5E873D295E87A03A2ED14C4C67F_gshared (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  Queue_1_Dequeue_m6CEDA29BC149C289844153D76DC5C3C0C08E60F5_gshared (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_gshared (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Texture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Texture__ctor_m19850F4654F76731DD82B99217AD5A2EB6974C6C (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture::ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
extern "C" IL2CPP_METHOD_ATTR bool Texture_ValidateFormat_mA62E75B693BFABECB7CB732C165139B8492DE0ED (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2DArray::Internal_Create(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray_Internal_Create_m01110342339A90ABB2DB4ED1E79C84CBE1DD794D (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture::ValidateFormat(UnityEngine.TextureFormat)
extern "C" IL2CPP_METHOD_ATTR bool Texture_ValidateFormat_m23ED49E24864EE9D1C4EF775002A91EE049561B1 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, int32_t ___format0, const RuntimeMethod* method);
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mBA4E395B8A78B67B0969356DE19F6F1E73D284E0 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)
extern "C" IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCrunchFormat_m97E8A6551AAEE6B1E4E92F92167FC97CC7D73DB1 (int32_t ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mEDE73B65A89EACA4B487FFBA92B155ED5B09970F (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, bool ___linear5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR bool Texture2DArray_Internal_CreateImpl_m11961106A999012827B209B1A32CEDA633F59E8B (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityException__ctor_mE42363D886E6DD7F075A6AEA689434C8E96722D9 (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture3D_Internal_Create_mC9DE34B29A25742A7443EF94E1233587D2311212 (Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR bool Texture3D_Internal_CreateImpl_mFEE8F9464580C55553DFB6F051FE793DD040B206 (Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.TouchScreenKeyboard::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Internal_Destroy_m6CD4E2343AB4FE54BC23DCFE62A50180CB3634E0 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Destroy_m916AE9DA740DBD435A5EDD93C6BC55CCEC8310C3 (TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" IL2CPP_METHOD_ATTR bool TrackedReference_op_Equality_m6176AA0B99576B1734E9A9D7DDA0A27ECACBAA96 (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * ___x0, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * ___y1, const RuntimeMethod* method);
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_mD69722A4C61D33FE70E790325C6E0DC690F9494F (intptr_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Component__ctor_m5E2740C0ACA4B368BC460315FAA2EDBFEAC0B8EF (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_position_Injected_mFD1BD0E2D17761BA08289ABBB4F87EDFFF7C1EBB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_Injected_mB6BEBF6B460A566E933ED59C4470ED58D81B3226 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_rotation_Injected_m41BEC8ACE323E571978CED341997B1174340701B (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::TransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_TransformDirection_Injected_m5E7C9D4E879820DF32F1CB1DE1504C59B8E98943 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_mBF5A46090D26A1DD98484C00389566FD8CB80770 (Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___outer0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.U2D.SpriteAtlas>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3410995AC0E42939031462C4335B4BB5D6B65703 (Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>>::Invoke(!0,!1)
inline void Action_2_Invoke_mF869CA06F0E5E20E3F4324AC19C43EE97B3F8A00 (Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * __this, String_t* p0, Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 *, String_t*, Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 *, const RuntimeMethod*))Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`1<UnityEngine.U2D.SpriteAtlas>::Invoke(!0)
inline void Action_1_Invoke_m8196A911FEFF1B1CCF99728FA4F31C74795B7BE2 (Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * __this, SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 *, SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" IL2CPP_METHOD_ATTR AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0 (const RuntimeMethod* method);
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m6C9D92AF9901334C444EE7E83FE859D7E4833ABB (UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" IL2CPP_METHOD_ATTR void AppDomain_add_UnhandledException_mEEDCA5704AE44AEE033BC4929067895C7EAC9D2D (AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * __this, UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * p0, const RuntimeMethod* method);
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_m1936F64BC46B54AA159A4B366BED7AF11DEED0C3 (UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99 (Exception_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.IO.TextWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextWriter__ctor_m9E003066292D16C33BCD9F462445436BCBF9AAFA (TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLogImpl_mA39CCE94FF5BD2ABD4A8C8D78A00E366C64B4985 (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter__ctor_mE8DC0EAD466C5F290F6D32CC07F0F70590688833 (UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057 * __this, const RuntimeMethod* method);
// System.Void System.Console::SetOut(System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void Console_SetOut_mAC2420DF73A65A087FAA07AB367F3B54785C30BF (TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * p0, const RuntimeMethod* method);
// System.String System.Char::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLog(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLog_m0036CA8A9FB1FE3CFF460CA0212B6377B09E6504 (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_mC7C5F426C3450ACA409B5FE89E961EB8E5047512 (SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
inline void Queue_1__ctor_m1D0B3CE530D0868FE6EC47C9DEB8597E35F1FA02 (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A *, int32_t, const RuntimeMethod*))Queue_1__ctor_m1D0B3CE530D0868FE6EC47C9DEB8597E35F1FA02_gshared)(__this, p0, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" IL2CPP_METHOD_ATTR Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C" IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m10442BF6A452A4408C3DDD1885D6809C4549C2AC (SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m8973D9E3C622B9602641C017A33870F51D0311E1 (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::.ctor(System.Threading.SendOrPostCallback,System.Object,System.Threading.ManualResetEvent)
extern "C" IL2CPP_METHOD_ATTR void WorkRequest__ctor_mE19AE1779B544378C8CB488F1576BDE618548599 (WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * __this, SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___callback0, RuntimeObject * ___state1, ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___waitHandle2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Enqueue(!0)
inline void Queue_1_Enqueue_mCB85E366C009F0103C201FC598C333739551C90A (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * __this, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A *, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 , const RuntimeMethod*))Queue_1_Enqueue_mCB85E366C009F0103C201FC598C333739551C90A_gshared)(__this, p0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_mBAC6AFEEE33B32388551C9E6A0B10799BC6C1FC9 (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * __this, Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * ___queue0, int32_t ___mainThreadID1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
inline int32_t Queue_1_get_Count_m3C8C1A0E9F46D5E873D295E87A03A2ED14C4C67F (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A *, const RuntimeMethod*))Queue_1_get_Count_m3C8C1A0E9F46D5E873D295E87A03A2ED14C4C67F_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Dequeue()
inline WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  Queue_1_Dequeue_m6CEDA29BC149C289844153D76DC5C3C0C08E60F5 (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * __this, const RuntimeMethod* method)
{
	return ((  WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  (*) (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A *, const RuntimeMethod*))Queue_1_Dequeue_m6CEDA29BC149C289844153D76DC5C3C0C08E60F5_gshared)(__this, method);
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::Invoke()
extern "C" IL2CPP_METHOD_ATTR void WorkRequest_Invoke_m67D71A48794EEBB6B9793E6F1E015DE90C03C1ED (WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * __this, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern "C" IL2CPP_METHOD_ATTR SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * SynchronizationContext_get_Current_m349D2AF9766D807E4003E23C6D37EF1592832DF4 (const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_mCABD0C784640450930DF24FAD73E8AD6D1B52037 (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * __this, int32_t ___mainThreadID0, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::SetSynchronizationContext(System.Threading.SynchronizationContext)
extern "C" IL2CPP_METHOD_ATTR void SynchronizationContext_SetSynchronizationContext_m41A5A4823E9F4B8961657834EAC44397EFE41D61 (SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Exec_m07342201E337E047B73C8B3259710820EFF75A9C (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387 (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.String UnityEngine.Vector2::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m83C7C331834382748956B053E252AE3BD21807C4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_Equals_m4A2A75BC3D09933321220BCEF21219B38AF643AE (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m6C42B4F413A489535D180E8A99BE0298AD078B0B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_Equals_m6B991540378DB8541CEB9472F7ED2BF5FF72B5DB (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_Equals_m1F74B1FB7EE51589FFFA61D894F616B8F258C056 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Magnitude_m3958BE20951093E6B035C5F90493027063B39437 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Normalize_mDEA51D0C131125535DA2B49B7281E0086ED583DC (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m2682D27AB50CD1CE4677C38D0720A302D582348D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_x()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m23CB00F1579FD4CE86291940E2E75FB13405D53A (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_y()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m1C2F0AB641A167DF22F9C3C57092EC05AEF8CA26 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_z()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m9A88DC2346FD1838EC611CC8AB2FC29951E94183 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3Int::Equals(UnityEngine.Vector3Int)
extern "C" IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m9F98F28666ADF5AD0575C4CABAF6881F1317D4C1 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3Int::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m704D204F83B9C64C7AF06152F98B542C5C400DC7 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3Int::op_Equality(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
extern "C" IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mC2E3A3395AC3E18397283F3CBEA7167B2E463DFC (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___lhs0, Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3Int_GetHashCode_m6CDE2FEC995180949111253817BD0E4ECE7EAE3D (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector3Int::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector3Int_ToString_m08AB1BE6A674B2669839B1C44ACCF6D85EBCFB91 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.String UnityEngine.Vector4::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DestroyThreaded(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void DictationHypothesisDelegate_Invoke_m13B00B4DADC3F35EF3655EFEA69A68917609CD53 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::Invoke(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void DictationResultDelegate_Invoke_mC2BCB095B651CD4DE23FED7A0A0C92A6684A5C91 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::Invoke(UnityEngine.Windows.Speech.DictationCompletionCause)
extern "C" IL2CPP_METHOD_ATTR void DictationCompletedDelegate_Invoke_m393D08D4E4C4BDC07D2C1086678A3BC34ADD5C37 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, int32_t ___cause0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::Invoke(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DictationErrorHandler_Invoke_mC67E23094C88F1042656F92133FE2C9E32FFA52F (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate::Invoke(UnityEngine.Windows.Speech.SpeechError)
extern "C" IL2CPP_METHOD_ATTR void ErrorDelegate_Invoke_m448BAD63228E49AEB609A60052F1E05C93853B17 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate::Invoke(UnityEngine.Windows.Speech.SpeechSystemStatus)
extern "C" IL2CPP_METHOD_ATTR void StatusDelegate_Invoke_mBA807D0015000ABE36C5B9B6F847D2882D3B26ED (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, int32_t ___status0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::.ctor(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.SemanticMeaning[],System.DateTime,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE (PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD * __this, String_t* ___text0, int32_t ___confidence1, SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime3, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration4, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::DestroyThreaded(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0 (intptr_t ___recognizer0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D (intptr_t ___recognizer0, const RuntimeMethod* method);
// System.DateTime System.DateTime::FromFileTime(System.Int64)
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676 (int64_t p0, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4 (int64_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate_Invoke_m6136E32699B51A86EA0C594D338C7EC29F493478 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  ___args0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t p0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char*)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m81EC77200D75146384415713DE908296720CFD95 (String_t* __this, Il2CppChar* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
inline void Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570 (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D *, const RuntimeMethod*))Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_gshared)(__this, method);
}
// System.Single System.Threading.Interlocked::CompareExchange(System.Single&,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Interlocked_CompareExchange_m2C6E1F976D009AB3858428E90B8F99F98F08155D (float* p0, float p1, float p2, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346 (Type_t * p0, RuntimeObject * p1, MethodInfo_t * p2, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048 (Delegate_t * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F_ftn) (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *);
	static Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_format()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Byte[] UnityEngine.Texture2D::GetRawTextureData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Texture2D_GetRawTextureData_m387AAB1686E27DA77F4065A2111DF18934AFB364 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*Texture2D_GetRawTextureData_m387AAB1686E27DA77F4065A2111DF18934AFB364_ftn) (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *);
	static Texture2D_GetRawTextureData_m387AAB1686E27DA77F4065A2111DF18934AFB364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetRawTextureData_m387AAB1686E27DA77F4065A2111DF18934AFB364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetRawTextureData()");
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mD92521FF6DA05FF47471B741DDC7E4D5B3C3F4E2 (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		Texture__ctor_m19850F4654F76731DD82B99217AD5A2EB6974C6C(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___format3;
		bool L_1 = Texture_ValidateFormat_mA62E75B693BFABECB7CB732C165139B8492DE0ED(__this, L_0, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = ___width0;
		int32_t L_3 = ___height1;
		int32_t L_4 = ___depth2;
		int32_t L_5 = ___format3;
		int32_t L_6 = ___flags4;
		Texture2DArray_Internal_Create_m01110342339A90ABB2DB4ED1E79C84CBE1DD794D(__this, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mEDE73B65A89EACA4B487FFBA92B155ED5B09970F (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, bool ___linear5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Texture__ctor_m19850F4654F76731DD82B99217AD5A2EB6974C6C(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___textureFormat3;
		bool L_1 = Texture_ValidateFormat_m23ED49E24864EE9D1C4EF775002A91EE049561B1(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_004f;
	}

IL_0019:
	{
		int32_t L_2 = ___textureFormat3;
		bool L_3 = ___linear5;
		int32_t L_4 = GraphicsFormatUtility_GetGraphicsFormat_mBA4E395B8A78B67B0969356DE19F6F1E73D284E0(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = 0;
		bool L_5 = ___mipChain4;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6|(int32_t)1));
	}

IL_0033:
	{
		int32_t L_7 = ___textureFormat3;
		bool L_8 = GraphicsFormatUtility_IsCrunchFormat_m97E8A6551AAEE6B1E4E92F92167FC97CC7D73DB1(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9|(int32_t)((int32_t)64)));
	}

IL_0044:
	{
		int32_t L_10 = ___width0;
		int32_t L_11 = ___height1;
		int32_t L_12 = ___depth2;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		Texture2DArray_Internal_Create_m01110342339A90ABB2DB4ED1E79C84CBE1DD794D(__this, L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray__ctor_mE0F6B7F60470C479258E1CC295456BCA103E66BF (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depth2;
		int32_t L_3 = ___textureFormat3;
		bool L_4 = ___mipChain4;
		Texture2DArray__ctor_mEDE73B65A89EACA4B487FFBA92B155ED5B09970F(__this, L_0, L_1, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR bool Texture2DArray_Internal_CreateImpl_m11961106A999012827B209B1A32CEDA633F59E8B (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method)
{
	typedef bool (*Texture2DArray_Internal_CreateImpl_m11961106A999012827B209B1A32CEDA633F59E8B_ftn) (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 *, int32_t, int32_t, int32_t, int32_t, int32_t);
	static Texture2DArray_Internal_CreateImpl_m11961106A999012827B209B1A32CEDA633F59E8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2DArray_Internal_CreateImpl_m11961106A999012827B209B1A32CEDA633F59E8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)");
	bool retVal = _il2cpp_icall_func(___mono0, ___w1, ___h2, ___d3, ___format4, ___flags5);
	return retVal;
}
// System.Void UnityEngine.Texture2DArray::Internal_Create(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray_Internal_Create_m01110342339A90ABB2DB4ED1E79C84CBE1DD794D (Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2DArray_Internal_Create_m01110342339A90ABB2DB4ED1E79C84CBE1DD794D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * L_0 = ___mono0;
		int32_t L_1 = ___w1;
		int32_t L_2 = ___h2;
		int32_t L_3 = ___d3;
		int32_t L_4 = ___format4;
		int32_t L_5 = ___flags5;
		bool L_6 = Texture2DArray_Internal_CreateImpl_m11961106A999012827B209B1A32CEDA633F59E8B(L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * L_7 = (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 *)il2cpp_codegen_object_new(UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var);
		UnityException__ctor_mE42363D886E6DD7F075A6AEA689434C8E96722D9(L_7, _stringLiteral30FA981B61585D6DE94376CB539A04A8A53C8580, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Texture2DArray_Internal_Create_m01110342339A90ABB2DB4ED1E79C84CBE1DD794D_RuntimeMethod_var);
	}

IL_001e:
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
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture3D__ctor_m080D4201C72C73ECB718F44491858309CDCCBF40 (Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		Texture__ctor_m19850F4654F76731DD82B99217AD5A2EB6974C6C(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___format3;
		bool L_1 = Texture_ValidateFormat_mA62E75B693BFABECB7CB732C165139B8492DE0ED(__this, L_0, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = ___width0;
		int32_t L_3 = ___height1;
		int32_t L_4 = ___depth2;
		int32_t L_5 = ___format3;
		int32_t L_6 = ___flags4;
		Texture3D_Internal_Create_mC9DE34B29A25742A7443EF94E1233587D2311212(__this, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture3D__ctor_m7086160504490544C327FF1C7823830B44441466 (Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Texture__ctor_m19850F4654F76731DD82B99217AD5A2EB6974C6C(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___textureFormat3;
		bool L_1 = Texture_ValidateFormat_m23ED49E24864EE9D1C4EF775002A91EE049561B1(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_004b;
	}

IL_0019:
	{
		int32_t L_2 = ___textureFormat3;
		int32_t L_3 = GraphicsFormatUtility_GetGraphicsFormat_mBA4E395B8A78B67B0969356DE19F6F1E73D284E0(L_2, (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		bool L_4 = ___mipChain4;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5|(int32_t)1));
	}

IL_002f:
	{
		int32_t L_6 = ___textureFormat3;
		bool L_7 = GraphicsFormatUtility_IsCrunchFormat_m97E8A6551AAEE6B1E4E92F92167FC97CC7D73DB1(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8|(int32_t)((int32_t)64)));
	}

IL_0040:
	{
		int32_t L_9 = ___width0;
		int32_t L_10 = ___height1;
		int32_t L_11 = ___depth2;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		Texture3D_Internal_Create_mC9DE34B29A25742A7443EF94E1233587D2311212(__this, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR bool Texture3D_Internal_CreateImpl_mFEE8F9464580C55553DFB6F051FE793DD040B206 (Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method)
{
	typedef bool (*Texture3D_Internal_CreateImpl_mFEE8F9464580C55553DFB6F051FE793DD040B206_ftn) (Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4 *, int32_t, int32_t, int32_t, int32_t, int32_t);
	static Texture3D_Internal_CreateImpl_mFEE8F9464580C55553DFB6F051FE793DD040B206_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture3D_Internal_CreateImpl_mFEE8F9464580C55553DFB6F051FE793DD040B206_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)");
	bool retVal = _il2cpp_icall_func(___mono0, ___w1, ___h2, ___d3, ___format4, ___flags5);
	return retVal;
}
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture3D_Internal_Create_mC9DE34B29A25742A7443EF94E1233587D2311212 (Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture3D_Internal_Create_mC9DE34B29A25742A7443EF94E1233587D2311212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture3D_t041D3C554E80910E92D1EAAA85E0F70655FD66B4 * L_0 = ___mono0;
		int32_t L_1 = ___w1;
		int32_t L_2 = ___h2;
		int32_t L_3 = ___d3;
		int32_t L_4 = ___format4;
		int32_t L_5 = ___flags5;
		bool L_6 = Texture3D_Internal_CreateImpl_mFEE8F9464580C55553DFB6F051FE793DD040B206(L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * L_7 = (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 *)il2cpp_codegen_object_new(UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var);
		UnityException__ctor_mE42363D886E6DD7F075A6AEA689434C8E96722D9(L_7, _stringLiteral5E1FAEFEBCA2C780744CF670E527AE37E3B7757E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Texture3D_Internal_Create_mC9DE34B29A25742A7443EF94E1233587D2311212_RuntimeMethod_var);
	}

IL_001e:
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
// System.Void UnityEngine.TouchScreenKeyboard::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Internal_Destroy_m6CD4E2343AB4FE54BC23DCFE62A50180CB3634E0 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*TouchScreenKeyboard_Internal_Destroy_m6CD4E2343AB4FE54BC23DCFE62A50180CB3634E0_ftn) (intptr_t);
	static TouchScreenKeyboard_Internal_Destroy_m6CD4E2343AB4FE54BC23DCFE62A50180CB3634E0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Internal_Destroy_m6CD4E2343AB4FE54BC23DCFE62A50180CB3634E0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Destroy_m916AE9DA740DBD435A5EDD93C6BC55CCEC8310C3 (TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchScreenKeyboard_Destroy_m916AE9DA740DBD435A5EDD93C6BC55CCEC8310C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_2 = __this->get_m_Ptr_0();
		TouchScreenKeyboard_Internal_Destroy_m6CD4E2343AB4FE54BC23DCFE62A50180CB3634E0((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Finalize_m684570CC561058F48B51F7E21A144299FBCE4C76 (TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		TouchScreenKeyboard_Destroy_m916AE9DA740DBD435A5EDD93C6BC55CCEC8310C3(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
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
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke(const TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107& unmarshaled, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_back(const TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke& marshaled, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_cleanup(TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_com(const TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107& unmarshaled, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_com_back(const TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_com& marshaled, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_com_cleanup(TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" IL2CPP_METHOD_ATTR bool TrackedReference_op_Equality_m6176AA0B99576B1734E9A9D7DDA0A27ECACBAA96 (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * ___x0, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedReference_op_Equality_m6176AA0B99576B1734E9A9D7DDA0A27ECACBAA96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	{
		TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * L_0 = ___x0;
		V_0 = L_0;
		TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * L_1 = ___y1;
		V_1 = L_1;
		RuntimeObject * L_2 = V_1;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0067;
	}

IL_0018:
	{
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * L_5 = ___x0;
		NullCheck(L_5);
		intptr_t L_6 = L_5->get_m_Ptr_0();
		bool L_7 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0067;
	}

IL_0034:
	{
		RuntimeObject * L_8 = V_0;
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * L_9 = ___y1;
		NullCheck(L_9);
		intptr_t L_10 = L_9->get_m_Ptr_0();
		bool L_11 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_10, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_0067;
	}

IL_0050:
	{
		TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * L_12 = ___x0;
		NullCheck(L_12);
		intptr_t L_13 = L_12->get_m_Ptr_0();
		TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * L_14 = ___y1;
		NullCheck(L_14);
		intptr_t L_15 = L_14->get_m_Ptr_0();
		bool L_16 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_13, (intptr_t)L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_0067;
	}

IL_0067:
	{
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TrackedReference_Equals_mB1E157BE74CB5240DA6C4D3A38047A015B067C20 (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedReference_Equals_mB1E157BE74CB5240DA6C4D3A38047A015B067C20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___o0;
		bool L_1 = TrackedReference_op_Equality_m6176AA0B99576B1734E9A9D7DDA0A27ECACBAA96(((TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 *)IsInstClass((RuntimeObject*)L_0, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedReference_GetHashCode_mFA57A6A43AAB04ACB6FFB4038646B4BCC56FA1D6 (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		int32_t L_1 = IntPtr_op_Explicit_mD69722A4C61D33FE70E790325C6E0DC690F9494F((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
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
// System.Void UnityEngine.Transform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Transform__ctor_mE8E10A06C8922623BAC6053550D19B2E297C2F35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m5E2740C0ACA4B368BC460315FAA2EDBFEAC0B8EF(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_position_Injected_mFD1BD0E2D17761BA08289ABBB4F87EDFFF7C1EBB(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Transform_set_position_Injected_mB6BEBF6B460A566E933ED59C4470ED58D81B3226(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_rotation_Injected_m41BEC8ACE323E571978CED341997B1174340701B(__this, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___relativeTo1;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___translation0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_1, L_2, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(__this, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_001e:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___translation0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(__this, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_6, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(__this, L_7, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___translation0;
		Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_TransformDirection_Injected_m5E7C9D4E879820DF32F1CB1DE1504C59B8E98943(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___direction0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724_ftn) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *);
	static Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC * L_0 = (Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC *)il2cpp_codegen_object_new(Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC_il2cpp_TypeInfo_var);
		Enumerator__ctor_mBF5A46090D26A1DD98484C00389566FD8CB80770(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3_ftn) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, int32_t);
	static Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * retVal = _il2cpp_icall_func(__this, ___index0);
	return retVal;
}
// System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_position_Injected_mFD1BD0E2D17761BA08289ABBB4F87EDFFF7C1EBB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_position_Injected_mFD1BD0E2D17761BA08289ABBB4F87EDFFF7C1EBB_ftn) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Transform_get_position_Injected_mFD1BD0E2D17761BA08289ABBB4F87EDFFF7C1EBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_position_Injected_mFD1BD0E2D17761BA08289ABBB4F87EDFFF7C1EBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_Injected_mB6BEBF6B460A566E933ED59C4470ED58D81B3226 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_set_position_Injected_mB6BEBF6B460A566E933ED59C4470ED58D81B3226_ftn) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Transform_set_position_Injected_mB6BEBF6B460A566E933ED59C4470ED58D81B3226_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_position_Injected_mB6BEBF6B460A566E933ED59C4470ED58D81B3226_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_rotation_Injected_m41BEC8ACE323E571978CED341997B1174340701B (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_rotation_Injected_m41BEC8ACE323E571978CED341997B1174340701B_ftn) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Transform_get_rotation_Injected_m41BEC8ACE323E571978CED341997B1174340701B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_rotation_Injected_m41BEC8ACE323E571978CED341997B1174340701B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::TransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_TransformDirection_Injected_m5E7C9D4E879820DF32F1CB1DE1504C59B8E98943 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*Transform_TransformDirection_Injected_m5E7C9D4E879820DF32F1CB1DE1504C59B8E98943_ftn) (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Transform_TransformDirection_Injected_m5E7C9D4E879820DF32F1CB1DE1504C59B8E98943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_TransformDirection_Injected_m5E7C9D4E879820DF32F1CB1DE1504C59B8E98943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::TransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___direction0, ___ret1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_mBF5A46090D26A1DD98484C00389566FD8CB80770 (Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___outer0;
		__this->set_outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD91FA41B0959224F24BF83051D46FCF3AF82F773 (Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_outer_0();
		int32_t L_1 = __this->get_currentIndex_1();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF27E895DC4BB3826D2F00E9484A9ECC635770031 (Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_outer_0();
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_currentIndex_1();
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		V_1 = L_3;
		__this->set_currentIndex_1(L_3);
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_6 = V_2;
		return L_6;
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
// System.Boolean UnityEngine.U2D.SpriteAtlasManager::RequestAtlas(System.String)
extern "C" IL2CPP_METHOD_ATTR bool SpriteAtlasManager_RequestAtlas_m792F61C44C634D9E8F1E15401C8CECB7A12F5DDE (String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager_RequestAtlas_m792F61C44C634D9E8F1E15401C8CECB7A12F5DDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* G_B3_0 = NULL;
	Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * G_B2_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var);
		Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * L_0 = ((SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var))->get_atlasRequested_0();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var);
		Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * L_1 = ((SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var))->get_atlasRequested_0();
		String_t* L_2 = ___tag0;
		Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * L_3 = ((SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_2();
		G_B2_0 = L_2;
		G_B2_1 = L_1;
		if (L_3)
		{
			G_B3_0 = L_2;
			G_B3_1 = L_1;
			goto IL_002a;
		}
	}
	{
		Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * L_4 = (Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 *)il2cpp_codegen_object_new(Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285_il2cpp_TypeInfo_var);
		Action_1__ctor_m3410995AC0E42939031462C4335B4BB5D6B65703(L_4, NULL, (intptr_t)((intptr_t)SpriteAtlasManager_Register_m2C324F6E122AF09D44E4EE3F8F024323663670D2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m3410995AC0E42939031462C4335B4BB5D6B65703_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var);
		((SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_2(L_4);
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var);
		Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * L_5 = ((SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_2();
		NullCheck(G_B3_1);
		Action_2_Invoke_mF869CA06F0E5E20E3F4324AC19C43EE97B3F8A00(G_B3_1, G_B3_0, L_5, /*hidden argument*/Action_2_Invoke_mF869CA06F0E5E20E3F4324AC19C43EE97B3F8A00_RuntimeMethod_var);
		V_0 = (bool)1;
		goto IL_0042;
	}

IL_003b:
	{
		V_0 = (bool)0;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::PostRegisteredAtlas(UnityEngine.U2D.SpriteAtlas)
extern "C" IL2CPP_METHOD_ATTR void SpriteAtlasManager_PostRegisteredAtlas_m2FCA85EDC754279C0A90CC3AF5E12C3E8F6A61CB (SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A * ___spriteAtlas0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager_PostRegisteredAtlas_m2FCA85EDC754279C0A90CC3AF5E12C3E8F6A61CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var);
		Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * L_0 = ((SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var))->get_atlasRegistered_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0018;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var);
		Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * L_1 = ((SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var))->get_atlasRegistered_1();
		SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A * L_2 = ___spriteAtlas0;
		NullCheck(L_1);
		Action_1_Invoke_m8196A911FEFF1B1CCF99728FA4F31C74795B7BE2(L_1, L_2, /*hidden argument*/Action_1_Invoke_m8196A911FEFF1B1CCF99728FA4F31C74795B7BE2_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
extern "C" IL2CPP_METHOD_ATTR void SpriteAtlasManager_Register_m2C324F6E122AF09D44E4EE3F8F024323663670D2 (SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A * ___spriteAtlas0, const RuntimeMethod* method)
{
	typedef void (*SpriteAtlasManager_Register_m2C324F6E122AF09D44E4EE3F8F024323663670D2_ftn) (SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A *);
	static SpriteAtlasManager_Register_m2C324F6E122AF09D44E4EE3F8F024323663670D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteAtlasManager_Register_m2C324F6E122AF09D44E4EE3F8F024323663670D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)");
	_il2cpp_icall_func(___spriteAtlas0);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SpriteAtlasManager__cctor_m826C9096AB53C9C6CFCF342FA9FDC345A726B6C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager__cctor_m826C9096AB53C9C6CFCF342FA9FDC345A726B6C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var))->set_atlasRequested_0((Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 *)NULL);
		((SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_il2cpp_TypeInfo_var))->set_atlasRegistered_1((Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 *)NULL);
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
// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionHandler_RegisterUECatcher_mE45C6A0301C35F6193F5774B7683683EF78D21DA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionHandler_RegisterUECatcher_mE45C6A0301C35F6193F5774B7683683EF78D21DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * G_B2_0 = NULL;
	AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * G_B1_0 = NULL;
	{
		AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * L_0 = AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0(/*hidden argument*/NULL);
		UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * L_1 = ((UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_StaticFields*)il2cpp_codegen_static_fields_for(UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_0();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * L_2 = (UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE *)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE_il2cpp_TypeInfo_var);
		UnhandledExceptionEventHandler__ctor_m6C9D92AF9901334C444EE7E83FE859D7E4833ABB(L_2, NULL, (intptr_t)((intptr_t)UnhandledExceptionHandler_U3CRegisterUECatcherU3Em__0_mF2D7F9D1368BC0FABA9E4EE76C54D0482BCAD07B_RuntimeMethod_var), /*hidden argument*/NULL);
		((UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_StaticFields*)il2cpp_codegen_static_fields_for(UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_0(L_2);
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * L_3 = ((UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_StaticFields*)il2cpp_codegen_static_fields_for(UnhandledExceptionHandler_tF4F8A50BB2C5592177E80592BB181B43297850AC_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_0();
		NullCheck(G_B2_0);
		AppDomain_add_UnhandledException_mEEDCA5704AE44AEE033BC4929067895C7EAC9D2D(G_B2_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::<RegisterUECatcher>m__0(System.Object,System.UnhandledExceptionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionHandler_U3CRegisterUECatcherU3Em__0_mF2D7F9D1368BC0FABA9E4EE76C54D0482BCAD07B (RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionHandler_U3CRegisterUECatcherU3Em__0_mF2D7F9D1368BC0FABA9E4EE76C54D0482BCAD07B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * L_0 = ___e1;
		NullCheck(L_0);
		RuntimeObject * L_1 = UnhandledExceptionEventArgs_get_ExceptionObject_m1936F64BC46B54AA159A4B366BED7AF11DEED0C3(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(((Exception_t *)IsInstClass((RuntimeObject*)L_1, Exception_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
// System.Void UnityEngine.UnityException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityException__ctor_m68C827240B217197615D8DA06FD3A443127D81DE (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityException__ctor_m68C827240B217197615D8DA06FD3A443127D81DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, _stringLiteralC21795AE8BD7A7002E8884AC9BF9FA8A63E03A2A, /*hidden argument*/NULL);
		Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityException__ctor_mE42363D886E6DD7F075A6AEA689434C8E96722D9 (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityException__ctor_mE42363D886E6DD7F075A6AEA689434C8E96722D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
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
// System.Void UnityEngine.UnityLogWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter__ctor_mE8DC0EAD466C5F290F6D32CC07F0F70590688833 (UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLogWriter__ctor_mE8DC0EAD466C5F290F6D32CC07F0F70590688833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_il2cpp_TypeInfo_var);
		TextWriter__ctor_m9E003066292D16C33BCD9F462445436BCBF9AAFA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLog(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLog_m0036CA8A9FB1FE3CFF460CA0212B6377B09E6504 (String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_1 = ___s0;
		UnityLogWriter_WriteStringToUnityLogImpl_mA39CCE94FF5BD2ABD4A8C8D78A00E366C64B4985(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLogImpl_mA39CCE94FF5BD2ABD4A8C8D78A00E366C64B4985 (String_t* ___s0, const RuntimeMethod* method)
{
	typedef void (*UnityLogWriter_WriteStringToUnityLogImpl_mA39CCE94FF5BD2ABD4A8C8D78A00E366C64B4985_ftn) (String_t*);
	static UnityLogWriter_WriteStringToUnityLogImpl_mA39CCE94FF5BD2ABD4A8C8D78A00E366C64B4985_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityLogWriter_WriteStringToUnityLogImpl_mA39CCE94FF5BD2ABD4A8C8D78A00E366C64B4985_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)");
	_il2cpp_icall_func(___s0);
}
// System.Void UnityEngine.UnityLogWriter::Init()
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_Init_mAD1F3BFE2183E39CFA1E7BEFB948B368547D9E99 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLogWriter_Init_mAD1F3BFE2183E39CFA1E7BEFB948B368547D9E99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057 * L_0 = (UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057 *)il2cpp_codegen_object_new(UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057_il2cpp_TypeInfo_var);
		UnityLogWriter__ctor_mE8DC0EAD466C5F290F6D32CC07F0F70590688833(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_SetOut_mAC2420DF73A65A087FAA07AB367F3B54785C30BF(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.Char)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_Write_mB1200B0B26545C48E178BFE952BEE14BDE53D2A7 (UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___value0), /*hidden argument*/NULL);
		UnityLogWriter_WriteStringToUnityLog_m0036CA8A9FB1FE3CFF460CA0212B6377B09E6504(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_Write_mE3A4616A06A79B87512C3B0C8100EB508BB85C52 (UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		UnityLogWriter_WriteStringToUnityLog_m0036CA8A9FB1FE3CFF460CA0212B6377B09E6504(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_Write_mE21873E7757E51C3771C58321E995DEBB2ADF750 (UnityLogWriter_tC410B1D6FCF9C74F0B6915C8F97C75E103ED0057 * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ___buffer0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		String_t* L_3 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		UnityLogWriter_WriteStringToUnityLogImpl_mA39CCE94FF5BD2ABD4A8C8D78A00E366C64B4985(L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_mCABD0C784640450930DF24FAD73E8AD6D1B52037 (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * __this, int32_t ___mainThreadID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext__ctor_mCABD0C784640450930DF24FAD73E8AD6D1B52037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext__ctor_mC7C5F426C3450ACA409B5FE89E961EB8E5047512(__this, /*hidden argument*/NULL);
		Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_0 = (Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A *)il2cpp_codegen_object_new(Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1D0B3CE530D0868FE6EC47C9DEB8597E35F1FA02(L_0, ((int32_t)20), /*hidden argument*/Queue_1__ctor_m1D0B3CE530D0868FE6EC47C9DEB8597E35F1FA02_RuntimeMethod_var);
		__this->set_m_AsyncWorkQueue_0(L_0);
		int32_t L_1 = ___mainThreadID0;
		__this->set_m_MainThreadID_1(L_1);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_mBAC6AFEEE33B32388551C9E6A0B10799BC6C1FC9 (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * __this, Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * ___queue0, int32_t ___mainThreadID1, const RuntimeMethod* method)
{
	{
		SynchronizationContext__ctor_mC7C5F426C3450ACA409B5FE89E961EB8E5047512(__this, /*hidden argument*/NULL);
		Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_0 = ___queue0;
		__this->set_m_AsyncWorkQueue_0(L_0);
		int32_t L_1 = ___mainThreadID1;
		__this->set_m_MainThreadID_1(L_1);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Send(System.Threading.SendOrPostCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Send_m25CDC5B5ABF8D55B70EB314AA46923E3CF2AD4B9 (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * __this, SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Send_m25CDC5B5ABF8D55B70EB314AA46923E3CF2AD4B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_m_MainThreadID_1();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0024;
		}
	}
	{
		SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_3 = ___callback0;
		RuntimeObject * L_4 = ___state1;
		NullCheck(L_3);
		SendOrPostCallback_Invoke_m10442BF6A452A4408C3DDD1885D6809C4549C2AC(L_3, L_4, /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0024:
	{
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_5 = (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 *)il2cpp_codegen_object_new(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m8973D9E3C622B9602641C017A33870F51D0311E1(L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_6 = __this->get_m_AsyncWorkQueue_0();
			V_1 = L_6;
			RuntimeObject * L_7 = V_1;
			Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_7, /*hidden argument*/NULL);
		}

IL_003a:
		try
		{ // begin try (depth: 2)
			Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_8 = __this->get_m_AsyncWorkQueue_0();
			SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_9 = ___callback0;
			RuntimeObject * L_10 = ___state1;
			ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_11 = V_0;
			WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  L_12;
			memset(&L_12, 0, sizeof(L_12));
			WorkRequest__ctor_mE19AE1779B544378C8CB488F1576BDE618548599((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
			NullCheck(L_8);
			Queue_1_Enqueue_mCB85E366C009F0103C201FC598C333739551C90A(L_8, L_12, /*hidden argument*/Queue_1_Enqueue_mCB85E366C009F0103C201FC598C333739551C90A_RuntimeMethod_var);
			IL2CPP_LEAVE(0x5B, FINALLY_0054);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0054;
		}

FINALLY_0054:
		{ // begin finally (depth: 2)
			RuntimeObject * L_13 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_13, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(84)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(84)
		{
			IL2CPP_JUMP_TBL(0x5B, IL_005b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_005b:
		{
			ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_14 = V_0;
			NullCheck(L_14);
			VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_14);
			IL2CPP_LEAVE(0x75, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		{
			ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_15 = V_0;
			if (!L_15)
			{
				goto IL_0074;
			}
		}

IL_006e:
		{
			ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_16 = V_0;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_16);
		}

IL_0074:
		{
			IL2CPP_END_FINALLY(104)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0075:
	{
	}

IL_0076:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Post_mB4E900B6E9350E8E944011B6BF3D16C0657375FE (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * __this, SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Post_mB4E900B6E9350E8E944011B6BF3D16C0657375FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_0 = __this->get_m_AsyncWorkQueue_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_2 = __this->get_m_AsyncWorkQueue_0();
		SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_3 = ___callback0;
		RuntimeObject * L_4 = ___state1;
		WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  L_5;
		memset(&L_5, 0, sizeof(L_5));
		WorkRequest__ctor_mE19AE1779B544378C8CB488F1576BDE618548599((&L_5), L_3, L_4, (ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_2);
		Queue_1_Enqueue_mCB85E366C009F0103C201FC598C333739551C90A(L_2, L_5, /*hidden argument*/Queue_1_Enqueue_mCB85E366C009F0103C201FC598C333739551C90A_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002f:
	{
		return;
	}
}
// System.Threading.SynchronizationContext UnityEngine.UnitySynchronizationContext::CreateCopy()
extern "C" IL2CPP_METHOD_ATTR SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * UnitySynchronizationContext_CreateCopy_mC20AC170E7947120E65ED75D71889CDAC957A5CD (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_CreateCopy_mC20AC170E7947120E65ED75D71889CDAC957A5CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * V_0 = NULL;
	{
		Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_0 = __this->get_m_AsyncWorkQueue_0();
		int32_t L_1 = __this->get_m_MainThreadID_1();
		UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * L_2 = (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F *)il2cpp_codegen_object_new(UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_mBAC6AFEEE33B32388551C9E6A0B10799BC6C1FC9(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Exec_m07342201E337E047B73C8B3259710820EFF75A9C (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Exec_m07342201E337E047B73C8B3259710820EFF75A9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_0 = __this->get_m_AsyncWorkQueue_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_2 = __this->get_m_AsyncWorkQueue_0();
			NullCheck(L_2);
			int32_t L_3 = Queue_1_get_Count_m3C8C1A0E9F46D5E873D295E87A03A2ED14C4C67F(L_2, /*hidden argument*/Queue_1_get_Count_m3C8C1A0E9F46D5E873D295E87A03A2ED14C4C67F_RuntimeMethod_var);
			V_1 = L_3;
			V_2 = 0;
			goto IL_003b;
		}

IL_0022:
		{
			Queue_1_t5013087B759B43C61E25C7F29059343AA2B85B7A * L_4 = __this->get_m_AsyncWorkQueue_0();
			NullCheck(L_4);
			WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  L_5 = Queue_1_Dequeue_m6CEDA29BC149C289844153D76DC5C3C0C08E60F5(L_4, /*hidden argument*/Queue_1_Dequeue_m6CEDA29BC149C289844153D76DC5C3C0C08E60F5_RuntimeMethod_var);
			V_3 = L_5;
			WorkRequest_Invoke_m67D71A48794EEBB6B9793E6F1E015DE90C03C1ED((WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 *)(&V_3), /*hidden argument*/NULL);
			int32_t L_6 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		}

IL_003b:
		{
			int32_t L_7 = V_2;
			int32_t L_8 = V_1;
			if ((((int32_t)L_7) < ((int32_t)L_8)))
			{
				goto IL_0022;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::InitializeSynchronizationContext()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_InitializeSynchronizationContext_m0F2A055040D6848FAD84A08DBC410E56B2D9E6A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_InitializeSynchronizationContext_m0F2A055040D6848FAD84A08DBC410E56B2D9E6A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * L_0 = SynchronizationContext_get_Current_m349D2AF9766D807E4003E23C6D37EF1592832DF4(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m7FA85162CB00713B94EF5708B19120F791D3AAD1(L_1, /*hidden argument*/NULL);
		UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * L_3 = (UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F *)il2cpp_codegen_object_new(UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_mCABD0C784640450930DF24FAD73E8AD6D1B52037(L_3, L_2, /*hidden argument*/NULL);
		SynchronizationContext_SetSynchronizationContext_m41A5A4823E9F4B8961657834EAC44397EFE41D61(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::ExecuteTasks()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_ExecuteTasks_m027AF329D90D6451B83A2EAF3528C9021800A962 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_ExecuteTasks_m027AF329D90D6451B83A2EAF3528C9021800A962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * V_0 = NULL;
	{
		SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * L_0 = SynchronizationContext_get_Current_m349D2AF9766D807E4003E23C6D37EF1592832DF4(/*hidden argument*/NULL);
		V_0 = ((UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F *)IsInstSealed((RuntimeObject*)L_0, UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F_il2cpp_TypeInfo_var));
		UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		UnitySynchronizationContext_t29A85681F976537109A84D2316E781568619F55F * L_2 = V_0;
		NullCheck(L_2);
		UnitySynchronizationContext_Exec_m07342201E337E047B73C8B3259710820EFF75A9C(L_2, /*hidden argument*/NULL);
	}

IL_0018:
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
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke(const WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94& unmarshaled, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL, NULL);
}
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_back(const WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_pinvoke& marshaled, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_cleanup(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_com(const WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94& unmarshaled, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_com& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL, NULL);
}
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_com_back(const WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_com& marshaled, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_com_cleanup(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::.ctor(System.Threading.SendOrPostCallback,System.Object,System.Threading.ManualResetEvent)
extern "C" IL2CPP_METHOD_ATTR void WorkRequest__ctor_mE19AE1779B544378C8CB488F1576BDE618548599 (WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * __this, SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___callback0, RuntimeObject * ___state1, ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___waitHandle2, const RuntimeMethod* method)
{
	{
		SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_0 = ___callback0;
		__this->set_m_DelagateCallback_0(L_0);
		RuntimeObject * L_1 = ___state1;
		__this->set_m_DelagateState_1(L_1);
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_2 = ___waitHandle2;
		__this->set_m_WaitHandle_2(L_2);
		return;
	}
}
extern "C"  void WorkRequest__ctor_mE19AE1779B544378C8CB488F1576BDE618548599_AdjustorThunk (RuntimeObject * __this, SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___callback0, RuntimeObject * ___state1, ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___waitHandle2, const RuntimeMethod* method)
{
	WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * _thisAdjusted = reinterpret_cast<WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 *>(__this + 1);
	WorkRequest__ctor_mE19AE1779B544378C8CB488F1576BDE618548599(_thisAdjusted, ___callback0, ___state1, ___waitHandle2, method);
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::Invoke()
extern "C" IL2CPP_METHOD_ATTR void WorkRequest_Invoke_m67D71A48794EEBB6B9793E6F1E015DE90C03C1ED (WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * __this, const RuntimeMethod* method)
{
	{
		SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * L_0 = __this->get_m_DelagateCallback_0();
		RuntimeObject * L_1 = __this->get_m_DelagateState_1();
		NullCheck(L_0);
		SendOrPostCallback_Invoke_m10442BF6A452A4408C3DDD1885D6809C4549C2AC(L_0, L_1, /*hidden argument*/NULL);
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_2 = __this->get_m_WaitHandle_2();
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * L_3 = __this->get_m_WaitHandle_2();
		NullCheck(L_3);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_3, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
extern "C"  void WorkRequest_Invoke_m67D71A48794EEBB6B9793E6F1E015DE90C03C1ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * _thisAdjusted = reinterpret_cast<WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 *>(__this + 1);
	WorkRequest_Invoke_m67D71A48794EEBB6B9793E6F1E015DE90C03C1ED(_thisAdjusted, method);
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
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
extern "C"  void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * _thisAdjusted = reinterpret_cast<Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *>(__this + 1);
	Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0(_thisAdjusted, ___x0, ___y1, method);
}
// System.String UnityEngine.Vector2::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m83C7C331834382748956B053E252AE3BD21807C4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_ToString_m83C7C331834382748956B053E252AE3BD21807C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		String_t* L_9 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteral4F90C928BC21C17D86B46ADE7645DD1CF4D18346, L_5, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0033;
	}

IL_0033:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
extern "C"  String_t* Vector2_ToString_m83C7C331834382748956B053E252AE3BD21807C4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * _thisAdjusted = reinterpret_cast<Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *>(__this + 1);
	return Vector2_ToString_m83C7C331834382748956B053E252AE3BD21807C4(_thisAdjusted, method);
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * _thisAdjusted = reinterpret_cast<Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *>(__this + 1);
	return Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_Equals_m4A2A75BC3D09933321220BCEF21219B38AF643AE (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_Equals_m4A2A75BC3D09933321220BCEF21219B38AF643AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0025;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)__this, ((*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)UnBox(L_1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool Vector2_Equals_m4A2A75BC3D09933321220BCEF21219B38AF643AE_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * _thisAdjusted = reinterpret_cast<Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *>(__this + 1);
	return Vector2_Equals_m4A2A75BC3D09933321220BCEF21219B38AF643AE(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		float L_1 = (&___other0)->get_x_0();
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		float* L_3 = __this->get_address_of_y_1();
		float L_4 = (&___other0)->get_y_1();
		bool L_5 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
extern "C"  bool Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB_AdjustorThunk (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___other0, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * _thisAdjusted = reinterpret_cast<Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *>(__this + 1);
	return Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB(_thisAdjusted, ___other0, method);
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_x_0();
		float L_2 = __this->get_y_1();
		float L_3 = __this->get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))));
		goto IL_0022;
	}

IL_0022:
	{
		float L_4 = V_0;
		return L_4;
	}
}
extern "C"  float Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * _thisAdjusted = reinterpret_cast<Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *>(__this + 1);
	return Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_4), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___lhs0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___v0)->get_x_0();
		float L_1 = (&___v0)->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var))->get_zeroVector_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Vector2::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Vector2__cctor_m13D18E02B3AC28597F5049D2F54830C9E4BDBE84 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2__cctor_m13D18E02B3AC28597F5049D2F54830C9E4BDBE84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var))->set_zeroVector_2(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var))->set_oneVector_3(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var))->set_upVector_4(L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_3), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var))->set_downVector_5(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_4), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var))->set_leftVector_6(L_4);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_5), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var))->set_rightVector_7(L_5);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_6), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var))->set_positiveInfinityVector_8(L_6);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var))->set_negativeInfinityVector_9(L_7);
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
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		return;
	}
}
extern "C"  void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * _thisAdjusted = reinterpret_cast<Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *>(__this + 1);
	Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m6C42B4F413A489535D180E8A99BE0298AD078B0B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_2();
		int32_t L_5 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
		goto IL_0040;
	}

IL_0040:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
extern "C"  int32_t Vector3_GetHashCode_m6C42B4F413A489535D180E8A99BE0298AD078B0B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * _thisAdjusted = reinterpret_cast<Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *>(__this + 1);
	return Vector3_GetHashCode_m6C42B4F413A489535D180E8A99BE0298AD078B0B(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_Equals_m1F74B1FB7EE51589FFFA61D894F616B8F258C056 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Equals_m1F74B1FB7EE51589FFFA61D894F616B8F258C056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0025;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = Vector3_Equals_m6B991540378DB8541CEB9472F7ED2BF5FF72B5DB((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)__this, ((*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)UnBox(L_1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool Vector3_Equals_m1F74B1FB7EE51589FFFA61D894F616B8F258C056_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * _thisAdjusted = reinterpret_cast<Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *>(__this + 1);
	return Vector3_Equals_m1F74B1FB7EE51589FFFA61D894F616B8F258C056(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_Equals_m6B991540378DB8541CEB9472F7ED2BF5FF72B5DB (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		float L_1 = (&___other0)->get_x_0();
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		float* L_3 = __this->get_address_of_y_1();
		float L_4 = (&___other0)->get_y_1();
		bool L_5 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		float* L_6 = __this->get_address_of_z_2();
		float L_7 = (&___other0)->get_z_2();
		bool L_8 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_6, L_7, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0044;
	}

IL_0043:
	{
		G_B4_0 = 0;
	}

IL_0044:
	{
		V_0 = (bool)G_B4_0;
		goto IL_004a;
	}

IL_004a:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
extern "C"  bool Vector3_Equals_m6B991540378DB8541CEB9472F7ED2BF5FF72B5DB_AdjustorThunk (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___other0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * _thisAdjusted = reinterpret_cast<Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *>(__this + 1);
	return Vector3_Equals_m6B991540378DB8541CEB9472F7ED2BF5FF72B5DB(_thisAdjusted, ___other0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Normalize_mDEA51D0C131125535DA2B49B7281E0086ED583DC (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Normalize_mDEA51D0C131125535DA2B49B7281E0086ED583DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_1 = Vector3_Magnitude_m3958BE20951093E6B035C5F90493027063B39437(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_0020;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		float L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_Normalize_mDEA51D0C131125535DA2B49B7281E0086ED583DC((*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * _thisAdjusted = reinterpret_cast<Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *>(__this + 1);
	return Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B(_thisAdjusted, method);
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Magnitude_m3958BE20951093E6B035C5F90493027063B39437 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Magnitude_m3958BE20951093E6B035C5F90493027063B39437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = (&___vector0)->get_x_0();
		float L_1 = (&___vector0)->get_x_0();
		float L_2 = (&___vector0)->get_y_1();
		float L_3 = (&___vector0)->get_y_1();
		float L_4 = (&___vector0)->get_z_2();
		float L_5 = (&___vector0)->get_z_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))));
		V_0 = L_6;
		goto IL_003b;
	}

IL_003b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_x_0();
		float L_2 = __this->get_y_1();
		float L_3 = __this->get_y_1();
		float L_4 = __this->get_z_2();
		float L_5 = __this->get_z_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))));
		V_0 = L_6;
		goto IL_0035;
	}

IL_0035:
	{
		float L_7 = V_0;
		return L_7;
	}
}
extern "C"  float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * _thisAdjusted = reinterpret_cast<Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *>(__this + 1);
	return Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274(_thisAdjusted, method);
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = (&___vector0)->get_x_0();
		float L_1 = (&___vector0)->get_x_0();
		float L_2 = (&___vector0)->get_y_1();
		float L_3 = (&___vector0)->get_y_1();
		float L_4 = (&___vector0)->get_z_2();
		float L_5 = (&___vector0)->get_z_2();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))));
		goto IL_0036;
	}

IL_0036:
	{
		float L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->get_zeroVector_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->get_forwardVector_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->get_upVector_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		float L_4 = (&___a0)->get_z_2();
		float L_5 = (&___b1)->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), ((float)il2cpp_codegen_add((float)L_0, (float)L_1)), ((float)il2cpp_codegen_add((float)L_2, (float)L_3)), ((float)il2cpp_codegen_add((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		float L_4 = (&___a0)->get_z_2();
		float L_5 = (&___b1)->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___a0)->get_y_1();
		float L_2 = (&___a0)->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_3), ((-L_0)), ((-L_1)), ((-L_2)), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_1();
		float L_3 = ___d1;
		float L_4 = (&___a0)->get_z_2();
		float L_5 = ___d1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_1();
		float L_3 = ___d1;
		float L_4 = (&___a0)->get_z_2();
		float L_5 = ___d1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___lhs0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_001a;
	}

IL_001a:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___lhs0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Vector3::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m2682D27AB50CD1CE4677C38D0720A302D582348D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_ToString_m2682D27AB50CD1CE4677C38D0720A302D582348D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		float L_10 = __this->get_z_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		String_t* L_13 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteral4933CA96CF0AAE548DADE4A62F9E8129B5F1CC51, L_9, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0041;
	}

IL_0041:
	{
		String_t* L_14 = V_0;
		return L_14;
	}
}
extern "C"  String_t* Vector3_ToString_m2682D27AB50CD1CE4677C38D0720A302D582348D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * _thisAdjusted = reinterpret_cast<Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *>(__this + 1);
	return Vector3_ToString_m2682D27AB50CD1CE4677C38D0720A302D582348D(_thisAdjusted, method);
}
// System.Void UnityEngine.Vector3::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Vector3__cctor_m83F3F89A8A8AFDBB54273660ABCA2E5AE1EAFDBD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3__cctor_m83F3F89A8A8AFDBB54273660ABCA2E5AE1EAFDBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_zeroVector_3(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_oneVector_4(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_upVector_5(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_3), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_downVector_6(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_leftVector_7(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_rightVector_8(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_forwardVector_9(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_backVector_10(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_positiveInfinityVector_11(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var))->set_negativeInfinityVector_12(L_9);
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
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		int32_t L_2 = ___z2;
		__this->set_m_Z_2(L_2);
		return;
	}
}
extern "C"  void Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156_AdjustorThunk (RuntimeObject * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * _thisAdjusted = reinterpret_cast<Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *>(__this + 1);
	Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Int32 UnityEngine.Vector3Int::get_x()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m23CB00F1579FD4CE86291940E2E75FB13405D53A (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Vector3Int_get_x_m23CB00F1579FD4CE86291940E2E75FB13405D53A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * _thisAdjusted = reinterpret_cast<Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *>(__this + 1);
	return Vector3Int_get_x_m23CB00F1579FD4CE86291940E2E75FB13405D53A(_thisAdjusted, method);
}
// System.Int32 UnityEngine.Vector3Int::get_y()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m1C2F0AB641A167DF22F9C3C57092EC05AEF8CA26 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Vector3Int_get_y_m1C2F0AB641A167DF22F9C3C57092EC05AEF8CA26_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * _thisAdjusted = reinterpret_cast<Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *>(__this + 1);
	return Vector3Int_get_y_m1C2F0AB641A167DF22F9C3C57092EC05AEF8CA26(_thisAdjusted, method);
}
// System.Int32 UnityEngine.Vector3Int::get_z()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m9A88DC2346FD1838EC611CC8AB2FC29951E94183 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Z_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Vector3Int_get_z_m9A88DC2346FD1838EC611CC8AB2FC29951E94183_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * _thisAdjusted = reinterpret_cast<Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *>(__this + 1);
	return Vector3Int_get_z_m9A88DC2346FD1838EC611CC8AB2FC29951E94183(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector3Int::op_Equality(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
extern "C" IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mC2E3A3395AC3E18397283F3CBEA7167B2E463DFC (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___lhs0, Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = Vector3Int_get_x_m23CB00F1579FD4CE86291940E2E75FB13405D53A((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1 = Vector3Int_get_x_m23CB00F1579FD4CE86291940E2E75FB13405D53A((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2 = Vector3Int_get_y_m1C2F0AB641A167DF22F9C3C57092EC05AEF8CA26((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3 = Vector3Int_get_y_m1C2F0AB641A167DF22F9C3C57092EC05AEF8CA26((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_4 = Vector3Int_get_z_m9A88DC2346FD1838EC611CC8AB2FC29951E94183((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5 = Vector3Int_get_z_m9A88DC2346FD1838EC611CC8AB2FC29951E94183((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)(&___rhs1), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = 0;
	}

IL_003a:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0040;
	}

IL_0040:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3Int::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m704D204F83B9C64C7AF06152F98B542C5C400DC7 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Int_Equals_m704D204F83B9C64C7AF06152F98B542C5C400DC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0025;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = Vector3Int_Equals_m9F98F28666ADF5AD0575C4CABAF6881F1317D4C1((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)__this, ((*(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)UnBox(L_1, Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool Vector3Int_Equals_m704D204F83B9C64C7AF06152F98B542C5C400DC7_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * _thisAdjusted = reinterpret_cast<Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *>(__this + 1);
	return Vector3Int_Equals_m704D204F83B9C64C7AF06152F98B542C5C400DC7(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector3Int::Equals(UnityEngine.Vector3Int)
extern "C" IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m9F98F28666ADF5AD0575C4CABAF6881F1317D4C1 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Int_Equals_m9F98F28666ADF5AD0575C4CABAF6881F1317D4C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var);
		bool L_1 = Vector3Int_op_Equality_mC2E3A3395AC3E18397283F3CBEA7167B2E463DFC((*(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)__this), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool Vector3Int_Equals_m9F98F28666ADF5AD0575C4CABAF6881F1317D4C1_AdjustorThunk (RuntimeObject * __this, Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___other0, const RuntimeMethod* method)
{
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * _thisAdjusted = reinterpret_cast<Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *>(__this + 1);
	return Vector3Int_Equals_m9F98F28666ADF5AD0575C4CABAF6881F1317D4C1(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.Vector3Int::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3Int_GetHashCode_m6CDE2FEC995180949111253817BD0E4ECE7EAE3D (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = Vector3Int_get_y_m1C2F0AB641A167DF22F9C3C57092EC05AEF8CA26((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)__this, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Vector3Int_get_z_m9A88DC2346FD1838EC611CC8AB2FC29951E94183((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)__this, /*hidden argument*/NULL);
		V_3 = L_2;
		int32_t L_3 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_3), /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = Vector3Int_get_x_m23CB00F1579FD4CE86291940E2E75FB13405D53A((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)__this, /*hidden argument*/NULL);
		V_4 = L_4;
		int32_t L_5 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_4), /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = V_2;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5^(int32_t)((int32_t)((int32_t)L_6<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)28)))))^(int32_t)((int32_t)((int32_t)L_8>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)((int32_t)28)))));
		goto IL_0059;
	}

IL_0059:
	{
		int32_t L_10 = V_5;
		return L_10;
	}
}
extern "C"  int32_t Vector3Int_GetHashCode_m6CDE2FEC995180949111253817BD0E4ECE7EAE3D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * _thisAdjusted = reinterpret_cast<Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *>(__this + 1);
	return Vector3Int_GetHashCode_m6CDE2FEC995180949111253817BD0E4ECE7EAE3D(_thisAdjusted, method);
}
// System.String UnityEngine.Vector3Int::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector3Int_ToString_m08AB1BE6A674B2669839B1C44ACCF6D85EBCFB91 (Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Int_ToString_m08AB1BE6A674B2669839B1C44ACCF6D85EBCFB91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		int32_t L_2 = Vector3Int_get_x_m23CB00F1579FD4CE86291940E2E75FB13405D53A((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		int32_t L_6 = Vector3Int_get_y_m1C2F0AB641A167DF22F9C3C57092EC05AEF8CA26((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		int32_t L_10 = Vector3Int_get_z_m9A88DC2346FD1838EC611CC8AB2FC29951E94183((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *)__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		String_t* L_13 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteralA1AB8D43BB437DC1B58FC2E16B8304F6AB2BDA8F, L_9, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0041;
	}

IL_0041:
	{
		String_t* L_14 = V_0;
		return L_14;
	}
}
extern "C"  String_t* Vector3Int_ToString_m08AB1BE6A674B2669839B1C44ACCF6D85EBCFB91_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * _thisAdjusted = reinterpret_cast<Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 *>(__this + 1);
	return Vector3Int_ToString_m08AB1BE6A674B2669839B1C44ACCF6D85EBCFB91(_thisAdjusted, method);
}
// System.Void UnityEngine.Vector3Int::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Vector3Int__cctor_m0EE114B6FDC7C783EF7B206D4E25F5CE900003C9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3Int__cctor_m0EE114B6FDC7C783EF7B206D4E25F5CE900003C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156((&L_0), 0, 0, 0, /*hidden argument*/NULL);
		((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var))->set_s_Zero_3(L_0);
		Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156((&L_1), 1, 1, 1, /*hidden argument*/NULL);
		((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var))->set_s_One_4(L_1);
		Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156((&L_2), 0, 1, 0, /*hidden argument*/NULL);
		((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var))->set_s_Up_5(L_2);
		Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156((&L_3), 0, (-1), 0, /*hidden argument*/NULL);
		((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var))->set_s_Down_6(L_3);
		Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156((&L_4), (-1), 0, 0, /*hidden argument*/NULL);
		((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var))->set_s_Left_7(L_4);
		Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3Int__ctor_m171D642C38B163B353DAE9CCE90ACFE0894C1156((&L_5), 1, 0, 0, /*hidden argument*/NULL);
		((Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_il2cpp_TypeInfo_var))->set_s_Right_8(L_5);
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
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		float L_3 = ___w3;
		__this->set_w_3(L_3);
		return;
	}
}
extern "C"  void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D(_thisAdjusted, ___x0, ___y1, ___z2, ___w3, method);
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_2();
		int32_t L_5 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_4, /*hidden argument*/NULL);
		float* L_6 = __this->get_address_of_w_3();
		int32_t L_7 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
		goto IL_0054;
	}

IL_0054:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
extern "C"  int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0025;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)__this, ((*(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)UnBox(L_1, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		float L_1 = (&___other0)->get_x_0();
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		float* L_3 = __this->get_address_of_y_1();
		float L_4 = (&___other0)->get_y_1();
		bool L_5 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		float* L_6 = __this->get_address_of_z_2();
		float L_7 = (&___other0)->get_z_2();
		bool L_8 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		float* L_9 = __this->get_address_of_w_3();
		float L_10 = (&___other0)->get_w_3();
		bool L_11 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005b;
	}

IL_005a:
	{
		G_B5_0 = 0;
	}

IL_005b:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
extern "C"  bool Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF_AdjustorThunk (RuntimeObject * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___other0, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF(_thisAdjusted, ___other0, method);
}
// System.String UnityEngine.Vector4::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		float L_10 = __this->get_z_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_9;
		float L_14 = __this->get_w_3();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteralB29BEC3A893F5759BD9E96C91C9F612E3591BE59, L_13, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_004f;
	}

IL_004f:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
extern "C"  String_t* Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9(_thisAdjusted, method);
}
// System.Void UnityEngine.Vector4::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Vector4__cctor_m478FA6A83B8E23F8323F150FF90B1FB934B1C251 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4__cctor_m478FA6A83B8E23F8323F150FF90B1FB934B1C251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var))->set_zeroVector_4(L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_1), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var))->set_oneVector_5(L_1);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_2), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var))->set_positiveInfinityVector_6(L_2);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_3), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var))->set_negativeInfinityVector_7(L_3);
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
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke& marshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_com(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_com_back(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com& marshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_com_cleanup(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com& marshaled)
{
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
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (*DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664_ftn) (intptr_t);
	static DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::Destroy(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DestroyThreaded(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (*DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA_ftn) (intptr_t);
	static DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.DictationRecognizer::DestroyThreaded(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Finalize_m3A9F239077BE32E93F9CA8431E79EE353822DDF2 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_Finalize_m3A9F239077BE32E93F9CA8431E79EE353822DDF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Recognizer_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0034;
			}
		}

IL_0016:
		{
			intptr_t L_2 = __this->get_m_Recognizer_0();
			DictationRecognizer_DestroyThreaded_mF5135054C861CE5BEA6BCAC18F205A4833432CCA((intptr_t)L_2, /*hidden argument*/NULL);
			__this->set_m_Recognizer_0((intptr_t)(0));
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_2 = __this->get_m_Recognizer_0();
		DictationRecognizer_Destroy_mE8E7F0520867B50D3461F170C60826C140628664((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_m_Recognizer_0((intptr_t)(0));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DictationRecognizer_InvokeHypothesisGeneratedEvent(System.String)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_DictationRecognizer_InvokeHypothesisGeneratedEvent_mD5D8576CD4D2BC21FFBBFACAE879D9E35BFD4BED (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, String_t* ___keyword0, const RuntimeMethod* method)
{
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * V_0 = NULL;
	{
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_0 = __this->get_DictationHypothesis_1();
		V_0 = L_0;
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_2 = V_0;
		String_t* L_3 = ___keyword0;
		NullCheck(L_2);
		DictationHypothesisDelegate_Invoke_m13B00B4DADC3F35EF3655EFEA69A68917609CD53(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DictationRecognizer_InvokeResultGeneratedEvent(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_DictationRecognizer_InvokeResultGeneratedEvent_m144DE6D67869D7308AA407D42D068B17410916EA (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, String_t* ___keyword0, int32_t ___minimumConfidence1, const RuntimeMethod* method)
{
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * V_0 = NULL;
	{
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_0 = __this->get_DictationResult_2();
		V_0 = L_0;
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_2 = V_0;
		String_t* L_3 = ___keyword0;
		int32_t L_4 = ___minimumConfidence1;
		NullCheck(L_2);
		DictationResultDelegate_Invoke_mC2BCB095B651CD4DE23FED7A0A0C92A6684A5C91(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DictationRecognizer_InvokeCompletedEvent(UnityEngine.Windows.Speech.DictationCompletionCause)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_DictationRecognizer_InvokeCompletedEvent_mCB00EBDBFA1E43EEEFEF8A98BC681350ED071479 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * V_0 = NULL;
	{
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_0 = __this->get_DictationComplete_3();
		V_0 = L_0;
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_2 = V_0;
		int32_t L_3 = ___cause0;
		NullCheck(L_2);
		DictationCompletedDelegate_Invoke_m393D08D4E4C4BDC07D2C1086678A3BC34ADD5C37(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::DictationRecognizer_InvokeErrorEvent(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_DictationRecognizer_InvokeErrorEvent_mF72B166A7D7F1D73E508FD4350DD6B4A147D047F (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * V_0 = NULL;
	{
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_0 = __this->get_DictationError_4();
		V_0 = L_0;
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_2 = V_0;
		String_t* L_3 = ___error0;
		int32_t L_4 = ___hresult1;
		NullCheck(L_2);
		DictationErrorHandler_Invoke_mC67E23094C88F1042656F92133FE2C9E32FFA52F(L_2, L_3, L_4, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___cause0);

}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::Invoke(UnityEngine.Windows.Speech.DictationCompletionCause)
extern "C" IL2CPP_METHOD_ATTR void DictationCompletedDelegate_Invoke_m393D08D4E4C4BDC07D2C1086678A3BC34ADD5C37 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___cause0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___cause0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___cause0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___cause0);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___cause0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cause0);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cause0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___cause0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cause0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cause0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___cause0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___cause0);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___cause0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cause0);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cause0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cause0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::BeginInvoke(UnityEngine.Windows.Speech.DictationCompletionCause,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DictationCompletedDelegate_BeginInvoke_m86D73A3A2CE70124C65709ADABB270C4F4A981F1 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, int32_t ___cause0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationCompletedDelegate_BeginInvoke_m86D73A3A2CE70124C65709ADABB270C4F4A981F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1_il2cpp_TypeInfo_var, &___cause0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DictationCompletedDelegate_EndInvoke_m76C332FC975E3C94B71ED70F0CC1F04DE52BA964 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled, ___hresult1);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6 (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::Invoke(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DictationErrorHandler_Invoke_mC67E23094C88F1042656F92133FE2C9E32FFA52F (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
							else
								GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
							else
								VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
						else
							GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
						else
							VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::BeginInvoke(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DictationErrorHandler_BeginInvoke_mD24E9C40E56521AC36B8D32518198DFB89D9827C (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, String_t* ___error0, int32_t ___hresult1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationErrorHandler_BeginInvoke_mD24E9C40E56521AC36B8D32518198DFB89D9827C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___error0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___hresult1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DictationErrorHandler_EndInvoke_mD1499F5B20B970B36944DFE8111CE94171656798 (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, String_t* ___text0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___text0' to native representation
	char* ____text0_marshaled = NULL;
	____text0_marshaled = il2cpp_codegen_marshal_string(___text0);

	// Native function invocation
	il2cppPInvokeFunc(____text0_marshaled);

	// Marshaling cleanup of parameter '___text0' native representation
	il2cpp_codegen_marshal_free(____text0_marshaled);
	____text0_marshaled = NULL;

}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void DictationHypothesisDelegate_Invoke_m13B00B4DADC3F35EF3655EFEA69A68917609CD53 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, String_t* ___text0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___text0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___text0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___text0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___text0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___text0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___text0);
							else
								GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___text0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0);
							else
								VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___text0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___text0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___text0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___text0);
						else
							GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___text0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0);
						else
							VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DictationHypothesisDelegate_BeginInvoke_mFCA96ECCE23AB50C58CA8DA154B73C7E20C618F1 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, String_t* ___text0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___text0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DictationHypothesisDelegate_EndInvoke_mD3BED2D554BE05C00F5393F48BD66E3B8AFF283C (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___text0' to native representation
	char* ____text0_marshaled = NULL;
	____text0_marshaled = il2cpp_codegen_marshal_string(___text0);

	// Native function invocation
	il2cppPInvokeFunc(____text0_marshaled, ___confidence1);

	// Marshaling cleanup of parameter '___text0' native representation
	il2cpp_codegen_marshal_free(____text0_marshaled);
	____text0_marshaled = NULL;

}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::Invoke(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void DictationResultDelegate_Invoke_mC2BCB095B651CD4DE23FED7A0A0C92A6684A5C91 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___text0, ___confidence1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___confidence1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___text0, ___confidence1);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___text0, ___confidence1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0, ___confidence1);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0, ___confidence1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___text0, ___confidence1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___text0, ___confidence1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___text0, ___confidence1);
							else
								GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___text0, ___confidence1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0, ___confidence1);
							else
								VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0, ___confidence1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___confidence1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, ___confidence1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___confidence1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___text0, ___confidence1);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___text0, ___confidence1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0, ___confidence1);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0, ___confidence1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, ___confidence1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___text0, ___confidence1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___text0, ___confidence1);
						else
							GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___text0, ___confidence1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0, ___confidence1);
						else
							VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0, ___confidence1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___confidence1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::BeginInvoke(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DictationResultDelegate_BeginInvoke_mB1DAE084A144180C6B6C3FBB95FC11C953E51872 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, String_t* ___text0, int32_t ___confidence1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationResultDelegate_BeginInvoke_mB1DAE084A144180C6B6C3FBB95FC11C953E51872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___text0;
	__d_args[1] = Box(ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36_il2cpp_TypeInfo_var, &___confidence1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DictationResultDelegate_EndInvoke_m9F81B0B190A0455B077CDC0222059CEA973B83C3 (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeErrorEvent(UnityEngine.Windows.Speech.SpeechError)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeErrorEvent_m9FF196C06264F6035686945A734E1AC01A0E2E33 (int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeErrorEvent_m9FF196C06264F6035686945A734E1AC01A0E2E33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * V_0 = NULL;
	{
		ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * L_0 = ((PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields*)il2cpp_codegen_static_fields_for(PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_il2cpp_TypeInfo_var))->get_OnError_0();
		V_0 = L_0;
		ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * L_2 = V_0;
		int32_t L_3 = ___errorCode0;
		NullCheck(L_2);
		ErrorDelegate_Invoke_m448BAD63228E49AEB609A60052F1E05C93853B17(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeStatusChangedEvent(UnityEngine.Windows.Speech.SpeechSystemStatus)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeStatusChangedEvent_mF25930BC6443439CCBAF346B89799358451239D8 (int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognitionSystem_PhraseRecognitionSystem_InvokeStatusChangedEvent_mF25930BC6443439CCBAF346B89799358451239D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * V_0 = NULL;
	{
		StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * L_0 = ((PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_StaticFields*)il2cpp_codegen_static_fields_for(PhraseRecognitionSystem_t0C199C0F115356F4FEB8DD938B25FB290B17FB7A_il2cpp_TypeInfo_var))->get_OnStatusChanged_1();
		V_0 = L_0;
		StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * L_2 = V_0;
		int32_t L_3 = ___status0;
		NullCheck(L_2);
		StatusDelegate_Invoke_mBA807D0015000ABE36C5B9B6F847D2882D3B26ED(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
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
extern "C"  void DelegatePInvokeWrapper_ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___errorCode0);

}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ErrorDelegate__ctor_mE77BF50AF1FD2FE54199276141F6B3CB17D2E1B1 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate::Invoke(UnityEngine.Windows.Speech.SpeechError)
extern "C" IL2CPP_METHOD_ATTR void ErrorDelegate_Invoke_m448BAD63228E49AEB609A60052F1E05C93853B17 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorCode0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___errorCode0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___errorCode0);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___errorCode0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorCode0);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorCode0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorCode0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___errorCode0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___errorCode0);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___errorCode0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorCode0);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorCode0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCode0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate::BeginInvoke(UnityEngine.Windows.Speech.SpeechError,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ErrorDelegate_BeginInvoke_m3A859400873FD62B71B597C2771E50F94B344E09 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, int32_t ___errorCode0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorDelegate_BeginInvoke_m3A859400873FD62B71B597C2771E50F94B344E09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SpeechError_tF03B18A9E3B314DC1DAC6DD4C7010F1B2F2B90E7_il2cpp_TypeInfo_var, &___errorCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ErrorDelegate_EndInvoke_m140002C504FD22C3B6C0F150576D37EE4A921189 (ErrorDelegate_t26E96242D4BDCC52B918557A3AE80025E37FADBD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0);

}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void StatusDelegate__ctor_mA3683647B7522FDFCC92DBE0161D7F585741477E (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate::Invoke(UnityEngine.Windows.Speech.SpeechSystemStatus)
extern "C" IL2CPP_METHOD_ATTR void StatusDelegate_Invoke_mBA807D0015000ABE36C5B9B6F847D2882D3B26ED (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___status0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___status0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___status0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate::BeginInvoke(UnityEngine.Windows.Speech.SpeechSystemStatus,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StatusDelegate_BeginInvoke_m814D9105249F941053622B079479E04A4FB6D227 (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, int32_t ___status0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StatusDelegate_BeginInvoke_m814D9105249F941053622B079479E04A4FB6D227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317_il2cpp_TypeInfo_var, &___status0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void StatusDelegate_EndInvoke_mF6B9A0C43A10A4CA34F56684DD4FB842FFB5D1FF (StatusDelegate_t2C5054C6D58EF0AEFD8BC464EBDE031EAAAC2166 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
extern "C" void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_pinvoke(const PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD& unmarshaled, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___semanticMeanings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'semanticMeanings' of type 'PhraseRecognizedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___semanticMeanings_1Exception, NULL, NULL);
}
extern "C" void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_pinvoke_back(const PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke& marshaled, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD& unmarshaled)
{
	Exception_t* ___semanticMeanings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'semanticMeanings' of type 'PhraseRecognizedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___semanticMeanings_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
extern "C" void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_pinvoke_cleanup(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
extern "C" void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_com(const PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD& unmarshaled, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com& marshaled)
{
	Exception_t* ___semanticMeanings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'semanticMeanings' of type 'PhraseRecognizedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___semanticMeanings_1Exception, NULL, NULL);
}
extern "C" void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_com_back(const PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com& marshaled, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD& unmarshaled)
{
	Exception_t* ___semanticMeanings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'semanticMeanings' of type 'PhraseRecognizedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___semanticMeanings_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
extern "C" void PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshal_com_cleanup(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::.ctor(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.SemanticMeaning[],System.DateTime,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE (PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD * __this, String_t* ___text0, int32_t ___confidence1, SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime3, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___text0;
		__this->set_text_2(L_0);
		int32_t L_1 = ___confidence1;
		__this->set_confidence_0(L_1);
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_2 = ___semanticMeanings2;
		__this->set_semanticMeanings_1(L_2);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = ___phraseStartTime3;
		__this->set_phraseStartTime_3(L_3);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_4 = ___phraseDuration4;
		__this->set_phraseDuration_4(L_4);
		return;
	}
}
extern "C"  void PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE_AdjustorThunk (RuntimeObject * __this, String_t* ___text0, int32_t ___confidence1, SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime3, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration4, const RuntimeMethod* method)
{
	PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD * _thisAdjusted = reinterpret_cast<PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD *>(__this + 1);
	PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE(_thisAdjusted, ___text0, ___confidence1, ___semanticMeanings2, ___phraseStartTime3, ___phraseDuration4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D (intptr_t ___recognizer0, const RuntimeMethod* method)
{
	typedef void (*PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D_ftn) (intptr_t);
	static PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognizer::Destroy(System.IntPtr)");
	_il2cpp_icall_func(___recognizer0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::DestroyThreaded(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0 (intptr_t ___recognizer0, const RuntimeMethod* method)
{
	typedef void (*PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0_ftn) (intptr_t);
	static PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Windows.Speech.PhraseRecognizer::DestroyThreaded(System.IntPtr)");
	_il2cpp_icall_func(___recognizer0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Finalize_m8B1591B513FE69C370C9AC8FCD13E2A091499E76 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_Finalize_m8B1591B513FE69C370C9AC8FCD13E2A091499E76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Recognizer_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0034;
			}
		}

IL_0016:
		{
			intptr_t L_2 = __this->get_m_Recognizer_0();
			PhraseRecognizer_DestroyThreaded_m4EA9D31CE89972CB9C6EC20007ED2C6C8FCAABE0((intptr_t)L_2, /*hidden argument*/NULL);
			__this->set_m_Recognizer_0((intptr_t)(0));
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0040:
	{
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_2 = __this->get_m_Recognizer_0();
		PhraseRecognizer_Destroy_m9579A27170BCBB3BDB99C364D5493B6B7C4E5B2D((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_m_Recognizer_0((intptr_t)(0));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::InvokePhraseRecognizedEvent(System.String,UnityEngine.Windows.Speech.ConfidenceLevel,UnityEngine.Windows.Speech.SemanticMeaning[],System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_InvokePhraseRecognizedEvent_mDBD38FADAC58DF9B960342AC84EE32CF221B0F02 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, String_t* ___text0, int32_t ___confidence1, SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings2, int64_t ___phraseStartFileTime3, int64_t ___phraseDurationTicks4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_InvokePhraseRecognizedEvent_mDBD38FADAC58DF9B960342AC84EE32CF221B0F02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * V_0 = NULL;
	{
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_0 = __this->get_OnPhraseRecognized_1();
		V_0 = L_0;
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_2 = V_0;
		String_t* L_3 = ___text0;
		int32_t L_4 = ___confidence1;
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_5 = ___semanticMeanings2;
		int64_t L_6 = ___phraseStartFileTime3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_7 = DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676(L_6, /*hidden argument*/NULL);
		int64_t L_8 = ___phraseDurationTicks4;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_9 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(L_8, /*hidden argument*/NULL);
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_10;
		memset(&L_10, 0, sizeof(L_10));
		PhraseRecognizedEventArgs__ctor_m362E97ADA890AE34C5E062B0FEED70E46E110ECE((&L_10), L_3, L_4, L_5, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_2);
		PhraseRecognizedDelegate_Invoke_m6136E32699B51A86EA0C594D338C7EC29F493478(L_2, L_10, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizer::MarshalSemanticMeaning(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* PhraseRecognizer_MarshalSemanticMeaning_m444804CA07F778FD0E23E78432EE0E377579C26A (intptr_t ___keys0, intptr_t ___values1, intptr_t ___valueSizes2, int32_t ___valueCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizer_MarshalSemanticMeaning_m444804CA07F778FD0E23E78432EE0E377579C26A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  V_4;
	memset(&V_4, 0, sizeof(V_4));
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t V_6 = 0;
	SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* V_7 = NULL;
	{
		int32_t L_0 = ___valueCount3;
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_1 = (SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D*)SZArrayNew(SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_00a8;
	}

IL_0011:
	{
		intptr_t L_2 = ___valueSizes2;
		void* L_3 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_2;
		int32_t L_5 = *((uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_4)), (int32_t)4)))));
		V_3 = L_5;
		il2cpp_codegen_initobj((&V_5), sizeof(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C ));
		intptr_t L_6 = ___keys0;
		void* L_7 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		uint32_t L_9 = sizeof(Il2CppChar*);
		String_t* L_10 = String_CreateString_m81EC77200D75146384415713DE908296720CFD95(NULL, (Il2CppChar*)(Il2CppChar*)(*((intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_8)), (int32_t)L_9)))))), /*hidden argument*/NULL);
		(&V_5)->set_key_0(L_10);
		uint32_t L_11 = V_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)(((uintptr_t)L_11)));
		(&V_5)->set_values_1(L_12);
		SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  L_13 = V_5;
		V_4 = L_13;
		V_6 = 0;
		goto IL_0087;
	}

IL_005e:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = (&V_4)->get_values_1();
		int32_t L_15 = V_6;
		intptr_t L_16 = ___values1;
		void* L_17 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		int32_t L_19 = V_6;
		uint32_t L_20 = sizeof(Il2CppChar*);
		String_t* L_21 = String_CreateString_m81EC77200D75146384415713DE908296720CFD95(NULL, (Il2CppChar*)(Il2CppChar*)(*((intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_17, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)))), (int32_t)L_20)))))), /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_21);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (String_t*)L_21);
		int32_t L_22 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0087:
	{
		int32_t L_23 = V_6;
		uint32_t L_24 = V_3;
		if ((((int64_t)(((int64_t)((int64_t)L_23)))) < ((int64_t)(((int64_t)((uint64_t)L_24))))))
		{
			goto IL_005e;
		}
	}
	{
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_25 = V_0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C  L_27 = V_4;
		*(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C *)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))) = L_27;
		int32_t L_28 = V_1;
		uint32_t L_29 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00a8:
	{
		int32_t L_31 = V_2;
		int32_t L_32 = ___valueCount3;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0011;
		}
	}
	{
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_33 = V_0;
		V_7 = L_33;
		goto IL_00b7;
	}

IL_00b7:
	{
		SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* L_34 = V_7;
		return L_34;
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
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate_Invoke_m6136E32699B51A86EA0C594D338C7EC29F493478 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  ___args0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(targetMethod, targetThis, ___args0);
							else
								GenericVirtActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(targetMethod, targetThis, ___args0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
							else
								VirtActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(targetMethod, targetThis, ___args0);
						else
							GenericVirtActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(targetMethod, targetThis, ___args0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
						else
							VirtActionInvoker1< PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::BeginInvoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PhraseRecognizedDelegate_BeginInvoke_m262B7DABBDF14FCBFF43293BF2FB06AC676CB962 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  ___args0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhraseRecognizedDelegate_BeginInvoke_m262B7DABBDF14FCBFF43293BF2FB06AC676CB962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_il2cpp_TypeInfo_var, &___args0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate_EndInvoke_m53944ABF37F32936C799FBBD922F7ECD9B0235D4 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Windows.Speech.SemanticMeaning
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___values_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'values' of type 'SemanticMeaning'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___values_1Exception, NULL, NULL);
}
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke_back(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled)
{
	Exception_t* ___values_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'values' of type 'SemanticMeaning'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___values_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.Speech.SemanticMeaning
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_pinvoke_cleanup(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Windows.Speech.SemanticMeaning
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled)
{
	Exception_t* ___values_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'values' of type 'SemanticMeaning'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___values_1Exception, NULL, NULL);
}
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com_back(const SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled, SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C& unmarshaled)
{
	Exception_t* ___values_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'values' of type 'SemanticMeaning'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___values_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Windows.Speech.SemanticMeaning
extern "C" void SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshal_com_cleanup(SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com& marshaled)
{
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
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke& marshaled)
{
}
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke& marshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup(YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_com(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com& marshaled)
{
}
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_com_back(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com& marshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_com_cleanup(YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620 (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848 (GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570(__this, /*hidden argument*/Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_RuntimeMethod_var);
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
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_FloatMinDenormal_1((1.401298E-45f));
		float L_0 = ((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->get_FloatMinDenormal_1();
		il2cpp_codegen_memory_barrier();
		float L_1 = Interlocked_CompareExchange_m2C6E1F976D009AB3858428E90B8F99F98F08155D((float*)(((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->get_address_of_FloatMinDenormal_1()), L_0, (0.0f), /*hidden argument*/NULL);
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_IsFlushToZeroEnabled_2((bool)((((float)L_1) == ((float)(0.0f)))? 1 : 0));
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
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381 (MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method)
{
	Delegate_t * V_0 = NULL;
	{
		Type_t * L_0 = ___delegateType1;
		RuntimeObject * L_1 = ___target2;
		MethodInfo_t * L_2 = ___self0;
		Delegate_t * L_3 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		Delegate_t * L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0 (Delegate_t * ___self0, const RuntimeMethod* method)
{
	MethodInfo_t * V_0 = NULL;
	{
		Delegate_t * L_0 = ___self0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
