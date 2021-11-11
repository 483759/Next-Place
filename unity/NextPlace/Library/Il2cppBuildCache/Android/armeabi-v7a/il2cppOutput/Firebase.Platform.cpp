#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t0A3175E42D7B4FC8B83BCBF384D9202A04B1A5BE;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_tB51174A6DE5821B98ECC7865DCD68970EC83EC0F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_tEE46DEC299F7F14D7224CEC25FDF48B0EDEFEC73;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Threading.ManualResetEvent>
struct KeyCollection_tAA7AC60C2CE7BC040870498A23E5AEF0ACD2D804;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// Firebase.Platform.MainThreadProperty`1<System.Boolean>
struct MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F;
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ValueCollection_t6113C3336FD25A5F8B05D1DF9C24967D41EB7D69;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Threading.ManualResetEvent>
struct ValueCollection_t21E201C747C6C859CFBC047DA5C04865E558132A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct EntryU5BU5D_t2F85750EE34916B6358B0FAB0684F89C2C6D0B14;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Threading.ManualResetEvent>[]
struct EntryU5BU5D_t546079AC2637D09883A11A7238D982851876559A;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>[]
struct Tuple_2U5BU5D_t3B54582E915D2DACAAB223CC7FC8312D531CCC23;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Exception[]
struct ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Firebase.Platform.DebugLogger
struct DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Firebase.Dispatcher
struct Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F;
// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631;
// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_tAF751AD5BD32E4587148715BFD93D3F2F85BBB7A;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Firebase.Platform.IClockService
struct IClockService_t73670E2711989DB3EB884D84BE9A79D303AC1D91;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E;
// Firebase.Platform.ILoggingService
struct ILoggingService_tD55B1336E14C994826F5A52B0F362008247F1066;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// Firebase.Platform.Default.SystemClock
struct SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Type
struct Type_t;
// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6;
// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044;
// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F;
// Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0
struct U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3;
// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404;
// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3
struct U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143;
// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4
struct U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226;
// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
struct U3CSendCoroutineU3Ec__AnonStorey1_tF3CE1C51221C69441FF1229AA58EE8401618F651;
// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2
struct U3CSendCoroutineU3Ec__AnonStorey2_t0AE9F14109238A8446D7DD0F40AE607FE452092A;
// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
struct U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceLogType_tEF56255769F9DA7443979F574673760330C8FA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bf991611aU2Df9efU2D4505U2Db8a9U2Dc93617257bc4U7D_tF5907C43726D4ACAB52A4445850E9AB3E6E176DC____U24fieldU2D0_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837;
IL2CPP_EXTERN_C String_t* _stringLiteral28C266F303F178CE0931272538E30F328A704472;
IL2CPP_EXTERN_C String_t* _stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7;
IL2CPP_EXTERN_C String_t* _stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D;
IL2CPP_EXTERN_C String_t* _stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B;
IL2CPP_EXTERN_C String_t* _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1;
IL2CPP_EXTERN_C String_t* _stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5;
IL2CPP_EXTERN_C String_t* _stringLiteral69A7A27A97142E232EA28BA2557E507697865243;
IL2CPP_EXTERN_C String_t* _stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE;
IL2CPP_EXTERN_C String_t* _stringLiteral896A2A117718A23135B6923C80A00C014390CF99;
IL2CPP_EXTERN_C String_t* _stringLiteral947107DA743C5DEC8247B198CC466791C8222A85;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA1A943AA9859AACD573FA189B260A066CD4F45D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m455E14E1DC63AE09F61CBB004219B079DC260BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD64E0FCA930C512F90CCAC544B5BC9EB760FA0A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m3A7245D09F4262BE1BC45EA6D3EF2B5826B7C907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mC4FB82C3496840F158258C3F5574534520539C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionAggregator_ThrowAndClearPendingExceptions_mC66983DEDF4880ACD5E96B5E9EBA38E00CC93B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_ListenToPlayState_m8B3B0DC0A552586D4BE740EFE73A430A2E83D8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_PlayModeStateChanged_mD56F02631552ED79A4B296B857A09E937D1DCE98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_Update_mE95C0F6CAED8D25B3635F1F7D4A76C5ECE9FAAE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisString_t_m33C897AAE39D7C04058D992426158160B46C80A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m8219436209D7353F3CA78D631BA1F0369A1D77F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_U3CUpdateU3Em__1_m2A0969AB98A590AA6ECDDC1575457DA3A5A0E981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m3C672C23E7A9E38397D742A1AA95732883E43C0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD920DBFBA92DEAB0502AD742A42A41BA2EA27E17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3_m989536977F825EC4D99402BF5F12C4BA8596137F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8_m76EA58FD5326DF0DB87B6AFA5566E6054E72D288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5C7212490FEABD42F372F85A6C72E7C1E53DE863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB3FCAD064C9E80BC8F57A4A25C5477E42714183A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m35CA066810D9B3641F72BBF74383AAA4CF7EC3DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m812AB6E24B11AE4EC6A245D34755899FA9C808C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainThreadProperty_1__ctor_m1E9868AE817D94B4D2EE4DD7A4201F4928893DC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainThreadProperty_1_get_Value_mF2F2C7F6FC78AF7B2900A8B09293F5FD59CD02FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_mDA5465F3BF2AEC346B3D5E759274C215F0F5778E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformInformation_U3Cget_RuntimeVersionU3Em__1_mC46792C61E93BE6A867A1C199E2268F43FE515D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mE22F7556F8B368133CE10D30D285B61601A7BF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m96B059DD9D52E7D5B8404551A72AC5DA8B3DAF0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m27F7DFB229C90B9827714CC6202B0C2B527C5854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m14C820646C3D017B0D11774D034F17EC3ECF14C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_mD97DA5138458AE1EA1CB774F38FC2580E09B1B71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mDC6700E6F92AAA4AC2453DE3DE8B10F127BF80FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m89433C7E6878B3DF466EC16A06F2932B0EFB00A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_mB7A987722CE1977F6EA988EF5A31CD9BF94067FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m9BF30D676CF1F246C66DF8A7217F8FF10906C0AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignaledCoroutineU3Ec__Iterator0_Reset_m4CEABE75A36A151ABBDFFA1EB92B8A38C57EFBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_mFDF02DB6B67083D8E5ACE73E700DCC2283C7BA21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D;
struct LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9FB537581072A84D736A5DFBE213E9A1AC69319E 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2F85750EE34916B6358B0FAB0684F89C2C6D0B14* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEE46DEC299F7F14D7224CEC25FDF48B0EDEFEC73 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6113C3336FD25A5F8B05D1DF9C24967D41EB7D69 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ___entries_1)); }
	inline EntryU5BU5D_t2F85750EE34916B6358B0FAB0684F89C2C6D0B14* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2F85750EE34916B6358B0FAB0684F89C2C6D0B14** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2F85750EE34916B6358B0FAB0684F89C2C6D0B14* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ___keys_7)); }
	inline KeyCollection_tEE46DEC299F7F14D7224CEC25FDF48B0EDEFEC73 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEE46DEC299F7F14D7224CEC25FDF48B0EDEFEC73 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEE46DEC299F7F14D7224CEC25FDF48B0EDEFEC73 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ___values_8)); }
	inline ValueCollection_t6113C3336FD25A5F8B05D1DF9C24967D41EB7D69 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6113C3336FD25A5F8B05D1DF9C24967D41EB7D69 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6113C3336FD25A5F8B05D1DF9C24967D41EB7D69 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t546079AC2637D09883A11A7238D982851876559A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tAA7AC60C2CE7BC040870498A23E5AEF0ACD2D804 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t21E201C747C6C859CFBC047DA5C04865E558132A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ___entries_1)); }
	inline EntryU5BU5D_t546079AC2637D09883A11A7238D982851876559A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t546079AC2637D09883A11A7238D982851876559A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t546079AC2637D09883A11A7238D982851876559A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ___keys_7)); }
	inline KeyCollection_tAA7AC60C2CE7BC040870498A23E5AEF0ACD2D804 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tAA7AC60C2CE7BC040870498A23E5AEF0ACD2D804 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tAA7AC60C2CE7BC040870498A23E5AEF0ACD2D804 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ___values_8)); }
	inline ValueCollection_t21E201C747C6C859CFBC047DA5C04865E558132A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t21E201C747C6C859CFBC047DA5C04865E558132A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t21E201C747C6C859CFBC047DA5C04865E558132A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Exception>
struct List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB, ____items_1)); }
	inline ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* get__items_1() const { return ____items_1; }
	inline ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_StaticFields, ____emptyArray_5)); }
	inline ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Firebase.Platform.MainThreadProperty`1<System.Boolean>
struct MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F  : public RuntimeObject
{
public:
	// System.Func`1<T> Firebase.Platform.MainThreadProperty`1::getPropertyDelegate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___getPropertyDelegate_0;
	// System.Int32 Firebase.Platform.MainThreadProperty`1::lastGetPropertyTickCount
	int32_t ___lastGetPropertyTickCount_1;
	// T Firebase.Platform.MainThreadProperty`1::cachedValue
	bool ___cachedValue_2;

public:
	inline static int32_t get_offset_of_getPropertyDelegate_0() { return static_cast<int32_t>(offsetof(MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F, ___getPropertyDelegate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_getPropertyDelegate_0() const { return ___getPropertyDelegate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_getPropertyDelegate_0() { return &___getPropertyDelegate_0; }
	inline void set_getPropertyDelegate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___getPropertyDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getPropertyDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastGetPropertyTickCount_1() { return static_cast<int32_t>(offsetof(MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F, ___lastGetPropertyTickCount_1)); }
	inline int32_t get_lastGetPropertyTickCount_1() const { return ___lastGetPropertyTickCount_1; }
	inline int32_t* get_address_of_lastGetPropertyTickCount_1() { return &___lastGetPropertyTickCount_1; }
	inline void set_lastGetPropertyTickCount_1(int32_t value)
	{
		___lastGetPropertyTickCount_1 = value;
	}

	inline static int32_t get_offset_of_cachedValue_2() { return static_cast<int32_t>(offsetof(MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F, ___cachedValue_2)); }
	inline bool get_cachedValue_2() const { return ___cachedValue_2; }
	inline bool* get_address_of_cachedValue_2() { return &___cachedValue_2; }
	inline void set_cachedValue_2(bool value)
	{
		___cachedValue_2 = value;
	}
};


// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Tuple_2U5BU5D_t3B54582E915D2DACAAB223CC7FC8312D531CCC23* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B, ____array_0)); }
	inline Tuple_2U5BU5D_t3B54582E915D2DACAAB223CC7FC8312D531CCC23* get__array_0() const { return ____array_0; }
	inline Tuple_2U5BU5D_t3B54582E915D2DACAAB223CC7FC8312D531CCC23** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Tuple_2U5BU5D_t3B54582E915D2DACAAB223CC7FC8312D531CCC23* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____array_0)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__array_0() const { return ____array_0; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689, ___m_Item1_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_Item1_0() const { return ___m_Item1_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB  : public RuntimeObject
{
public:

public:
};

struct AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields
{
public:
	// System.Uri Firebase.Platform.Default.AppConfigExtensions::DefaultUpdateUrl
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___DefaultUpdateUrl_0;
	// System.String Firebase.Platform.Default.AppConfigExtensions::Default
	String_t* ___Default_1;
	// System.Object Firebase.Platform.Default.AppConfigExtensions::Sync
	RuntimeObject * ___Sync_2;
	// Firebase.Platform.Default.AppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::_instance
	AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB * ____instance_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>> Firebase.Platform.Default.AppConfigExtensions::SStringState
	Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420 * ___SStringState_4;

public:
	inline static int32_t get_offset_of_DefaultUpdateUrl_0() { return static_cast<int32_t>(offsetof(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields, ___DefaultUpdateUrl_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_DefaultUpdateUrl_0() const { return ___DefaultUpdateUrl_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_DefaultUpdateUrl_0() { return &___DefaultUpdateUrl_0; }
	inline void set_DefaultUpdateUrl_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___DefaultUpdateUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultUpdateUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields, ___Default_1)); }
	inline String_t* get_Default_1() const { return ___Default_1; }
	inline String_t** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(String_t* value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_1), (void*)value);
	}

	inline static int32_t get_offset_of_Sync_2() { return static_cast<int32_t>(offsetof(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields, ___Sync_2)); }
	inline RuntimeObject * get_Sync_2() const { return ___Sync_2; }
	inline RuntimeObject ** get_address_of_Sync_2() { return &___Sync_2; }
	inline void set_Sync_2(RuntimeObject * value)
	{
		___Sync_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sync_2), (void*)value);
	}

	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields, ____instance_3)); }
	inline AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB * get__instance_3() const { return ____instance_3; }
	inline AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_3), (void*)value);
	}

	inline static int32_t get_offset_of_SStringState_4() { return static_cast<int32_t>(offsetof(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields, ___SStringState_4)); }
	inline Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420 * get_SStringState_4() const { return ___SStringState_4; }
	inline Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420 ** get_address_of_SStringState_4() { return &___SStringState_4; }
	inline void set_SStringState_4(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420 * value)
	{
		___SStringState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SStringState_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// Firebase.Platform.DebugLogger
struct DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905  : public RuntimeObject
{
public:

public:
};

struct DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_StaticFields
{
public:
	// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::_instance
	DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_StaticFields, ____instance_0)); }
	inline DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * get__instance_0() const { return ____instance_0; }
	inline DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Firebase.Dispatcher
struct Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Dispatcher::ownerThreadId
	int32_t ___ownerThreadId_0;
	// System.Collections.Generic.Queue`1<System.Action> Firebase.Dispatcher::queue
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___queue_1;

public:
	inline static int32_t get_offset_of_ownerThreadId_0() { return static_cast<int32_t>(offsetof(Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3, ___ownerThreadId_0)); }
	inline int32_t get_ownerThreadId_0() const { return ___ownerThreadId_0; }
	inline int32_t* get_address_of_ownerThreadId_0() { return &___ownerThreadId_0; }
	inline void set_ownerThreadId_0(int32_t value)
	{
		___ownerThreadId_0 = value;
	}

	inline static int32_t get_offset_of_queue_1() { return static_cast<int32_t>(offsetof(Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3, ___queue_1)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_queue_1() const { return ___queue_1; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_queue_1() { return &___queue_1; }
	inline void set_queue_1(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___queue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_1), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Firebase.ExceptionAggregator
struct ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3  : public RuntimeObject
{
public:

public:
};

struct ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_ThreadStaticFields
{
public:
	// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::threadLocalExceptions
	List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * ___threadLocalExceptions_0;

public:
	inline static int32_t get_offset_of_threadLocalExceptions_0() { return static_cast<int32_t>(offsetof(ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_ThreadStaticFields, ___threadLocalExceptions_0)); }
	inline List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * get_threadLocalExceptions_0() const { return ___threadLocalExceptions_0; }
	inline List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB ** get_address_of_threadLocalExceptions_0() { return &___threadLocalExceptions_0; }
	inline void set_threadLocalExceptions_0(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * value)
	{
		___threadLocalExceptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadLocalExceptions_0), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F  : public RuntimeObject
{
public:

public:
};

struct FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_StaticFields
{
public:
	// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::_instance
	FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_StaticFields, ____instance_0)); }
	inline FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * get__instance_0() const { return ____instance_0; }
	inline FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Firebase.Platform.FirebaseEditorDispatcher
struct FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB  : public RuntimeObject
{
public:

public:
};

struct FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields
{
public:
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3Ef__mgU24cache0_0;
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache1
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3Ef__mgU24cache1_1;
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache2
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3Ef__mgU24cache2_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_1() { return static_cast<int32_t>(offsetof(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields, ___U3CU3Ef__mgU24cache1_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3Ef__mgU24cache1_1() const { return ___U3CU3Ef__mgU24cache1_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3Ef__mgU24cache1_1() { return &___U3CU3Ef__mgU24cache1_1; }
	inline void set_U3CU3Ef__mgU24cache1_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3Ef__mgU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_2() { return static_cast<int32_t>(offsetof(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields, ___U3CU3Ef__mgU24cache2_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3Ef__mgU24cache2_2() const { return ___U3CU3Ef__mgU24cache2_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3Ef__mgU24cache2_2() { return &___U3CU3Ef__mgU24cache2_2; }
	inline void set_U3CU3Ef__mgU24cache2_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3Ef__mgU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache2_2), (void*)value);
	}
};


// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Platform.FirebaseHandler::<IsPlayMode>k__BackingField
	bool ___U3CIsPlayModeU3Ek__BackingField_4;
	// System.EventHandler`1<System.EventArgs> Firebase.Platform.FirebaseHandler::Updated
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___Updated_6;
	// System.Action Firebase.Platform.FirebaseHandler::UpdatedEventWrapper
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___UpdatedEventWrapper_7;
	// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs> Firebase.Platform.FirebaseHandler::ApplicationFocusChanged
	EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22 * ___ApplicationFocusChanged_8;

public:
	inline static int32_t get_offset_of_U3CIsPlayModeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631, ___U3CIsPlayModeU3Ek__BackingField_4)); }
	inline bool get_U3CIsPlayModeU3Ek__BackingField_4() const { return ___U3CIsPlayModeU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPlayModeU3Ek__BackingField_4() { return &___U3CIsPlayModeU3Ek__BackingField_4; }
	inline void set_U3CIsPlayModeU3Ek__BackingField_4(bool value)
	{
		___U3CIsPlayModeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_Updated_6() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631, ___Updated_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_Updated_6() const { return ___Updated_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_Updated_6() { return &___Updated_6; }
	inline void set_Updated_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___Updated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_6), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatedEventWrapper_7() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631, ___UpdatedEventWrapper_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_UpdatedEventWrapper_7() const { return ___UpdatedEventWrapper_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_UpdatedEventWrapper_7() { return &___UpdatedEventWrapper_7; }
	inline void set_UpdatedEventWrapper_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___UpdatedEventWrapper_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdatedEventWrapper_7), (void*)value);
	}

	inline static int32_t get_offset_of_ApplicationFocusChanged_8() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631, ___ApplicationFocusChanged_8)); }
	inline EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22 * get_ApplicationFocusChanged_8() const { return ___ApplicationFocusChanged_8; }
	inline EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22 ** get_address_of_ApplicationFocusChanged_8() { return &___ApplicationFocusChanged_8; }
	inline void set_ApplicationFocusChanged_8(EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22 * value)
	{
		___ApplicationFocusChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApplicationFocusChanged_8), (void*)value);
	}
};

struct FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields
{
public:
	// Firebase.Platform.FirebaseMonoBehaviour Firebase.Platform.FirebaseHandler::firebaseMonoBehaviour
	FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * ___firebaseMonoBehaviour_0;
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::<AppUtils>k__BackingField
	RuntimeObject* ___U3CAppUtilsU3Ek__BackingField_1;
	// System.Int32 Firebase.Platform.FirebaseHandler::tickCount
	int32_t ___tickCount_2;
	// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::<ThreadDispatcher>k__BackingField
	Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * ___U3CThreadDispatcherU3Ek__BackingField_3;
	// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::firebaseHandler
	FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * ___firebaseHandler_5;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseHandler::<>f__am$cache0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3Ef__amU24cache0_9;

public:
	inline static int32_t get_offset_of_firebaseMonoBehaviour_0() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields, ___firebaseMonoBehaviour_0)); }
	inline FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * get_firebaseMonoBehaviour_0() const { return ___firebaseMonoBehaviour_0; }
	inline FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 ** get_address_of_firebaseMonoBehaviour_0() { return &___firebaseMonoBehaviour_0; }
	inline void set_firebaseMonoBehaviour_0(FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * value)
	{
		___firebaseMonoBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseMonoBehaviour_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppUtilsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields, ___U3CAppUtilsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAppUtilsU3Ek__BackingField_1() const { return ___U3CAppUtilsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAppUtilsU3Ek__BackingField_1() { return &___U3CAppUtilsU3Ek__BackingField_1; }
	inline void set_U3CAppUtilsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAppUtilsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppUtilsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_tickCount_2() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields, ___tickCount_2)); }
	inline int32_t get_tickCount_2() const { return ___tickCount_2; }
	inline int32_t* get_address_of_tickCount_2() { return &___tickCount_2; }
	inline void set_tickCount_2(int32_t value)
	{
		___tickCount_2 = value;
	}

	inline static int32_t get_offset_of_U3CThreadDispatcherU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields, ___U3CThreadDispatcherU3Ek__BackingField_3)); }
	inline Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * get_U3CThreadDispatcherU3Ek__BackingField_3() const { return ___U3CThreadDispatcherU3Ek__BackingField_3; }
	inline Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 ** get_address_of_U3CThreadDispatcherU3Ek__BackingField_3() { return &___U3CThreadDispatcherU3Ek__BackingField_3; }
	inline void set_U3CThreadDispatcherU3Ek__BackingField_3(Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * value)
	{
		___U3CThreadDispatcherU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CThreadDispatcherU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_firebaseHandler_5() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields, ___firebaseHandler_5)); }
	inline FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * get_firebaseHandler_5() const { return ___firebaseHandler_5; }
	inline FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 ** get_address_of_firebaseHandler_5() { return &___firebaseHandler_5; }
	inline void set_firebaseHandler_5(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * value)
	{
		___firebaseHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_9), (void*)value);
	}
};


// Firebase.Platform.FirebaseLogger
struct FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A  : public RuntimeObject
{
public:

public:
};

struct FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_StaticFields
{
public:
	// Firebase.Platform.MainThreadProperty`1<System.Boolean> Firebase.Platform.FirebaseLogger::incompatibleStackUnwindingEnabled
	MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F * ___incompatibleStackUnwindingEnabled_0;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseLogger::<>f__mg$cache0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_incompatibleStackUnwindingEnabled_0() { return static_cast<int32_t>(offsetof(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_StaticFields, ___incompatibleStackUnwindingEnabled_0)); }
	inline MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F * get_incompatibleStackUnwindingEnabled_0() const { return ___incompatibleStackUnwindingEnabled_0; }
	inline MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F ** get_address_of_incompatibleStackUnwindingEnabled_0() { return &___incompatibleStackUnwindingEnabled_0; }
	inline void set_incompatibleStackUnwindingEnabled_0(MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F * value)
	{
		___incompatibleStackUnwindingEnabled_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___incompatibleStackUnwindingEnabled_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Firebase.Platform.PlatformInformation
struct PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5  : public RuntimeObject
{
public:

public:
};

struct PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields
{
public:
	// System.String Firebase.Platform.PlatformInformation::runtimeVersion
	String_t* ___runtimeVersion_0;
	// System.Single Firebase.Platform.PlatformInformation::<RealtimeSinceStartupSafe>k__BackingField
	float ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__am$cache0
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___U3CU3Ef__amU24cache0_2;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__am$cache1
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_runtimeVersion_0() { return static_cast<int32_t>(offsetof(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields, ___runtimeVersion_0)); }
	inline String_t* get_runtimeVersion_0() const { return ___runtimeVersion_0; }
	inline String_t** get_address_of_runtimeVersion_0() { return &___runtimeVersion_0; }
	inline void set_runtimeVersion_0(String_t* value)
	{
		___runtimeVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeVersion_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields, ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1)); }
	inline float get_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1() const { return ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1; }
	inline float* get_address_of_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1() { return &___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1; }
	inline void set_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1(float value)
	{
		___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_3), (void*)value);
	}
};


// Firebase.Platform.Services
struct Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861  : public RuntimeObject
{
public:

public:
};

struct Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields
{
public:
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_1;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAppConfigU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields, ___U3CAppConfigU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CAppConfigU3Ek__BackingField_0() const { return ___U3CAppConfigU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CAppConfigU3Ek__BackingField_0() { return &___U3CAppConfigU3Ek__BackingField_0; }
	inline void set_U3CAppConfigU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CAppConfigU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppConfigU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClockU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields, ___U3CClockU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CClockU3Ek__BackingField_1() const { return ___U3CClockU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CClockU3Ek__BackingField_1() { return &___U3CClockU3Ek__BackingField_1; }
	inline void set_U3CClockU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CClockU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClockU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields, ___U3CLoggingU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CLoggingU3Ek__BackingField_2() const { return ___U3CLoggingU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CLoggingU3Ek__BackingField_2() { return &___U3CLoggingU3Ek__BackingField_2; }
	inline void set_U3CLoggingU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CLoggingU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggingU3Ek__BackingField_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Firebase.Platform.Default.SystemClock
struct SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF  : public RuntimeObject
{
public:

public:
};

struct SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_StaticFields
{
public:
	// Firebase.Platform.IClockService Firebase.Platform.Default.SystemClock::Instance
	RuntimeObject* ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_StaticFields, ___Instance_0)); }
	inline RuntimeObject* get_Instance_0() const { return ___Instance_0; }
	inline RuntimeObject** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(RuntimeObject* value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044  : public RuntimeObject
{
public:

public:
};

struct UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_StaticFields
{
public:
	// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::_instance
	UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_StaticFields, ____instance_0)); }
	inline UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * get__instance_0() const { return ____instance_0; }
	inline UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Firebase.Unity.UnityPlatformServices
struct UnityPlatformServices_t0EF1F2E8DCE496DA59F7BC26BA74E3D0A1B8A0AF  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0
struct U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3  : public RuntimeObject
{
public:
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::appUtils
	RuntimeObject* ___appUtils_0;

public:
	inline static int32_t get_offset_of_appUtils_0() { return static_cast<int32_t>(offsetof(U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3, ___appUtils_0)); }
	inline RuntimeObject* get_appUtils_0() const { return ___appUtils_0; }
	inline RuntimeObject** get_address_of_appUtils_0() { return &___appUtils_0; }
	inline void set_appUtils_0(RuntimeObject* value)
	{
		___appUtils_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appUtils_0), (void*)value);
	}
};


// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3
struct U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143  : public RuntimeObject
{
public:
	// System.Threading.SendOrPostCallback Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::d
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___d_0;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143, ___d_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_d_0() const { return ___d_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___d_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_0), (void*)value);
	}
};


// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4
struct U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::newSignal
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___newSignal_0;
	// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3 Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::<>f__ref$3
	U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * ___U3CU3Ef__refU243_1;

public:
	inline static int32_t get_offset_of_newSignal_0() { return static_cast<int32_t>(offsetof(U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226, ___newSignal_0)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_newSignal_0() const { return ___newSignal_0; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_newSignal_0() { return &___newSignal_0; }
	inline void set_newSignal_0(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___newSignal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newSignal_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU243_1() { return static_cast<int32_t>(offsetof(U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226, ___U3CU3Ef__refU243_1)); }
	inline U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * get_U3CU3Ef__refU243_1() const { return ___U3CU3Ef__refU243_1; }
	inline U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 ** get_address_of_U3CU3Ef__refU243_1() { return &___U3CU3Ef__refU243_1; }
	inline void set_U3CU3Ef__refU243_1(U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * value)
	{
		___U3CU3Ef__refU243_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU243_1), (void*)value);
	}
};


// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
struct U3CSendCoroutineU3Ec__AnonStorey1_tF3CE1C51221C69441FF1229AA58EE8401618F651  : public RuntimeObject
{
public:

public:
};


// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2
struct U3CSendCoroutineU3Ec__AnonStorey2_t0AE9F14109238A8446D7DD0F40AE607FE452092A  : public RuntimeObject
{
public:

public:
};


// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
struct U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6  : public RuntimeObject
{
public:
	// System.Func`1<System.Collections.IEnumerator> Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::coroutine
	Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D * ___coroutine_0;
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::newSignal
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___newSignal_1;
	// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6, ___coroutine_0)); }
	inline Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D * get_coroutine_0() const { return ___coroutine_0; }
	inline Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D ** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D * value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coroutine_0), (void*)value);
	}

	inline static int32_t get_offset_of_newSignal_1() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6, ___newSignal_1)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_newSignal_1() const { return ___newSignal_1; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_newSignal_1() { return &___newSignal_1; }
	inline void set_newSignal_1(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___newSignal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newSignal_1), (void*)value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24current_2), (void*)value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};


// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58  : public RuntimeObject
{
public:
	// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::<entry>__0
	Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * ___U3CentryU3E__0_0;
	// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$locvar0
	RuntimeObject * ___U24locvar0_1;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$this
	SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * ___U24this_2;
	// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CentryU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58, ___U3CentryU3E__0_0)); }
	inline Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * get_U3CentryU3E__0_0() const { return ___U3CentryU3E__0_0; }
	inline Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 ** get_address_of_U3CentryU3E__0_0() { return &___U3CentryU3E__0_0; }
	inline void set_U3CentryU3E__0_0(Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * value)
	{
		___U3CentryU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CentryU3E__0_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58, ___U24locvar0_1)); }
	inline RuntimeObject * get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline RuntimeObject ** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(RuntimeObject * value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24locvar0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58, ___U24this_2)); }
	inline SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * get_U24this_2() const { return ___U24this_2; }
	inline SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_add_event_0), (void*)value);
	}
};


// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
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
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6  : public AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB
{
public:

public:
};

struct UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_StaticFields
{
public:
	// Firebase.Platform.Default.UnityConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::_instance
	UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 * ____instance_5;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_StaticFields, ____instance_5)); }
	inline UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 * get__instance_5() const { return ____instance_5; }
	inline UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_5), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>{f991611a-f9ef-4505-b8a9-c93617257bc4}/$ArrayType=20
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D20_t16AFC5146DDB521C21876B90FBE329122F76A79E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t16AFC5146DDB521C21876B90FBE329122F76A79E__padding[20];
	};

public:
};
#pragma pack(pop, tp)


// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Boolean Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::<HasFocus>k__BackingField
	bool ___U3CHasFocusU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CHasFocusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404, ___U3CHasFocusU3Ek__BackingField_1)); }
	inline bool get_U3CHasFocusU3Ek__BackingField_1() const { return ___U3CHasFocusU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CHasFocusU3Ek__BackingField_1() { return &___U3CHasFocusU3Ek__BackingField_1; }
	inline void set_U3CHasFocusU3Ek__BackingField_1(bool value)
	{
		___U3CHasFocusU3Ek__BackingField_1 = value;
	}
};


// <PrivateImplementationDetails>{f991611a-f9ef-4505-b8a9-c93617257bc4}
struct U3CPrivateImplementationDetailsU3EU7Bf991611aU2Df9efU2D4505U2Db8a9U2Dc93617257bc4U7D_tF5907C43726D4ACAB52A4445850E9AB3E6E176DC  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3EU7Bf991611aU2Df9efU2D4505U2Db8a9U2Dc93617257bc4U7D_tF5907C43726D4ACAB52A4445850E9AB3E6E176DC_StaticFields
{
public:
	// <PrivateImplementationDetails>{f991611a-f9ef-4505-b8a9-c93617257bc4}/$ArrayType=20 <PrivateImplementationDetails>{f991611a-f9ef-4505-b8a9-c93617257bc4}::$field-0
	U24ArrayTypeU3D20_t16AFC5146DDB521C21876B90FBE329122F76A79E  ___U24fieldU2D0_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7Bf991611aU2Df9efU2D4505U2Db8a9U2Dc93617257bc4U7D_tF5907C43726D4ACAB52A4445850E9AB3E6E176DC_StaticFields, ___U24fieldU2D0_0)); }
	inline U24ArrayTypeU3D20_t16AFC5146DDB521C21876B90FBE329122F76A79E  get_U24fieldU2D0_0() const { return ___U24fieldU2D0_0; }
	inline U24ArrayTypeU3D20_t16AFC5146DDB521C21876B90FBE329122F76A79E * get_address_of_U24fieldU2D0_0() { return &___U24fieldU2D0_0; }
	inline void set_U24fieldU2D0_0(U24ArrayTypeU3D20_t16AFC5146DDB521C21876B90FBE329122F76A79E  value)
	{
		___U24fieldU2D0_0 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.LogType
struct LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Firebase.Platform.PlatformLogLevel
struct PlatformLogLevel_tBEEE87BEEE806C09EDE048024FD099F211A62E14 
{
public:
	// System.Int32 Firebase.Platform.PlatformLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlatformLogLevel_tBEEE87BEEE806C09EDE048024FD099F211A62E14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.StackTraceLogType
struct StackTraceLogType_tEF56255769F9DA7443979F574673760330C8FA37 
{
public:
	// System.Int32 UnityEngine.StackTraceLogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackTraceLogType_tEF56255769F9DA7443979F574673760330C8FA37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.SynchronizationContextProperties
struct SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0  : public SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069
{
public:
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext::queue
	Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * ___queue_7;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext::behavior
	SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * ___behavior_8;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext::mainThreadId
	int32_t ___mainThreadId_9;

public:
	inline static int32_t get_offset_of_queue_7() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0, ___queue_7)); }
	inline Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * get_queue_7() const { return ___queue_7; }
	inline Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B ** get_address_of_queue_7() { return &___queue_7; }
	inline void set_queue_7(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * value)
	{
		___queue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_7), (void*)value);
	}

	inline static int32_t get_offset_of_behavior_8() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0, ___behavior_8)); }
	inline SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * get_behavior_8() const { return ___behavior_8; }
	inline SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 ** get_address_of_behavior_8() { return &___behavior_8; }
	inline void set_behavior_8(SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * value)
	{
		___behavior_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___behavior_8), (void*)value);
	}

	inline static int32_t get_offset_of_mainThreadId_9() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0, ___mainThreadId_9)); }
	inline int32_t get_mainThreadId_9() const { return ___mainThreadId_9; }
	inline int32_t* get_address_of_mainThreadId_9() { return &___mainThreadId_9; }
	inline void set_mainThreadId_9(int32_t value)
	{
		___mainThreadId_9 = value;
	}
};

struct UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields
{
public:
	// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::_instance
	UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * ____instance_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent> Firebase.Unity.UnitySynchronizationContext::signalDictionary
	Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * ___signalDictionary_10;

public:
	inline static int32_t get_offset_of__instance_6() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields, ____instance_6)); }
	inline UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * get__instance_6() const { return ____instance_6; }
	inline UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 ** get_address_of__instance_6() { return &____instance_6; }
	inline void set__instance_6(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * value)
	{
		____instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_6), (void*)value);
	}

	inline static int32_t get_offset_of_signalDictionary_10() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields, ___signalDictionary_10)); }
	inline Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * get_signalDictionary_10() const { return ___signalDictionary_10; }
	inline Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 ** get_address_of_signalDictionary_10() { return &___signalDictionary_10; }
	inline void set_signalDictionary_10(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * value)
	{
		___signalDictionary_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signalDictionary_10), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::callbackQueue
	Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * ___callbackQueue_4;

public:
	inline static int32_t get_offset_of_callbackQueue_4() { return static_cast<int32_t>(offsetof(SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8, ___callbackQueue_4)); }
	inline Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * get_callbackQueue_4() const { return ___callbackQueue_4; }
	inline Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B ** get_address_of_callbackQueue_4() { return &___callbackQueue_4; }
	inline void set_callbackQueue_4(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * value)
	{
		___callbackQueue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackQueue_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Exception[]
struct ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Exception_t * m_Items[1];

public:
	inline Exception_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Exception_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Exception_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Exception_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Exception_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Exception_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LogType[]
struct LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B  : public RuntimeArray
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___f0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// T Firebase.Platform.MainThreadProperty`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadProperty_1_get_Value_mF2F2C7F6FC78AF7B2900A8B09293F5FD59CD02FD_gshared (MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.MainThreadProperty`1<System.Boolean>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadProperty_1__ctor_m1E9868AE817D94B4D2EE4DD7A4201F4928893DC1_gshared (MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___getPropertyDelegate0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FirebaseHandler_RunOnMainThread_TisRuntimeObject_mF296A2A70E7F3787BA58CFDDA2A346BB44DA35B7_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___f0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m4D9875962578E3B6CC08739D79B226A806756051_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// !0 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method);
// !1 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_m2A49F263317603E4A770D5B34222FFCCCB6AE4EB_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_m04A8807DCFD232502FB1E0C74B4E29ABF16F091C (AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_m455E14E1DC63AE09F61CBB004219B079DC260BD8 (Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Firebase.Platform.DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_mD6357FC79350285A4D8372BC692899939F6D36C4 (DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
inline void List_1__ctor_m35CA066810D9B3641F72BBF74383AAA4CF7EC3DE (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * ExceptionAggregator_get_Exceptions_m421E855AAB77ED0458E6FCBBB9575F0072411DFE (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
inline int32_t List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_inline (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
inline Exception_t * List_1_get_Item_m812AB6E24B11AE4EC6A245D34755899FA9C808C8_inline (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Exception_t * (*) (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0[] System.Collections.Generic.List`1<System.Exception>::ToArray()
inline ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* List_1_ToArray_mB3FCAD064C9E80BC8F57A4A25C5477E42714183A (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * __this, const RuntimeMethod* method)
{
	return ((  ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* (*) (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_m8402940DB4199F47B93D5E4A649438657D288BC1 (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * __this, RuntimeObject* ___innerExceptions0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
inline void List_1_Clear_m5C7212490FEABD42F372F85A6C72E7C1E53DE863 (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Exception Firebase.ExceptionAggregator::GetAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionAggregator_GetAndClearPendingExceptions_mE7FDFA220E3ACEB6D56D9884DEEF91540D2B8522 (const RuntimeMethod* method);
// System.Exception Firebase.ExceptionAggregator::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionAggregator_LogException_m68B2EB141A7DDD04EFEE794ED44FCB41673E19F2 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.AggregateException System.AggregateException::Flatten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * AggregateException_Flatten_mE14D462A6ADE827340E60E73AB20C254C5800A4F (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * AggregateException_get_InnerExceptions_m2020FC3A2334DDB72FEBFB2BF4CFE088FF83FEFE_inline (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983 (ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(!0)
inline void List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892 (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * __this, Exception_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *, Exception_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m3EC6F08162223655B3A0A2FA44BA7060AE3884AD (FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * __this, const RuntimeMethod* method);
// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459 (const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_mA7E5F78B2F35D05DB49DD041E80BE767FF7834EE (FieldInfo_t * ___eventField0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback1, RuntimeObject * ___target2, bool ___add3, String_t* ___errorMessage4, const RuntimeMethod* method);
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Update_m054C867D529EEC80853232EEAFBCAD18CC287817 (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method);
// System.Reflection.EventInfo System.Type::GetEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t * Type_GetEvent_m1CA007B4B4D801535D888D036C0A5DC1E1B02840 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_m401D0E8CE90362E4A58B891650261C70D0474192 (Type_t * ___type0, RuntimeObject * ___firstArgument1, MethodInfo_t * ___method2, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m59AFE9F48F2EA1AADCFBD94DBE010730359B3B40_inline (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_m5D0E7984120FE00B82427E13FCF48085918AB1FD (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_m02B9EFE5073A720C65958245D6DB2EA60E452374 (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m3258056C31C8D32C690329363587720C60B35E0A (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_m832E6FCD6DA3ACDEA0B59D346EDD8585381C3B15_inline (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mCAC767C009E07776825D231BDFF6C6D1AE119E40 (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m1CB49D4E683D48586AEF5F8B515EAC41F2F502BE (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_mC548F88144B19A23B440492095C0C961FA0D039C (const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * FirebaseAppUtilsStub_get_Instance_m980CDC684E1C5AE80F1853386A98DD558AE76ABC_inline (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_mCA47C4E5CB3698D8715B88CB409F5112C38A16D6_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m8B3B0DC0A552586D4BE740EFE73A430A2E83D8E3 (bool ___start0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Firebase.Platform.FirebaseMonoBehaviour>()
inline FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * GameObject_AddComponent_TisFirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3_m989536977F825EC4D99402BF5F12C4BA8596137F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_mE6147188A48A044C46BE9666824CAA1445B29BD8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
inline bool FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___f0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_gshared)(___f0, method);
}
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_mF765AEB83D19A4BBFD480E9EA010C2C4C54D54DF (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_m5F79802A26DF07DAE2DFC2B250CDAB8DDFBC8C4B (RuntimeObject* ___appUtils0, const RuntimeMethod* method);
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_m4B3BAB80E61E32078E9005941D9C9BC69E7CF3D8 (const RuntimeMethod* method);
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * FirebaseHandler_get_ThreadDispatcher_m8437519751496E4FC4AE6133C7F0C787B8117EAB_inline (const RuntimeMethod* method);
// System.Void Firebase.Dispatcher::PollJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m4DD47E8B63F33D975BC1A7D670A509F597F8E9E0 (Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * __this, const RuntimeMethod* method);
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_mC39704DCB7BFD728B88A79C59DC50287679E47B0_inline (const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::ThrowAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_ThrowAndClearPendingExceptions_mC66983DEDF4880ACD5E96B5E9EBA38E00CC93B91 (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m2B84BC26D7A933044EAA1FBD78A65CB767E1C55C (ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_mDB3B76E13D221D0A0838877B9EE94299135B4CA1_inline (ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mC4FB82C3496840F158258C3F5574534520539C2D (EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22 * __this, RuntimeObject * ___sender0, ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22 *, RuntimeObject *, ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m158D9BC9BBF28C2A18D00AF0C8AAE025F9F5D394 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs(UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m27CEB41C390C022D632065D0FBF4AF0E176ACD7A (int32_t ___logType0, const RuntimeMethod* method);
// T Firebase.Platform.MainThreadProperty`1<System.Boolean>::get_Value()
inline bool MainThreadProperty_1_get_Value_mF2F2C7F6FC78AF7B2900A8B09293F5FD59CD02FD (MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F *, const RuntimeMethod*))MainThreadProperty_1_get_Value_mF2F2C7F6FC78AF7B2900A8B09293F5FD59CD02FD_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Firebase.Platform.MainThreadProperty`1<System.Boolean>::.ctor(System.Func`1<T>)
inline void MainThreadProperty_1__ctor_m1E9868AE817D94B4D2EE4DD7A4201F4928893DC1 (MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___getPropertyDelegate0, const RuntimeMethod* method)
{
	((  void (*) (MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F *, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))MainThreadProperty_1__ctor_m1E9868AE817D94B4D2EE4DD7A4201F4928893DC1_gshared)(__this, ___getPropertyDelegate0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_mE01D6AF26DA880E3BF6D8DAF231C270F0C9C002F (FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * __this, const RuntimeMethod* method);
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_mC067B0FADDC1B86488739F7C484B231E0E586C55 (const RuntimeMethod* method);
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_m2808F45B6549A0E0139BC36B236BC95213B123FC_inline (float ___value0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_mC750E0727206EA64FC16F8448D149EBF82C59F41 (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, bool ___hasFocus0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_m327EFE33762C7F1803DDD5C95103007322779A90 (FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * ___behaviour0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.String>(System.Func`1<TResult>)
inline String_t* FirebaseHandler_RunOnMainThread_TisString_t_m33C897AAE39D7C04058D992426158160B46C80A0 (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___f0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisRuntimeObject_mF296A2A70E7F3787BA58CFDDA2A346BB44DA35B7_gshared)(___f0, method);
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_mDA35AED29CF495A2DCCF5FB7B65BBB534192E8AB_inline (const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_AppConfig_mE48F0E5E1FA561208AEBA714C1147ECD693AD402_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Clock_mBDFC2BAB8F8D2628AF8052A79796026E74DBA370_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * DebugLogger_get_Instance_m0E521CDD954F86EB61792F19F2362373EB10745E_inline (const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Logging_m53140204CEF56D9BC71B5C5BA7BB9D6B3974FFD5_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__ctor_m99B061010072193DAF3F270722EEA129C960068A (SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m1068123E08F326815ADFDB2A0104A7D83AD36B2C (UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 * __this, const RuntimeMethod* method);
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_m40EA0D43E2C571DD040E6239AFFA67D4A16A258D (UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * __this, const RuntimeMethod* method);
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m7CD3CF215F26881AD5B856F2708F15A169D66472_inline (const RuntimeMethod* method);
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * UnityLoggingService_get_Instance_mCFC4AB732884A36484C59A3B06D70C568DFF9A78_inline (const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391 (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir>()
inline SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * GameObject_AddComponent_TisSynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8_m76EA58FD5326DF0DB87B6AFA5566E6054E72D288 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * SynchronizationContextBehavoir_get_CallbackQueue_m0E34CE99C7CA3A50D0B5960110C97B35F1464181 (SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * __this, const RuntimeMethod* method);
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m16FA79368D74F4CCBF96D397B8C334CCC8A40720 (UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mA1A943AA9859AACD573FA189B260A066CD4F45D9 (Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * __this, int32_t ___key0, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 *, int32_t, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3A7245D09F4262BE1BC45EA6D3EF2B5826B7C907 (Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * __this, int32_t ___key0, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 *, int32_t, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::.ctor(!0,!1)
inline void Tuple_2__ctor_mD97DA5138458AE1EA1CB774F38FC2580E09B1B71 (Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 *, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject *, const RuntimeMethod*))Tuple_2__ctor_m4D9875962578E3B6CC08739D79B226A806756051_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Enqueue(!0)
inline void Queue_1_Enqueue_m96B059DD9D52E7D5B8404551A72AC5DA8B3DAF0C (Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * __this, Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B *, Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey3__ctor_m5D7D0FA21BEE294E08277468DB45146157D6D4DF (U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___state0, const RuntimeMethod* method);
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4__ctor_m1E47771C8DF4F6868F6935BF213D1E22AF5CB01F (U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 * __this, const RuntimeMethod* method);
// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext::GetThreadEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * UnitySynchronizationContext_GetThreadEvent_mC98D54E3250279ACF4A26392835855D729D729F0 (UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::.ctor()
inline void Dictionary_2__ctor_mD64E0FCA930C512F90CCAC544B5BC9EB760FA0A6 (Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Firebase.Dispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_mE99B93199AD38F0A53946F925713CC84099C35B3 (Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_mFF39382EA85A80364D3837E729F973D1602D6E39_inline (Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_mD79B2E4B647013911BE3A8602014EB108DD1D054 (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Collections.IEnumerator>::Invoke()
inline RuntimeObject* Func_1_Invoke_mD920DBFBA92DEAB0502AD742A42A41BA2EA27E17 (Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::.ctor()
inline void Queue_1__ctor_m27F7DFB229C90B9827714CC6202B0C2B527C5854 (Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m24D36B09BD2169ED37F0B00720DA562151645138 (U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::get_Count()
inline int32_t Queue_1_get_Count_m14C820646C3D017B0D11774D034F17EC3ECF14C1_inline (Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Dequeue()
inline Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * Queue_1_Dequeue_mE22F7556F8B368133CE10D30D285B61601A7BF60 (Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * __this, const RuntimeMethod* method)
{
	return ((  Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * (*) (Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// !0 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item1()
inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * Tuple_2_get_Item1_mDC6700E6F92AAA4AC2453DE3DE8B10F127BF80FD_inline (Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * __this, const RuntimeMethod* method)
{
	return ((  SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * (*) (Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 *, const RuntimeMethod*))Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared_inline)(__this, method);
}
// !1 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item2()
inline RuntimeObject * Tuple_2_get_Item2_m89433C7E6878B3DF466EC16A06F2932B0EFB00A1_inline (Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 *, const RuntimeMethod*))Tuple_2_get_Item2_m2A49F263317603E4A770D5B34222FFCCCB6AE4EB_gshared_inline)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_m04A8807DCFD232502FB1E0C74B4E29ABF16F091C (AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_mDA35AED29CF495A2DCCF5FB7B65BBB534192E8AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB * L_0 = ((AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var))->get__instance_3();
		return L_0;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__cctor_m9927D7EDEC092FBB74745A94434790D209057819 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m455E14E1DC63AE09F61CBB004219B079DC260BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_0, _stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D, /*hidden argument*/NULL);
		((AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var))->set_DefaultUpdateUrl_0(L_0);
		((AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var))->set_Default_1(_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_1, /*hidden argument*/NULL);
		((AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var))->set_Sync_2(L_1);
		AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB * L_2 = (AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB *)il2cpp_codegen_object_new(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		AppConfigExtensions__ctor_m04A8807DCFD232502FB1E0C74B4E29ABF16F091C(L_2, /*hidden argument*/NULL);
		((AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var))->set__instance_3(L_2);
		Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420 * L_3 = (Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420 *)il2cpp_codegen_object_new(Dictionary_2_t7B1003B28A53983B3E92860DF21FBF6B6596F420_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m455E14E1DC63AE09F61CBB004219B079DC260BD8(L_3, /*hidden argument*/Dictionary_2__ctor_m455E14E1DC63AE09F61CBB004219B079DC260BD8_RuntimeMethod_var);
		((AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var))->set_SStringState_4(L_3);
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
// System.Void Firebase.Platform.DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_mD6357FC79350285A4D8372BC692899939F6D36C4 (DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * DebugLogger_get_Instance_m0E521CDD954F86EB61792F19F2362373EB10745E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var);
		DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * L_0 = ((DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void Firebase.Platform.DebugLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__cctor_mD2949D665716DF02D7FD7F4C1181AD6525066903 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * L_0 = (DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 *)il2cpp_codegen_object_new(DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var);
		DebugLogger__ctor_mD6357FC79350285A4D8372BC692899939F6D36C4(L_0, /*hidden argument*/NULL);
		((DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Void Firebase.Dispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_mE99B93199AD38F0A53946F925713CC84099C35B3 (Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *)il2cpp_codegen_object_new(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4(L_0, /*hidden argument*/Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		__this->set_queue_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_ownerThreadId_0(L_2);
		return;
	}
}
// System.Boolean Firebase.Dispatcher::ManagesThisThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dispatcher_ManagesThisThread_mDD4799366D040E2A27D9501C6AE8D2C88AAE086A (Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * __this, const RuntimeMethod* method)
{
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_ownerThreadId_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Void Firebase.Dispatcher::PollJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m4DD47E8B63F33D975BC1A7D670A509F597F8E9E0 (Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	{
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = __this->get_queue_1();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_2 = __this->get_queue_1();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline(L_2, /*hidden argument*/Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
			if ((((int32_t)L_3) <= ((int32_t)0)))
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_4 = __this->get_queue_1();
			NullCheck(L_4);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
			L_5 = Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5(L_4, /*hidden argument*/Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
			V_0 = L_5;
			goto IL_0034;
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_0039);
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
		RuntimeObject * L_6 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
	}

IL_0040:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_0;
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_7, /*hidden argument*/NULL);
		goto IL_0000;
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
// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * ExceptionAggregator_get_Exceptions_m421E855AAB77ED0458E6FCBBB9575F0072411DFE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m35CA066810D9B3641F72BBF74383AAA4CF7EC3DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_0 = ((ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var))->get_threadLocalExceptions_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_1 = (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *)il2cpp_codegen_object_new(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_il2cpp_TypeInfo_var);
		List_1__ctor_m35CA066810D9B3641F72BBF74383AAA4CF7EC3DE(L_1, /*hidden argument*/List_1__ctor_m35CA066810D9B3641F72BBF74383AAA4CF7EC3DE_RuntimeMethod_var);
		((ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var))->set_threadLocalExceptions_0(L_1);
	}

IL_0014:
	{
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_2 = ((ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_tB550D1C922DE89A98A4D82D0F5130B8037815FA3_il2cpp_TypeInfo_var))->get_threadLocalExceptions_0();
		return L_2;
	}
}
// System.Exception Firebase.ExceptionAggregator::GetAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionAggregator_GetAndClearPendingExceptions_mE7FDFA220E3ACEB6D56D9884DEEF91540D2B8522 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5C7212490FEABD42F372F85A6C72E7C1E53DE863_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB3FCAD064C9E80BC8F57A4A25C5477E42714183A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m812AB6E24B11AE4EC6A245D34755899FA9C808C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	{
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_0;
		L_0 = ExceptionAggregator_get_Exceptions_m421E855AAB77ED0458E6FCBBB9575F0072411DFE(/*hidden argument*/NULL);
		V_0 = L_0;
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_inline(L_1, /*hidden argument*/List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = (Exception_t *)NULL;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_4 = V_0;
		NullCheck(L_4);
		Exception_t * L_5;
		L_5 = List_1_get_Item_m812AB6E24B11AE4EC6A245D34755899FA9C808C8_inline(L_4, 0, /*hidden argument*/List_1_get_Item_m812AB6E24B11AE4EC6A245D34755899FA9C808C8_RuntimeMethod_var);
		V_2 = L_5;
		goto IL_0036;
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_7 = V_0;
		NullCheck(L_7);
		ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* L_8;
		L_8 = List_1_ToArray_mB3FCAD064C9E80BC8F57A4A25C5477E42714183A(L_7, /*hidden argument*/List_1_ToArray_mB3FCAD064C9E80BC8F57A4A25C5477E42714183A_RuntimeMethod_var);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_9 = (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 *)il2cpp_codegen_object_new(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var);
		AggregateException__ctor_m8402940DB4199F47B93D5E4A649438657D288BC1(L_9, (RuntimeObject*)(RuntimeObject*)L_8, /*hidden argument*/NULL);
		V_2 = L_9;
	}

IL_0036:
	{
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_10 = V_0;
		NullCheck(L_10);
		List_1_Clear_m5C7212490FEABD42F372F85A6C72E7C1E53DE863(L_10, /*hidden argument*/List_1_Clear_m5C7212490FEABD42F372F85A6C72E7C1E53DE863_RuntimeMethod_var);
		Exception_t * L_11 = V_2;
		return L_11;
	}
}
// System.Void Firebase.ExceptionAggregator::ThrowAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_ThrowAndClearPendingExceptions_mC66983DEDF4880ACD5E96B5E9EBA38E00CC93B91 (const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0;
		L_0 = ExceptionAggregator_GetAndClearPendingExceptions_mE7FDFA220E3ACEB6D56D9884DEEF91540D2B8522(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_2 = V_0;
		Exception_t * L_3;
		L_3 = ExceptionAggregator_LogException_m68B2EB141A7DDD04EFEE794ED44FCB41673E19F2(L_2, /*hidden argument*/NULL);
		Exception_t * L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionAggregator_ThrowAndClearPendingExceptions_mC66983DEDF4880ACD5E96B5E9EBA38E00CC93B91_RuntimeMethod_var)));
	}

IL_0015:
	{
		return;
	}
}
// System.Exception Firebase.ExceptionAggregator::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionAggregator_LogException_m68B2EB141A7DDD04EFEE794ED44FCB41673E19F2 (Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Exception_t * L_0 = ___exception0;
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		Exception_t * L_1 = ___exception0;
		V_0 = ((AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 *)IsInstClass((RuntimeObject*)L_1, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var));
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_3, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_1 = L_3;
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_4 = V_0;
		NullCheck(L_4);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_5;
		L_5 = AggregateException_Flatten_mE14D462A6ADE827340E60E73AB20C254C5800A4F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * L_6;
		L_6 = AggregateException_get_InnerExceptions_m2020FC3A2334DDB72FEBFB2BF4CFE088FF83FEFE_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983(L_6, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983_RuntimeMethod_var);
		V_3 = L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_002f:
		{
			RuntimeObject* L_8 = V_3;
			NullCheck(L_8);
			Exception_t * L_9;
			L_9 = InterfaceFuncInvoker0< Exception_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898_il2cpp_TypeInfo_var, L_8);
			V_2 = L_9;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = V_1;
			Exception_t * L_11 = V_2;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
			NullCheck(L_10);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_10, L_12, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0042:
		{
			RuntimeObject* L_13 = V_3;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_002f;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_3;
			if (!L_15)
			{
				goto IL_005e;
			}
		}

IL_0058:
		{
			RuntimeObject* L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_005e:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
	}

IL_005f:
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = V_1;
		NullCheck(L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18;
		L_18 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_17, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		String_t* L_19;
		L_19 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86(4, L_19, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_007a:
	{
		Exception_t * L_20 = ___exception0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86(4, L_21, /*hidden argument*/NULL);
	}

IL_0086:
	{
		Exception_t * L_22 = ___exception0;
		return L_22;
	}
}
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		goto IL_001c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_1;
		L_1 = ExceptionAggregator_get_Exceptions_m421E855AAB77ED0458E6FCBBB9575F0072411DFE(/*hidden argument*/NULL);
		Exception_t * L_2 = V_0;
		NullCheck(L_1);
		List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892(L_1, L_2, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	} // end catch (depth: 1)

IL_001c:
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
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m3EC6F08162223655B3A0A2FA44BA7060AE3884AD (FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * FirebaseAppUtilsStub_get_Instance_m980CDC684E1C5AE80F1853386A98DD558AE76ABC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * L_0 = ((FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_TranslateDllNotFoundException_m05B83DDC2DB8B21CEFC55D0AA990CA16A9390C8E (FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_PollCallbacks_m13A423E04EC1F3EDFD0D7FE63F18E0D3036346E1 (FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.Platform.FirebaseAppUtilsStub::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseAppUtilsStub_GetLogLevel_m6082A2182D62F889C842C09F4B5A15074B8F4127 (FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__cctor_m5AD579715FDD6408AB8E44DC5F9856684B6B57B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * L_0 = (FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F *)il2cpp_codegen_object_new(FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub__ctor_m3EC6F08162223655B3A0A2FA44BA7060AE3884AD(L_0, /*hidden argument*/NULL);
		((FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral896A2A117718A23135B6923C80A00C014390CF99);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0;
		L_0 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, _stringLiteral896A2A117718A23135B6923C80A00C014390CF99, FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459_RuntimeMethod_var);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_m5D0E7984120FE00B82427E13FCF48085918AB1FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	{
		Type_t * L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459(/*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		PropertyInfo_t * L_3;
		L_3 = Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89(L_2, _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1, /*hidden argument*/NULL);
		V_1 = L_3;
		PropertyInfo_t * L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t * L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_5, NULL, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		return ((*(bool*)((bool*)UnBox(L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mCAC767C009E07776825D231BDFF6C6D1AE119E40 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	{
		Type_t * L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459(/*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		PropertyInfo_t * L_3;
		L_3 = Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89(L_2, _stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE, /*hidden argument*/NULL);
		V_1 = L_3;
		PropertyInfo_t * L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t * L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_5, NULL, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		return ((*(bool*)((bool*)UnBox(L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_mC548F88144B19A23B440492095C0C961FA0D039C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_Update_mE95C0F6CAED8D25B3635F1F7D4A76C5ECE9FAAE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	FieldInfo_t * G_B3_0 = NULL;
	FieldInfo_t * G_B2_0 = NULL;
	{
		Type_t * L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459(/*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t * L_3;
		L_3 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_2, _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ((FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002f;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, NULL, (intptr_t)((intptr_t)FirebaseEditorDispatcher_Update_mE95C0F6CAED8D25B3635F1F7D4A76C5ECE9FAAE9_RuntimeMethod_var), /*hidden argument*/NULL);
		((FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_0(L_5);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ((FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mA7E5F78B2F35D05DB49DD041E80BE767FF7834EE(G_B3_0, L_6, NULL, (bool)1, _stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_m02B9EFE5073A720C65958245D6DB2EA60E452374 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_Update_mE95C0F6CAED8D25B3635F1F7D4A76C5ECE9FAAE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	FieldInfo_t * G_B3_0 = NULL;
	FieldInfo_t * G_B2_0 = NULL;
	{
		Type_t * L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459(/*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t * L_3;
		L_3 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_2, _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ((FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_1();
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002f;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, NULL, (intptr_t)((intptr_t)FirebaseEditorDispatcher_Update_mE95C0F6CAED8D25B3635F1F7D4A76C5ECE9FAAE9_RuntimeMethod_var), /*hidden argument*/NULL);
		((FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_1(L_5);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ((FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_1();
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mA7E5F78B2F35D05DB49DD041E80BE767FF7834EE(G_B3_0, L_6, NULL, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_Update_mE95C0F6CAED8D25B3635F1F7D4A76C5ECE9FAAE9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		FirebaseHandler_Update_m054C867D529EEC80853232EEAFBCAD18CC287817(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m8B3B0DC0A552586D4BE740EFE73A430A2E83D8E3 (bool ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_ListenToPlayState_m8B3B0DC0A552586D4BE740EFE73A430A2E83D8E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_PlayModeStateChanged_mD56F02631552ED79A4B296B857A09E937D1DCE98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C266F303F178CE0931272538E30F328A704472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69A7A27A97142E232EA28BA2557E507697865243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	EventInfo_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	Delegate_t * V_4 = NULL;
	FieldInfo_t * V_5 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_6 = NULL;
	bool V_7 = false;
	{
		Type_t * L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mD6FD666F69631C72E955CF09AD61929823D0B459(/*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c0;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		EventInfo_t * L_3;
		L_3 = Type_GetEvent_m1CA007B4B4D801535D888D036C0A5DC1E1B02840(L_2, _stringLiteral69A7A27A97142E232EA28BA2557E507697865243, /*hidden argument*/NULL);
		V_1 = L_3;
		EventInfo_t * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, _stringLiteral28C266F303F178CE0931272538E30F328A704472, FirebaseEditorDispatcher_ListenToPlayState_m8B3B0DC0A552586D4BE740EFE73A430A2E83D8E3_RuntimeMethod_var);
		V_2 = L_5;
		Type_t * L_6 = V_2;
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		MethodInfo_t * L_9;
		L_9 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_8, _stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2, ((int32_t)40), /*hidden argument*/NULL);
		V_3 = L_9;
		MethodInfo_t * L_10 = V_3;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_11 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = L_11;
		Type_t * L_13 = V_2;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_13);
		NullCheck(L_10);
		MethodInfo_t * L_14;
		L_14 = VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(43 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_10, L_12);
		V_3 = L_14;
		EventInfo_t * L_15 = V_1;
		NullCheck(L_15);
		Type_t * L_16;
		L_16 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, L_15);
		MethodInfo_t * L_17 = V_3;
		Delegate_t * L_18;
		L_18 = Delegate_CreateDelegate_m401D0E8CE90362E4A58B891650261C70D0474192(L_16, NULL, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		bool L_19 = ___start0;
		if (!L_19)
		{
			goto IL_007a;
		}
	}
	{
		EventInfo_t * L_20 = V_1;
		Delegate_t * L_21 = V_4;
		NullCheck(L_20);
		VirtActionInvoker2< RuntimeObject *, Delegate_t * >::Invoke(18 /* System.Void System.Reflection.EventInfo::AddEventHandler(System.Object,System.Delegate) */, L_20, NULL, L_21);
		goto IL_0083;
	}

IL_007a:
	{
		EventInfo_t * L_22 = V_1;
		Delegate_t * L_23 = V_4;
		NullCheck(L_22);
		VirtActionInvoker2< RuntimeObject *, Delegate_t * >::Invoke(24 /* System.Void System.Reflection.EventInfo::RemoveEventHandler(System.Object,System.Delegate) */, L_22, NULL, L_23);
	}

IL_0083:
	{
		return;
	}

IL_0084:
	{
		Type_t * L_24 = V_0;
		NullCheck(L_24);
		FieldInfo_t * L_25;
		L_25 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_24, _stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837, /*hidden argument*/NULL);
		V_5 = L_25;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_26 = ((FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_2();
		if (L_26)
		{
			goto IL_00a9;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_27 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_27, NULL, (intptr_t)((intptr_t)FirebaseEditorDispatcher_PlayModeStateChanged_mD56F02631552ED79A4B296B857A09E937D1DCE98_RuntimeMethod_var), /*hidden argument*/NULL);
		((FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_2(L_27);
	}

IL_00a9:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_28 = ((FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t0A4FB83F54D2D3E94B31278669597FBA6772F6FB_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_2();
		V_6 = L_28;
		bool L_29 = ___start0;
		V_7 = L_29;
		FieldInfo_t * L_30 = V_5;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_31 = V_6;
		bool L_32 = V_7;
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mA7E5F78B2F35D05DB49DD041E80BE767FF7834EE(L_30, L_31, NULL, L_32, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::PlayModeStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_PlayModeStateChanged_mD56F02631552ED79A4B296B857A09E937D1DCE98 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = FirebaseHandler_get_IsPlayMode_m59AFE9F48F2EA1AADCFBD94DBE010730359B3B40_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2;
		L_2 = FirebaseEditorDispatcher_get_EditorIsPlaying_m5D0E7984120FE00B82427E13FCF48085918AB1FD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		FirebaseEditorDispatcher_StopEditorUpdate_m02B9EFE5073A720C65958245D6DB2EA60E452374(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_3;
		L_3 = FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		FirebaseHandler_StartMonoBehaviour_m3258056C31C8D32C690329363587720C60B35E0A(L_3, /*hidden argument*/NULL);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_4;
		L_4 = FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		FirebaseHandler_set_IsPlayMode_m832E6FCD6DA3ACDEA0B59D346EDD8585381C3B15_inline(L_4, (bool)1, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_5;
		L_5 = FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = FirebaseHandler_get_IsPlayMode_m59AFE9F48F2EA1AADCFBD94DBE010730359B3B40_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		bool L_7;
		L_7 = FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mCAC767C009E07776825D231BDFF6C6D1AE119E40(/*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_8;
		L_8 = FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline(/*hidden argument*/NULL);
		NullCheck(L_8);
		FirebaseHandler_StopMonoBehaviour_m1CB49D4E683D48586AEF5F8B515EAC41F2F502BE(L_8, /*hidden argument*/NULL);
		FirebaseEditorDispatcher_StartEditorUpdate_mC548F88144B19A23B440492095C0C961FA0D039C(/*hidden argument*/NULL);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_9;
		L_9 = FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline(/*hidden argument*/NULL);
		NullCheck(L_9);
		FirebaseHandler_set_IsPlayMode_m832E6FCD6DA3ACDEA0B59D346EDD8585381C3B15_inline(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_mA7E5F78B2F35D05DB49DD041E80BE767FF7834EE (FieldInfo_t * ___eventField0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback1, RuntimeObject * ___target2, bool ___add3, String_t* ___errorMessage4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t * V_0 = NULL;
	Delegate_t * V_1 = NULL;
	Delegate_t * V_2 = NULL;
	{
		FieldInfo_t * L_0 = ___eventField0;
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		FieldInfo_t * L_1 = ___eventField0;
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_1, NULL);
		V_0 = ((Delegate_t *)IsInstClass((RuntimeObject*)L_2, Delegate_t_il2cpp_TypeInfo_var));
		bool L_3 = ___add3;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		FieldInfo_t * L_4 = ___eventField0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_4);
		RuntimeObject * L_6 = ___target2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = ___callback1;
		NullCheck(L_7);
		MethodInfo_t * L_8;
		L_8 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_7, /*hidden argument*/NULL);
		Delegate_t * L_9;
		L_9 = Delegate_CreateDelegate_m401D0E8CE90362E4A58B891650261C70D0474192(L_5, L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Delegate_t * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		FieldInfo_t * L_11 = ___eventField0;
		Delegate_t * L_12 = V_0;
		Delegate_t * L_13 = V_1;
		Delegate_t * L_14;
		L_14 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_11, NULL, L_14, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0045:
	{
		FieldInfo_t * L_15 = ___eventField0;
		Delegate_t * L_16 = V_1;
		NullCheck(L_15);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_15, NULL, L_16, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}

IL_004e:
	{
		Delegate_t * L_17 = V_0;
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		FieldInfo_t * L_18 = ___eventField0;
		NullCheck(L_18);
		Type_t * L_19;
		L_19 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		RuntimeObject * L_20 = ___target2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_21 = ___callback1;
		NullCheck(L_21);
		MethodInfo_t * L_22;
		L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_21, /*hidden argument*/NULL);
		Delegate_t * L_23;
		L_23 = Delegate_CreateDelegate_m401D0E8CE90362E4A58B891650261C70D0474192(L_19, L_20, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		FieldInfo_t * L_24 = ___eventField0;
		Delegate_t * L_25 = V_0;
		Delegate_t * L_26 = V_2;
		Delegate_t * L_27;
		L_27 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_24, NULL, L_27, /*hidden argument*/NULL);
		return;
	}

IL_0076:
	{
		String_t* L_28 = ___errorMessage4;
		bool L_29;
		L_29 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_30 = ___errorMessage4;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86(4, L_30, /*hidden argument*/NULL);
	}

IL_008a:
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
// System.Void Firebase.Platform.FirebaseHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__cctor_m17F25FC2EE5E6E78B15620FCDE84BEF8625CE0F9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * L_0;
		L_0 = FirebaseAppUtilsStub_get_Instance_m980CDC684E1C5AE80F1853386A98DD558AE76ABC_inline(/*hidden argument*/NULL);
		FirebaseHandler_set_AppUtils_mCA47C4E5CB3698D8715B88CB409F5112C38A16D6_inline(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_mD79B2E4B647013911BE3A8602014EB108DD1D054 (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0;
		L_0 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = FirebaseEditorDispatcher_get_EditorIsPlaying_m5D0E7984120FE00B82427E13FCF48085918AB1FD(/*hidden argument*/NULL);
		FirebaseHandler_set_IsPlayMode_m832E6FCD6DA3ACDEA0B59D346EDD8585381C3B15_inline(__this, L_1, /*hidden argument*/NULL);
		FirebaseEditorDispatcher_ListenToPlayState_m8B3B0DC0A552586D4BE740EFE73A430A2E83D8E3((bool)1, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0026:
	{
		FirebaseHandler_set_IsPlayMode_m832E6FCD6DA3ACDEA0B59D346EDD8585381C3B15_inline(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_002d:
	{
		bool L_2;
		L_2 = FirebaseHandler_get_IsPlayMode_m59AFE9F48F2EA1AADCFBD94DBE010730359B3B40_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		FirebaseHandler_StartMonoBehaviour_m3258056C31C8D32C690329363587720C60B35E0A(__this, /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_0043:
	{
		FirebaseEditorDispatcher_StartEditorUpdate_mC548F88144B19A23B440492095C0C961FA0D039C(/*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_mC39704DCB7BFD728B88A79C59DC50287679E47B0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_U3CAppUtilsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_mCA47C4E5CB3698D8715B88CB409F5112C38A16D6 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_U3CAppUtilsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Firebase.Platform.FirebaseHandler::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseHandler_get_TickCount_m5F47CB784234BDF946837F63C6E93291FA9973ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		int32_t L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_tickCount_2();
		return L_0;
	}
}
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * FirebaseHandler_get_ThreadDispatcher_m8437519751496E4FC4AE6133C7F0C787B8117EAB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_U3CThreadDispatcherU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_mFF39382EA85A80364D3837E729F973D1602D6E39 (Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_U3CThreadDispatcherU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m59AFE9F48F2EA1AADCFBD94DBE010730359B3B40 (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsPlayModeU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_m832E6FCD6DA3ACDEA0B59D346EDD8585381C3B15 (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsPlayModeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m3258056C31C8D32C690329363587720C60B35E0A (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3_m989536977F825EC4D99402BF5F12C4BA8596137F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_firebaseHandler_5();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_firebaseHandler_5(__this);
	}

IL_0010:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, _stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		NullCheck(L_2);
		FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * L_3;
		L_3 = GameObject_AddComponent_TisFirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3_m989536977F825EC4D99402BF5F12C4BA8596137F(L_2, /*hidden argument*/GameObject_AddComponent_TisFirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3_m989536977F825EC4D99402BF5F12C4BA8596137F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_firebaseMonoBehaviour_0(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Create_mE6147188A48A044C46BE9666824CAA1445B29BD8(L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m1CB49D4E683D48586AEF5F8B515EAC41F2F502BE (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m8219436209D7353F3CA78D631BA1F0369A1D77F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_firebaseMonoBehaviour_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_9();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_3, NULL, (intptr_t)((intptr_t)FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m8219436209D7353F3CA78D631BA1F0369A1D77F2_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_9(L_3);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_9();
		bool L_5;
		L_5 = FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5(L_4, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_firebaseHandler_5();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_m5F79802A26DF07DAE2DFC2B250CDAB8DDFBC8C4B (RuntimeObject* ___appUtils0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_mB7A987722CE1977F6EA988EF5A31CD9BF94067FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3 * V_0 = NULL;
	{
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3 * L_0 = (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3 *)il2cpp_codegen_object_new(U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3_il2cpp_TypeInfo_var);
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_mF765AEB83D19A4BBFD480E9EA010C2C4C54D54DF(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3 * L_1 = V_0;
		RuntimeObject* L_2 = ___appUtils0;
		NullCheck(L_1);
		L_1->set_appUtils_0(L_2);
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_appUtils_0();
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_mB7A987722CE1977F6EA988EF5A31CD9BF94067FA_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void Firebase.Platform.IFirebaseAppUtils::TranslateDllNotFoundException(System.Action) */, IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E_il2cpp_TypeInfo_var, L_4, L_6);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Create(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Create_m1B30952F7479043520E3D7023F331D038F6B2125 (RuntimeObject* ___appUtils0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___appUtils0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_CreatePartialOnMainThread_m5F79802A26DF07DAE2DFC2B250CDAB8DDFBC8C4B(L_0, /*hidden argument*/NULL);
		UnityPlatformServices_SetupServices_m4B3BAB80E61E32078E9005941D9C9BC69E7CF3D8(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Update_m054C867D529EEC80853232EEAFBCAD18CC287817 (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_U3CUpdateU3Em__1_m2A0969AB98A590AA6ECDDC1575457DA3A5A0E981_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * L_0;
		L_0 = FirebaseHandler_get_ThreadDispatcher_m8437519751496E4FC4AE6133C7F0C787B8117EAB_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		Dispatcher_PollJobs_m4DD47E8B63F33D975BC1A7D670A509F597F8E9E0(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1;
		L_1 = FirebaseHandler_get_AppUtils_mC39704DCB7BFD728B88A79C59DC50287679E47B0_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Firebase.Platform.IFirebaseAppUtils::PollCallbacks() */, IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E_il2cpp_TypeInfo_var, L_1);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_2 = __this->get_Updated_6();
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = __this->get_UpdatedEventWrapper_7();
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, __this, (intptr_t)((intptr_t)FirebaseHandler_U3CUpdateU3Em__1_m2A0969AB98A590AA6ECDDC1575457DA3A5A0E981_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_UpdatedEventWrapper_7(L_4);
	}

IL_003c:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = __this->get_UpdatedEventWrapper_7();
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		ExceptionAggregator_ThrowAndClearPendingExceptions_mC66983DEDF4880ACD5E96B5E9EBA38E00CC93B91(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		int32_t L_6 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_tickCount_2();
		((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_tickCount_2(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_mC750E0727206EA64FC16F8448D149EBF82C59F41 (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mC4FB82C3496840F158258C3F5574534520539C2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * V_0 = NULL;
	{
		EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22 * L_0 = __this->get_ApplicationFocusChanged_8();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		EventHandler_1_t2C441B7EE09BFD57ABE44E9FCFEE73CA8F470A22 * L_1 = __this->get_ApplicationFocusChanged_8();
		ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * L_2 = (ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 *)il2cpp_codegen_object_new(ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404_il2cpp_TypeInfo_var);
		ApplicationFocusChangedEventArgs__ctor_m2B84BC26D7A933044EAA1FBD78A65CB767E1C55C(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * L_3 = V_0;
		bool L_4 = ___hasFocus0;
		NullCheck(L_3);
		ApplicationFocusChangedEventArgs_set_HasFocus_mDB3B76E13D221D0A0838877B9EE94299135B4CA1_inline(L_3, L_4, /*hidden argument*/NULL);
		ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * L_5 = V_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_mC4FB82C3496840F158258C3F5574534520539C2D(L_1, NULL, L_5, /*hidden argument*/EventHandler_1_Invoke_mC4FB82C3496840F158258C3F5574534520539C2D_RuntimeMethod_var);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_m327EFE33762C7F1803DDD5C95103007322779A90 (FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * ___behaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * L_0 = ___behaviour0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * L_1 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_firebaseMonoBehaviour_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_firebaseMonoBehaviour_0((FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 *)NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::<StopMonoBehaviour>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m8219436209D7353F3CA78D631BA1F0369A1D77F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_firebaseMonoBehaviour_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Destroy_m158D9BC9BBF28C2A18D00AF0C8AAE025F9F5D394(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * L_2 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_firebaseMonoBehaviour_0();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::<Update>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_U3CUpdateU3Em__1_m2A0969AB98A590AA6ECDDC1575457DA3A5A0E981 (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_Updated_6();
		NullCheck(L_0);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_0, __this, (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *)NULL, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
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
// System.Boolean Firebase.Platform.FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs(UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m27CEB41C390C022D632065D0FBF4AF0E176ACD7A (int32_t ___logType0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___logType0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___logType0;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		return (bool)((((int32_t)G_B3_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Firebase.Platform.FirebaseLogger::CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m3C672C23E7A9E38397D742A1AA95732883E43C0B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceLogType_tEF56255769F9DA7443979F574673760330C8FA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bf991611aU2Df9efU2D4505U2Db8a9U2Dc93617257bc4U7D_tF5907C43726D4ACAB52A4445850E9AB3E6E176DC____U24fieldU2D0_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	int32_t V_1 = 0;
	LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_2;
		L_2 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_1, _stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B, /*hidden argument*/NULL);
		V_0 = L_2;
		MethodInfo_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B* L_4 = (LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B*)(LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B*)SZArrayNew(LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B_il2cpp_TypeInfo_var, (uint32_t)5);
		LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B* L_5 = L_4;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bf991611aU2Df9efU2D4505U2Db8a9U2Dc93617257bc4U7D_tF5907C43726D4ACAB52A4445850E9AB3E6E176DC____U24fieldU2D0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_0063;
	}

IL_0034:
	{
		LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (int32_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		MethodInfo_t * L_11 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		NullCheck(L_11);
		RuntimeObject * L_17;
		L_17 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_11, NULL, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m27CEB41C390C022D632065D0FBF4AF0E176ACD7A(((*(int32_t*)((int32_t*)UnBox(L_17, StackTraceLogType_tEF56255769F9DA7443979F574673760330C8FA37_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		return (bool)1;
	}

IL_005f:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_20 = V_3;
		LogTypeU5BU5D_tB393FBBE13039FD1F369305053CBB76891C2CC1B* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_006c:
	{
		return (bool)0;
	}
}
// System.Boolean Firebase.Platform.FirebaseLogger::get_CanRedirectNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_get_CanRedirectNativeLogs_mA3ED5F874C3D698FB2D1656B3B4E1EAFE257BBF4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1_get_Value_mF2F2C7F6FC78AF7B2900A8B09293F5FD59CD02FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceLogType_tEF56255769F9DA7443979F574673760330C8FA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F * L_0 = ((FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var))->get_incompatibleStackUnwindingEnabled_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = MainThreadProperty_1_get_Value_mF2F2C7F6FC78AF7B2900A8B09293F5FD59CD02FD(L_0, /*hidden argument*/MainThreadProperty_1_get_Value_mF2F2C7F6FC78AF7B2900A8B09293F5FD59CD02FD_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Application_t317038E88BDCE3640566EB8791C9E2AAAB21C87C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		FieldInfo_t * L_4;
		L_4 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_3, _stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B, /*hidden argument*/NULL);
		V_0 = L_4;
		FieldInfo_t * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		FieldInfo_t * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_6, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m27CEB41C390C022D632065D0FBF4AF0E176ACD7A(((*(int32_t*)((int32_t*)UnBox(L_7, StackTraceLogType_tEF56255769F9DA7443979F574673760330C8FA37_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0044:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = FirebaseHandler_get_AppUtils_mC39704DCB7BFD728B88A79C59DC50287679E47B0_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Firebase.Platform.PlatformLogLevel Firebase.Platform.IFirebaseAppUtils::GetLogLevel() */, IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = ___logLevel0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_4 = ___logLevel0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0036:
	{
		String_t* L_5 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0041:
	{
		String_t* L_6 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_6, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_004c:
	{
		String_t* L_7 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0057:
	{
		goto IL_005c;
	}

IL_005c:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger__cctor_mE7B888BE9D8FD6CC2A7E7FB95B13368CFF5397EC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m3C672C23E7A9E38397D742A1AA95732883E43C0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1__ctor_m1E9868AE817D94B4D2EE4DD7A4201F4928893DC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = ((FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_1, NULL, (intptr_t)((intptr_t)FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m3C672C23E7A9E38397D742A1AA95732883E43C0B_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		((FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_1(L_1);
	}

IL_0018:
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ((FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F * L_3 = (MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F *)il2cpp_codegen_object_new(MainThreadProperty_1_t280C9755957F9C0C4B7574E76AD3F077ED3DAF4F_il2cpp_TypeInfo_var);
		MainThreadProperty_1__ctor_m1E9868AE817D94B4D2EE4DD7A4201F4928893DC1(L_3, L_2, /*hidden argument*/MainThreadProperty_1__ctor_m1E9868AE817D94B4D2EE4DD7A4201F4928893DC1_RuntimeMethod_var);
		((FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var))->set_incompatibleStackUnwindingEnabled_0(L_3);
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
// System.Void Firebase.Platform.FirebaseMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour__ctor_m17C407059420FFEA2371846AD4279B80AF15B62E (FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_mE01D6AF26DA880E3BF6D8DAF231C270F0C9C002F (FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnEnable_m18519EA6271E80120F01D31B3EE592127B48B72C (FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * __this, const RuntimeMethod* method)
{
	{
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_mE01D6AF26DA880E3BF6D8DAF231C270F0C9C002F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_Update_m8338C29185F7348D4FC338194CBD3F285645A773 (FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * __this, const RuntimeMethod* method)
{
	FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * V_0 = NULL;
	{
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_mE01D6AF26DA880E3BF6D8DAF231C270F0C9C002F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		float L_2;
		L_2 = PlatformInformation_get_RealtimeSinceStartup_mC067B0FADDC1B86488739F7C484B231E0E586C55(/*hidden argument*/NULL);
		PlatformInformation_set_RealtimeSinceStartupSafe_m2808F45B6549A0E0139BC36B236BC95213B123FC_inline(L_2, /*hidden argument*/NULL);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_3 = V_0;
		NullCheck(L_3);
		FirebaseHandler_Update_m054C867D529EEC80853232EEAFBCAD18CC287817(L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnApplicationFocus_mC5EA1995ED7D3CB5F83902CFA519EC507E05EA8D (FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * V_0 = NULL;
	{
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_mE01D6AF26DA880E3BF6D8DAF231C270F0C9C002F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_2 = V_0;
		bool L_3 = ___hasFocus0;
		NullCheck(L_2);
		FirebaseHandler_OnApplicationFocus_mC750E0727206EA64FC16F8448D149EBF82C59F41(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnDestroy_m3FD94734285C9254480EF29135FA354D0E2292B8 (FirebaseMonoBehaviour_t89D656ACC72D75E4C241318725780D3F7E8C99E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_OnMonoBehaviourDestroyed_m327EFE33762C7F1803DDD5C95103007322779A90(__this, /*hidden argument*/NULL);
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
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628 (const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
	}
}
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_m314080A5FF94D29E352F4E3FCA4870CBB67E3840 (const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
	}
}
// System.String Firebase.Platform.PlatformInformation::get_DefaultConfigLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_DefaultConfigLocation_mCC41CAB77CCA5F822E67C9B8D86478606777A06C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m33C897AAE39D7C04058D992426158160B46C80A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_mDA5465F3BF2AEC346B3D5E759274C215F0F5778E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_0 = ((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_1 = (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *)il2cpp_codegen_object_new(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
		Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA(L_1, NULL, (intptr_t)((intptr_t)PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_mDA5465F3BF2AEC346B3D5E759274C215F0F5778E_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
		((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_2(L_1);
	}

IL_0018:
	{
		Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_2 = ((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = FirebaseHandler_RunOnMainThread_TisString_t_m33C897AAE39D7C04058D992426158160B46C80A0(L_2, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisString_t_m33C897AAE39D7C04058D992426158160B46C80A0_RuntimeMethod_var);
		return L_3;
	}
}
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_mC067B0FADDC1B86488739F7C484B231E0E586C55 (const RuntimeMethod* method)
{
	{
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_m2808F45B6549A0E0139BC36B236BC95213B123FC (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->set_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeName_m7DC9B4B120826252A1359FBB00EEA9CCA0B9FE81 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeVersion_m449590D737405693CC7C1AF5878FBAED5B49852F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m33C897AAE39D7C04058D992426158160B46C80A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_U3Cget_RuntimeVersionU3Em__1_mC46792C61E93BE6A867A1C199E2268F43FE515D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->get_runtimeVersion_0();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_1 = ((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_3();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_2 = (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *)il2cpp_codegen_object_new(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
		Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA(L_2, NULL, (intptr_t)((intptr_t)PlatformInformation_U3Cget_RuntimeVersionU3Em__1_mC46792C61E93BE6A867A1C199E2268F43FE515D9_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
		((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_3(L_2);
	}

IL_0022:
	{
		Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_3 = ((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_3();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = FirebaseHandler_RunOnMainThread_TisString_t_m33C897AAE39D7C04058D992426158160B46C80A0(L_3, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisString_t_m33C897AAE39D7C04058D992426158160B46C80A0_RuntimeMethod_var);
		((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->set_runtimeVersion_0(L_4);
	}

IL_0031:
	{
		String_t* L_5 = ((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->get_runtimeVersion_0();
		return L_5;
	}
}
// System.String Firebase.Platform.PlatformInformation::<get_DefaultConfigLocation>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_mDA5465F3BF2AEC346B3D5E759274C215F0F5778E (const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Firebase.Platform.PlatformInformation::<get_RuntimeVersion>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_U3Cget_RuntimeVersionU3Em__1_mC46792C61E93BE6A867A1C199E2268F43FE515D9 (const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		return L_0;
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
// System.Void Firebase.Platform.Services::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services__cctor_m7D026055BA78EEC691B309AA1A6702D54C34F366 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = AppConfigExtensions_get_Instance_mDA35AED29CF495A2DCCF5FB7B65BBB534192E8AB_inline(/*hidden argument*/NULL);
		Services_set_AppConfig_mE48F0E5E1FA561208AEBA714C1147ECD693AD402_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_il2cpp_TypeInfo_var))->get_Instance_0();
		Services_set_Clock_mBDFC2BAB8F8D2628AF8052A79796026E74DBA370_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var);
		DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * L_2;
		L_2 = DebugLogger_get_Instance_m0E521CDD954F86EB61792F19F2362373EB10745E_inline(/*hidden argument*/NULL);
		Services_set_Logging_m53140204CEF56D9BC71B5C5BA7BB9D6B3974FFD5_inline(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_AppConfig_mE48F0E5E1FA561208AEBA714C1147ECD693AD402 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		((Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields*)il2cpp_codegen_static_fields_for(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var))->set_U3CAppConfigU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_Clock_mBDFC2BAB8F8D2628AF8052A79796026E74DBA370 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		((Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields*)il2cpp_codegen_static_fields_for(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var))->set_U3CClockU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_Logging_m53140204CEF56D9BC71B5C5BA7BB9D6B3974FFD5 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		((Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields*)il2cpp_codegen_static_fields_for(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var))->set_U3CLoggingU3Ek__BackingField_2(L_0);
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
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__ctor_m99B061010072193DAF3F270722EEA129C960068A (SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.Default.SystemClock::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__cctor_m95490CBBCD17DDC68771336873D160F866822F5F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF * L_0 = (SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF *)il2cpp_codegen_object_new(SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_il2cpp_TypeInfo_var);
		SystemClock__ctor_m99B061010072193DAF3F270722EEA129C960068A(L_0, /*hidden argument*/NULL);
		((SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_tED67738C30853643A9F95DA93EAB404AF33C64FF_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m1068123E08F326815ADFDB2A0104A7D83AD36B2C (UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		AppConfigExtensions__ctor_m04A8807DCFD232502FB1E0C74B4E29ABF16F091C(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m7CD3CF215F26881AD5B856F2708F15A169D66472 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var);
		UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 * L_0 = ((UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var))->get__instance_5();
		return L_0;
	}
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__cctor_mDEDBB398B807722C7F826561ACF1C8E215A3ECB6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 * L_0 = (UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 *)il2cpp_codegen_object_new(UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var);
		UnityConfigExtensions__ctor_m1068123E08F326815ADFDB2A0104A7D83AD36B2C(L_0, /*hidden argument*/NULL);
		((UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var))->set__instance_5(L_0);
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
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_m40EA0D43E2C571DD040E6239AFFA67D4A16A258D (UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * UnityLoggingService_get_Instance_mCFC4AB732884A36484C59A3B06D70C568DFF9A78 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var);
		UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * L_0 = ((UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void Firebase.Unity.UnityLoggingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__cctor_mBE727CBA25AF8C39C91022BD50F0E336F14B2717 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * L_0 = (UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 *)il2cpp_codegen_object_new(UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var);
		UnityLoggingService__ctor_m40EA0D43E2C571DD040E6239AFFA67D4A16A258D(L_0, /*hidden argument*/NULL);
		((UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_m4B3BAB80E61E32078E9005941D9C9BC69E7CF3D8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = UnityConfigExtensions_get_DefaultInstance_m7CD3CF215F26881AD5B856F2708F15A169D66472_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		Services_set_AppConfig_mE48F0E5E1FA561208AEBA714C1147ECD693AD402_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var);
		UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * L_1;
		L_1 = UnityLoggingService_get_Instance_mCFC4AB732884A36484C59A3B06D70C568DFF9A78_inline(/*hidden argument*/NULL);
		Services_set_Logging_m53140204CEF56D9BC71B5C5BA7BB9D6B3974FFD5_inline(L_1, /*hidden argument*/NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m16FA79368D74F4CCBF96D397B8C334CCC8A40720 (UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8_m76EA58FD5326DF0DB87B6AFA5566E6054E72D288_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391(__this, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_0, /*hidden argument*/NULL);
		__this->set_mainThreadId_9(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___gameObject0;
		NullCheck(L_2);
		SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * L_3;
		L_3 = GameObject_AddComponent_TisSynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8_m76EA58FD5326DF0DB87B6AFA5566E6054E72D288(L_2, /*hidden argument*/GameObject_AddComponent_TisSynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8_m76EA58FD5326DF0DB87B6AFA5566E6054E72D288_RuntimeMethod_var);
		__this->set_behavior_8(L_3);
		SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * L_4 = __this->get_behavior_8();
		NullCheck(L_4);
		Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * L_5;
		L_5 = SynchronizationContextBehavoir_get_CallbackQueue_m0E34CE99C7CA3A50D0B5960110C97B35F1464181(L_4, /*hidden argument*/NULL);
		__this->set_queue_7(L_5);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_mE6147188A48A044C46BE9666824CAA1445B29BD8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * L_0 = ((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var))->get__instance_6();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___gameObject0;
		UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * L_2 = (UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 *)il2cpp_codegen_object_new(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_m16FA79368D74F4CCBF96D397B8C334CCC8A40720(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var))->set__instance_6(L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m158D9BC9BBF28C2A18D00AF0C8AAE025F9F5D394 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var))->set__instance_6((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 *)NULL);
		return;
	}
}
// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext::GetThreadEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * UnitySynchronizationContext_GetThreadEvent_mC98D54E3250279ACF4A26392835855D729D729F0 (UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA1A943AA9859AACD573FA189B260A066CD4F45D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3A7245D09F4262BE1BC45EA6D3EF2B5826B7C907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * L_0 = ((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var))->get_signalDictionary_10();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
			Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * L_2 = ((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var))->get_signalDictionary_10();
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_3;
			L_3 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
			NullCheck(L_3);
			int32_t L_4;
			L_4 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5;
			L_5 = Dictionary_2_TryGetValue_mA1A943AA9859AACD573FA189B260A066CD4F45D9(L_2, L_4, (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mA1A943AA9859AACD573FA189B260A066CD4F45D9_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0043;
			}
		}

IL_0027:
		{
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_6 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_6, (bool)0, /*hidden argument*/NULL);
			V_0 = L_6;
			IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
			Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * L_7 = ((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var))->get_signalDictionary_10();
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8;
			L_8 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
			NullCheck(L_8);
			int32_t L_9;
			L_9 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_8, /*hidden argument*/NULL);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_10 = V_0;
			NullCheck(L_7);
			Dictionary_2_set_Item_m3A7245D09F4262BE1BC45EA6D3EF2B5826B7C907(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m3A7245D09F4262BE1BC45EA6D3EF2B5826B7C907_RuntimeMethod_var);
		}

IL_0043:
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
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_12, /*hidden argument*/NULL);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_14 = V_0;
		return L_14;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Post_mFFC9993A213F2DE9D2AB3003272BD0D62486C6E6 (UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___d0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m96B059DD9D52E7D5B8404551A72AC5DA8B3DAF0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_mD97DA5138458AE1EA1CB774F38FC2580E09B1B71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * L_0 = __this->get_queue_7();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * L_2 = __this->get_queue_7();
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_3 = ___d0;
		RuntimeObject * L_4 = ___state1;
		Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * L_5 = (Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 *)il2cpp_codegen_object_new(Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mD97DA5138458AE1EA1CB774F38FC2580E09B1B71(L_5, L_3, L_4, /*hidden argument*/Tuple_2__ctor_mD97DA5138458AE1EA1CB774F38FC2580E09B1B71_RuntimeMethod_var);
		NullCheck(L_2);
		Queue_1_Enqueue_m96B059DD9D52E7D5B8404551A72AC5DA8B3DAF0C(L_2, L_5, /*hidden argument*/Queue_1_Enqueue_m96B059DD9D52E7D5B8404551A72AC5DA8B3DAF0C_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2B, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Send(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Send_m0BDC4069F41293598BA84281FCBBA4C46DAC00A4 (UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___d0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m9BF30D676CF1F246C66DF8A7217F8FF10906C0AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * V_0 = NULL;
	U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 * V_1 = NULL;
	{
		U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * L_0 = (U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 *)il2cpp_codegen_object_new(U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143_il2cpp_TypeInfo_var);
		U3CSendU3Ec__AnonStorey3__ctor_m5D7D0FA21BEE294E08277468DB45146157D6D4DF(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * L_1 = V_0;
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_2 = ___d0;
		NullCheck(L_1);
		L_1->set_d_0(L_2);
		int32_t L_3 = __this->get_mainThreadId_9();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4;
		L_4 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * L_6 = V_0;
		NullCheck(L_6);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_7 = L_6->get_d_0();
		RuntimeObject * L_8 = ___state1;
		NullCheck(L_7);
		SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461(L_7, L_8, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0033:
	{
		U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 * L_9 = (U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 *)il2cpp_codegen_object_new(U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226_il2cpp_TypeInfo_var);
		U3CSendU3Ec__AnonStorey4__ctor_m1E47771C8DF4F6868F6935BF213D1E22AF5CB01F(L_9, /*hidden argument*/NULL);
		V_1 = L_9;
		U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 * L_10 = V_1;
		U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * L_11 = V_0;
		NullCheck(L_10);
		L_10->set_U3CU3Ef__refU243_1(L_11);
		U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 * L_12 = V_1;
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_13;
		L_13 = UnitySynchronizationContext_GetThreadEvent_mC98D54E3250279ACF4A26392835855D729D729F0(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_newSignal_0(L_13);
		U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 * L_14 = V_1;
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_15 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_15, L_14, (intptr_t)((intptr_t)U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m9BF30D676CF1F246C66DF8A7217F8FF10906C0AF_RuntimeMethod_var), /*hidden argument*/NULL);
		RuntimeObject * L_16 = ___state1;
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, __this, L_15, L_16);
		U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 * L_17 = V_1;
		NullCheck(L_17);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_18 = L_17->get_newSignal_0();
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_18, ((int32_t)15000));
	}

IL_0070:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__cctor_mD3303025BE218EE1787E91E30323A71276C90224 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD64E0FCA930C512F90CCAC544B5BC9EB760FA0A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var))->set__instance_6((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0 *)NULL);
		Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 * L_0 = (Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328 *)il2cpp_codegen_object_new(Dictionary_2_t31918EE6CC1A6CFB04C336446E2554070F2D1328_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD64E0FCA930C512F90CCAC544B5BC9EB760FA0A6(L_0, /*hidden argument*/Dictionary_2__ctor_mD64E0FCA930C512F90CCAC544B5BC9EB760FA0A6_RuntimeMethod_var);
		((UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t58AB5B8021EC33EC7A535FDC091649BC350B5EA0_il2cpp_TypeInfo_var))->set_signalDictionary_10(L_0);
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
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_mF765AEB83D19A4BBFD480E9EA010C2C4C54D54DF (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_mB7A987722CE1977F6EA988EF5A31CD9BF94067FA (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_tCA3463969D55B0C6EEA8CF8D49ED3FE1730A4BB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
			FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_3 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_firebaseHandler_5();
			if (!L_3)
			{
				goto IL_0020;
			}
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x55, FINALLY_004e);
		}

IL_0020:
		{
			RuntimeObject* L_4 = __this->get_appUtils_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
			FirebaseHandler_set_AppUtils_mCA47C4E5CB3698D8715B88CB409F5112C38A16D6_inline(L_4, /*hidden argument*/NULL);
			Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * L_5;
			L_5 = FirebaseHandler_get_ThreadDispatcher_m8437519751496E4FC4AE6133C7F0C787B8117EAB_inline(/*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_003f;
			}
		}

IL_0035:
		{
			Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * L_6 = (Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 *)il2cpp_codegen_object_new(Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3_il2cpp_TypeInfo_var);
			Dispatcher__ctor_mE99B93199AD38F0A53946F925713CC84099C35B3(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
			FirebaseHandler_set_ThreadDispatcher_mFF39382EA85A80364D3837E729F973D1602D6E39_inline(L_6, /*hidden argument*/NULL);
		}

IL_003f:
		{
			FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_7 = (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 *)il2cpp_codegen_object_new(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
			FirebaseHandler__ctor_mD79B2E4B647013911BE3A8602014EB108DD1D054(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
			((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_firebaseHandler_5(L_7);
			IL2CPP_LEAVE(0x55, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
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
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m2B84BC26D7A933044EAA1FBD78A65CB767E1C55C (ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_mDB3B76E13D221D0A0838877B9EE94299135B4CA1 (ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasFocusU3Ek__BackingField_1(L_0);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey3__ctor_m5D7D0FA21BEE294E08277468DB45146157D6D4DF (U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4__ctor_m1E47771C8DF4F6868F6935BF213D1E22AF5CB01F (U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::<>m__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m9BF30D676CF1F246C66DF8A7217F8FF10906C0AF (U3CSendU3Ec__AnonStorey4_t1AD9593AF725645D9E7219C91F428930BAE03226 * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		U3CSendU3Ec__AnonStorey3_t80EA818429841278F48C259F90F13E662DDA2143 * L_0 = __this->get_U3CU3Ef__refU243_1();
		NullCheck(L_0);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_1 = L_0->get_d_0();
		RuntimeObject * L_2 = ___x0;
		NullCheck(L_1);
		SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0027;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	} // end catch (depth: 1)

IL_0027:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = __this->get_newSignal_0();
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_5, /*hidden argument*/NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey1__ctor_mE8EAA2A48C0D23041A08457F3DD1CE7012A46BAC (U3CSendCoroutineU3Ec__AnonStorey1_tF3CE1C51221C69441FF1229AA58EE8401618F651 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey2__ctor_m8864358B4D200BFE925A4B593CCE442D43BFCA65 (U3CSendCoroutineU3Ec__AnonStorey2_t0AE9F14109238A8446D7DD0F40AE607FE452092A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0__ctor_mFC2A270D0F51222F1DCECC2667DCD4A5B08F800C (U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSignaledCoroutineU3Ec__Iterator0_MoveNext_m3E659764AB591EC917CA741B7AE8D566B09DA62F (U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD920DBFBA92DEAB0502AD742A42A41BA2EA27E17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0021:
	{
		Func_1_t876B03AE86041FE35944920CDF6C0EE67B7BC32D * L_2 = __this->get_coroutine_0();
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Func_1_Invoke_mD920DBFBA92DEAB0502AD742A42A41BA2EA27E17(L_2, /*hidden argument*/Func_1_Invoke_mD920DBFBA92DEAB0502AD742A42A41BA2EA27E17_RuntimeMethod_var);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_005b;
	}

IL_0046:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = __this->get_newSignal_1();
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_5, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_0059:
	{
		return (bool)0;
	}

IL_005b:
	{
		return (bool)1;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSignaledCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_mE7196CBA3687FB62C1F00F46D00506A930F0FEF1 (U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSignaledCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3EFD750679B09BD3B9A30706158F7C6E180DDC75 (U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0_Dispose_mB360551C521643EF2C49589F926617548EBC2FFE (U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0_Reset_m4CEABE75A36A151ABBDFFA1EB92B8A38C57EFBC1 (U3CSignaledCoroutineU3Ec__Iterator0_tD8D8E3E2FC1AE4013357DC65CEE836361610BDE6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignaledCoroutineU3Ec__Iterator0_Reset_m4CEABE75A36A151ABBDFFA1EB92B8A38C57EFBC1_RuntimeMethod_var)));
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
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContextBehavoir__ctor_mB7DAD13667448BFE9813A53C0AEEA01D2ABB23E7 (SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * SynchronizationContextBehavoir_get_CallbackQueue_m0E34CE99C7CA3A50D0B5960110C97B35F1464181 (SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m27F7DFB229C90B9827714CC6202B0C2B527C5854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * L_0 = __this->get_callbackQueue_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * L_1 = (Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B *)il2cpp_codegen_object_new(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B_il2cpp_TypeInfo_var);
		Queue_1__ctor_m27F7DFB229C90B9827714CC6202B0C2B527C5854(L_1, /*hidden argument*/Queue_1__ctor_m27F7DFB229C90B9827714CC6202B0C2B527C5854_RuntimeMethod_var);
		__this->set_callbackQueue_4(L_1);
	}

IL_0016:
	{
		Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * L_2 = __this->get_callbackQueue_4();
		return L_2;
	}
}
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SynchronizationContextBehavoir_Start_mC0020EEF1D711C56559978F6B05D5980607B1415 (SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * V_0 = NULL;
	{
		U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * L_0 = (U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 *)il2cpp_codegen_object_new(U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator0__ctor_m24D36B09BD2169ED37F0B00720DA562151645138(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * L_2 = V_0;
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
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m24D36B09BD2169ED37F0B00720DA562151645138 (U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m094837161A9DD92D81EFC0B9E79E2B7C7FED7646 (U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mE22F7556F8B368133CE10D30D285B61601A7BF60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m14C820646C3D017B0D11774D034F17EC3ECF14C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mDC6700E6F92AAA4AC2453DE3DE8B10F127BF80FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m89433C7E6878B3DF466EC16A06F2932B0EFB00A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00e8;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_0021:
	{
		__this->set_U3CentryU3E__0_0((Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 *)NULL);
		SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * L_3;
		L_3 = SynchronizationContextBehavoir_get_CallbackQueue_m0E34CE99C7CA3A50D0B5960110C97B35F1464181(L_2, /*hidden argument*/NULL);
		__this->set_U24locvar0_1(L_3);
		RuntimeObject * L_4 = __this->get_U24locvar0_1();
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		{
			SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * L_5 = __this->get_U24this_2();
			NullCheck(L_5);
			Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * L_6;
			L_6 = SynchronizationContextBehavoir_get_CallbackQueue_m0E34CE99C7CA3A50D0B5960110C97B35F1464181(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			int32_t L_7;
			L_7 = Queue_1_get_Count_m14C820646C3D017B0D11774D034F17EC3ECF14C1_inline(L_6, /*hidden argument*/Queue_1_get_Count_m14C820646C3D017B0D11774D034F17EC3ECF14C1_RuntimeMethod_var);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_0070;
			}
		}

IL_005a:
		{
			SynchronizationContextBehavoir_tA46850FAAF5A1F3FE13E3E4EDD28CFFE9EF7FCE8 * L_8 = __this->get_U24this_2();
			NullCheck(L_8);
			Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * L_9;
			L_9 = SynchronizationContextBehavoir_get_CallbackQueue_m0E34CE99C7CA3A50D0B5960110C97B35F1464181(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * L_10;
			L_10 = Queue_1_Dequeue_mE22F7556F8B368133CE10D30D285B61601A7BF60(L_9, /*hidden argument*/Queue_1_Dequeue_mE22F7556F8B368133CE10D30D285B61601A7BF60_RuntimeMethod_var);
			__this->set_U3CentryU3E__0_0(L_10);
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x81, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = __this->get_U24locvar0_1();
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0081:
	{
		Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * L_12 = __this->get_U3CentryU3E__0_0();
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * L_13 = __this->get_U3CentryU3E__0_0();
		NullCheck(L_13);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_14;
		L_14 = Tuple_2_get_Item1_mDC6700E6F92AAA4AC2453DE3DE8B10F127BF80FD_inline(L_13, /*hidden argument*/Tuple_2_get_Item1_mDC6700E6F92AAA4AC2453DE3DE8B10F127BF80FD_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_00cd;
		}
	}

IL_009c:
	try
	{ // begin try (depth: 1)
		Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * L_15 = __this->get_U3CentryU3E__0_0();
		NullCheck(L_15);
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_16;
		L_16 = Tuple_2_get_Item1_mDC6700E6F92AAA4AC2453DE3DE8B10F127BF80FD_inline(L_15, /*hidden argument*/Tuple_2_get_Item1_mDC6700E6F92AAA4AC2453DE3DE8B10F127BF80FD_RuntimeMethod_var);
		Tuple_2_t817FBD574E944123D8F7BD6709BF34CCBAB1C689 * L_17 = __this->get_U3CentryU3E__0_0();
		NullCheck(L_17);
		RuntimeObject * L_18;
		L_18 = Tuple_2_get_Item2_m89433C7E6878B3DF466EC16A06F2932B0EFB00A1_inline(L_17, /*hidden argument*/Tuple_2_get_Item2_m89433C7E6878B3DF466EC16A06F2932B0EFB00A1_RuntimeMethod_var);
		NullCheck(L_16);
		SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461(L_16, L_18, /*hidden argument*/NULL);
		goto IL_00cd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		throw e;
	}

CATCH_00bc:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cd;
	} // end catch (depth: 1)

IL_00cd:
	{
		__this->set_U24current_3(NULL);
		bool L_21 = __this->get_U24disposing_4();
		if (L_21)
		{
			goto IL_00e3;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00e3:
	{
		goto IL_00f6;
	}

IL_00e8:
	{
		goto IL_0021;
	}
	// Dead block : IL_00ed: ldarg.0

IL_00f4:
	{
		return (bool)0;
	}

IL_00f6:
	{
		return (bool)1;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m745B8B2C4EB6410AAA39FCC4FE9BFCD76B2315C8 (U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m63CCDE2F06DD65ED5C651EE3BFB715BCC039F135 (U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m3C8E547880A82B7E6AA97C42E05C21B7756B60EB (U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_mFDF02DB6B67083D8E5ACE73E700DCC2283C7BA21 (U3CStartU3Ec__Iterator0_t9987B08637211D227294E59AF78CB29391924B58 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ec__Iterator0_Reset_mFDF02DB6B67083D8E5ACE73E700DCC2283C7BA21_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * AggregateException_get_InnerExceptions_m2020FC3A2334DDB72FEBFB2BF4CFE088FF83FEFE_inline (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * L_0 = __this->get_m_innerExceptions_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * FirebaseHandler_get_DefaultInstance_m5FA4E1EC809FA3727799598E906DDFE6BBFC3DC4_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_firebaseHandler_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m59AFE9F48F2EA1AADCFBD94DBE010730359B3B40_inline (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsPlayModeU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_m832E6FCD6DA3ACDEA0B59D346EDD8585381C3B15_inline (FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsPlayModeU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * FirebaseAppUtilsStub_get_Instance_m980CDC684E1C5AE80F1853386A98DD558AE76ABC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F * L_0 = ((FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_t80206257D7397F0AD741593BAA3E81F1091AAC5F_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_mCA47C4E5CB3698D8715B88CB409F5112C38A16D6_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_U3CAppUtilsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * FirebaseHandler_get_ThreadDispatcher_m8437519751496E4FC4AE6133C7F0C787B8117EAB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_U3CThreadDispatcherU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_mC39704DCB7BFD728B88A79C59DC50287679E47B0_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->get_U3CAppUtilsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_mDB3B76E13D221D0A0838877B9EE94299135B4CA1_inline (ApplicationFocusChangedEventArgs_tC8C16662B547D9C8F322E1732E732BD88A59E404 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasFocusU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_m2808F45B6549A0E0139BC36B236BC95213B123FC_inline (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		((PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t1DCEB1534818B437C588B68CFBAE60C15E42D1F5_il2cpp_TypeInfo_var))->set_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_mDA35AED29CF495A2DCCF5FB7B65BBB534192E8AB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var);
		AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB * L_0 = ((AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_tD2FA459CCBE9752F791EF967FAFBB6A7C3A4F3FB_il2cpp_TypeInfo_var))->get__instance_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_AppConfig_mE48F0E5E1FA561208AEBA714C1147ECD693AD402_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		((Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields*)il2cpp_codegen_static_fields_for(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var))->set_U3CAppConfigU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Clock_mBDFC2BAB8F8D2628AF8052A79796026E74DBA370_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		((Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields*)il2cpp_codegen_static_fields_for(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var))->set_U3CClockU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * DebugLogger_get_Instance_m0E521CDD954F86EB61792F19F2362373EB10745E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var);
		DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905 * L_0 = ((DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t1F0192A185322842F6511F8595CC82516B3FF905_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Logging_m53140204CEF56D9BC71B5C5BA7BB9D6B3974FFD5_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		((Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields*)il2cpp_codegen_static_fields_for(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var))->set_U3CLoggingU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m7CD3CF215F26881AD5B856F2708F15A169D66472_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var);
		UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6 * L_0 = ((UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_t1EE848C09C3F65B719FE4FD4B06DEAE2586A30F6_il2cpp_TypeInfo_var))->get__instance_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * UnityLoggingService_get_Instance_mCFC4AB732884A36484C59A3B06D70C568DFF9A78_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var);
		UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044 * L_0 = ((UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t9196B6FDCC16AE05070BFE481F0565A4466B9044_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_mFF39382EA85A80364D3837E729F973D1602D6E39_inline (Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dispatcher_t99C0DDEEC215F3D3379213AA8393E3D2761A2EA3 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		((FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var))->set_U3CThreadDispatcherU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_m2A49F263317603E4A770D5B34222FFCCCB6AE4EB_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
