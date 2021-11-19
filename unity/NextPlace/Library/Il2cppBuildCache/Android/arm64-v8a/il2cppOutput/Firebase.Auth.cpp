#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D;
// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>
struct Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t19B34EAD810249AF015A661D23DF1909EADEB101;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Auth.Future_User/Action>
struct KeyCollection_t0F728BC785B2B6D4186B993C9F6DFC7D720904CF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct KeyCollection_t5575D19B49DF577FB696678ECD7D34B89515AE39;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskFactory`1<Firebase.Auth.FirebaseUser>
struct TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Auth.Future_User/Action>
struct ValueCollection_t504AA4241C0119C5512B0195F8782FA1FFC55238;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct ValueCollection_t7BA1537BAC10830FEB1F81BC12283E7199BCF4AC;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Auth.Future_User/Action>[]
struct EntryU5BU5D_tF9F57ECEADBAF3A5200A130F142F46ED8F59CA35;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,Firebase.Auth.FirebaseAuth>[]
struct EntryU5BU5D_t93420B6EB8D539C8C82F53D4F3FC181C5A8C23E3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Firebase.Auth.Credential
struct Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E;
// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308;
// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4;
// Firebase.FutureString
struct FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719;
// Firebase.Auth.Future_User
struct Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// Firebase.InitializationException
struct InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0;
// Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey3
struct U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE;
// Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4
struct U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D;
// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1
struct U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E;
// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2
struct U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544;
// Firebase.Auth.FirebaseAuth/<SignInWithCredentialAsync>c__AnonStorey7
struct U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874;
// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4;
// Firebase.Auth.Future_User/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C;
// Firebase.Auth.Future_User/Action
struct Action_t93A1C2066DBE44D8980A3C69015371AD734414F6;
// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t93A1C2066DBE44D8980A3C69015371AD734414F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m48A766379B479C0A79D6100A71BE684183F94B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mE574F99D7D9FD73C530EDCE0D028852AEA58983A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateAuthStateListener_m8BDE4FFF7402A75BA65A12E5DDBEA3F62867C865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateIdTokenListener_m84BFB0BD40AAB68114B941DB22991354B517CF22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyAuthStateListener_m0C3E499BDD08AC73FB57C973A68317C58FC4A2BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyIdTokenListener_m008D3961141C95DECFB2350CA70CC0B50DB0A291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0840193BE0ABEDC84E3BB979D2BEE03CF97456F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m29F81A30D44C065D3A462F2983052C6607441A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5910F487C8EEFA8F6267D5818136EB47ECB453A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mFE419F668DCB5EC7CC5BED449393F3D4AC313CD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m48DB73F27F5AF81DD9F36C2FD7E219F97A694F2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m727FCB67BF3556C4094A58424B2FD35F63A39811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4515FF11838024E4B3C9468EDA963D9927C986BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mAD1403952E73C9A512E3FED3699D2528A7E3449D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_GetAuthInternal_m2AB237F1A979D3C0C3F1A84D581FD957F81A00C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_IdTokenChangedFunction_m38218A67328EB46653D919BFD7DC4E0036FD869B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_OnAppDisposed_m530E4DB96482484A96F3F8E66E8C5B389B22C489_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_ReleaseReferenceInternal_m9574084A8D194ABF23C5B9A2A9BDC1C133830F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_SignInWithCredentialInternalAsync_m09E760C1C51FC0224975F021FCDFE653D9015447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_StateChangedFunction_m2071F00761270F32E2D3005FA9CB7EF2A76FBA33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_ThrowIfNull_mDF5033DB4B26AB063AC055B1A73EBE5154522885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_mCF0A4C49ECE4062CB00C19E697D95538B9936A17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_U3CStateChangedFunctionU3Em__0_mA4E60E705682B37C07A5417EDF501A04531ECA9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_get_CurrentUserInternal_mBA58FBDEB91829A2914114419E9542BB212B0AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseUser_TokenAsync_mD8DEF443E346BE1B6C5F540E5309C8DE71CD4330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_GetResult_m46EBBA5BF8964568666992B0A95EEA7C2486B1CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_CompletionDispatcher_mD8D1EADB4CBDDC51721F7FB23F4FDCF9EE953E6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_FreeCompletionData_m324A3CBD6BFBE507D436FF91CFA302032224E677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_OnCompletion_m4111F339E20EAE9AFAD6DC44BEEE5D4BC7063DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_ThrowIfDisposed_m2168E8CFC4966C7EF26002666C928E332790C9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAuthProvider_GetCredential_m49513FDADBA62D1DFB781EC17397C2B7AF227F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m7894CDADABA52FF4B5F3DD49140BC93BBC2161F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m49E8653E37E2903C5F40BAFE7BB85B8C19081F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mA6681287C0A8FB5184ADF59E8CBB5D2E766202A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB7B182E5E2017C682F5DD31793A09FF88BCCA56B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m8E0A9CAD0729BDA2EAF319BCB7B2042B1BADB0F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mBD13D9A768206DCC86A4CCDC845882BBDD25D4AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m4414C2DB0A6EA87A4CFCD9017337176366EF539D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFF2D3C8CEFEB2F507CB4DD9242B600FE60F61AF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m17C93CF4C6258C4D2E580D8DFAD9F75F80DFBC1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m3093A5A3B2415B9B71CCF2810DEA1646F0DC93FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m2DF00128F9C09D745BF182A81384620FC88456CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m270E6990C77E864A0101E323217F2EEE145A8FC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mDBAD1EB44C519BDF0D56A03E6DE817D02E5D3714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m02076979B1FEA8E8BF5E2C2BA0FC813AA286EC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mC9CD7A5731D0F8E7ADAA4B6547B8560B750FFFFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSourceCompat_1_SetException_mB402D483EAE03D6877E12FB198708AE8F179D851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_mF50FC5E0CF45BD10F367C691450945E5DF6B0384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m0D9CBC500CCA46CCC6612CC9F06136461679B7B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m037FD125CDA6DC4D43F1FE2D6EC96ADDE638B035_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CForwardStateChangeU3Ec__AnonStorey4_U3CU3Em__0_m34E8B26C5A095806463D4AD294257B833C6E11C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_mEE264E818D03CA2054E71BAF4DC174AFB712A2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2C77C784B9C46E6089FB566A566B141409EABADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_U3CU3Em__0_mDCA3D8CBA2C2911BE87E560E333CC7D0051D228B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t17409A6AEE1EBBAAE4ADBE97B4428055390B17CC 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>
struct Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF9F57ECEADBAF3A5200A130F142F46ED8F59CA35* ___entries_1;
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
	KeyCollection_t0F728BC785B2B6D4186B993C9F6DFC7D720904CF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t504AA4241C0119C5512B0195F8782FA1FFC55238 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ___entries_1)); }
	inline EntryU5BU5D_tF9F57ECEADBAF3A5200A130F142F46ED8F59CA35* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF9F57ECEADBAF3A5200A130F142F46ED8F59CA35** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF9F57ECEADBAF3A5200A130F142F46ED8F59CA35* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ___keys_7)); }
	inline KeyCollection_t0F728BC785B2B6D4186B993C9F6DFC7D720904CF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0F728BC785B2B6D4186B993C9F6DFC7D720904CF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0F728BC785B2B6D4186B993C9F6DFC7D720904CF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ___values_8)); }
	inline ValueCollection_t504AA4241C0119C5512B0195F8782FA1FFC55238 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t504AA4241C0119C5512B0195F8782FA1FFC55238 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t504AA4241C0119C5512B0195F8782FA1FFC55238 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t93420B6EB8D539C8C82F53D4F3FC181C5A8C23E3* ___entries_1;
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
	KeyCollection_t5575D19B49DF577FB696678ECD7D34B89515AE39 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7BA1537BAC10830FEB1F81BC12283E7199BCF4AC * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ___entries_1)); }
	inline EntryU5BU5D_t93420B6EB8D539C8C82F53D4F3FC181C5A8C23E3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t93420B6EB8D539C8C82F53D4F3FC181C5A8C23E3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t93420B6EB8D539C8C82F53D4F3FC181C5A8C23E3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ___keys_7)); }
	inline KeyCollection_t5575D19B49DF577FB696678ECD7D34B89515AE39 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5575D19B49DF577FB696678ECD7D34B89515AE39 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5575D19B49DF577FB696678ECD7D34B89515AE39 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ___values_8)); }
	inline ValueCollection_t7BA1537BAC10830FEB1F81BC12283E7199BCF4AC * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7BA1537BAC10830FEB1F81BC12283E7199BCF4AC ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7BA1537BAC10830FEB1F81BC12283E7199BCF4AC * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45, ___m_task_0)); }
	inline Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Firebase.Auth.AuthUtil
struct AuthUtil_tEB3335C27AADC6A6DF34424F48FF8EAAE8BC4C29  : public RuntimeObject
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE
struct AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766  : public RuntimeObject
{
public:

public:
};

struct AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper Firebase.Auth.AuthUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C * ___swigExceptionHelper_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper Firebase.Auth.AuthUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
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


// Firebase.Auth.GoogleAuthProvider
struct GoogleAuthProvider_tC15A2A5F52569619263490193B274EEBE9CF1710  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___applicationDelegate_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___arithmeticDelegate_1;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___divideByZeroDelegate_2;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___indexOutOfRangeDelegate_3;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___invalidCastDelegate_4;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___invalidOperationDelegate_5;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___ioDelegate_6;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___nullReferenceDelegate_7;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___outOfMemoryDelegate_8;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___overflowDelegate_9;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___systemDelegate_10;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * ___argumentDelegate_11;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * ___argumentNullDelegate_12;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_StaticFields
{
public:
	// System.Int32 Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_ThreadStaticFields
{
public:
	// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey3
struct U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE  : public RuntimeObject
{
public:
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey3::stateChangeClosure
	Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * ___stateChangeClosure_0;

public:
	inline static int32_t get_offset_of_stateChangeClosure_0() { return static_cast<int32_t>(offsetof(U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE, ___stateChangeClosure_0)); }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * get_stateChangeClosure_0() const { return ___stateChangeClosure_0; }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF ** get_address_of_stateChangeClosure_0() { return &___stateChangeClosure_0; }
	inline void set_stateChangeClosure_0(Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * value)
	{
		___stateChangeClosure_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChangeClosure_0), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4
struct U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D  : public RuntimeObject
{
public:
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4::auth
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth_0;
	// Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey3 Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4::<>f__ref$3
	U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * ___U3CU3Ef__refU243_1;

public:
	inline static int32_t get_offset_of_auth_0() { return static_cast<int32_t>(offsetof(U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D, ___auth_0)); }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * get_auth_0() const { return ___auth_0; }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E ** get_address_of_auth_0() { return &___auth_0; }
	inline void set_auth_0(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * value)
	{
		___auth_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auth_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU243_1() { return static_cast<int32_t>(offsetof(U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D, ___U3CU3Ef__refU243_1)); }
	inline U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * get_U3CU3Ef__refU243_1() const { return ___U3CU3Ef__refU243_1; }
	inline U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE ** get_address_of_U3CU3Ef__refU243_1() { return &___U3CU3Ef__refU243_1; }
	inline void set_U3CU3Ef__refU243_1(U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * value)
	{
		___U3CU3Ef__refU243_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU243_1), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1
struct U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E  : public RuntimeObject
{
public:
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::app
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app_0;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::auth
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth_1;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E, ___app_0)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_app_0() const { return ___app_0; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_0), (void*)value);
	}

	inline static int32_t get_offset_of_auth_1() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E, ___auth_1)); }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * get_auth_1() const { return ___auth_1; }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E ** get_address_of_auth_1() { return &___auth_1; }
	inline void set_auth_1(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * value)
	{
		___auth_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auth_1), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth/<SignInWithCredentialAsync>c__AnonStorey7
struct U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<SignInWithCredentialAsync>c__AnonStorey7::taskCompletionSource
	TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * ___taskCompletionSource_0;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<SignInWithCredentialAsync>c__AnonStorey7::$this
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___U24this_1;

public:
	inline static int32_t get_offset_of_taskCompletionSource_0() { return static_cast<int32_t>(offsetof(U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53, ___taskCompletionSource_0)); }
	inline TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * get_taskCompletionSource_0() const { return ___taskCompletionSource_0; }
	inline TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 ** get_address_of_taskCompletionSource_0() { return &___taskCompletionSource_0; }
	inline void set_taskCompletionSource_0(TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * value)
	{
		___taskCompletionSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___taskCompletionSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53, ___U24this_1)); }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * get_U24this_1() const { return ___U24this_1; }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// Firebase.Auth.Future_User/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C  : public RuntimeObject
{
public:
	// Firebase.Auth.Future_User Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::fu
	Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C, ___fu_0)); }
	inline Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * get_fu_0() const { return ___fu_0; }
	inline Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C, ___tcs_1)); }
	inline TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
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

// Firebase.FutureStatus
struct FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// Firebase.InitResult
struct InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.LogLevel
struct LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200, ___value___2)); }
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


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35, ___m_result_40)); }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * get_m_result_40() const { return ___m_result_40; }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9D8D5C3497974FC69996081A4931F540CED80622 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tB4F767378F8B2D53DDCA17BA1E615A32C916EDF6 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
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


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// Firebase.Auth.Credential
struct Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.Credential::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * ___appPlatform_15;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___AppDisposed_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___appPlatform_15)); }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * get_appPlatform_15() const { return ___appPlatform_15; }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 ** get_address_of_appPlatform_15() { return &___appPlatform_15; }
	inline void set_appPlatform_15(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * value)
	{
		___appPlatform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_15), (void*)value);
	}
};

struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_14;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp::<>f__am$cache0
	CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * ___U3CU3Ef__amU24cache0_16;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__am$cache1
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3Ef__amU24cache1_17;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__am$cache2
	Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * ___U3CU3Ef__amU24cache2_18;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache3
	Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * ___U3CU3Ef__amU24cache3_19;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache4
	Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * ___U3CU3Ef__amU24cache4_20;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThread_13)); }
	inline int32_t get_CheckDependenciesThread_13() const { return ___CheckDependenciesThread_13; }
	inline int32_t* get_address_of_CheckDependenciesThread_13() { return &___CheckDependenciesThread_13; }
	inline void set_CheckDependenciesThread_13(int32_t value)
	{
		___CheckDependenciesThread_13 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThreadLock_14)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_14() const { return ___CheckDependenciesThreadLock_14; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_14() { return &___CheckDependenciesThreadLock_14; }
	inline void set_CheckDependenciesThreadLock_14(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_19() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache3_19)); }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * get_U3CU3Ef__amU24cache3_19() const { return ___U3CU3Ef__amU24cache3_19; }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 ** get_address_of_U3CU3Ef__amU24cache3_19() { return &___U3CU3Ef__amU24cache3_19; }
	inline void set_U3CU3Ef__amU24cache3_19(Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * value)
	{
		___U3CU3Ef__amU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_20() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache4_20)); }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * get_U3CU3Ef__amU24cache4_20() const { return ___U3CU3Ef__amU24cache4_20; }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 ** get_address_of_U3CU3Ef__amU24cache4_20() { return &___U3CU3Ef__amU24cache4_20; }
	inline void set_U3CU3Ef__amU24cache4_20(Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * value)
	{
		___U3CU3Ef__amU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_20), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ___currentUser_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___stateChangedImpl_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___idTokenChangedImpl_8;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_9;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_appProxy_2() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___appProxy_2)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_appProxy_2() const { return ___appProxy_2; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_appProxy_2() { return &___appProxy_2; }
	inline void set_appProxy_2(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___appProxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appProxy_2), (void*)value);
	}

	inline static int32_t get_offset_of_appCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___appCPtr_3)); }
	inline intptr_t get_appCPtr_3() const { return ___appCPtr_3; }
	inline intptr_t* get_address_of_appCPtr_3() { return &___appCPtr_3; }
	inline void set_appCPtr_3(intptr_t value)
	{
		___appCPtr_3 = value;
	}

	inline static int32_t get_offset_of_authStateListener_4() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___authStateListener_4)); }
	inline intptr_t get_authStateListener_4() const { return ___authStateListener_4; }
	inline intptr_t* get_address_of_authStateListener_4() { return &___authStateListener_4; }
	inline void set_authStateListener_4(intptr_t value)
	{
		___authStateListener_4 = value;
	}

	inline static int32_t get_offset_of_idTokenListener_5() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___idTokenListener_5)); }
	inline intptr_t get_idTokenListener_5() const { return ___idTokenListener_5; }
	inline intptr_t* get_address_of_idTokenListener_5() { return &___idTokenListener_5; }
	inline void set_idTokenListener_5(intptr_t value)
	{
		___idTokenListener_5 = value;
	}

	inline static int32_t get_offset_of_currentUser_6() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___currentUser_6)); }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * get_currentUser_6() const { return ___currentUser_6; }
	inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 ** get_address_of_currentUser_6() { return &___currentUser_6; }
	inline void set_currentUser_6(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * value)
	{
		___currentUser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentUser_6), (void*)value);
	}

	inline static int32_t get_offset_of_stateChangedImpl_7() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___stateChangedImpl_7)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_stateChangedImpl_7() const { return ___stateChangedImpl_7; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_stateChangedImpl_7() { return &___stateChangedImpl_7; }
	inline void set_stateChangedImpl_7(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___stateChangedImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChangedImpl_7), (void*)value);
	}

	inline static int32_t get_offset_of_idTokenChangedImpl_8() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___idTokenChangedImpl_8)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_idTokenChangedImpl_8() const { return ___idTokenChangedImpl_8; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_idTokenChangedImpl_8() { return &___idTokenChangedImpl_8; }
	inline void set_idTokenChangedImpl_8(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___idTokenChangedImpl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idTokenChangedImpl_8), (void*)value);
	}

	inline static int32_t get_offset_of_persistentLoaded_9() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E, ___persistentLoaded_9)); }
	inline bool get_persistentLoaded_9() const { return ___persistentLoaded_9; }
	inline bool* get_address_of_persistentLoaded_9() { return &___persistentLoaded_9; }
	inline void set_persistentLoaded_9(bool value)
	{
		___persistentLoaded_9 = value;
	}
};

struct FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * ___appCPtrToAuth_10;
	// Firebase.Auth.FirebaseAuth/StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache0
	StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___U3CU3Ef__mgU24cache0_11;
	// Firebase.Auth.FirebaseAuth/StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache1
	StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___U3CU3Ef__mgU24cache1_12;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__am$cache0
	Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * ___U3CU3Ef__amU24cache0_13;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__am$cache1
	Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * ___U3CU3Ef__amU24cache1_14;

public:
	inline static int32_t get_offset_of_appCPtrToAuth_10() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___appCPtrToAuth_10)); }
	inline Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * get_appCPtrToAuth_10() const { return ___appCPtrToAuth_10; }
	inline Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 ** get_address_of_appCPtrToAuth_10() { return &___appCPtrToAuth_10; }
	inline void set_appCPtrToAuth_10(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * value)
	{
		___appCPtrToAuth_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appCPtrToAuth_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_11() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___U3CU3Ef__mgU24cache0_11)); }
	inline StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * get_U3CU3Ef__mgU24cache0_11() const { return ___U3CU3Ef__mgU24cache0_11; }
	inline StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 ** get_address_of_U3CU3Ef__mgU24cache0_11() { return &___U3CU3Ef__mgU24cache0_11; }
	inline void set_U3CU3Ef__mgU24cache0_11(StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * value)
	{
		___U3CU3Ef__mgU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_12() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___U3CU3Ef__mgU24cache1_12)); }
	inline StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * get_U3CU3Ef__mgU24cache1_12() const { return ___U3CU3Ef__mgU24cache1_12; }
	inline StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 ** get_address_of_U3CU3Ef__mgU24cache1_12() { return &___U3CU3Ef__mgU24cache1_12; }
	inline void set_U3CU3Ef__mgU24cache1_12(StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * value)
	{
		___U3CU3Ef__mgU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_14), (void*)value);
	}
};


// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Firebase.Auth.FirebaseUser
struct FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Auth.FirebaseUser::swigCMemOwn
	bool ___swigCMemOwn_0;
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_1;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___authProxy_2;

public:
	inline static int32_t get_offset_of_swigCMemOwn_0() { return static_cast<int32_t>(offsetof(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308, ___swigCMemOwn_0)); }
	inline bool get_swigCMemOwn_0() const { return ___swigCMemOwn_0; }
	inline bool* get_address_of_swigCMemOwn_0() { return &___swigCMemOwn_0; }
	inline void set_swigCMemOwn_0(bool value)
	{
		___swigCMemOwn_0 = value;
	}

	inline static int32_t get_offset_of_swigCPtr_1() { return static_cast<int32_t>(offsetof(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308, ___swigCPtr_1)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_1() const { return ___swigCPtr_1; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_1() { return &___swigCPtr_1; }
	inline void set_swigCPtr_1(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_1))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_authProxy_2() { return static_cast<int32_t>(offsetof(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308, ___authProxy_2)); }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * get_authProxy_2() const { return ___authProxy_2; }
	inline FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E ** get_address_of_authProxy_2() { return &___authProxy_2; }
	inline void set_authProxy_2(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * value)
	{
		___authProxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authProxy_2), (void*)value);
	}
};


// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.InitializationException
struct InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75  : public Exception_t
{
public:
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CInitResultU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75, ___U3CInitResultU3Ek__BackingField_17)); }
	inline int32_t get_U3CInitResultU3Ek__BackingField_17() const { return ___U3CInitResultU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CInitResultU3Ek__BackingField_17() { return &___U3CInitResultU3Ek__BackingField_17; }
	inline void set_U3CInitResultU3Ek__BackingField_17(int32_t value)
	{
		___U3CInitResultU3Ek__BackingField_17 = value;
	}
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


// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2
struct U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544  : public RuntimeObject
{
public:
	// Firebase.InitResult Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2::init_result
	int32_t ___init_result_0;
	// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1 Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2::<>f__ref$1
	U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_init_result_0() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544, ___init_result_0)); }
	inline int32_t get_init_result_0() const { return ___init_result_0; }
	inline int32_t* get_address_of_init_result_0() { return &___init_result_0; }
	inline void set_init_result_0(int32_t value)
	{
		___init_result_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544, ___U3CU3Ef__refU241_1)); }
	inline U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU241_1), (void*)value);
	}
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF  : public MulticastDelegate_t
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


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureString
struct FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureString::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureString::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureString/SWIG_CompletionDelegate Firebase.FutureString::SWIG_CompletionCB
	SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action> Firebase.FutureString::Callbacks
	Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * ___Callbacks_3;
	// System.Int32 Firebase.FutureString::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureString::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// Firebase.Auth.Future_User
struct Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Future_User::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.Auth.Future_User::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Auth.Future_User/SWIG_CompletionDelegate Firebase.Auth.Future_User::SWIG_CompletionCB
	SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action> Firebase.Auth.Future_User::Callbacks
	Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * ___Callbacks_3;
	// System.Int32 Firebase.Auth.Future_User::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Auth.Future_User::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.Future_User/Action
struct Action_t93A1C2066DBE44D8980A3C69015371AD734414F6  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D * ___continuationAction0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<System.Object>::SetException(System.Threading.Tasks.TaskCompletionSource`1<!0>,System.AggregateException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSourceCompat_1_SetException_m94304710182CF79A0E5E1F81CE4D3051208C6D59_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ___tcs0, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * ___exception1, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseAuth_getCPtr_mC7A6D31499A8B3BFB7FDAE1A7F7F848414B43AAF (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateAuthStateListener_m5270328B824224D753E83517325DD73828753A18 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___jarg21, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyAuthStateListener_m3FE7254105C9BF42DFE601048B6E9A50CB925B0C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateIdTokenListener_mE28A815451AD2B39976DAA4F2E800C1EEC0E85B6 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyIdTokenListener_m0DFEBEF99A394DE619ECA6418DAFC013EF6C545E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_mC40FE8800E571BF95C2BD26F53B61A248D7636F6 (SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m4A68E713C75462026637763A8C52479CDB5C777A (SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Credential::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Dispose_m9D05293474D7C82C26A927C05CC1A391A4F89AEE (Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Credential(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Credential_m768298973BDC1F1FF497D685F23C380EB9D300DD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_m2071F00761270F32E2D3005FA9CB7EF2A76FBA33 (intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_m38218A67328EB46653D919BFD7DC4E0036FD869B (intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_mC8B13832333E59A2718D17D357EBE85E1670B96A (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_m5DCA5A8422C0F3A63426DB5B8B01488D6EEA8E63 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m5910F487C8EEFA8F6267D5818136EB47ECB453A7 (Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * __this, intptr_t ___key0, FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 *, intptr_t, FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E **, const RuntimeMethod*))Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey1__ctor_mD87ACC838F70D80A7AB542C912D080C79299C8B1 (U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey2__ctor_m40CE4ED31C003485C39F4F1316BA8E0B60231B44 (U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * FirebaseAuth_ProxyFromAppCPtr_m1F20EEC26C5F5D0B92D8E4244528C9427C47FA95 (intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___closureToExecute0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_mCE4282A35A78D4FB4AFAF615CE44953EBF8BA721 (StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_m8BDE4FFF7402A75BA65A12E5DDBEA3F62867C865 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___state_changed_delegate1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_m84BFB0BD40AAB68114B941DB22991354B517CF22 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___state_changed_delegate1, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m4515FF11838024E4B3C9468EDA963D9927C986BF (Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * __this, intptr_t ___key0, FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 *, intptr_t, FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E *, const RuntimeMethod*))Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::Remove(!0)
inline bool Dictionary_2_Remove_m29F81A30D44C065D3A462F2983052C6607441A4C (Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseUser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser_Dispose_m2E0F9A0BB6AA74CBA06E9404555F2E03BA041F27 (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_m0C3E499BDD08AC73FB57C973A68317C58FC4A2BC (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, intptr_t ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m008D3961141C95DECFB2350CA70CC0B50DB0A291 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, intptr_t ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::ReleaseReferenceInternal(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ReleaseReferenceInternal_m9574084A8D194ABF23C5B9A2A9BDC1C133830F86 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___instance0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey3__ctor_m76EF5EF3A3208A703FA3981C1ACAED71F6E94A53 (U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey4__ctor_mC69F7FFF55F59CA5B7CDD166C37FB5C9CCE2C67B (U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D * __this, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE574F99D7D9FD73C530EDCE0D028852AEA58983A (Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_mFA11C6196F5EF205989640C3629FDFA74A0E33A9 (intptr_t ___appCPtr0, Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * ___stateChangeClosure1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * FirebaseAuth_GetAuth_m1DEE44ECBCF8FBF518480186EF81D7E2EAACA319 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseUser_getCPtr_m7DACE5770A1A0399C8AADE6E12E9DB4941BB336F (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ___obj0, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * FirebaseAuth_get_CurrentUserInternal_mBA58FBDEB91829A2914114419E9542BB212B0AFD (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * FirebaseAuth_UpdateCurrentUser_mB53D66CBC0E5159D23A60BED91A31C96CEF37331 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ___proxy0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<SignInWithCredentialAsync>c__AnonStorey7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInWithCredentialAsyncU3Ec__AnonStorey7__ctor_mDB4246E03A6B98DFA5A8F90B3CE6DF41FFEE15F8 (U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_mDF5033DB4B26AB063AC055B1A73EBE5154522885 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m037FD125CDA6DC4D43F1FE2D6EC96ADDE638B035 (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialInternalAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * FirebaseAuth_SignInWithCredentialInternalAsync_m09E760C1C51FC0224975F021FCDFE653D9015447 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * ___credential0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289 (Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944 (Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * __this, Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 *, Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::get_Task()
inline Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_inline (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * (*) (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m4D3446507B67CD13F0A7A50D0299105E2817FC66 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_mF50FC5E0CF45BD10F367C691450945E5DF6B0384 (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<Firebase.Auth.FirebaseUser>::SetException(System.Threading.Tasks.TaskCompletionSource`1<!0>,System.AggregateException)
inline void TaskCompletionSourceCompat_1_SetException_mB402D483EAE03D6877E12FB198708AE8F179D851 (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * ___tcs0, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * ___exception1, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 *, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 *, const RuntimeMethod*))TaskCompletionSourceCompat_1_SetException_m94304710182CF79A0E5E1F81CE4D3051208C6D59_gshared)(___tcs0, ___exception1, method);
}
// !0 System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC (Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * (*) (Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m0D9CBC500CCA46CCC6612CC9F06136461679B7B8 (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * __this, FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 *, FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::getCPtr(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  Credential_getCPtr_m93B42E2243F404B77FC9A9C7CC6A83D693A179DB (Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCredentialInternal(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternal_m11ADCE64C02889FFF49C68D11BDB5FC1D081DABB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__ctor_m5F554C32E6FB53DA92C7E7BA1F473EE3DB7606C1 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * Future_User_GetTask_mBC320A995DD6BE074E18D839562455647F8AE03E (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * ___fu0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m46BD8D95137742F7EF78ED105DC27AECED8786FB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_m85A69C196AC426B1ABB0267BE3F05977D73EBB4E (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mB7193CC6E9CF443A5DF7482C48BCF7F9E73ABDDF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_m60B02CC9E17F036A4F3FBB4181BFE790BC1515D0 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser__ctor_m8B08F2424F35E9EDE2420F30E2041EBF2049AB46 (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::.ctor()
inline void Dictionary_2__ctor_m48DB73F27F5AF81DD9F36C2FD7E219F97A694F2E (Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 *, const RuntimeMethod*))Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared)(__this, method);
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FirebaseUser_m54B9B0635CF8262B99D608177A4C2CA28FEB6D80 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_Token(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_Token_mAD02484B5448411F72FC8F2A6B986569A79240A7 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, bool ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__ctor_mEE94FE29EDA6856652FFBFE07AF06BD33B5BBC82 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * FutureString_GetTask_m7CF681D446F480F4930D6B4A406CF9CE12B4A761 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * ___fu0, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_mD8D1EADB4CBDDC51721F7FB23F4FDCF9EE953E6B (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIGUpcast_mCA1D55B8736BD75B97BFB7B82AB04E0839E787B6 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m0FEE06F68A9F7F09B71E8ED08567D6FF6FDB6B10 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_User(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_User_m9F24A248FC58832AD5F6C9A41122DD92CFFD7314 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mF75D6318BC7088C17C4E97F07FA4A788F8253B69 (U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mEA5DEC6C9C60C4B0CA474DA6FF3ADE036EE878E0 (const RuntimeMethod* method);
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D (const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197 (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mC21BA7E76FE4731785715A19E5C0414EB4808412 (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_mFD29B355855F88AB8950691123466E52E3B993E2 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_ThrowIfDisposed_m2168E8CFC4966C7EF26002666C928E332790C9EB (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m81CF97B458937B1C53B13DF2213072C0F8C4DC3D (SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::.ctor()
inline void Dictionary_2__ctor_m727FCB67BF3556C4094A58424B2FD35F63A39811 (Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mAD1403952E73C9A512E3FED3699D2528A7E3449D (Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * __this, int32_t ___key0, Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 *, int32_t, Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_m4111F339E20EAE9AFAD6DC44BEEE5D4BC7063DC5 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_m324A3CBD6BFBE507D436FF91CFA302032224E677 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mFE419F668DCB5EC7CC5BED449393F3D4AC313CD9 (Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * __this, int32_t ___key0, Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 *, int32_t, Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m0840193BE0ABEDC84E3BB979D2BEE03CF97456F8 (Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Auth.Future_User/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC98D5F480A517840ADA9B58ED318660F11903678 (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_m953C34DDE0BC5F3AD919FF755EFCDE6358DDD7FD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_m01FAAB4D31D1888FA950BBBB079EFCC552D855ED (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_GetResult_m1AF432C48675B88D5945DF3E1DE6237E6FC34152 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434 (const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::GoogleAuthProvider_GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_GoogleAuthProvider_GetCredential_mFC4C50E40B98335642FF99DFF8F869BA6F1489E7 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.Credential::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential__ctor_m9CEF01CD39AB945133D9E158140F27471C9A97FB (Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m7894CDADABA52FF4B5F3DD49140BC93BBC2161F2 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m8E0A9CAD0729BDA2EAF319BCB7B2042B1BADB0F5 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mBD13D9A768206DCC86A4CCDC845882BBDD25D4AE (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFF2D3C8CEFEB2F507CB4DD9242B600FE60F61AF0 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m17C93CF4C6258C4D2E580D8DFAD9F75F80DFBC1C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3093A5A3B2415B9B71CCF2810DEA1646F0DC93FA (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m4414C2DB0A6EA87A4CFCD9017337176366EF539D (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m2DF00128F9C09D745BF182A81384620FC88456CB (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m270E6990C77E864A0101E323217F2EEE145A8FC2 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mDBAD1EB44C519BDF0D56A03E6DE817D02E5D3714 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m02076979B1FEA8E8BF5E2C2BA0FC813AA286EC7C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m49E8653E37E2903C5F40BAFE7BB85B8C19081F53 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mA6681287C0A8FB5184ADF59E8CBB5D2E766202A9 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB7B182E5E2017C682F5DD31793A09FF88BCCA56B (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m536A3E7B4BD57340C8A8F0A2167AA001F2DFD7BE (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_mDD04F7C28AD777CA7EF3CFDECFF612A639CFEBDC (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___applicationDelegate0, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___arithmeticDelegate1, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___divideByZeroDelegate2, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___indexOutOfRangeDelegate3, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___invalidCastDelegate4, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___invalidOperationDelegate5, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___ioDelegate6, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___nullReferenceDelegate7, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___outOfMemoryDelegate8, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___overflowDelegate9, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_m38F78CF74B19FCDB672D1737FC979D2824B0AC9E (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * ___argumentDelegate0, ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * ___argumentNullDelegate1, ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17 (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918 (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0 (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14 (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mC9CD7A5731D0F8E7ADAA4B6547B8560B750FFFFE (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mE8C6338B6623772577727CEDB8B2A1B1227F4FFE (SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m45877B9DFCB1AAD5A30EA11C414352762303485C (SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::Invoke(!0)
inline void Action_1_Invoke_m48A766379B479C0A79D6100A71BE684183F94B9F (Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * __this, FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF *, FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * FirebaseAuth_GetAuthInternal_m2AB237F1A979D3C0C3F1A84D581FD957F81A00C7 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_mCE6B67DCF469CF7CC9CC8A5C6C2E6CAC73D6366F (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_mF044F11565B16ABD3C607809C2890D91637711D2 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * ___task0, TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * ___taskCompletionSource1, const RuntimeMethod* method);
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * Future_User_GetResult_m46EBBA5BF8964568666992B0A95EEA7C2486B1CE (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Future_User(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Credential(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_GoogleAuthProvider_GetCredential(char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FirebaseUser(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_Token(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternal(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_CreateAuthStateListener(void*, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_DestroyAuthStateListener(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_CreateIdTokenListener(void*, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_DestroyIdTokenListener(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_AuthUtil(Il2CppMethodPointer);
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
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_m8BDE4FFF7402A75BA65A12E5DDBEA3F62867C865 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___state_changed_delegate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_mC7A6D31499A8B3BFB7FDAE1A7F7F848414B43AAF(L_0, /*hidden argument*/NULL);
		StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * L_2 = ___state_changed_delegate1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_CreateAuthStateListener_m5270328B824224D753E83517325DD73828753A18(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_CreateAuthStateListener_m8BDE4FFF7402A75BA65A12E5DDBEA3F62867C865_RuntimeMethod_var)));
	}

IL_001d:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_m0C3E499BDD08AC73FB57C973A68317C58FC4A2BC (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, intptr_t ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_mC7A6D31499A8B3BFB7FDAE1A7F7F848414B43AAF(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___listener1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_DestroyAuthStateListener_m3FE7254105C9BF42DFE601048B6E9A50CB925B0C(L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_DestroyAuthStateListener_m0C3E499BDD08AC73FB57C973A68317C58FC4A2BC_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_m84BFB0BD40AAB68114B941DB22991354B517CF22 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___state_changed_delegate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_mC7A6D31499A8B3BFB7FDAE1A7F7F848414B43AAF(L_0, /*hidden argument*/NULL);
		StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * L_2 = ___state_changed_delegate1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_CreateIdTokenListener_mE28A815451AD2B39976DAA4F2E800C1EEC0E85B6(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_CreateIdTokenListener_m84BFB0BD40AAB68114B941DB22991354B517CF22_RuntimeMethod_var)));
	}

IL_001d:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m008D3961141C95DECFB2350CA70CC0B50DB0A291 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, intptr_t ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_mC7A6D31499A8B3BFB7FDAE1A7F7F848414B43AAF(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___listener1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_DestroyIdTokenListener_m0DFEBEF99A394DE619ECA6418DAFC013EF6C545E(L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_DestroyIdTokenListener_m008D3961141C95DECFB2350CA70CC0B50DB0A291_RuntimeMethod_var)));
	}

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
// System.Void Firebase.Auth.AuthUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE__cctor_mBA849D68C0F850CD664C81E3E8A20A64DF2D454A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C * L_0 = (SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C *)il2cpp_codegen_object_new(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_mC40FE8800E571BF95C2BD26F53B61A248D7636F6(L_0, /*hidden argument*/NULL);
		((AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6 * L_1 = (SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6 *)il2cpp_codegen_object_new(SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m4A68E713C75462026637763A8C52479CDB5C777A(L_1, /*hidden argument*/NULL);
		((AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_m953C34DDE0BC5F3AD919FF755EFCDE6358DDD7FD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_m01FAAB4D31D1888FA950BBBB079EFCC552D855ED (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_GetResult_m1AF432C48675B88D5945DF3E1DE6237E6FC34152 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_Future_User_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_GetResult)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_User(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_User_m9F24A248FC58832AD5F6C9A41122DD92CFFD7314 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_delete_Future_User", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Future_User)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Credential(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Credential_m768298973BDC1F1FF497D685F23C380EB9D300DD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_delete_Credential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Credential)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::GoogleAuthProvider_GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_GoogleAuthProvider_GetCredential_mFC4C50E40B98335642FF99DFF8F869BA6F1489E7 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_GoogleAuthProvider_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_GoogleAuthProvider_GetCredential)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FirebaseUser_m54B9B0635CF8262B99D608177A4C2CA28FEB6D80 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_delete_FirebaseUser", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FirebaseUser)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_Token(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_Token_mAD02484B5448411F72FC8F2A6B986569A79240A7 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, bool ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_FirebaseUser_Token", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_Token)(____jarg10_marshaled, static_cast<int32_t>(___jarg21));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, static_cast<int32_t>(___jarg21));
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCredentialInternal(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternal_m11ADCE64C02889FFF49C68D11BDB5FC1D081DABB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	void* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = (void*)___jarg21.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternal)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m46BD8D95137742F7EF78ED105DC27AECED8786FB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal)(____jarg10_marshaled, ___jarg21);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mB7193CC6E9CF443A5DF7482C48BCF7F9E73ABDDF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_m60B02CC9E17F036A4F3FBB4181BFE790BC1515D0 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateAuthStateListener_m5270328B824224D753E83517325DD73828753A18 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_CreateAuthStateListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_CreateAuthStateListener)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyAuthStateListener_m3FE7254105C9BF42DFE601048B6E9A50CB925B0C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_DestroyAuthStateListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_DestroyAuthStateListener)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateIdTokenListener_mE28A815451AD2B39976DAA4F2E800C1EEC0E85B6 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_CreateIdTokenListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_CreateIdTokenListener)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyIdTokenListener_m0DFEBEF99A394DE619ECA6418DAFC013EF6C545E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_DestroyIdTokenListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_DestroyIdTokenListener)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIGUpcast_mCA1D55B8736BD75B97BFB7B82AB04E0839E787B6 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_Auth_CSharp_Future_User_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIGUpcast)(___jarg10);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___jarg10);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.Credential::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential__ctor_m9CEF01CD39AB945133D9E158140F27471C9A97FB (Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::getCPtr(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  Credential_getCPtr_m93B42E2243F404B77FC9A9C7CC6A83D693A179DB (Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Auth.Credential::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Finalize_m934ED0BD28B95B9E7CBBDBD5840A946B657E39C9 (Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		Credential_Dispose_m9D05293474D7C82C26A927C05CC1A391A4F89AEE(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Auth.Credential::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Dispose_m9D05293474D7C82C26A927C05CC1A391A4F89AEE (Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_delete_Credential_m768298973BDC1F1FF497D685F23C380EB9D300DD(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_StateChangedFunction_m2071F00761270F32E2D3005FA9CB7EF2A76FBA33(intptr_t ___appCPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_StateChangedFunction_m2071F00761270F32E2D3005FA9CB7EF2A76FBA33(___appCPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_IdTokenChangedFunction_m38218A67328EB46653D919BFD7DC4E0036FD869B(intptr_t ___appCPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_IdTokenChangedFunction_m38218A67328EB46653D919BFD7DC4E0036FD869B(___appCPtr0, NULL);

}
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_m85A69C196AC426B1ABB0267BE3F05977D73EBB4E (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseAuth_getCPtr_mC7A6D31499A8B3BFB7FDAE1A7F7F848414B43AAF (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Finalize_mD326612AD72F149E7D9E1C583A3492E3065A3E0F (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseAuth_Dispose_mC8B13832333E59A2718D17D357EBE85E1670B96A(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_mC8B13832333E59A2718D17D357EBE85E1670B96A (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method)
{
	{
		FirebaseAuth_DisposeInternal_m5DCA5A8422C0F3A63426DB5B8B01488D6EEA8E63(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * FirebaseAuth_ProxyFromAppCPtr_m1F20EEC26C5F5D0B92D8E4244528C9427C47FA95 (intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5910F487C8EEFA8F6267D5818136EB47ECB453A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * V_1 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_0 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
			Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_2 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
			intptr_t L_3 = ___appCPtr0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_m5910F487C8EEFA8F6267D5818136EB47ECB453A7(L_2, (intptr_t)L_3, (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m5910F487C8EEFA8F6267D5818136EB47ECB453A7_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001e:
		{
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_5 = V_1;
			V_2 = L_5;
			IL2CPP_LEAVE(0x33, FINALLY_002a);
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x31, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		return (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E *)NULL;
	}

IL_0033:
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_7 = V_2;
		return L_7;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_mDF5033DB4B26AB063AC055B1A73EBE5154522885 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_0();
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_3 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_ThrowIfNull_mDF5033DB4B26AB063AC055B1A73EBE5154522885_RuntimeMethod_var)));
	}

IL_0020:
	{
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * FirebaseAuth_GetAuth_m1DEE44ECBCF8FBF518480186EF81D7E2EAACA319 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4515FF11838024E4B3C9468EDA963D9927C986BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_IdTokenChangedFunction_m38218A67328EB46653D919BFD7DC4E0036FD869B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_OnAppDisposed_m530E4DB96482484A96F3F8E66E8C5B389B22C489_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_StateChangedFunction_m2071F00761270F32E2D3005FA9CB7EF2A76FBA33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_mEE264E818D03CA2054E71BAF4DC174AFB712A2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544 * V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_4;
	memset((&V_4), 0, sizeof(V_4));
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * G_B5_0 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * G_B5_1 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * G_B4_0 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * G_B4_1 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * G_B7_0 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * G_B7_1 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * G_B6_0 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * G_B6_1 = NULL;
	{
		U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_0 = (U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E *)il2cpp_codegen_object_new(U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E_il2cpp_TypeInfo_var);
		U3CGetAuthU3Ec__AnonStorey1__ctor_mD87ACC838F70D80A7AB542C912D080C79299C8B1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_1 = V_0;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = ___app0;
		NullCheck(L_1);
		L_1->set_app_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_3 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544 * L_5 = (U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544 *)il2cpp_codegen_object_new(U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544_il2cpp_TypeInfo_var);
			U3CGetAuthU3Ec__AnonStorey2__ctor_m40CE4ED31C003485C39F4F1316BA8E0B60231B44(L_5, /*hidden argument*/NULL);
			V_2 = L_5;
			U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544 * L_6 = V_2;
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_7 = V_0;
			NullCheck(L_6);
			L_6->set_U3CU3Ef__refU241_1(L_7);
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_8 = V_0;
			NullCheck(L_8);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_9 = L_8->get_app_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_10;
			L_10 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_9, /*hidden argument*/NULL);
			V_4 = L_10;
			intptr_t L_11;
			L_11 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_4), /*hidden argument*/NULL);
			V_3 = (intptr_t)L_11;
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_12 = V_0;
			intptr_t L_13 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_14;
			L_14 = FirebaseAuth_ProxyFromAppCPtr_m1F20EEC26C5F5D0B92D8E4244528C9427C47FA95((intptr_t)L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			L_12->set_auth_1(L_14);
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_15 = V_0;
			NullCheck(L_15);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_16 = L_15->get_auth_1();
			if (!L_16)
			{
				goto IL_005f;
			}
		}

IL_0052:
		{
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_17 = V_0;
			NullCheck(L_17);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_18 = L_17->get_auth_1();
			V_5 = L_18;
			IL2CPP_LEAVE(0x133, FINALLY_0125);
		}

IL_005f:
		{
			U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544 * L_19 = V_2;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_20, L_19, (intptr_t)((intptr_t)U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_mEE264E818D03CA2054E71BAF4DC174AFB712A2AC_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D(L_20, /*hidden argument*/NULL);
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_21 = V_0;
			NullCheck(L_21);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_22 = L_21->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_23 = V_0;
			NullCheck(L_23);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_24 = L_23->get_auth_1();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
			StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * L_25 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_11();
			G_B4_0 = L_24;
			G_B4_1 = L_22;
			if (L_25)
			{
				G_B5_0 = L_24;
				G_B5_1 = L_22;
				goto IL_0094;
			}
		}

IL_0083:
		{
			StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * L_26 = (StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 *)il2cpp_codegen_object_new(StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874_il2cpp_TypeInfo_var);
			StateChangedDelegate__ctor_mCE4282A35A78D4FB4AFAF615CE44953EBF8BA721(L_26, NULL, (intptr_t)((intptr_t)FirebaseAuth_StateChangedFunction_m2071F00761270F32E2D3005FA9CB7EF2A76FBA33_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
			((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_11(L_26);
			G_B5_0 = G_B4_0;
			G_B5_1 = G_B4_1;
		}

IL_0094:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
			StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * L_27 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_11();
			intptr_t L_28;
			L_28 = AuthUtil_CreateAuthStateListener_m8BDE4FFF7402A75BA65A12E5DDBEA3F62867C865(G_B5_0, L_27, /*hidden argument*/NULL);
			NullCheck(G_B5_1);
			G_B5_1->set_authStateListener_4((intptr_t)L_28);
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_29 = V_0;
			NullCheck(L_29);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_30 = L_29->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_31 = V_0;
			NullCheck(L_31);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_32 = L_31->get_auth_1();
			StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * L_33 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_12();
			G_B6_0 = L_32;
			G_B6_1 = L_30;
			if (L_33)
			{
				G_B7_0 = L_32;
				G_B7_1 = L_30;
				goto IL_00c7;
			}
		}

IL_00b6:
		{
			StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * L_34 = (StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 *)il2cpp_codegen_object_new(StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874_il2cpp_TypeInfo_var);
			StateChangedDelegate__ctor_mCE4282A35A78D4FB4AFAF615CE44953EBF8BA721(L_34, NULL, (intptr_t)((intptr_t)FirebaseAuth_IdTokenChangedFunction_m38218A67328EB46653D919BFD7DC4E0036FD869B_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
			((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_12(L_34);
			G_B7_0 = G_B6_0;
			G_B7_1 = G_B6_1;
		}

IL_00c7:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
			StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * L_35 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_12();
			intptr_t L_36;
			L_36 = AuthUtil_CreateIdTokenListener_m84BFB0BD40AAB68114B941DB22991354B517CF22(G_B7_0, L_35, /*hidden argument*/NULL);
			NullCheck(G_B7_1);
			G_B7_1->set_idTokenListener_5((intptr_t)L_36);
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_37 = V_0;
			NullCheck(L_37);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_38 = L_37->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_39 = V_0;
			NullCheck(L_39);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_40 = L_39->get_app_0();
			NullCheck(L_38);
			L_38->set_appProxy_2(L_40);
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_41 = V_0;
			NullCheck(L_41);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_42 = L_41->get_auth_1();
			intptr_t L_43 = V_3;
			NullCheck(L_42);
			L_42->set_appCPtr_3((intptr_t)L_43);
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_44 = V_0;
			NullCheck(L_44);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_45 = L_44->get_app_0();
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_46 = V_0;
			NullCheck(L_46);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_47 = L_46->get_auth_1();
			EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_48 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
			EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_48, L_47, (intptr_t)((intptr_t)FirebaseAuth_OnAppDisposed_m530E4DB96482484A96F3F8E66E8C5B389B22C489_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_45);
			FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79(L_45, L_48, /*hidden argument*/NULL);
			Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_49 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
			intptr_t L_50 = V_3;
			U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_51 = V_0;
			NullCheck(L_51);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_52 = L_51->get_auth_1();
			NullCheck(L_49);
			Dictionary_2_set_Item_m4515FF11838024E4B3C9468EDA963D9927C986BF(L_49, (intptr_t)L_50, L_52, /*hidden argument*/Dictionary_2_set_Item_m4515FF11838024E4B3C9468EDA963D9927C986BF_RuntimeMethod_var);
			IL2CPP_LEAVE(0x12C, FINALLY_0125);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0125;
	}

FINALLY_0125:
	{ // begin finally (depth: 1)
		RuntimeObject * L_53 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_53, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(293)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(293)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x133, IL_0133)
		IL2CPP_JUMP_TBL(0x12C, IL_012c)
	}

IL_012c:
	{
		U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_54 = V_0;
		NullCheck(L_54);
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_55 = L_54->get_auth_1();
		return L_55;
	}

IL_0133:
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_56 = V_5;
		return L_56;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_OnAppDisposed_m530E4DB96482484A96F3F8E66E8C5B389B22C489 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___eventArgs1, const RuntimeMethod* method)
{
	{
		FirebaseAuth_Dispose_mC8B13832333E59A2718D17D357EBE85E1670B96A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_m5DCA5A8422C0F3A63426DB5B8B01488D6EEA8E63 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m29F81A30D44C065D3A462F2983052C6607441A4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_OnAppDisposed_m530E4DB96482484A96F3F8E66E8C5B389B22C489_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_0 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			RuntimeObject * L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
			V_1 = L_2;
			RuntimeObject * L_3 = V_1;
			Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
		}

IL_0018:
		try
		{ // begin try (depth: 2)
			{
				IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
				HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_4 = __this->get_address_of_swigCPtr_0();
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_4, /*hidden argument*/NULL);
				bool L_6;
				L_6 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_6)
				{
					goto IL_0105;
				}
			}

IL_0038:
			{
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
				Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_7 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
				intptr_t L_8 = __this->get_appCPtr_3();
				NullCheck(L_7);
				bool L_9;
				L_9 = Dictionary_2_Remove_m29F81A30D44C065D3A462F2983052C6607441A4C(L_7, (intptr_t)L_8, /*hidden argument*/Dictionary_2_Remove_m29F81A30D44C065D3A462F2983052C6607441A4C_RuntimeMethod_var);
				FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_10 = __this->get_appProxy_2();
				EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_11 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
				EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_11, __this, (intptr_t)((intptr_t)FirebaseAuth_OnAppDisposed_m530E4DB96482484A96F3F8E66E8C5B389B22C489_RuntimeMethod_var), /*hidden argument*/NULL);
				NullCheck(L_10);
				FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812(L_10, L_11, /*hidden argument*/NULL);
				__this->set_appProxy_2((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL);
				__this->set_appCPtr_3((intptr_t)(0));
				FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_12 = __this->get_currentUser_6();
				if (!L_12)
				{
					goto IL_008f;
				}
			}

IL_007d:
			{
				FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_13 = __this->get_currentUser_6();
				NullCheck(L_13);
				FirebaseUser_Dispose_m2E0F9A0BB6AA74CBA06E9404555F2E03BA041F27(L_13, /*hidden argument*/NULL);
				__this->set_currentUser_6((FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 *)NULL);
			}

IL_008f:
			{
				intptr_t L_14 = __this->get_authStateListener_4();
				bool L_15;
				L_15 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_14, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_15)
				{
					goto IL_00bb;
				}
			}

IL_00a4:
			{
				intptr_t L_16 = __this->get_authStateListener_4();
				AuthUtil_DestroyAuthStateListener_m0C3E499BDD08AC73FB57C973A68317C58FC4A2BC(__this, (intptr_t)L_16, /*hidden argument*/NULL);
				__this->set_authStateListener_4((intptr_t)(0));
			}

IL_00bb:
			{
				intptr_t L_17 = __this->get_idTokenListener_5();
				bool L_18;
				L_18 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_17, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_18)
				{
					goto IL_00e7;
				}
			}

IL_00d0:
			{
				intptr_t L_19 = __this->get_idTokenListener_5();
				AuthUtil_DestroyIdTokenListener_m008D3961141C95DECFB2350CA70CC0B50DB0A291(__this, (intptr_t)L_19, /*hidden argument*/NULL);
				__this->set_idTokenListener_5((intptr_t)(0));
			}

IL_00e7:
			{
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
				FirebaseAuth_ReleaseReferenceInternal_m9574084A8D194ABF23C5B9A2A9BDC1C133830F86(__this, /*hidden argument*/NULL);
				__this->set_swigCMemOwn_1((bool)0);
				HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_20;
				memset((&L_20), 0, sizeof(L_20));
				HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_20), NULL, (intptr_t)(0), /*hidden argument*/NULL);
				__this->set_swigCPtr_0(L_20);
			}

IL_0105:
			{
				IL2CPP_LEAVE(0x111, FINALLY_010a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_010a;
		}

FINALLY_010a:
		{ // begin finally (depth: 2)
			RuntimeObject * L_21 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_21, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(266)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(266)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x111, IL_0111)
		}

IL_0111:
		{
			IL2CPP_LEAVE(0x11D, FINALLY_0116);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0116;
	}

FINALLY_0116:
	{ // begin finally (depth: 1)
		RuntimeObject * L_22 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_22, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(278)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(278)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11D, IL_011d)
	}

IL_011d:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_mFA11C6196F5EF205989640C3629FDFA74A0E33A9 (intptr_t ___appCPtr0, Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * ___stateChangeClosure1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CForwardStateChangeU3Ec__AnonStorey4_U3CU3Em__0_m34E8B26C5A095806463D4AD294257B833C6E11C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * L_0 = (U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE *)il2cpp_codegen_object_new(U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE_il2cpp_TypeInfo_var);
		U3CForwardStateChangeU3Ec__AnonStorey3__ctor_m76EF5EF3A3208A703FA3981C1ACAED71F6E94A53(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * L_1 = V_0;
		Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * L_2 = ___stateChangeClosure1;
		NullCheck(L_1);
		L_1->set_stateChangeClosure_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_3 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D * L_5 = (U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D *)il2cpp_codegen_object_new(U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D_il2cpp_TypeInfo_var);
			U3CForwardStateChangeU3Ec__AnonStorey4__ctor_mC69F7FFF55F59CA5B7CDD166C37FB5C9CCE2C67B(L_5, /*hidden argument*/NULL);
			V_2 = L_5;
			U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D * L_6 = V_2;
			U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * L_7 = V_0;
			NullCheck(L_6);
			L_6->set_U3CU3Ef__refU243_1(L_7);
			U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D * L_8 = V_2;
			intptr_t L_9 = ___appCPtr0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_10;
			L_10 = FirebaseAuth_ProxyFromAppCPtr_m1F20EEC26C5F5D0B92D8E4244528C9427C47FA95((intptr_t)L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_auth_0(L_10);
			U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D * L_11 = V_2;
			NullCheck(L_11);
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_12 = L_11->get_auth_0();
			if (!L_12)
			{
				goto IL_004e;
			}
		}

IL_003d:
		{
			U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D * L_13 = V_2;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_14, L_13, (intptr_t)((intptr_t)U3CForwardStateChangeU3Ec__AnonStorey4_U3CU3Em__0_m34E8B26C5A095806463D4AD294257B833C6E11C2_RuntimeMethod_var), /*hidden argument*/NULL);
			ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_14, /*hidden argument*/NULL);
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		RuntimeObject * L_15 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_m2071F00761270F32E2D3005FA9CB7EF2A76FBA33 (intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mE574F99D7D9FD73C530EDCE0D028852AEA58983A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_U3CStateChangedFunctionU3Em__0_mA4E60E705682B37C07A5417EDF501A04531ECA9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0 = ___appCPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * L_1 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_13();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * L_2 = (Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF *)il2cpp_codegen_object_new(Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF_il2cpp_TypeInfo_var);
		Action_1__ctor_mE574F99D7D9FD73C530EDCE0D028852AEA58983A(L_2, NULL, (intptr_t)((intptr_t)FirebaseAuth_U3CStateChangedFunctionU3Em__0_mA4E60E705682B37C07A5417EDF501A04531ECA9B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE574F99D7D9FD73C530EDCE0D028852AEA58983A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_13(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * L_3 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_13();
		FirebaseAuth_ForwardStateChange_mFA11C6196F5EF205989640C3629FDFA74A0E33A9((intptr_t)G_B2_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_m38218A67328EB46653D919BFD7DC4E0036FD869B (intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mE574F99D7D9FD73C530EDCE0D028852AEA58983A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_mCF0A4C49ECE4062CB00C19E697D95538B9936A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0 = ___appCPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * L_1 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_14();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * L_2 = (Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF *)il2cpp_codegen_object_new(Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF_il2cpp_TypeInfo_var);
		Action_1__ctor_mE574F99D7D9FD73C530EDCE0D028852AEA58983A(L_2, NULL, (intptr_t)((intptr_t)FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_mCF0A4C49ECE4062CB00C19E697D95538B9936A17_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE574F99D7D9FD73C530EDCE0D028852AEA58983A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_14(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * L_3 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_14();
		FirebaseAuth_ForwardStateChange_mFA11C6196F5EF205989640C3629FDFA74A0E33A9((intptr_t)G_B2_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * FirebaseAuth_get_DefaultInstance_mF1D21420B3C15192CB99E2D770C761AECD4B49AC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0;
		L_0 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_1;
		L_1 = FirebaseAuth_GetAuth_m1DEE44ECBCF8FBF518480186EF81D7E2EAACA319(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * FirebaseAuth_UpdateCurrentUser_mB53D66CBC0E5159D23A60BED91A31C96CEF37331 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ___proxy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_0 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_2 = ___proxy0;
			if (L_2)
			{
				goto IL_001e;
			}
		}

IL_0012:
		{
			__this->set_currentUser_6((FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 *)NULL);
			goto IL_0072;
		}

IL_001e:
		{
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_3 = __this->get_currentUser_6();
			if (L_3)
			{
				goto IL_0035;
			}
		}

IL_0029:
		{
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_4 = ___proxy0;
			__this->set_currentUser_6(L_4);
			goto IL_0072;
		}

IL_0035:
		{
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_5 = __this->get_currentUser_6();
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6;
			L_6 = FirebaseUser_getCPtr_m7DACE5770A1A0399C8AADE6E12E9DB4941BB336F(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			intptr_t L_7;
			L_7 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_1), /*hidden argument*/NULL);
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_8 = ___proxy0;
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			L_9 = FirebaseUser_getCPtr_m7DACE5770A1A0399C8AADE6E12E9DB4941BB336F(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			intptr_t L_10;
			L_10 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_2), /*hidden argument*/NULL);
			bool L_11;
			L_11 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_7, (intptr_t)L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0072;
			}
		}

IL_0060:
		{
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_12 = __this->get_currentUser_6();
			NullCheck(L_12);
			FirebaseUser_Dispose_m2E0F9A0BB6AA74CBA06E9404555F2E03BA041F27(L_12, /*hidden argument*/NULL);
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_13 = ___proxy0;
			__this->set_currentUser_6(L_13);
		}

IL_0072:
		{
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_14 = __this->get_currentUser_6();
			if (!L_14)
			{
				goto IL_0089;
			}
		}

IL_007d:
		{
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_15 = __this->get_currentUser_6();
			NullCheck(L_15);
			L_15->set_authProxy_2(__this);
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x95, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_16 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(142)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
	}

IL_0095:
	{
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_17 = __this->get_currentUser_6();
		return L_17;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * FirebaseAuth_get_CurrentUser_m9562ABA0BC2C3B762D355D502066987E2485770A (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * V_0 = NULL;
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * G_B3_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_0();
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_3;
		L_3 = FirebaseAuth_get_CurrentUserInternal_mBA58FBDEB91829A2914114419E9542BB212B0AFD(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 *)(NULL));
	}

IL_0026:
	{
		V_0 = G_B3_0;
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_4 = V_0;
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_5;
		L_5 = FirebaseAuth_UpdateCurrentUser_mB53D66CBC0E5159D23A60BED91A31C96CEF37331(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * FirebaseAuth_SignInWithCredentialAsync_m2716706F94FE150CCEDC6EC933DC3CF7A09C1F2C (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * ___credential0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m037FD125CDA6DC4D43F1FE2D6EC96ADDE638B035_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_U3CU3Em__0_mDCA3D8CBA2C2911BE87E560E333CC7D0051D228B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 * V_0 = NULL;
	{
		U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 * L_0 = (U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 *)il2cpp_codegen_object_new(U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53_il2cpp_TypeInfo_var);
		U3CSignInWithCredentialAsyncU3Ec__AnonStorey7__ctor_mDB4246E03A6B98DFA5A8F90B3CE6DF41FFEE15F8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		FirebaseAuth_ThrowIfNull_mDF5033DB4B26AB063AC055B1A73EBE5154522885(__this, /*hidden argument*/NULL);
		U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 * L_2 = V_0;
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_3 = (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m037FD125CDA6DC4D43F1FE2D6EC96ADDE638B035(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_m037FD125CDA6DC4D43F1FE2D6EC96ADDE638B035_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_taskCompletionSource_0(L_3);
		Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * L_4 = ___credential0;
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_5;
		L_5 = FirebaseAuth_SignInWithCredentialInternalAsync_m09E760C1C51FC0224975F021FCDFE653D9015447(__this, L_4, /*hidden argument*/NULL);
		U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 * L_6 = V_0;
		Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B * L_7 = (Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B *)il2cpp_codegen_object_new(Action_1_t7126D3DC3275C39CFE5D20E759C1D8FAE10E777B_il2cpp_TypeInfo_var);
		Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289(L_7, L_6, (intptr_t)((intptr_t)U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_U3CU3Em__0_mDCA3D8CBA2C2911BE87E560E333CC7D0051D228B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC08CFCBA5E5C60444AFD54F0A1469E7A9C3F3289_RuntimeMethod_var);
		NullCheck(L_5);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
		L_8 = Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944(L_5, L_7, /*hidden argument*/Task_1_ContinueWith_m8F6AA71D6F03EB18D013502073FED8C3877C4944_RuntimeMethod_var);
		U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 * L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_10 = L_9->get_taskCompletionSource_0();
		NullCheck(L_10);
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_11;
		L_11 = TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_inline(L_10, /*hidden argument*/TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_mF044F11565B16ABD3C607809C2890D91637711D2 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * ___task0, TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * ___taskCompletionSource1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSourceCompat_1_SetException_mB402D483EAE03D6877E12FB198708AE8F179D851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_mF50FC5E0CF45BD10F367C691450945E5DF6B0384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m0D9CBC500CCA46CCC6612CC9F06136461679B7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m4D3446507B67CD13F0A7A50D0299105E2817FC66(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_2 = ___taskCompletionSource1;
		NullCheck(L_2);
		TaskCompletionSource_1_SetCanceled_mF50FC5E0CF45BD10F367C691450945E5DF6B0384(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_mF50FC5E0CF45BD10F367C691450945E5DF6B0384_RuntimeMethod_var);
		goto IL_0044;
	}

IL_0016:
	{
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_3 = ___task0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_5 = ___taskCompletionSource1;
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_6 = ___task0;
		NullCheck(L_6);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_7;
		L_7 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81(L_6, /*hidden argument*/NULL);
		TaskCompletionSourceCompat_1_SetException_mB402D483EAE03D6877E12FB198708AE8F179D851(L_5, L_7, /*hidden argument*/TaskCompletionSourceCompat_1_SetException_mB402D483EAE03D6877E12FB198708AE8F179D851_RuntimeMethod_var);
		goto IL_0044;
	}

IL_0032:
	{
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_8 = ___taskCompletionSource1;
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_9 = ___task0;
		NullCheck(L_9);
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_10;
		L_10 = Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC(L_9, /*hidden argument*/Task_1_get_Result_m0E8072D9FA86249BB7F7B6FAF7284C70F9F325BC_RuntimeMethod_var);
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_11;
		L_11 = FirebaseAuth_UpdateCurrentUser_mB53D66CBC0E5159D23A60BED91A31C96CEF37331(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		TaskCompletionSource_1_SetResult_m0D9CBC500CCA46CCC6612CC9F06136461679B7B8(L_8, L_11, /*hidden argument*/TaskCompletionSource_1_SetResult_m0D9CBC500CCA46CCC6612CC9F06136461679B7B8_RuntimeMethod_var);
	}

IL_0044:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialInternalAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * FirebaseAuth_SignInWithCredentialInternalAsync_m09E760C1C51FC0224975F021FCDFE653D9015447 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * ___credential0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * L_1 = ___credential0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = Credential_getCPtr_m93B42E2243F404B77FC9A9C7CC6A83D693A179DB(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternal_m11ADCE64C02889FFF49C68D11BDB5FC1D081DABB(L_0, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_SignInWithCredentialInternalAsync_m09E760C1C51FC0224975F021FCDFE653D9015447_RuntimeMethod_var)));
	}

IL_0022:
	{
		intptr_t L_6 = V_0;
		Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * L_7 = (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 *)il2cpp_codegen_object_new(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
		Future_User__ctor_m5F554C32E6FB53DA92C7E7BA1F473EE3DB7606C1(L_7, (intptr_t)L_6, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_8;
		L_8 = Future_User_GetTask_mBC320A995DD6BE074E18D839562455647F8AE03E(L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * FirebaseAuth_GetAuthInternal_m2AB237F1A979D3C0C3F1A84D581FD957F81A00C7 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * V_2 = NULL;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
			L_1 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
			intptr_t L_2;
			L_2 = AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m46BD8D95137742F7EF78ED105DC27AECED8786FB(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_2;
			intptr_t L_3 = V_1;
			bool L_4;
			L_4 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0026;
			}
		}

IL_0020:
		{
			G_B4_0 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E *)(NULL));
			goto IL_002d;
		}

IL_0026:
		{
			intptr_t L_5 = V_1;
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_6 = (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E *)il2cpp_codegen_object_new(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
			FirebaseAuth__ctor_m85A69C196AC426B1ABB0267BE3F05977D73EBB4E(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
			G_B4_0 = L_6;
		}

IL_002d:
		{
			V_2 = G_B4_0;
			bool L_7;
			L_7 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			Exception_t * L_8;
			L_8 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_GetAuthInternal_m2AB237F1A979D3C0C3F1A84D581FD957F81A00C7_RuntimeMethod_var)));
		}

IL_003e:
		{
			FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_9 = V_2;
			V_3 = L_9;
			IL2CPP_LEAVE(0x49, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		int32_t* L_10 = ___init_result_out1;
		int32_t L_11 = V_0;
		*((int32_t*)L_10) = (int32_t)L_11;
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_12 = V_3;
		return L_12;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ReleaseReferenceInternal(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ReleaseReferenceInternal_m9574084A8D194ABF23C5B9A2A9BDC1C133830F86 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0 = ___instance0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_mC7A6D31499A8B3BFB7FDAE1A7F7F848414B43AAF(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mB7193CC6E9CF443A5DF7482C48BCF7F9E73ABDDF(L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_ReleaseReferenceInternal_m9574084A8D194ABF23C5B9A2A9BDC1C133830F86_RuntimeMethod_var)));
	}

IL_001b:
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * FirebaseAuth_get_CurrentUserInternal_mBA58FBDEB91829A2914114419E9542BB212B0AFD (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * V_1 = NULL;
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * G_B3_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_m60B02CC9E17F036A4F3FBB4181BFE790BC1515D0(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_5 = (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 *)il2cpp_codegen_object_new(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308_il2cpp_TypeInfo_var);
		FirebaseUser__ctor_m8B08F2424F35E9EDE2420F30E2041EBF2049AB46(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		bool L_6;
		L_6 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		Exception_t * L_7;
		L_7 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_get_CurrentUserInternal_mBA58FBDEB91829A2914114419E9542BB212B0AFD_RuntimeMethod_var)));
	}

IL_003a:
	{
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__cctor_mA422CC77F91C0CF111E88BAB900876D336FC2AD1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m48DB73F27F5AF81DD9F36C2FD7E219F97A694F2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_0 = (Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 *)il2cpp_codegen_object_new(Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m48DB73F27F5AF81DD9F36C2FD7E219F97A694F2E(L_0, /*hidden argument*/Dictionary_2__ctor_m48DB73F27F5AF81DD9F36C2FD7E219F97A694F2E_RuntimeMethod_var);
		((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->set_appCPtrToAuth_10(L_0);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::<StateChangedFunction>m__0(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_U3CStateChangedFunctionU3Em__0_mA4E60E705682B37C07A5417EDF501A04531ECA9B (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0 = ___auth0;
		NullCheck(L_0);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0->get_stateChangedImpl_7();
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		Dictionary_2_t5E59F29A72B498CFF7A1B01F26D5D96669B60FC5 * L_2 = ((FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_4 = ___auth0;
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_5 = ___auth0;
		NullCheck(L_5);
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_6;
		L_6 = FirebaseAuth_get_CurrentUserInternal_mBA58FBDEB91829A2914114419E9542BB212B0AFD(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_7;
		L_7 = FirebaseAuth_UpdateCurrentUser_mB53D66CBC0E5159D23A60BED91A31C96CEF37331(L_4, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x30, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x30, IL_0030)
	}

IL_0030:
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_9 = ___auth0;
		NullCheck(L_9);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = L_9->get_stateChangedImpl_7();
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_11 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_12 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_10);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_0041:
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_13 = ___auth0;
		NullCheck(L_13);
		L_13->set_persistentLoaded_9((bool)1);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::<IdTokenChangedFunction>m__1(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_mCF0A4C49ECE4062CB00C19E697D95538B9936A17 (FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0 = ___auth0;
		NullCheck(L_0);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0->get_idTokenChangedImpl_8();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_2 = ___auth0;
		NullCheck(L_2);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = L_2->get_idTokenChangedImpl_8();
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_4 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_5 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_3);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

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
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser__ctor_m8B08F2424F35E9EDE2420F30E2041EBF2049AB46 (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), __this, (intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_swigCPtr_1(L_1);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseUser_getCPtr_m7DACE5770A1A0399C8AADE6E12E9DB4941BB336F (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_1();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Auth.FirebaseUser::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser_Finalize_m7903093F1945CE20172E7A18576CDC39A171A9E2 (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseUser_Dispose_m2E0F9A0BB6AA74CBA06E9404555F2E03BA041F27(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseUser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser_Dispose_m2E0F9A0BB6AA74CBA06E9404555F2E03BA041F27 (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_1();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_0();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_0((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_1();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_delete_FirebaseUser_m54B9B0635CF8262B99D608177A4C2CA28FEB6D80(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_1(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Auth.FirebaseUser::TokenAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * FirebaseUser_TokenAsync_mD8DEF443E346BE1B6C5F540E5309C8DE71CD4330 (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * __this, bool ___forceRefresh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_1();
		bool L_1 = ___forceRefresh0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = AuthUtilPINVOKE_FirebaseUser_Token_mAD02484B5448411F72FC8F2A6B986569A79240A7(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseUser_TokenAsync_mD8DEF443E346BE1B6C5F540E5309C8DE71CD4330_RuntimeMethod_var)));
	}

IL_001d:
	{
		intptr_t L_5 = V_0;
		FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_6 = (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 *)il2cpp_codegen_object_new(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		FutureString__ctor_mEE94FE29EDA6856652FFBFE07AF06BD33B5BBC82(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_7;
		L_7 = FutureString_GetTask_m7CF681D446F480F4930D6B4A406CF9CE12B4A761(L_6, /*hidden argument*/NULL);
		return L_7;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_User_SWIG_CompletionDispatcher_mD8D1EADB4CBDDC51721F7FB23F4FDCF9EE953E6B(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_User_SWIG_CompletionDispatcher_mD8D1EADB4CBDDC51721F7FB23F4FDCF9EE953E6B(___key0, NULL);

}
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__ctor_m5F554C32E6FB53DA92C7E7BA1F473EE3DB7606C1 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_Future_User_SWIGUpcast_mCA1D55B8736BD75B97BFB7B82AB04E0839E787B6((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_Finalize_m9F0BA889F85A023FF0CD794CB04BE69BE8030BA1 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Auth.Future_User::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_Dispose_m3405ACBB1CE5CC4A1A9B85881E890A3EF3055A05 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_005f;
			}
		}

IL_0026:
		{
			Future_User_SetCompletionData_m0FEE06F68A9F7F09B71E8ED08567D6FF6FDB6B10(__this, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_5 = ((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_004e;
			}
		}

IL_003c:
		{
			((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_delete_Future_User_m9F24A248FC58832AD5F6C9A41122DD92CFFD7314(L_6, /*hidden argument*/NULL);
		}

IL_004e:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_7);
		}

IL_005f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x77, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * Future_User_GetTask_mBC320A995DD6BE074E18D839562455647F8AE03E (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t93A1C2066DBE44D8980A3C69015371AD734414F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m037FD125CDA6DC4D43F1FE2D6EC96ADDE638B035_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2C77C784B9C46E6089FB566A566B141409EABADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_0 = (U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_mF75D6318BC7088C17C4E97F07FA4A788F8253B69(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_1 = V_0;
		Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_3 = V_0;
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_4 = (TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m037FD125CDA6DC4D43F1FE2D6EC96ADDE638B035(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m037FD125CDA6DC4D43F1FE2D6EC96ADDE638B035_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_mEA5DEC6C9C60C4B0CA474DA6FF3ADE036EE878E0(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_6 = V_0;
		NullCheck(L_6);
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_7 = L_6->get_tcs_1();
		Exception_t * L_8;
		L_8 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		NullCheck(L_7);
		TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197(L_7, L_8, /*hidden argument*/TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_10 = L_9->get_tcs_1();
		NullCheck(L_10);
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_11;
		L_11 = TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_inline(L_10, /*hidden argument*/TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_RuntimeMethod_var);
		return L_11;
	}

IL_003e:
	{
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_12 = V_0;
		NullCheck(L_12);
		Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * L_13 = L_12->get_fu_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0071;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_15 = V_0;
		NullCheck(L_15);
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_16 = L_15->get_tcs_1();
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_17 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_17, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, /*hidden argument*/NULL);
		NullCheck(L_16);
		TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197(L_16, L_17, /*hidden argument*/TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_19 = L_18->get_tcs_1();
		NullCheck(L_19);
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_20;
		L_20 = TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_inline(L_19, /*hidden argument*/TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_RuntimeMethod_var);
		return L_20;
	}

IL_0071:
	{
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_21 = V_0;
		NullCheck(L_21);
		Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * L_22 = L_21->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_23 = V_0;
		Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * L_24 = (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 *)il2cpp_codegen_object_new(Action_t93A1C2066DBE44D8980A3C69015371AD734414F6_il2cpp_TypeInfo_var);
		Action__ctor_mC21BA7E76FE4731785715A19E5C0414EB4808412(L_24, L_23, (intptr_t)((intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2C77C784B9C46E6089FB566A566B141409EABADD_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		Future_User_SetOnCompletionCallback_mFD29B355855F88AB8950691123466E52E3B993E2(L_22, L_24, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * L_25 = V_0;
		NullCheck(L_25);
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_26 = L_25->get_tcs_1();
		NullCheck(L_26);
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_27;
		L_27 = TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_inline(L_26, /*hidden argument*/TaskCompletionSource_1_get_Task_m0126C04FBE0C61229AC59845CAB341A4135EF0E0_RuntimeMethod_var);
		return L_27;
	}
}
// System.Void Firebase.Auth.Future_User::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_ThrowIfDisposed_m2168E8CFC4966C7EF26002666C928E332790C9EB (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_2();
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_ThrowIfDisposed_m2168E8CFC4966C7EF26002666C928E332790C9EB_RuntimeMethod_var)));
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_mFD29B355855F88AB8950691123466E52E3B993E2 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m727FCB67BF3556C4094A58424B2FD35F63A39811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mAD1403952E73C9A512E3FED3699D2528A7E3449D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_SWIG_CompletionDispatcher_mD8D1EADB4CBDDC51721F7FB23F4FDCF9EE953E6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Future_User_ThrowIfDisposed_m2168E8CFC4966C7EF26002666C928E332790C9EB(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * L_1 = (SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_m81CF97B458937B1C53B13DF2213072C0F8C4DC3D(L_1, NULL, (intptr_t)((intptr_t)Future_User_SWIG_CompletionDispatcher_mD8D1EADB4CBDDC51721F7FB23F4FDCF9EE953E6B_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_1);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
			Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * L_4 = ((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_4)
			{
				goto IL_0043;
			}
		}

IL_0039:
		{
			Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * L_5 = (Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 *)il2cpp_codegen_object_new(Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m727FCB67BF3556C4094A58424B2FD35F63A39811(L_5, /*hidden argument*/Dictionary_2__ctor_m727FCB67BF3556C4094A58424B2FD35F63A39811_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
			((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->set_Callbacks_3(L_5);
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
			int32_t L_6 = ((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_7);
			V_0 = L_7;
			Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * L_8 = ((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_9 = V_0;
			Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * L_10 = ___userCompletionCallback0;
			NullCheck(L_8);
			Dictionary_2_set_Item_mAD1403952E73C9A512E3FED3699D2528A7E3449D(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_mAD1403952E73C9A512E3FED3699D2528A7E3449D_RuntimeMethod_var);
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * L_12 = __this->get_SWIG_CompletionCB_7();
		int32_t L_13 = V_0;
		intptr_t L_14;
		L_14 = Future_User_SWIG_OnCompletion_m4111F339E20EAE9AFAD6DC44BEEE5D4BC7063DC5(__this, L_12, L_13, /*hidden argument*/NULL);
		Future_User_SetCompletionData_m0FEE06F68A9F7F09B71E8ED08567D6FF6FDB6B10(__this, (intptr_t)L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m0FEE06F68A9F7F09B71E8ED08567D6FF6FDB6B10 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		Future_User_ThrowIfDisposed_m2168E8CFC4966C7EF26002666C928E332790C9EB(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		Future_User_SWIG_FreeCompletionData_m324A3CBD6BFBE507D436FF91CFA302032224E677(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_mD8D1EADB4CBDDC51721F7FB23F4FDCF9EE953E6B (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0840193BE0ABEDC84E3BB979D2BEE03CF97456F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mFE419F668DCB5EC7CC5BED449393F3D4AC313CD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
			Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * L_2 = ((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
			Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * L_3 = ((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_TryGetValue_mFE419F668DCB5EC7CC5BED449393F3D4AC313CD9(L_3, L_4, (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mFE419F668DCB5EC7CC5BED449393F3D4AC313CD9_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
			Dictionary_2_tA7425066635E9AF08B63A5CFF0BD9A8F1D0059D5 * L_6 = ((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			bool L_8;
			L_8 = Dictionary_2_Remove_m0840193BE0ABEDC84E3BB979D2BEE03CF97456F8(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m0840193BE0ABEDC84E3BB979D2BEE03CF97456F8_RuntimeMethod_var);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * L_11 = V_0;
		NullCheck(L_11);
		Action_Invoke_mC98D5F480A517840ADA9B58ED318660F11903678(L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_m4111F339E20EAE9AFAD6DC44BEEE5D4BC7063DC5 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_m953C34DDE0BC5F3AD919FF755EFCDE6358DDD7FD(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_SWIG_OnCompletion_m4111F339E20EAE9AFAD6DC44BEEE5D4BC7063DC5_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_m324A3CBD6BFBE507D436FF91CFA302032224E677 (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_m01FAAB4D31D1888FA950BBBB079EFCC552D855ED(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_SWIG_FreeCompletionData_m324A3CBD6BFBE507D436FF91CFA302032224E677_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * Future_User_GetResult_m46EBBA5BF8964568666992B0A95EEA7C2486B1CE (Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * V_1 = NULL;
	FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * G_B3_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_Future_User_GetResult_m1AF432C48675B88D5945DF3E1DE6237E6FC34152(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_5 = (FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 *)il2cpp_codegen_object_new(FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308_il2cpp_TypeInfo_var);
		FirebaseUser__ctor_m8B08F2424F35E9EDE2420F30E2041EBF2049AB46(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		bool L_6;
		L_6 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		Exception_t * L_7;
		L_7 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_GetResult_m46EBBA5BF8964568666992B0A95EEA7C2486B1CE_RuntimeMethod_var)));
	}

IL_003a:
	{
		FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Auth.Future_User::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__cctor_m603CBDD19A393FB8271398136BCEB7ADABC849EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
// System.Void Firebase.Auth.GoogleAuthProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAuthProvider__cctor_m1010280EA31A17EA2814526067C4D394B59F0D5B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434(/*hidden argument*/NULL);
		return;
	}
}
// Firebase.Auth.Credential Firebase.Auth.GoogleAuthProvider::GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * GoogleAuthProvider_GetCredential_m49513FDADBA62D1DFB781EC17397C2B7AF227F74 (String_t* ___idToken0, String_t* ___accessToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * V_0 = NULL;
	{
		String_t* L_0 = ___idToken0;
		String_t* L_1 = ___accessToken1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = AuthUtilPINVOKE_GoogleAuthProvider_GetCredential_mFC4C50E40B98335642FF99DFF8F869BA6F1489E7(L_0, L_1, /*hidden argument*/NULL);
		Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * L_3 = (Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA *)il2cpp_codegen_object_new(Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA_il2cpp_TypeInfo_var);
		Credential__ctor_m9CEF01CD39AB945133D9E158140F27471C9A97FB(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GoogleAuthProvider_GetCredential_m49513FDADBA62D1DFB781EC17397C2B7AF227F74_RuntimeMethod_var)));
	}

IL_001e:
	{
		Credential_t638B3D8394BA25DA9572C6A523AFBF7D18D88DAA * L_6 = V_0;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m7894CDADABA52FF4B5F3DD49140BC93BBC2161F2(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m7894CDADABA52FF4B5F3DD49140BC93BBC2161F2(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m8E0A9CAD0729BDA2EAF319BCB7B2042B1BADB0F5(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m8E0A9CAD0729BDA2EAF319BCB7B2042B1BADB0F5(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mBD13D9A768206DCC86A4CCDC845882BBDD25D4AE(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mBD13D9A768206DCC86A4CCDC845882BBDD25D4AE(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFF2D3C8CEFEB2F507CB4DD9242B600FE60F61AF0(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFF2D3C8CEFEB2F507CB4DD9242B600FE60F61AF0(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m17C93CF4C6258C4D2E580D8DFAD9F75F80DFBC1C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m17C93CF4C6258C4D2E580D8DFAD9F75F80DFBC1C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3093A5A3B2415B9B71CCF2810DEA1646F0DC93FA(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m3093A5A3B2415B9B71CCF2810DEA1646F0DC93FA(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m4414C2DB0A6EA87A4CFCD9017337176366EF539D(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m4414C2DB0A6EA87A4CFCD9017337176366EF539D(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m2DF00128F9C09D745BF182A81384620FC88456CB(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m2DF00128F9C09D745BF182A81384620FC88456CB(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m270E6990C77E864A0101E323217F2EEE145A8FC2(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m270E6990C77E864A0101E323217F2EEE145A8FC2(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mDBAD1EB44C519BDF0D56A03E6DE817D02E5D3714(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mDBAD1EB44C519BDF0D56A03E6DE817D02E5D3714(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m02076979B1FEA8E8BF5E2C2BA0FC813AA286EC7C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m02076979B1FEA8E8BF5E2C2BA0FC813AA286EC7C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m49E8653E37E2903C5F40BAFE7BB85B8C19081F53(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m49E8653E37E2903C5F40BAFE7BB85B8C19081F53(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mA6681287C0A8FB5184ADF59E8CBB5D2E766202A9(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mA6681287C0A8FB5184ADF59E8CBB5D2E766202A9(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB7B182E5E2017C682F5DD31793A09FF88BCCA56B(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB7B182E5E2017C682F5DD31793A09FF88BCCA56B(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mBED6984DD8843F9FAFD99EAFB324C2CCAAF84BA3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m7894CDADABA52FF4B5F3DD49140BC93BBC2161F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m49E8653E37E2903C5F40BAFE7BB85B8C19081F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_mA6681287C0A8FB5184ADF59E8CBB5D2E766202A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB7B182E5E2017C682F5DD31793A09FF88BCCA56B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m8E0A9CAD0729BDA2EAF319BCB7B2042B1BADB0F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_mBD13D9A768206DCC86A4CCDC845882BBDD25D4AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m4414C2DB0A6EA87A4CFCD9017337176366EF539D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFF2D3C8CEFEB2F507CB4DD9242B600FE60F61AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m17C93CF4C6258C4D2E580D8DFAD9F75F80DFBC1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m3093A5A3B2415B9B71CCF2810DEA1646F0DC93FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m2DF00128F9C09D745BF182A81384620FC88456CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m270E6990C77E864A0101E323217F2EEE145A8FC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_mDBAD1EB44C519BDF0D56A03E6DE817D02E5D3714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m02076979B1FEA8E8BF5E2C2BA0FC813AA286EC7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_0 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m7894CDADABA52FF4B5F3DD49140BC93BBC2161F2_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_1 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m8E0A9CAD0729BDA2EAF319BCB7B2042B1BADB0F5_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_2 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_mBD13D9A768206DCC86A4CCDC845882BBDD25D4AE_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_3 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFF2D3C8CEFEB2F507CB4DD9242B600FE60F61AF0_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_4 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m17C93CF4C6258C4D2E580D8DFAD9F75F80DFBC1C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_5 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m3093A5A3B2415B9B71CCF2810DEA1646F0DC93FA_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_6 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m4414C2DB0A6EA87A4CFCD9017337176366EF539D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_7 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m2DF00128F9C09D745BF182A81384620FC88456CB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_8 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m270E6990C77E864A0101E323217F2EEE145A8FC2_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_9 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_mDBAD1EB44C519BDF0D56A03E6DE817D02E5D3714_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_10 = (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F *)il2cpp_codegen_object_new(ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m02076979B1FEA8E8BF5E2C2BA0FC813AA286EC7C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * L_11 = (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m536A3E7B4BD57340C8A8F0A2167AA001F2DFD7BE(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m49E8653E37E2903C5F40BAFE7BB85B8C19081F53_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * L_12 = (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m536A3E7B4BD57340C8A8F0A2167AA001F2DFD7BE(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mA6681287C0A8FB5184ADF59E8CBB5D2E766202A9_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * L_13 = (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m536A3E7B4BD57340C8A8F0A2167AA001F2DFD7BE(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB7B182E5E2017C682F5DD31793A09FF88BCCA56B_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_14 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_15 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_16 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_17 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_18 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_19 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_20 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_21 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_22 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_23 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * L_24 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_mDD04F7C28AD777CA7EF3CFDECFF612A639CFEBDC(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * L_25 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * L_26 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * L_27 = ((SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_m38F78CF74B19FCDB672D1737FC979D2824B0AC9E(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_mC40FE8800E571BF95C2BD26F53B61A248D7636F6 (SWIGExceptionHelper_t99A361F53E33B8763A84F77257D3DAA4F548EB2C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_mDD04F7C28AD777CA7EF3CFDECFF612A639CFEBDC (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___applicationDelegate0, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___arithmeticDelegate1, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___divideByZeroDelegate2, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___indexOutOfRangeDelegate3, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___invalidCastDelegate4, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___invalidOperationDelegate5, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___ioDelegate6, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___nullReferenceDelegate7, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___outOfMemoryDelegate8, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___overflowDelegate9, ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "SWIGRegisterExceptionCallbacks_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AuthUtil)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_m38F78CF74B19FCDB672D1737FC979D2824B0AC9E (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * ___argumentDelegate0, ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * ___argumentNullDelegate1, ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "SWIGRegisterExceptionArgumentCallbacks_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_AuthUtil)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m7894CDADABA52FF4B5F3DD49140BC93BBC2161F2 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m8E0A9CAD0729BDA2EAF319BCB7B2042B1BADB0F5 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mBD13D9A768206DCC86A4CCDC845882BBDD25D4AE (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFF2D3C8CEFEB2F507CB4DD9242B600FE60F61AF0 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m17C93CF4C6258C4D2E580D8DFAD9F75F80DFBC1C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3093A5A3B2415B9B71CCF2810DEA1646F0DC93FA (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m4414C2DB0A6EA87A4CFCD9017337176366EF539D (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m2DF00128F9C09D745BF182A81384620FC88456CB (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m270E6990C77E864A0101E323217F2EEE145A8FC2 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mDBAD1EB44C519BDF0D56A03E6DE817D02E5D3714 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m02076979B1FEA8E8BF5E2C2BA0FC813AA286EC7C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m49E8653E37E2903C5F40BAFE7BB85B8C19081F53 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mA6681287C0A8FB5184ADF59E8CBB5D2E766202A9 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_8 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mB7B182E5E2017C682F5DD31793A09FF88BCCA56B (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC(L_8, /*hidden argument*/NULL);
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
// System.Boolean Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mEA5DEC6C9C60C4B0CA474DA6FF3ADE036EE878E0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Exception_t * L_0 = ((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_5 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m6D6A880874BB8602E0129CB675F858F488FC50FC_RuntimeMethod_var)));
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m7ACBC759FB231880E1A40AF1A05803B5CDCF187D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (AuthUtilPINVOKE_tD02963BE9050245F2940D293A81FB0F35F40C766_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC7F972369947667C801A4DC1A4CAED4121342D77_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mC9CD7A5731D0F8E7ADAA4B6547B8560B750FFFFE(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mC9CD7A5731D0F8E7ADAA4B6547B8560B750FFFFE(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m68ABFE04F814743C314CAE685D5805A76C09FFC8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_mC9CD7A5731D0F8E7ADAA4B6547B8560B750FFFFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * L_0 = (SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 *)il2cpp_codegen_object_new(SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mE8C6338B6623772577727CEDB8B2A1B1227F4FFE(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_mC9CD7A5731D0F8E7ADAA4B6547B8560B750FFFFE_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * L_1 = ((SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m45877B9DFCB1AAD5A30EA11C414352762303485C(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m4A68E713C75462026637763A8C52479CDB5C777A (SWIGStringHelper_t0D287BE39B9CEB9E0E7C21EA27F446C0541A56E6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m45877B9DFCB1AAD5A30EA11C414352762303485C (SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "SWIGRegisterStringCallback_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AuthUtil)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mC9CD7A5731D0F8E7ADAA4B6547B8560B750FFFFE (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
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
// System.Void Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey3__ctor_m76EF5EF3A3208A703FA3981C1ACAED71F6E94A53 (U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey4__ctor_mC69F7FFF55F59CA5B7CDD166C37FB5C9CCE2C67B (U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForwardStateChangeU3Ec__AnonStorey4_U3CU3Em__0_m34E8B26C5A095806463D4AD294257B833C6E11C2 (U3CForwardStateChangeU3Ec__AnonStorey4_t4FFF9695E6DB1EBEC2E3ADD3358AF4E4CFC4B50D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m48A766379B479C0A79D6100A71BE684183F94B9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CForwardStateChangeU3Ec__AnonStorey3_t22A0E4071E9D0F10160655206BB6A031D877A5FE * L_0 = __this->get_U3CU3Ef__refU243_1();
		NullCheck(L_0);
		Action_1_t2C0916E64B2422428D60DD8E23600EA6A5B906FF * L_1 = L_0->get_stateChangeClosure_0();
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_2 = __this->get_auth_0();
		NullCheck(L_1);
		Action_1_Invoke_m48A766379B479C0A79D6100A71BE684183F94B9F(L_1, L_2, /*hidden argument*/Action_1_Invoke_m48A766379B479C0A79D6100A71BE684183F94B9F_RuntimeMethod_var);
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
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey1__ctor_mD87ACC838F70D80A7AB542C912D080C79299C8B1 (U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey2__ctor_m40CE4ED31C003485C39F4F1316BA8E0B60231B44 (U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_mEE264E818D03CA2054E71BAF4DC174AFB712A2AC (U3CGetAuthU3Ec__AnonStorey2_t4AFC638AB5C489506EB8728D36AE833E99F92544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_0 = __this->get_U3CU3Ef__refU241_1();
		U3CGetAuthU3Ec__AnonStorey1_tA99D1048C5D603DD5D9603FA75E909847FDFB76E * L_1 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_1);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = L_1->get_app_0();
		int32_t* L_3 = __this->get_address_of_init_result_0();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E_il2cpp_TypeInfo_var);
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_4;
		L_4 = FirebaseAuth_GetAuthInternal_m2AB237F1A979D3C0C3F1A84D581FD957F81A00C7(L_2, (int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_auth_1(L_4);
		int32_t L_5 = __this->get_init_result_0();
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->get_init_result_0();
		InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_7 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)));
		InitializationException__ctor_mCE6B67DCF469CF7CC9CC8A5C6C2E6CAC73D6366F(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAuthU3Ec__AnonStorey2_U3CU3Em__0_mEE264E818D03CA2054E71BAF4DC174AFB712A2AC_RuntimeMethod_var)));
	}

IL_0038:
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
// System.Void Firebase.Auth.FirebaseAuth/<SignInWithCredentialAsync>c__AnonStorey7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInWithCredentialAsyncU3Ec__AnonStorey7__ctor_mDB4246E03A6B98DFA5A8F90B3CE6DF41FFEE15F8 (U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<SignInWithCredentialAsync>c__AnonStorey7::<>m__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_U3CU3Em__0_mDCA3D8CBA2C2911BE87E560E333CC7D0051D228B (U3CSignInWithCredentialAsyncU3Ec__AnonStorey7_t3F3C2BD2382149AF6E67F065C42229B31537FA53 * __this, Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * ___task0, const RuntimeMethod* method)
{
	{
		FirebaseAuth_t62F122053F219E848C71A38DBB8A818A6C8B8F7E * L_0 = __this->get_U24this_1();
		Task_1_tEBE900D333BFF17CF9FDB3BCE586131016083F35 * L_1 = ___task0;
		TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_2 = __this->get_taskCompletionSource_0();
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_mF044F11565B16ABD3C607809C2890D91637711D2(L_0, L_1, L_2, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 (StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___authCPtr0);

}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_mCE4282A35A78D4FB4AFAF615CE44953EBF8BA721 (StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate_Invoke_mA621127743E0FB8B4D19650D19C9CA98EFF6477E (StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
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
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___authCPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authCPtr0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authCPtr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authCPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___authCPtr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___authCPtr0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authCPtr0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.FirebaseAuth/StateChangedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateChangedDelegate_BeginInvoke_m02DCDBACBD8835CBDCF700A70AB8DC2DA4AB718D (StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * __this, intptr_t ___authCPtr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___authCPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate_EndInvoke_m54DC79C1198B849D8072B6B6320544024CAD62C4 (StateChangedDelegate_t9405205DA8C8A4F84132EFA5413CA3D3A7DE2874 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mF75D6318BC7088C17C4E97F07FA4A788F8253B69 (U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2C77C784B9C46E6089FB566A566B141409EABADD (U3CGetTaskU3Ec__AnonStorey0_tA92D581998A360FDE7770636AE7FFE8B04FD778C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_mF50FC5E0CF45BD10F367C691450945E5DF6B0384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m0D9CBC500CCA46CCC6612CC9F06136461679B7B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * L_0 = __this->get_fu_0();
			NullCheck(L_0);
			int32_t L_1;
			L_1 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)2))))
			{
				goto IL_0021;
			}
		}

IL_0011:
		{
			TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_2 = __this->get_tcs_1();
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_mF50FC5E0CF45BD10F367C691450945E5DF6B0384(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_mF50FC5E0CF45BD10F367C691450945E5DF6B0384_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0021:
		{
			Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * L_3 = __this->get_fu_0();
			NullCheck(L_3);
			int32_t L_4;
			L_4 = FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03(L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			int32_t L_5 = V_0;
			if (!L_5)
			{
				goto IL_0054;
			}
		}

IL_0033:
		{
			TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_6 = __this->get_tcs_1();
			int32_t L_7 = V_0;
			Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * L_8 = __this->get_fu_0();
			NullCheck(L_8);
			String_t* L_9;
			L_9 = FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774(L_8, /*hidden argument*/NULL);
			FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_10, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m8848F969F249B4A274A5672F5A7B467161CAB197_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0054:
		{
			TaskCompletionSource_1_t9AD06D96AD3E9E43A107EA79993A043F5E1F1D45 * L_11 = __this->get_tcs_1();
			Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * L_12 = __this->get_fu_0();
			NullCheck(L_12);
			FirebaseUser_tB4E7F9E5CECAD14A4F7E4170A134C5CDA028F308 * L_13;
			L_13 = Future_User_GetResult_m46EBBA5BF8964568666992B0A95EEA7C2486B1CE(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_m0D9CBC500CCA46CCC6612CC9F06136461679B7B8(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_m0D9CBC500CCA46CCC6612CC9F06136461679B7B8_RuntimeMethod_var);
		}

IL_006a:
		{
			goto IL_0086;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006f;
		}
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_14 = V_1;
		String_t* L_15;
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(4, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0086;
	} // end catch (depth: 1)

IL_0086:
	{
		Future_User_t16AC7F10973F7E51D2EF05FBC40262B1D74D7F77 * L_16 = __this->get_fu_0();
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, L_16);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Auth.Future_User/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mC21BA7E76FE4731785715A19E5C0414EB4808412 (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.Future_User/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC98D5F480A517840ADA9B58ED318660F11903678 (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.Future_User/Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_mAC11EC7A4447FCA5394B1D78C7EEE0DCE4DFE3DA (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Firebase.Auth.Future_User/Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m9C9A904DEB010D6E101F77C20EF44A6AEAA37653 (Action_t93A1C2066DBE44D8980A3C69015371AD734414F6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 (SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m81CF97B458937B1C53B13DF2213072C0F8C4DC3D (SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m6B73ABEF3DC9C6C623F831B21602231EDCEF9E93 (SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
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
				((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.Future_User/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m45F90F9095A456A95A1F1BCACE5EA81126A42E18 (SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * __this, int32_t ___index0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m544E710D8FFB5D1D511075A4215228DE18651295 (SWIG_CompletionDelegate_tCA18AC9F9C8E946ADB02BDAF936243286523DB64 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m536A3E7B4BD57340C8A8F0A2167AA001F2DFD7BE (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m3208899F2C0E8BAAEA4C154D3E3ED0A9FC9404B9 (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
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
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_mA29A78674486772FE3D6E0867A0287A58D81FA2B (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m272A8F49499E7A8B657F2B63748D3CAEB4F3E38B (ExceptionArgumentDelegate_tD2C6715A0E5FCF1200D1F4484A3A1E3F459F3E62 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mC1DB7D4A7154FD2C0218D6CBA2D3EEAFBCEBA44F (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m66A79898DB4EBB59CA8D4B5732E3AC6FB17199FA (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
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
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m497315270B8FA71914F8F6ECC87C0EBAB0161620 (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mE139BB633AE04FA82B7AE384A675A7F17656D052 (ExceptionDelegate_tA2BDE4C77C5CAB8967904E815ABA370D6A49E98F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 (SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mE8C6338B6623772577727CEDB8B2A1B1227F4FFE (SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m02FA434A47053ED3AAF2ED2D8D3C23E59C18FE6B (SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
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
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mB5212A649E46B3F68E1B5C6017C5A17074BA830B (SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_mE7E877F583190049EBA6732318F2101A323DC936 (SWIGStringDelegate_tB9D8E75ABD8CE9A83EF2FFFAEED70E1C3BD9EC87 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
