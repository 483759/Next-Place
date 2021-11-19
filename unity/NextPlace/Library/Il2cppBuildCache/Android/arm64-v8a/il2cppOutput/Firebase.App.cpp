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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC;
// System.Func`1<System.Int32Enum>
struct Func_1_t1DD4A919E25AD767C21D4EFB78FFDA515BA7792F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079;
// System.Func`2<System.Threading.Tasks.Task`1<System.Int32Enum>,System.Object>
struct Func_2_t3B4B6939B189C9884C818CAFD79EB355BB357A34;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>>
struct Func_2_t2231F61A44309AB51BD9F4F978AF0684429EA2B3;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91;
// System.Func`2<System.Threading.Tasks.Task,System.Object>
struct Func_2_tD0914264065874D28491892EA399E2E394D3966B;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t19B34EAD810249AF015A661D23DF1909EADEB101;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.FutureString/Action>
struct KeyCollection_t2445E1A828B91CE2AAECD05C5B3448E365AA97DF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.FutureVoid/Action>
struct KeyCollection_tB2E6E9B7EA88A08C9ED06274E2AEC77F49727FC1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.FirebaseApp>
struct KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.FirebaseApp>
struct KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct TaskFactory_1_tAC96020FFB40071B86CF359D870F41D9C4C101EE;
// System.Threading.Tasks.TaskFactory`1<Firebase.DependencyStatus>
struct TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32Enum>>
struct Task_1_t46A5C8801C0554B9E15699F496539CF05EB29B91;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.FutureString/Action>
struct ValueCollection_tFBE1FCF4B1A271F884381B3978445D74BEBE410F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.FutureVoid/Action>
struct ValueCollection_t61F8E0F365E7DC37D6724E2A093BC143C4E636CA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,Firebase.FirebaseApp>
struct ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.FirebaseApp>
struct ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.FutureString/Action>[]
struct EntryU5BU5D_t4417BCEFF976DEDBC70C28D8D968951A86D679C9;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.FutureVoid/Action>[]
struct EntryU5BU5D_tF04904506A11EA5BC1EFC6003A5F290AE2645882;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,Firebase.FirebaseApp>[]
struct EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.FirebaseApp>[]
struct EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A;
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
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
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
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// Firebase.Platform.FirebaseAppUtils
struct FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E;
// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47;
// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4;
// Firebase.FutureString
struct FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719;
// Firebase.FutureVoid
struct FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// Firebase.InitializationException
struct InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// Firebase.LogUtil
struct LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Firebase.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tF7B8E107CCA490884BAD9F808FA46A4943C293AA;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089;
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
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9;
// Firebase.AppUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// Firebase.FirebaseApp/<CheckDependencies>c__AnonStorey2
struct U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300;
// Firebase.FirebaseApp/<FixDependenciesAsync>c__AnonStorey3
struct U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0;
// Firebase.FirebaseApp/EnableModuleParams
struct EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4;
// Firebase.FutureString/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B;
// Firebase.FutureString/Action
struct Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606;
// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4;
// Firebase.FutureVoid/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A;
// Firebase.FutureVoid/Action
struct Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72;
// Firebase.LogUtil/LogMessageDelegate
struct LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17;
// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBCAB8C3D9EDED5D0224DC45891EB0E0AAB4BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral1103241B0617CC2365FF633B3B7D5125D1128C22;
IL2CPP_EXTERN_C String_t* _stringLiteral1611D456D2CEE02CE1487EE8445E48898D131F6B;
IL2CPP_EXTERN_C String_t* _stringLiteral16687478A33D5A15482DF6D441B61A0189583C64;
IL2CPP_EXTERN_C String_t* _stringLiteral1976A864796DBEDF326708C78B035AAFD37943BD;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7B4B5C42CA1C2ED60073710A5266DC268AB4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral238329B64A3729607F223FFEFA394456AE114908;
IL2CPP_EXTERN_C String_t* _stringLiteral24ED59ED9090E09DB40A7847435D91BFAE584ECF;
IL2CPP_EXTERN_C String_t* _stringLiteral324FB463A34E73070FCEDC655BCD2F40B2E47971;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteral380FCBD323D8B608651CCA1F4D65A0B1AA362A2A;
IL2CPP_EXTERN_C String_t* _stringLiteral3818B2A66126D8DEEF8DD9AFC89B116464489DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral39655E1CF62FCA36F81637138EABB8E0E88FF960;
IL2CPP_EXTERN_C String_t* _stringLiteral3D20C767EAE028E07642EC56369E049DCB56F6C8;
IL2CPP_EXTERN_C String_t* _stringLiteral403CDB792BDB39DFA5B32B9F5BF62F3460A11FFC;
IL2CPP_EXTERN_C String_t* _stringLiteral41AFC5CF6BD87FAE855E565E56413D254EFDD312;
IL2CPP_EXTERN_C String_t* _stringLiteral469058482DD7BE31765E4E966F8C98EA4B3B6930;
IL2CPP_EXTERN_C String_t* _stringLiteral47655613208A2442002F378BF374CC45952A31F8;
IL2CPP_EXTERN_C String_t* _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
IL2CPP_EXTERN_C String_t* _stringLiteral548196CBB5E5F5105E575F464FE92F73144DFB34;
IL2CPP_EXTERN_C String_t* _stringLiteral61DC9D5B9D0D0872BCFFE89C3B93B577646F49EC;
IL2CPP_EXTERN_C String_t* _stringLiteral62550204912BC90809B03D0FE60F2B4874EB15F8;
IL2CPP_EXTERN_C String_t* _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral74137207FD3822D16F2EDD5B394BD31D5E0DC5A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7AAEF17DD886943DA28485F945C0BC92C838450F;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1;
IL2CPP_EXTERN_C String_t* _stringLiteral875842D645C31A13810035132C84A4C226BFDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral890A68C9701B6B7B9E0ECC8C54874D634FB51E11;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C;
IL2CPP_EXTERN_C String_t* _stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE;
IL2CPP_EXTERN_C String_t* _stringLiteralA37BC83F5B58D09130EA87C7BFA23EEF1ED5CE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A98A8B1C98564A92ABAE5D3EB9AB9D7723903A;
IL2CPP_EXTERN_C String_t* _stringLiteralA69B6F8510FC3A441BACCF626DC509E0C431FF1F;
IL2CPP_EXTERN_C String_t* _stringLiteralADA172ACC20A09E7D83BFE71E65356790E5B24CE;
IL2CPP_EXTERN_C String_t* _stringLiteralAF3E6E43968D1C156E887454B8F9BDB7723036D3;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB7EFBEA6AABC35E96367379C5A6B509BB4044717;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BB0CEDEC57E9981F22698838128030E062BF12;
IL2CPP_EXTERN_C String_t* _stringLiteralC79C1E7C1AB013FFB3AD9A42073405EF4995E70F;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralCF713BCAEC5B32A45A72E5F3972B1092DCC4FFB3;
IL2CPP_EXTERN_C String_t* _stringLiteralD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
IL2CPP_EXTERN_C String_t* _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F;
IL2CPP_EXTERN_C String_t* _stringLiteralD8E3A88F5BFAC46D4EA8953E6A2EA7D3C25746CC;
IL2CPP_EXTERN_C String_t* _stringLiteralDE83EFF84A2045FE5379CA94C53B51BA575BD5A6;
IL2CPP_EXTERN_C String_t* _stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F00725B1CE2641D3D5ED19F65223CA4D3F8BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA5B9DDB87B05728AF950352BA404136EF4EA09B;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralEE248ED951626ABDD49B64B81CAEAF341755AF6C;
IL2CPP_EXTERN_C String_t* _stringLiteralF21B662C3F976D9980F52B473208474F6C31CBE5;
IL2CPP_EXTERN_C String_t* _stringLiteralF56258CA08196A0AA345480C655C78D0172F29E6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_CheckAndroidDependencies_mF6F1264E5DA034CDB3B4A20715419FB36BB09FED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_InitializePlayServicesInternal_mFDAD6568DBE745E692B38FC49EA137C6FBCB2850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_TerminatePlayServicesInternal_mEEDE73F4D1E3F490FFE1329DBD9255A944830B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m09E8B3853C217AA69305DDB29A60FF8E7E406C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m40A1170DC06A6110BD8790F9859FF82637ADC6DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5D4563C331A3FF5094A2A9B3A8EA500DD30F9D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m897CB1E1E85B5420551BA39A79F33E380D02EEEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mABD3D175BBCE88050893B6E15BADA46BFE7375D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEDBD75BE439C76291822BF481D24B4F376B6102B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mFEC798F3DEC9F83DECDCF61605BCE1FCB94BD687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3C25C443F1B1748269C9C20D1EACADAFE590E1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m40D55C1FAA52BC455039C6A408F32F7F6CF7A35D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAA47B2096D829BAFC77594ACE0841684F083EE4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFF10F06C038C842A2C0172778461CFE1F3D2F6CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m48374F40728F7E5FC8EAA23E458292E5475B4EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m11C0967C76F78C48B5BCBECEC12AE868FB44441D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7DF158BD4B2366A2ECB033F55E8AA74204182884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9FE9C86C85A197ED19B2739ACBECECC36C54484D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE35649D2E86CEDB104C0489DB836619ECE559B78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CheckDependenciesInternal_m3C1FA1603F994655D1C49443FFF8053420F98509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_SetCheckDependenciesThread_m4DFA2531E30E77FFA43EBC45E23CD306E8BA8764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_U3CCheckAndFixDependenciesAsyncU3Em__3_mC58ECF5CAA7305CB261496EACAC79A62C810C25B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_U3CCheckAndFixDependenciesAsyncU3Em__4_m2FAFE0753DFF5C2D5E1CF45BDB2870220F7E4484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_U3CCheckDependenciesAsyncU3Em__2_m7418E08620989B76203932B94ED9C94E3C928ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_U3CCreateAndTrackU3Em__1_m9C34C3C32726662CBE52EDB06D70C5E197AF62A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_U3CCreateU3Em__0_m0C29C0EE9E16A55E80148E3233D6491114F11CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m5F5F8CB0138D49C8F12C7E262E2C24F4AFC2FC1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m71D94438C94116C12A8F41374634DD19DEDE271E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m93BE3A4B083FE96C35A63DC5F2827DDAF4BA1B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_GetResult_m44B49349D344B988B4BD2F8782BE5B81EDE12B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_SWIG_CompletionDispatcher_mF70841BDB2D4C1CD323DD8BDB5ACE5BF66D505D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_SWIG_FreeCompletionData_mA0E9ABB8F418A39F2135AB385995207964B74C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_SWIG_OnCompletion_m73D0FB17B8063EEBF36900B519B00EBD1DFF22E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureString_ThrowIfDisposed_m1F2D5089BB1C888631DF053DFD0F38F4345FB5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureVoid_SWIG_CompletionDispatcher_m60ECAC83E9887F17ECCAFE1C1DE0340903FB5281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureVoid_SWIG_FreeCompletionData_mFEA68F96EA671BB05C45C11DDC981A965E7C4ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureVoid_SWIG_OnCompletion_m48F9542CC9CFAF8D061DB014E2791A8C4D6EEBF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureVoid_ThrowIfDisposed_mA7C1D4055AA1AC53502961F16F6449C4647792AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogUtil_U3CLogUtilU3Em__0_mE0E18AA95FE82B679A079D3C7208ED52CC513A15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m743753CE9201E167F700E05EC425BF9F63E880F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m881733D8D9CAFA8A00F5313F0E5142D4C523FF2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mBAC8295937C8CD785F85FFBD657A084A1A811982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtensions_Unwrap_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m82E84B0615F463090AC4EECAA1A173C302D3EDA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m92959253715740CA309A66B613993A167C3D51D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m11C639030242D392638044027C179CC828483747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m921094A39C34868AA61ED303A1F473457BE52366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckDependenciesU3Ec__AnonStorey2_U3CU3Em__0_mECC3E61E5A6E1E53D59A57324902DABE019526D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFixDependenciesAsyncU3Ec__AnonStorey3_U3CU3Em__0_mA13297C364FBCCC7D7AA0EE96EA755838C9D0FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFixDependenciesAsyncU3Ec__AnonStorey3_U3CU3Em__1_mD41D7E8967C69FA3765509BAD33BF548FB64092D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mA5779D80D53EEFDC6F36BF5283B81F326398DCB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mBDC99E2B07B94C3D13918A68BD7E4B85AA737008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1132FFD8564BD0444C5CEDBDD2DC185B7EC91F5A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4417BCEFF976DEDBC70C28D8D968951A86D679C9* ___entries_1;
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
	KeyCollection_t2445E1A828B91CE2AAECD05C5B3448E365AA97DF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFBE1FCF4B1A271F884381B3978445D74BEBE410F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ___entries_1)); }
	inline EntryU5BU5D_t4417BCEFF976DEDBC70C28D8D968951A86D679C9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4417BCEFF976DEDBC70C28D8D968951A86D679C9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4417BCEFF976DEDBC70C28D8D968951A86D679C9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ___keys_7)); }
	inline KeyCollection_t2445E1A828B91CE2AAECD05C5B3448E365AA97DF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2445E1A828B91CE2AAECD05C5B3448E365AA97DF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2445E1A828B91CE2AAECD05C5B3448E365AA97DF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ___values_8)); }
	inline ValueCollection_tFBE1FCF4B1A271F884381B3978445D74BEBE410F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFBE1FCF4B1A271F884381B3978445D74BEBE410F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFBE1FCF4B1A271F884381B3978445D74BEBE410F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF04904506A11EA5BC1EFC6003A5F290AE2645882* ___entries_1;
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
	KeyCollection_tB2E6E9B7EA88A08C9ED06274E2AEC77F49727FC1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t61F8E0F365E7DC37D6724E2A093BC143C4E636CA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ___entries_1)); }
	inline EntryU5BU5D_tF04904506A11EA5BC1EFC6003A5F290AE2645882* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF04904506A11EA5BC1EFC6003A5F290AE2645882** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF04904506A11EA5BC1EFC6003A5F290AE2645882* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ___keys_7)); }
	inline KeyCollection_tB2E6E9B7EA88A08C9ED06274E2AEC77F49727FC1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB2E6E9B7EA88A08C9ED06274E2AEC77F49727FC1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB2E6E9B7EA88A08C9ED06274E2AEC77F49727FC1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ___values_8)); }
	inline ValueCollection_t61F8E0F365E7DC37D6724E2A093BC143C4E636CA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t61F8E0F365E7DC37D6724E2A093BC143C4E636CA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t61F8E0F365E7DC37D6724E2A093BC143C4E636CA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF* ___entries_1;
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
	KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___entries_1)); }
	inline EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___keys_7)); }
	inline KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___values_8)); }
	inline ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE* ___entries_1;
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
	KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___entries_1)); }
	inline EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___keys_7)); }
	inline KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___values_8)); }
	inline ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
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


// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// Firebase.AppUtil
struct AppUtil_t7498D724AD14D2C9882854E4B89D486FFE18AE69  : public RuntimeObject
{
public:

public:
};


// Firebase.AppUtilPINVOKE
struct AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD  : public RuntimeObject
{
public:

public:
};

struct AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields
{
public:
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper Firebase.AppUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * ___swigExceptionHelper_0;
	// Firebase.AppUtilPINVOKE/SWIGStringHelper Firebase.AppUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// Firebase.ErrorMessages
struct ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51  : public RuntimeObject
{
public:

public:
};

struct ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields
{
public:
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_ANDROID
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0;
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_IOS
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1;
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_GENERIC
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_ANDROID
	String_t* ___DLL_NOT_FOUND_ERROR_ANDROID_3;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_IOS
	String_t* ___DLL_NOT_FOUND_ERROR_IOS_4;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_GENERIC
	String_t* ___DLL_NOT_FOUND_ERROR_GENERIC_5;

public:
	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0() const { return ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0() { return &___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0), (void*)value);
	}

	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_IOS_1() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_IOS_1() const { return ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_IOS_1() { return &___DEPENDENCY_NOT_FOUND_ERROR_IOS_1; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_IOS_1(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_IOS_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEPENDENCY_NOT_FOUND_ERROR_IOS_1), (void*)value);
	}

	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2() const { return ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2() { return &___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2), (void*)value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_ANDROID_3() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DLL_NOT_FOUND_ERROR_ANDROID_3)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_ANDROID_3() const { return ___DLL_NOT_FOUND_ERROR_ANDROID_3; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_ANDROID_3() { return &___DLL_NOT_FOUND_ERROR_ANDROID_3; }
	inline void set_DLL_NOT_FOUND_ERROR_ANDROID_3(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_ANDROID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DLL_NOT_FOUND_ERROR_ANDROID_3), (void*)value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_IOS_4() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DLL_NOT_FOUND_ERROR_IOS_4)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_IOS_4() const { return ___DLL_NOT_FOUND_ERROR_IOS_4; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_IOS_4() { return &___DLL_NOT_FOUND_ERROR_IOS_4; }
	inline void set_DLL_NOT_FOUND_ERROR_IOS_4(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_IOS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DLL_NOT_FOUND_ERROR_IOS_4), (void*)value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_GENERIC_5() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DLL_NOT_FOUND_ERROR_GENERIC_5)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_GENERIC_5() const { return ___DLL_NOT_FOUND_ERROR_GENERIC_5; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_GENERIC_5() { return &___DLL_NOT_FOUND_ERROR_GENERIC_5; }
	inline void set_DLL_NOT_FOUND_ERROR_GENERIC_5(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_GENERIC_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DLL_NOT_FOUND_ERROR_GENERIC_5), (void*)value);
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


// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Platform.FirebaseAppPlatform::<app>k__BackingField
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___U3CappU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CappU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5, ___U3CappU3Ek__BackingField_0)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_U3CappU3Ek__BackingField_0() const { return ___U3CappU3Ek__BackingField_0; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_U3CappU3Ek__BackingField_0() { return &___U3CappU3Ek__BackingField_0; }
	inline void set_U3CappU3Ek__BackingField_0(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___U3CappU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappU3Ek__BackingField_0), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppUtils
struct FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E  : public RuntimeObject
{
public:

public:
};

struct FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields
{
public:
	// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::instance
	FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields, ___instance_0)); }
	inline FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * get_instance_0() const { return ___instance_0; }
	inline FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// Firebase.LogUtil
struct LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90  : public RuntimeObject
{
public:
	// System.Boolean Firebase.LogUtil::_disposed
	bool ____disposed_2;

public:
	inline static int32_t get_offset_of__disposed_2() { return static_cast<int32_t>(offsetof(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90, ____disposed_2)); }
	inline bool get__disposed_2() const { return ____disposed_2; }
	inline bool* get_address_of__disposed_2() { return &____disposed_2; }
	inline void set__disposed_2(bool value)
	{
		____disposed_2 = value;
	}
};

struct LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields
{
public:
	// Firebase.LogUtil Firebase.LogUtil::_instance
	LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * ____instance_0;
	// System.Object Firebase.LogUtil::InitializeLoggingLock
	RuntimeObject * ___InitializeLoggingLock_1;
	// Firebase.LogUtil/LogMessageDelegate Firebase.LogUtil::<>f__mg$cache0
	LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields, ____instance_0)); }
	inline LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * get__instance_0() const { return ____instance_0; }
	inline LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_InitializeLoggingLock_1() { return static_cast<int32_t>(offsetof(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields, ___InitializeLoggingLock_1)); }
	inline RuntimeObject * get_InitializeLoggingLock_1() const { return ___InitializeLoggingLock_1; }
	inline RuntimeObject ** get_address_of_InitializeLoggingLock_1() { return &___InitializeLoggingLock_1; }
	inline void set_InitializeLoggingLock_1(RuntimeObject * value)
	{
		___InitializeLoggingLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InitializeLoggingLock_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_3), (void*)value);
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

// Firebase.VersionInfo
struct VersionInfo_tFC70C04F220E39F00A3DF993A7294B2AD831392B  : public RuntimeObject
{
public:

public:
};


// Firebase.AppUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields
{
public:
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___applicationDelegate_0;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___arithmeticDelegate_1;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___divideByZeroDelegate_2;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___indexOutOfRangeDelegate_3;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidCastDelegate_4;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidOperationDelegate_5;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___ioDelegate_6;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___nullReferenceDelegate_7;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___outOfMemoryDelegate_8;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___overflowDelegate_9;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___systemDelegate_10;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentDelegate_11;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentNullDelegate_12;
	// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.AppUtilPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields
{
public:
	// System.Int32 Firebase.AppUtilPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields
{
public:
	// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_StaticFields
{
public:
	// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.AppUtilPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.FirebaseApp/<FixDependenciesAsync>c__AnonStorey3
struct U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task Firebase.FirebaseApp/<FixDependenciesAsync>c__AnonStorey3::task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7, ___task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_task_0() const { return ___task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___task_0), (void*)value);
	}
};

struct U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_StaticFields
{
public:
	// System.Action`1<System.Threading.Tasks.Task> Firebase.FirebaseApp/<FixDependenciesAsync>c__AnonStorey3::<>f__am$cache0
	Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * ___U3CU3Ef__amU24cache0_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_1() { return static_cast<int32_t>(offsetof(U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_StaticFields, ___U3CU3Ef__amU24cache0_1)); }
	inline Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * get_U3CU3Ef__amU24cache0_1() const { return ___U3CU3Ef__amU24cache0_1; }
	inline Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 ** get_address_of_U3CU3Ef__amU24cache0_1() { return &___U3CU3Ef__amU24cache0_1; }
	inline void set_U3CU3Ef__amU24cache0_1(Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * value)
	{
		___U3CU3Ef__amU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_1), (void*)value);
	}
};


// Firebase.FirebaseApp/EnableModuleParams
struct EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4  : public RuntimeObject
{
public:
	// System.String Firebase.FirebaseApp/EnableModuleParams::<CppModuleName>k__BackingField
	String_t* ___U3CCppModuleNameU3Ek__BackingField_0;
	// System.String Firebase.FirebaseApp/EnableModuleParams::<CSharpClassName>k__BackingField
	String_t* ___U3CCSharpClassNameU3Ek__BackingField_1;
	// System.Boolean Firebase.FirebaseApp/EnableModuleParams::<AlwaysEnable>k__BackingField
	bool ___U3CAlwaysEnableU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCppModuleNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4, ___U3CCppModuleNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CCppModuleNameU3Ek__BackingField_0() const { return ___U3CCppModuleNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCppModuleNameU3Ek__BackingField_0() { return &___U3CCppModuleNameU3Ek__BackingField_0; }
	inline void set_U3CCppModuleNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CCppModuleNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCppModuleNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCSharpClassNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4, ___U3CCSharpClassNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CCSharpClassNameU3Ek__BackingField_1() const { return ___U3CCSharpClassNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCSharpClassNameU3Ek__BackingField_1() { return &___U3CCSharpClassNameU3Ek__BackingField_1; }
	inline void set_U3CCSharpClassNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CCSharpClassNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCSharpClassNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAlwaysEnableU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4, ___U3CAlwaysEnableU3Ek__BackingField_2)); }
	inline bool get_U3CAlwaysEnableU3Ek__BackingField_2() const { return ___U3CAlwaysEnableU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAlwaysEnableU3Ek__BackingField_2() { return &___U3CAlwaysEnableU3Ek__BackingField_2; }
	inline void set_U3CAlwaysEnableU3Ek__BackingField_2(bool value)
	{
		___U3CAlwaysEnableU3Ek__BackingField_2 = value;
	}
};


// Firebase.FutureString/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B  : public RuntimeObject
{
public:
	// Firebase.FutureString Firebase.FutureString/<GetTask>c__AnonStorey0::fu
	FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Firebase.FutureString/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B, ___fu_0)); }
	inline FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * get_fu_0() const { return ___fu_0; }
	inline FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B, ___tcs_1)); }
	inline TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}
};


// Firebase.FutureVoid/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A  : public RuntimeObject
{
public:
	// Firebase.FutureVoid Firebase.FutureVoid/<GetTask>c__AnonStorey0::fu
	FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Int32> Firebase.FutureVoid/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A, ___fu_0)); }
	inline FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * get_fu_0() const { return ___fu_0; }
	inline FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A, ___tcs_1)); }
	inline TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * value)
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// Firebase.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tF7B8E107CCA490884BAD9F808FA46A4943C293AA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
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
	AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___DomainUnload_13)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ProcessExit_14)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ResourceResolve_15)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___TypeResolve_16)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___FirstChanceException_18)); }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___compatibility_switch_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ___default_domain_10)); }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
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
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
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
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
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

// Firebase.DependencyStatus
struct DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13 
{
public:
	// System.Int32 Firebase.DependencyStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Firebase.GooglePlayServicesAvailability
struct GooglePlayServicesAvailability_t0741C5001D4CCA564FE0D04B3C03A792E5458D02 
{
public:
	// System.Int32 Firebase.GooglePlayServicesAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GooglePlayServicesAvailability_t0741C5001D4CCA564FE0D04B3C03A792E5458D02, ___value___2)); }
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


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
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


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
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


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080, ___m_result_40)); }
	inline Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * get_m_result_40() const { return ___m_result_40; }
	inline Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tAC96020FFB40071B86CF359D870F41D9C4C101EE * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2231F61A44309AB51BD9F4F978AF0684429EA2B3 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tAC96020FFB40071B86CF359D870F41D9C4C101EE * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tAC96020FFB40071B86CF359D870F41D9C4C101EE ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tAC96020FFB40071B86CF359D870F41D9C4C101EE * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t2231F61A44309AB51BD9F4F978AF0684429EA2B3 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t2231F61A44309AB51BD9F4F978AF0684429EA2B3 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t2231F61A44309AB51BD9F4F978AF0684429EA2B3 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
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


// Firebase.FirebaseApp/<CheckDependencies>c__AnonStorey2
struct U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300  : public RuntimeObject
{
public:
	// Firebase.DependencyStatus Firebase.FirebaseApp/<CheckDependencies>c__AnonStorey2::status
	int32_t ___status_0;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}
};


// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142  : public MulticastDelegate_t
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


// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91  : public MulticastDelegate_t
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


// Firebase.FutureVoid
struct FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureVoid/SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields, ___CallbackLock_5)); }
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


// System.TypeLoadException
struct TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureString/Action
struct Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureVoid/Action
struct Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.LogUtil/LogMessageDelegate
struct LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394  : public MulticastDelegate_t
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


// System.DllNotFoundException
struct DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596  : public TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7
{
public:

public:
};


// System.IO.FileNotFoundException
struct FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
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
// Firebase.FirebaseApp/EnableModuleParams[]
struct EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * m_Items[1];

public:
	inline EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * value)
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m31E0A469AED107558069DD92CA2D04BE40DB26CB_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___f0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m0C7DD3C5F9CA68F39FE0294A8F732F26078DA458_gshared (Func_1_t1DD4A919E25AD767C21D4EFB78FFDA515BA7792F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.Int32Enum>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * Task_Run_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mDBE82AD2ABFF50E8DC240911A6DEE7525EBA13DD_gshared (Func_1_t1DD4A919E25AD767C21D4EFB78FFDA515BA7792F * ___function0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Int32Enum>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<!0>,!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_1_ContinueWith_TisRuntimeObject_mEFDB6555B0C8FD9257CE2B4E2DE355266D0032EA_gshared (Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * __this, Func_2_t3B4B6939B189C9884C818CAFD79EB355BB357A34 * ___continuationFunction0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.TaskExtensions::Unwrap<System.Int32Enum>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<!!0>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * TaskExtensions_Unwrap_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mDDD0D1CD27BFCE6AE207ED6BC462445FD0749FF7_gshared (Task_1_t46A5C8801C0554B9E15699F496539CF05EB29B91 * ___task0, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Int32Enum>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_get_Result_m337A232CED326558FB5C160D4F12229547772F6E_gshared (Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task,!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_ContinueWith_TisRuntimeObject_m0E8E30767AD592BC894CDDECA4D4CC849274F495_gshared (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Func_2_tD0914264065874D28491892EA399E2E394D3966B * ___continuationFunction0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_gshared (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348_gshared (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_gshared_inline (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m743753CE9201E167F700E05EC425BF9F63E880F2_gshared (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_mBAC8295937C8CD785F85FFBD657A084A1A811982_gshared (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, int32_t ___result0, const RuntimeMethod* method);

// System.Void Firebase.AppUtilPINVOKE::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_PollCallbacks_mBFD4A04F81A7B15308F5B4CEB0C1D584CAF1EC71 (const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_AppEnableLogCallback_mB2B3CFF17912BDBF2A0EADD54BF5A68BE0078160 (bool ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetEnabledAllAppCallbacks_mA4D2C483C70D7FA772D58523B4656A088EB1E0C7 (bool ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetEnabledAppCallbackByName_m0E27DC635F167FBE31CC908C881E76E59F369183 (String_t* ___jarg10, bool ___jarg21, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_GetEnabledAppCallbackByName_mB8121629E6C43D1A22E1773F92A74391C2E48F44 (String_t* ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetLogFunction_mC95A68C1B570C234A5DEDAB0B78ABAFC60CABC0C (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::CheckAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_CheckAndroidDependencies_mF626F790D17BBB6B55308DFE7306CCFF1148C210 (const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::FixAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FixAndroidDependencies_mA7454C1CECC9D0FFB05F60F0064E5D95E16BD699 (const RuntimeMethod* method);
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__ctor_m1360132BEDC4A7668F93C0D1EB79CE3E28E94597 (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * FutureVoid_GetTask_m99313F8ED4D21B3440FA37F24EDE6206F6B0E3BF (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * ___fu0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::InitializePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_InitializePlayServicesInternal_m6CDF2BCDF9BDBA87CBE0D803B3B6CD16D495CC40 (const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::TerminatePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_TerminatePlayServicesInternal_mA808F30F3DEFF00997E5042805C0E717D7725F32 (const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m06C48C4611CDA458CA1AF651ED06BF7FF7EDF536 (SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m9F305BAB06F185B49FD5AC05A407928C69D672F6 (SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628 (const RuntimeMethod* method);
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_m314080A5FF94D29E352F4E3FCA4870CBB67E3840 (const RuntimeMethod* method);
// System.String Firebase.ErrorMessages::get_DependencyNotFoundErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::.ctor()
inline void Dictionary_2__ctor_mFF10F06C038C842A2C0172778461CFE1F3D2F6CC (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::.ctor()
inline void Dictionary_2__ctor_m3C25C443F1B1748269C9C20D1EACADAFE590E1A9 (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, const RuntimeMethod*))Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared)(__this, method);
}
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434 (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_NameInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::RemoveReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RemoveReference_mF1E15EE01A41D7674FAFDAB777CF637071F907E0 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595 (const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, String_t* ___message1, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C (const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196 (String_t* ___name0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_Create_m9A391D6EC41EE45EAA3CCAE368F182EAD69791ED (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::ThrowIfCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mABD3D175BBCE88050893B6E15BADA46BFE7375D1 (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, String_t* ___key0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, String_t*, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::Remove(!0)
inline bool Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115 (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/CreateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateDelegate__ctor_m9B61AF9F4EFF9CCA9FC10B8BDB5E8AD7130E4DE1 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateAndTrack(Firebase.FirebaseApp/CreateDelegate,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * ___createDelegate0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___existingProxy1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::FirebaseApp_GetLogLevelInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FirebaseApp_GetLogLevelInternal_m32950055F0CCA12C52B9948446AB55C4FFBF79D3 (const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE35649D2E86CEDB104C0489DB836619ECE559B78 (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, String_t* ___key0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, String_t*, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m11C0967C76F78C48B5BCBECEC12AE868FB44441D (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, intptr_t ___key0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, intptr_t, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *, const RuntimeMethod*))Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::get_Count()
inline int32_t Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::Remove(!0)
inline bool Dictionary_2_Remove_m5D4563C331A3FF5094A2A9B3A8EA500DD30F9D28 (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp::ReleaseReferenceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::OnAllAppsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___csharp0, String_t* ___cpp1, bool ___always2, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2 (bool ___arg00, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CSharpClassName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CppModuleName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtil::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513 (String_t* ___arg00, const RuntimeMethod* method);
// System.Boolean Firebase.FirebaseApp/EnableModuleParams::get_AlwaysEnable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_m76B3B18100019E68E79EA0A0B320B1EAE0AB8260_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC (String_t* ___arg00, bool ___arg11, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m3B24B1EFB2FF6E40186586C3BE135D335BBF3A0A (String_t* ___assemblyString0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m56641135A502F6D70F771A69157A0D674EB99DD3 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, String_t* ___message1, Exception_t * ___inner2, const RuntimeMethod* method);
// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF_inline (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::Create(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Create_m1B30952F7479043520E3D7023F331D038F6B2125 (RuntimeObject* ___appUtils0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::InitializeAppUtilCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064 (const RuntimeMethod* method);
// System.String Firebase.Platform.PlatformInformation::get_DefaultConfigLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_DefaultConfigLocation_mCC41CAB77CCA5F822E67C9B8D86478606777A06C (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F (String_t* ___path0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp/CreateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * CreateDelegate_Invoke_m9FC551133A4F9301FB4F107B90F7C98A66F95BE9 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m897CB1E1E85B5420551BA39A79F33E380D02EEEA (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, intptr_t ___key0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, intptr_t, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D **, const RuntimeMethod*))Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::get_Count()
inline int32_t Dictionary_2_get_Count_m48374F40728F7E5FC8EAA23E458292E5475B4EB3 (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, const RuntimeMethod*))Dictionary_2_get_Count_m31E0A469AED107558069DD92CA2D04BE40DB26CB_gshared)(__this, method);
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeName_m7DC9B4B120826252A1359FBB00EEA9CCA0B9FE81 (const RuntimeMethod* method);
// System.String Firebase.VersionInfo::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_SdkVersion_m98A33172434D6EA468C4FF32AC941045D88DCF8B (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164 (String_t* ___library0, String_t* ___version1, const RuntimeMethod* method);
// System.String Firebase.Platform.PlatformInformation::get_RuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeVersion_m449590D737405693CC7C1AF5878FBAED5B49852F (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::AddReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AddReference_m1B148D579E5DBB9E6608813E714769757F33142B (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Boolean Firebase.FirebaseApp::IsCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_IsCheckDependenciesRunning_m35488E6B310C9CF1BC00E4464028166723C3F078 (const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// !!0 Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<!!0>)
inline bool FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___f0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_gshared)(___f0, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::SetCheckDependenciesThread(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_SetCheckDependenciesThread_m4DFA2531E30E77FFA43EBC45E23CD306E8BA8764 (int32_t ___threadId0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_m5F79802A26DF07DAE2DFC2B250CDAB8DDFBC8C4B (RuntimeObject* ___appUtils0, const RuntimeMethod* method);
// System.Void System.Func`1<Firebase.DependencyStatus>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m5F5F8CB0138D49C8F12C7E262E2C24F4AFC2FC1F (Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m0C7DD3C5F9CA68F39FE0294A8F732F26078DA458_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<Firebase.DependencyStatus>(System.Func`1<!!0>)
inline Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * Task_Run_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m921094A39C34868AA61ED303A1F473457BE52366 (Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * (*) (Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC *, const RuntimeMethod*))Task_Run_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mDBE82AD2ABFF50E8DC240911A6DEE7525EBA13DD_gshared)(___function0, method);
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * FirebaseApp_CheckDependenciesAsync_mB7A747897A064C84E4D84585DFEAF74A38D38F43 (const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m71D94438C94116C12A8F41374634DD19DEDE271E (Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::ContinueWith<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>(System.Func`2<System.Threading.Tasks.Task`1<!0>,!!0>)
inline Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080 * Task_1_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m92959253715740CA309A66B613993A167C3D51D7 (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * __this, Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * ___continuationFunction0, const RuntimeMethod* method)
{
	return ((  Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080 * (*) (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA *, Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 *, const RuntimeMethod*))Task_1_ContinueWith_TisRuntimeObject_mEFDB6555B0C8FD9257CE2B4E2DE355266D0032EA_gshared)(__this, ___continuationFunction0, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.TaskExtensions::Unwrap<Firebase.DependencyStatus>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<!!0>>)
inline Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * TaskExtensions_Unwrap_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m82E84B0615F463090AC4EECAA1A173C302D3EDA2 (Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080 * ___task0, const RuntimeMethod* method)
{
	return ((  Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * (*) (Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080 *, const RuntimeMethod*))TaskExtensions_Unwrap_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mDDD0D1CD27BFCE6AE207ED6BC462445FD0749FF7_gshared)(___task0, method);
}
// System.Void Firebase.FirebaseApp/<CheckDependencies>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckDependenciesU3Ec__AnonStorey2__ctor_m0251932201CC1594FA83952DAA5A7DDE7DF0CDF6 (U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___closureToExecute0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// Firebase.InitResult Firebase.InitializationException::get_InitResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InitializationException_get_InitResult_m597B4C9A381618A9F73238F131D9AF3433880CF7_inline (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, const RuntimeMethod* method);
// Firebase.GooglePlayServicesAvailability Firebase.AppUtil::CheckAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtil_CheckAndroidDependencies_mF6F1264E5DA034CDB3B4A20715419FB36BB09FED (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/<FixDependenciesAsync>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixDependenciesAsyncU3Ec__AnonStorey3__ctor_m973162F7E6495FC5DE2DCABF7315FE26018F5682 (U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::InitializePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_InitializePlayServicesInternal_mFDAD6568DBE745E692B38FC49EA137C6FBCB2850 (const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::FirebaseApp_CreateInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FirebaseApp_CreateInternal__SWIG_0_mE02354511523AA50E810D1C60FA97DF31F050081 (const RuntimeMethod* method);
// System.Void Firebase.AppUtil::TerminatePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_TerminatePlayServicesInternal_mEEDE73F4D1E3F490FFE1329DBD9255A944830B57 (const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::FirebaseApp_NameInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FirebaseApp_NameInternal_get_m7A1FC05B47A670C5EF6228A284F2830D5F966AAF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mB94B4439B6474A9B3420A388F4C847153BB7DA2B (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_ReleaseReferenceInternal_m83E641C7626685F4E5018D332B214A4497F4437C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_RegisterLibraryInternal_mE6579F83719F85B3867272A7FF967FD8E5F9CE87 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_AppSetDefaultConfigPath_m991D5A7289A762B01357BD1585E7C94270177C09 (String_t* ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::FirebaseApp_DefaultName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FirebaseApp_DefaultName_get_mBAEE6B135FCB729CB583A3CA4597DB952D48C585 (const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233 (const RuntimeMethod* method);
// System.Boolean Firebase.FirebaseApp::InitializeCrashlyticsIfPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B (const RuntimeMethod* method);
// Firebase.DependencyStatus Firebase.FirebaseApp::CheckDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_CheckDependencies_mCD719D29867B855EBA5F74102286BB9A44FCB946 (const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::get_Result()
inline int32_t Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA *, const RuntimeMethod*))Task_1_get_Result_m337A232CED326558FB5C160D4F12229547772F6E_gshared)(__this, method);
}
// System.Threading.Tasks.Task Firebase.FirebaseApp::FixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * FirebaseApp_FixDependenciesAsync_mDBBC901E36336AE90E590E9DACD32FE1CCDB79E1 (const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m93BE3A4B083FE96C35A63DC5F2827DDAF4BA1B1C (Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::ContinueWith<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>(System.Func`2<System.Threading.Tasks.Task,!!0>)
inline Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080 * Task_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m11C639030242D392638044027C179CC828483747 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * ___continuationFunction0, const RuntimeMethod* method)
{
	return ((  Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080 * (*) (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 *, const RuntimeMethod*))Task_ContinueWith_TisRuntimeObject_m0E8E30767AD592BC894CDDECA4D4CC849274F495_gshared)(__this, ___continuationFunction0, method);
}
// System.Void Firebase.AppUtil::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527 (const RuntimeMethod* method);
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF (const RuntimeMethod* method);
// Firebase.Platform.PlatformLogLevel Firebase.LogUtil::ConvertLogLevel(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogUtil_ConvertLogLevel_mD765D2120AA5F1681CFFCB822C189152704565FC (int32_t ___logLevel0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseAppUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__ctor_m69CA1CBCD58CB3128DF35E9560A3D1D38005845F (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::set_ErrorCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_mE216C4C0EBAACC7ADA04ED328DEC1474680F9B5A_inline (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::delete_FutureBase(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureBase_m05F2F373729A515D05275F4EDE8C244C5FD43FCC (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::FutureBase_status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FutureBase_status_mAADCE6BBF81EA978FD0AE85FB933E459B7F85604 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::FutureBase_error(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FutureBase_error_m2D1B3DA922FE2A7A45D3C947B10CEF6D2D357533 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::FutureBase_error_message(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FutureBase_error_message_m8B286D44C72F4B764A402DBB4F3A14F6EBF92FF1 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureString::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SWIG_CompletionDispatcher_mF70841BDB2D4C1CD323DD8BDB5ACE5BF66D505D2 (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::FutureString_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureString_SWIGUpcast_m3D751A9A23125A7512366A97993873952784A418 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.FutureString::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SetCompletionData_mBC4FCA2EF3886CD720A27FFDAEC7F4D4A03F1CF9 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::delete_FutureString(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureString_mDBAD1215E2A4E96F7456D6B3DDD890534B78655C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.FutureString/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mC4E736186B15B13755932456B84F22137E2144DC (U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056 (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.FutureString/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m5EB9223B37DA74BFAA497D2BFC061034B38B45F2 (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FutureString::SetOnCompletionCallback(Firebase.FutureString/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SetOnCompletionCallback_m878C505E25F5712C619B311473DC5DD3CCDB3D68 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.FutureString::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_ThrowIfDisposed_m1F2D5089BB1C888631DF053DFD0F38F4345FB5F3 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, const RuntimeMethod* method);
// System.Void Firebase.FutureString/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mA94A734983B630AD0AD8815F10FC080BCCC45DE8 (SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>::.ctor()
inline void Dictionary_2__ctor_mAA47B2096D829BAFC77594ACE0841684F083EE4F (Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m9FE9C86C85A197ED19B2739ACBECECC36C54484D (Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * __this, int32_t ___key0, Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B *, int32_t, Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.FutureString::SWIG_OnCompletion(Firebase.FutureString/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureString_SWIG_OnCompletion_m73D0FB17B8063EEBF36900B519B00EBD1DFF22E6 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.FutureString::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SWIG_FreeCompletionData_mA0E9ABB8F418A39F2135AB385995207964B74C66 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mFEC798F3DEC9F83DECDCF61605BCE1FCB94BD687 (Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * __this, int32_t ___key0, Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B *, int32_t, Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m09E8B3853C217AA69305DDB29A60FF8E7E406C38 (Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FutureString/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m8AEC3442D3825511735DB7CCF3F68124CCD3976F (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::FutureString_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.FutureString/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureString_SWIG_OnCompletion_m7EC712A100C419FDD49B37EA086EF94D878559EE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::FutureString_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FutureString_SWIG_FreeCompletionData_m01DFA5A99CF26EDB802FDA5D8C4CEC55635EB303 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::FutureString_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FutureString_GetResult_mA4942C0B33E7F4BE319658D60607920DC791AA1E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SWIG_CompletionDispatcher_m60ECAC83E9887F17ECCAFE1C1DE0340903FB5281 (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::FutureVoid_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureVoid_SWIGUpcast_m34C07BD600DBA8A05C4DA0B553472CBC407C55FF (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SetCompletionData_mF298BA528990E45DD85839CA0E91130876DAF491 (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::delete_FutureVoid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureVoid_m23422CC33D67D0B3ACBA292B975FC62633FA5D90 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m7F3052D39B10F90854FA21CA6AFA941CC6CC1307 (U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
inline void TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3 (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348 (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_inline (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * (*) (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_gshared_inline)(__this, method);
}
// System.Void Firebase.FutureVoid/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBB9FA88AEDA150A5C03EF7CC69344846B1A4FD22 (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid::SetOnCompletionCallback(Firebase.FutureVoid/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SetOnCompletionCallback_mA6429D52596940DA40C03180D7020560EAB0C14B (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_ThrowIfDisposed_mA7C1D4055AA1AC53502961F16F6449C4647792AF (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m93C9C83EF65339E2A9134FA2E79AA1895FE881A2 (SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>::.ctor()
inline void Dictionary_2__ctor_m40D55C1FAA52BC455039C6A408F32F7F6CF7A35D (Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m7DF158BD4B2366A2ECB033F55E8AA74204182884 (Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * __this, int32_t ___key0, Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D *, int32_t, Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.FutureVoid::SWIG_OnCompletion(Firebase.FutureVoid/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureVoid_SWIG_OnCompletion_m48F9542CC9CFAF8D061DB014E2791A8C4D6EEBF3 (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SWIG_FreeCompletionData_mFEA68F96EA671BB05C45C11DDC981A965E7C4ACF (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mEDBD75BE439C76291822BF481D24B4F376B6102B (Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * __this, int32_t ___key0, Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D *, int32_t, Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m40A1170DC06A6110BD8790F9859FF82637ADC6DB (Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FutureVoid/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m8F270518E4B4FBDC595EA69BEC37C94DE19EBB3E (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::FutureVoid_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.FutureVoid/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureVoid_SWIG_OnCompletion_m8ECE4C8E41A5F9C81C5FBF6739AF216985DA369B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::FutureVoid_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FutureVoid_SWIG_FreeCompletionData_m145C4A7934C1933C03D6834965B42B94DE99AD87 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::set_InitResult(Firebase.InitResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessageFromCallback(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__ctor_mE6F41CDC7EFF92D76E3D07B5F8350BF7D5A4983D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, const RuntimeMethod* method);
// System.Void Firebase.LogUtil/LogMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate__ctor_mEBA3FFB53CCE522DBB1B5571A5623A649E6643F0 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___arg00, const RuntimeMethod* method);
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E (const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.AppDomain::add_DomainUnload(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_DomainUnload_mE808522233A3DFCFBC771C2CB69544808938A134 (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66 (bool ___arg00, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseLogger::get_CanRedirectNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_get_CanRedirectNativeLogs_mA3ED5F874C3D698FB2D1656B3B4E1EAFE257BBF4 (const RuntimeMethod* method);
// System.Void Firebase.LogUtil::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m3E431D1105B6EBDC3183FA2B55AA7608607BBC6D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m73FDAC85B33251A5207C88493A40F2F24D634676 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___applicationDelegate0, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___arithmeticDelegate1, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___divideByZeroDelegate2, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___indexOutOfRangeDelegate3, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidCastDelegate4, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidOperationDelegate5, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___ioDelegate6, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___nullReferenceDelegate7, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___outOfMemoryDelegate8, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___overflowDelegate9, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m8F9C20ECB599940EF0CFCFF5598BD3C3222E2B37 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentDelegate0, ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A (Exception_t * ___e0, const RuntimeMethod* method);
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
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mED39AF7AB0675F58D7C5E732BB50C419BF321299 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AppUtil(Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_m72D311A8F2D513C5602B6F4E7936C2910DBECA15 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * ___stringDelegate0, const RuntimeMethod* method);
// Firebase.DependencyStatus Firebase.FirebaseApp::CheckDependenciesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_CheckDependenciesInternal_m3C1FA1603F994655D1C49443FFF8053420F98509 (const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.AppUtil::FixAndroidDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AppUtil_FixAndroidDependenciesAsync_m4E0A5F5046D85FBCEEB21963516269A404D9ACA7 (const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_ContinueWith_m8540E40049DA1A53066538EBEBC69DE46859748F (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * ___continuationAction0, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::ResetDefaultAppCPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ResetDefaultAppCPtr_m23794116100108FA137A11654DDF8C74A5C5F453 (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CSharpClassName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_mB1413BCF93E8A3B658798ED556E586C47981F018_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CppModuleName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_m780B77AD33765B83D0675C02876BB379B9EFCCEB_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_AlwaysEnable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m38C379905DD5810F629E35AD34DD0F677990ACFE_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m881733D8D9CAFA8A00F5313F0E5142D4C523FF2A (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared)(__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureString::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureString_GetResult_m44B49349D344B988B4BD2F8782BE5B81EDE12B20 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201 (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m743753CE9201E167F700E05EC425BF9F63E880F2 (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m743753CE9201E167F700E05EC425BF9F63E880F2_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_mBAC8295937C8CD785F85FFBD657A084A1A811982 (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *, int32_t, const RuntimeMethod*))TaskCompletionSource_1_SetResult_mBAC8295937C8CD785F85FFBD657A084A1A811982_gshared)(__this, ___result0, method);
}
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_delete_FutureBase(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_FutureBase_status(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_FutureBase_error(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_CSharp_FutureBase_error_message(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FutureString_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FutureString_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_CSharp_FutureString_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_delete_FutureString(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FutureVoid_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FutureVoid_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_delete_FutureVoid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_NameInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_CreateInternal__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_GetLogLevelInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_RegisterLibraryInternal(char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_AppSetDefaultConfigPath(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_CSharp_FirebaseApp_DefaultName_get();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_PollCallbacks();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_AppEnableLogCallback(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_SetEnabledAllAppCallbacks(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_SetEnabledAppCallbackByName(char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_GetEnabledAppCallbackByName(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_SetLogFunction(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_CSharp_CheckAndroidDependencies();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FixAndroidDependencies();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_InitializePlayServicesInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_CSharp_TerminatePlayServicesInternal();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FutureString_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_CSharp_FutureVoid_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AppUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_AppUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_AppUtil(Il2CppMethodPointer);
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
// System.Void Firebase.AppUtil::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_PollCallbacks_mBFD4A04F81A7B15308F5B4CEB0C1D584CAF1EC71(/*hidden argument*/NULL);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527_RuntimeMethod_var)));
	}

IL_0015:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66 (bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_AppEnableLogCallback_mB2B3CFF17912BDBF2A0EADD54BF5A68BE0078160(L_0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2 (bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_SetEnabledAllAppCallbacks_mA4D2C483C70D7FA772D58523B4656A088EB1E0C7(L_0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC (String_t* ___arg00, bool ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___arg00;
		bool L_1 = ___arg11;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_SetEnabledAppCallbackByName_m0E27DC635F167FBE31CC908C881E76E59F369183(L_0, L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Boolean Firebase.AppUtil::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513 (String_t* ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AppUtilPINVOKE_GetEnabledAppCallbackByName_mB8121629E6C43D1A22E1773F92A74391C2E48F44(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513_RuntimeMethod_var)));
	}

IL_0017:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.AppUtil::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_SetLogFunction_mC95A68C1B570C234A5DEDAB0B78ABAFC60CABC0C(L_0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// Firebase.GooglePlayServicesAvailability Firebase.AppUtil::CheckAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtil_CheckAndroidDependencies_mF6F1264E5DA034CDB3B4A20715419FB36BB09FED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = AppUtilPINVOKE_CheckAndroidDependencies_mF626F790D17BBB6B55308DFE7306CCFF1148C210(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_CheckAndroidDependencies_mF6F1264E5DA034CDB3B4A20715419FB36BB09FED_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Threading.Tasks.Task Firebase.AppUtil::FixAndroidDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AppUtil_FixAndroidDependenciesAsync_m4E0A5F5046D85FBCEEB21963516269A404D9ACA7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = AppUtilPINVOKE_FixAndroidDependencies_mA7454C1CECC9D0FFB05F60F0064E5D95E16BD699(/*hidden argument*/NULL);
		FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * L_1 = (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 *)il2cpp_codegen_object_new(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		FutureVoid__ctor_m1360132BEDC4A7668F93C0D1EB79CE3E28E94597(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = FutureVoid_GetTask_m99313F8ED4D21B3440FA37F24EDE6206F6B0E3BF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.AppUtil::InitializePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_InitializePlayServicesInternal_mFDAD6568DBE745E692B38FC49EA137C6FBCB2850 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_InitializePlayServicesInternal_m6CDF2BCDF9BDBA87CBE0D803B3B6CD16D495CC40(/*hidden argument*/NULL);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_InitializePlayServicesInternal_mFDAD6568DBE745E692B38FC49EA137C6FBCB2850_RuntimeMethod_var)));
	}

IL_0015:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::TerminatePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_TerminatePlayServicesInternal_mEEDE73F4D1E3F490FFE1329DBD9255A944830B57 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_TerminatePlayServicesInternal_mA808F30F3DEFF00997E5042805C0E717D7725F32(/*hidden argument*/NULL);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppUtil_TerminatePlayServicesInternal_mEEDE73F4D1E3F490FFE1329DBD9255A944830B57_RuntimeMethod_var)));
	}

IL_0015:
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
// System.Void Firebase.AppUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE__cctor_mB82716D517E855CA4815CA1B872B0599F1785B19 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * L_0 = (SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 *)il2cpp_codegen_object_new(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m06C48C4611CDA458CA1AF651ED06BF7FF7EDF536(L_0, /*hidden argument*/NULL);
		((AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * L_1 = (SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF *)il2cpp_codegen_object_new(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m9F305BAB06F185B49FD5AC05A407928C69D672F6(L_1, /*hidden argument*/NULL);
		((AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE::delete_FutureBase(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureBase_m05F2F373729A515D05275F4EDE8C244C5FD43FCC (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_delete_FutureBase", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_delete_FutureBase)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Int32 Firebase.AppUtilPINVOKE::FutureBase_status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FutureBase_status_mAADCE6BBF81EA978FD0AE85FB933E459B7F85604 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureBase_status", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureBase_status)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Firebase.AppUtilPINVOKE::FutureBase_error(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FutureBase_error_m2D1B3DA922FE2A7A45D3C947B10CEF6D2D357533 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureBase_error", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureBase_error)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.AppUtilPINVOKE::FutureBase_error_message(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FutureBase_error_message_m8B286D44C72F4B764A402DBB4F3A14F6EBF92FF1 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureBase_error_message", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureBase_error_message)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.AppUtilPINVOKE::FutureString_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.FutureString/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureString_SWIG_OnCompletion_m7EC712A100C419FDD49B37EA086EF94D878559EE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureString_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureString_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::FutureString_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FutureString_SWIG_FreeCompletionData_m01DFA5A99CF26EDB802FDA5D8C4CEC55635EB303 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureString_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureString_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.String Firebase.AppUtilPINVOKE::FutureString_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FutureString_GetResult_mA4942C0B33E7F4BE319658D60607920DC791AA1E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureString_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureString_GetResult)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE::delete_FutureString(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureString_mDBAD1215E2A4E96F7456D6B3DDD890534B78655C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_delete_FutureString", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_delete_FutureString)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.AppUtilPINVOKE::FutureVoid_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.FutureVoid/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureVoid_SWIG_OnCompletion_m8ECE4C8E41A5F9C81C5FBF6739AF216985DA369B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureVoid_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureVoid_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::FutureVoid_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FutureVoid_SWIG_FreeCompletionData_m145C4A7934C1933C03D6834965B42B94DE99AD87 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureVoid_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureVoid_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::delete_FutureVoid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_delete_FutureVoid_m23422CC33D67D0B3ACBA292B975FC62633FA5D90 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_delete_FutureVoid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_delete_FutureVoid)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.String Firebase.AppUtilPINVOKE::FirebaseApp_NameInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FirebaseApp_NameInternal_get_m7A1FC05B47A670C5EF6228A284F2830D5F966AAF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FirebaseApp_NameInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_NameInternal_get)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.AppUtilPINVOKE::FirebaseApp_CreateInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FirebaseApp_CreateInternal__SWIG_0_mE02354511523AA50E810D1C60FA97DF31F050081 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FirebaseApp_CreateInternal__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_CreateInternal__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_ReleaseReferenceInternal_m83E641C7626685F4E5018D332B214A4497F4437C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FirebaseApp_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_ReleaseReferenceInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Int32 Firebase.AppUtilPINVOKE::FirebaseApp_GetLogLevelInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_FirebaseApp_GetLogLevelInternal_m32950055F0CCA12C52B9948446AB55C4FFBF79D3 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FirebaseApp_GetLogLevelInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_GetLogLevelInternal)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_RegisterLibraryInternal_mE6579F83719F85B3867272A7FF967FD8E5F9CE87 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FirebaseApp_RegisterLibraryInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_RegisterLibraryInternal)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
// System.Void Firebase.AppUtilPINVOKE::FirebaseApp_AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_FirebaseApp_AppSetDefaultConfigPath_m991D5A7289A762B01357BD1585E7C94270177C09 (String_t* ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FirebaseApp_AppSetDefaultConfigPath", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_AppSetDefaultConfigPath)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
// System.String Firebase.AppUtilPINVOKE::FirebaseApp_DefaultName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_FirebaseApp_DefaultName_get_mBAEE6B135FCB729CB583A3CA4597DB952D48C585 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FirebaseApp_DefaultName_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FirebaseApp_DefaultName_get)();
	#else
	char* returnValue = il2cppPInvokeFunc();
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_PollCallbacks_mBFD4A04F81A7B15308F5B4CEB0C1D584CAF1EC71 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_PollCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_PollCallbacks)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_AppEnableLogCallback_mB2B3CFF17912BDBF2A0EADD54BF5A68BE0078160 (bool ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_AppEnableLogCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_AppEnableLogCallback)(static_cast<int32_t>(___jarg10));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___jarg10));
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetEnabledAllAppCallbacks_mA4D2C483C70D7FA772D58523B4656A088EB1E0C7 (bool ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_SetEnabledAllAppCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_SetEnabledAllAppCallbacks)(static_cast<int32_t>(___jarg10));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___jarg10));
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetEnabledAppCallbackByName_m0E27DC635F167FBE31CC908C881E76E59F369183 (String_t* ___jarg10, bool ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_SetEnabledAppCallbackByName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_SetEnabledAppCallbackByName)(____jarg10_marshaled, static_cast<int32_t>(___jarg21));
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, static_cast<int32_t>(___jarg21));
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
// System.Boolean Firebase.AppUtilPINVOKE::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_GetEnabledAppCallbackByName_mB8121629E6C43D1A22E1773F92A74391C2E48F44 (String_t* ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_GetEnabledAppCallbackByName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_GetEnabledAppCallbackByName)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.AppUtilPINVOKE::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_SetLogFunction_mC95A68C1B570C234A5DEDAB0B78ABAFC60CABC0C (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_SetLogFunction", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_SetLogFunction)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Int32 Firebase.AppUtilPINVOKE::CheckAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_CheckAndroidDependencies_mF626F790D17BBB6B55308DFE7306CCFF1148C210 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_CheckAndroidDependencies", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_CheckAndroidDependencies)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.AppUtilPINVOKE::FixAndroidDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FixAndroidDependencies_mA7454C1CECC9D0FFB05F60F0064E5D95E16BD699 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FixAndroidDependencies", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FixAndroidDependencies)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::InitializePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_InitializePlayServicesInternal_m6CDF2BCDF9BDBA87CBE0D803B3B6CD16D495CC40 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_InitializePlayServicesInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_InitializePlayServicesInternal)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Firebase.AppUtilPINVOKE::TerminatePlayServicesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_TerminatePlayServicesInternal_mA808F30F3DEFF00997E5042805C0E717D7725F32 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_TerminatePlayServicesInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_TerminatePlayServicesInternal)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.IntPtr Firebase.AppUtilPINVOKE::FutureString_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureString_SWIGUpcast_m3D751A9A23125A7512366A97993873952784A418 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureString_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureString_SWIGUpcast)(___jarg10);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___jarg10);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.AppUtilPINVOKE::FutureVoid_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_FutureVoid_SWIGUpcast_m34C07BD600DBA8A05C4DA0B553472CBC407C55FF (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "Firebase_App_CSharp_FutureVoid_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_CSharp_FutureVoid_SWIGUpcast)(___jarg10);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Firebase.ErrorMessages::get_DependencyNotFoundErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0();
		return L_1;
	}

IL_0010:
	{
		bool L_2;
		L_2 = PlatformInformation_get_IsIOS_m314080A5FF94D29E352F4E3FCA4870CBB67E3840(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_3 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DEPENDENCY_NOT_FOUND_ERROR_IOS_1();
		return L_3;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_4 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2();
		return L_4;
	}
}
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DLL_NOT_FOUND_ERROR_ANDROID_3();
		V_0 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		bool L_2;
		L_2 = PlatformInformation_get_IsIOS_m314080A5FF94D29E352F4E3FCA4870CBB67E3840(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_3 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DLL_NOT_FOUND_ERROR_IOS_4();
		V_0 = L_3;
		goto IL_0030;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_4 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DLL_NOT_FOUND_ERROR_GENERIC_5();
		V_0 = L_4;
	}

IL_0030:
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106(/*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Firebase.ErrorMessages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessages__cctor_mC64C25A9DFBF5FA4B8784803560444FA59FDD7DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1976A864796DBEDF326708C78B035AAFD37943BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24ED59ED9090E09DB40A7847435D91BFAE584ECF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral403CDB792BDB39DFA5B32B9F5BF62F3460A11FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69B6F8510FC3A441BACCF626DC509E0C431FF1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F00725B1CE2641D3D5ED19F65223CA4D3F8BAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA5B9DDB87B05728AF950352BA404136EF4EA09B);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0(_stringLiteralEA5B9DDB87B05728AF950352BA404136EF4EA09B);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DEPENDENCY_NOT_FOUND_ERROR_IOS_1(_stringLiteralA69B6F8510FC3A441BACCF626DC509E0C431FF1F);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2(_stringLiteralE6F00725B1CE2641D3D5ED19F65223CA4D3F8BAE);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DLL_NOT_FOUND_ERROR_ANDROID_3(_stringLiteral403CDB792BDB39DFA5B32B9F5BF62F3460A11FFC);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DLL_NOT_FOUND_ERROR_IOS_4(_stringLiteral1976A864796DBEDF326708C78B035AAFD37943BD);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DLL_NOT_FOUND_ERROR_GENERIC_5(_stringLiteral24ED59ED9090E09DB40A7847435D91BFAE584ECF);
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
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mB94B4439B6474A9B3420A388F4C847153BB7DA2B (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Void Firebase.FirebaseApp::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__cctor_m65C207A2EB72FE3DF40D35D1018C27881D66EB62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3C25C443F1B1748269C9C20D1EACADAFE590E1A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFF10F06C038C842A2C0172778461CFE1F3D2F6CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_disposeLock_2(L_0);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_1 = (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *)il2cpp_codegen_object_new(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFF10F06C038C842A2C0172778461CFE1F3D2F6CC(L_1, /*hidden argument*/Dictionary_2__ctor_mFF10F06C038C842A2C0172778461CFE1F3D2F6CC_RuntimeMethod_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_nameToProxy_5(L_1);
		Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_2 = (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *)il2cpp_codegen_object_new(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3C25C443F1B1748269C9C20D1EACADAFE590E1A9(L_2, /*hidden argument*/Dictionary_2__ctor_m3C25C443F1B1748269C9C20D1EACADAFE590E1A9_RuntimeMethod_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_cPtrToProxy_6(L_2);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_AppUtilCallbacksInitialized_7((bool)0);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_3, /*hidden argument*/NULL);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_AppUtilCallbacksLock_8(L_3);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_PreventOnAllAppsDestroyed_9((bool)0);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_crashlyticsInitializationAttempted_10((bool)0);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_CheckDependenciesThread_13((-1));
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_4, /*hidden argument*/NULL);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_CheckDependenciesThreadLock_14(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434(/*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method)
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
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___obj0;
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
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.FirebaseApp::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Finalize_mBA9B05FC454D571B021370352E3DAA24A927C964 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.FirebaseApp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_name_3();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1;
		L_1 = FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75(__this, /*hidden argument*/NULL);
		__this->set_name_3(L_1);
	}

IL_0017:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = __this->get_AppDisposed_4();
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = __this->get_AppDisposed_4();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_4 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_3);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_3, __this, L_4, /*hidden argument*/NULL);
		__this->set_AppDisposed_4((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)NULL);
	}

IL_003a:
	{
		FirebaseApp_RemoveReference_mF1E15EE01A41D7674FAFDAB777CF637071F907E0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___closureToExecute0, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___closureToExecute0;
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		goto IL_002a;
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
		{
			V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_1 = V_0;
			NullCheck(L_1);
			Exception_t * L_2;
			L_2 = VirtFuncInvoker0< Exception_t * >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_1);
			if (!((DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596 *)IsInstClass((RuntimeObject*)L_2, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var)));
			String_t* L_3;
			L_3 = ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595(/*hidden argument*/NULL);
			InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_4 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)));
			InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_4, 1, L_3, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D_RuntimeMethod_var)));
		}

IL_0028:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_002a:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_0 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C(/*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_1;
		L_1 = FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_3 = V_0;
		G_B3_0 = L_3;
		goto IL_001c;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4;
		L_4 = FirebaseApp_Create_m9A391D6EC41EE45EAA3CCAE368F182EAD69791ED(/*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mABD3D175BBCE88050893B6E15BADA46BFE7375D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA(/*hidden argument*/NULL);
		V_0 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL;
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			String_t* L_3 = ___name0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_mABD3D175BBCE88050893B6E15BADA46BFE7375D1(L_2, L_3, (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mABD3D175BBCE88050893B6E15BADA46BFE7375D1_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0037;
			}
		}

IL_0025:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_6 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			String_t* L_7 = ___name0;
			NullCheck(L_6);
			bool L_8;
			L_8 = Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115_RuntimeMethod_var);
		}

IL_0037:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x45, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_11 = V_2;
		return L_11;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_Create_m9A391D6EC41EE45EAA3CCAE368F182EAD69791ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_U3CCreateU3Em__0_m0C29C0EE9E16A55E80148E3233D6491114F11CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * L_1 = (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 *)il2cpp_codegen_object_new(CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0_il2cpp_TypeInfo_var);
		CreateDelegate__ctor_m9B61AF9F4EFF9CCA9FC10B8BDB5E8AD7130E4DE1(L_1, NULL, (intptr_t)((intptr_t)FirebaseApp_U3CCreateU3Em__0_m0C29C0EE9E16A55E80148E3233D6491114F11CA6_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_16(L_1);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		String_t* L_3;
		L_3 = FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C(/*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4;
		L_4 = FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196(L_3, /*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_5;
		L_5 = FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75(__this, /*hidden argument*/NULL);
		__this->set_name_3(L_1);
	}

IL_001d:
	{
		String_t* L_2 = __this->get_name_3();
		return L_2;
	}
}
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = AppUtilPINVOKE_FirebaseApp_GetLogLevelInternal_m32950055F0CCA12C52B9948446AB55C4FFBF79D3(/*hidden argument*/NULL);
		return (int32_t)(L_0);
	}
}
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_AppDisposed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_2 = __this->get_address_of_AppDisposed_4();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_2, ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_8) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_AppDisposed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_2 = __this->get_address_of_AppDisposed_4();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_2, ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_8) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::AddReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AddReference_m1B148D579E5DBB9E6608813E714769757F33142B (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m11C0967C76F78C48B5BCBECEC12AE868FB44441D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE35649D2E86CEDB104C0489DB836619ECE559B78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA(/*hidden argument*/NULL);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		__this->set_swigCMemOwn_1((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		String_t* L_3;
		L_3 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_set_Item_mE35649D2E86CEDB104C0489DB836619ECE559B78(L_2, L_3, __this, /*hidden argument*/Dictionary_2_set_Item_mE35649D2E86CEDB104C0489DB836619ECE559B78_RuntimeMethod_var);
		Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_4 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_5 = __this->get_address_of_swigCPtr_0();
		intptr_t L_6;
		L_6 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_set_Item_m11C0967C76F78C48B5BCBECEC12AE868FB44441D(L_4, (intptr_t)L_6, __this, /*hidden argument*/Dictionary_2_set_Item_m11C0967C76F78C48B5BCBECEC12AE868FB44441D_RuntimeMethod_var);
		IL2CPP_LEAVE(0x4B, FINALLY_0044);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::RemoveReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RemoveReference_mF1E15EE01A41D7674FAFDAB777CF637071F907E0 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5D4563C331A3FF5094A2A9B3A8EA500DD30F9D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA(/*hidden argument*/NULL);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5;
			L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0087;
			}
		}

IL_002d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			bool L_6 = __this->get_swigCMemOwn_1();
			if (!L_6)
			{
				goto IL_0087;
			}
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_7 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			NullCheck(L_7);
			int32_t L_8;
			L_8 = Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA(L_7, /*hidden argument*/Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var);
			V_2 = L_8;
			Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_9 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
			intptr_t L_10 = V_1;
			NullCheck(L_9);
			bool L_11;
			L_11 = Dictionary_2_Remove_m5D4563C331A3FF5094A2A9B3A8EA500DD30F9D28(L_9, (intptr_t)L_10, /*hidden argument*/Dictionary_2_Remove_m5D4563C331A3FF5094A2A9B3A8EA500DD30F9D28_RuntimeMethod_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_12 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			String_t* L_13;
			L_13 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8(__this, /*hidden argument*/NULL);
			NullCheck(L_12);
			bool L_14;
			L_14 = Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115(L_12, L_13, /*hidden argument*/Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115_RuntimeMethod_var);
			FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934(__this, /*hidden argument*/NULL);
			int32_t L_15 = V_2;
			if ((((int32_t)L_15) <= ((int32_t)0)))
			{
				goto IL_0087;
			}
		}

IL_0073:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_16 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			NullCheck(L_16);
			int32_t L_17;
			L_17 = Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA(L_16, /*hidden argument*/Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0087;
			}
		}

IL_0082:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D(/*hidden argument*/NULL);
		}

IL_0087:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_18;
			memset((&L_18), 0, sizeof(L_18));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_18), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_18);
			IL2CPP_LEAVE(0xAB, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		RuntimeObject * L_19 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_19, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
	}

IL_00ab:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
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
			goto IL_0025;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_3 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF56258CA08196A0AA345480C655C78D0172F29E6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315_RuntimeMethod_var)));
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::InitializeAppUtilCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FBCAB8C3D9EDED5D0224DC45891EB0E0AAB4BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1103241B0617CC2365FF633B3B7D5125D1128C22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1611D456D2CEE02CE1487EE8445E48898D131F6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16687478A33D5A15482DF6D441B61A0189583C64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3818B2A66126D8DEEF8DD9AFC89B116464489DA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39655E1CF62FCA36F81637138EABB8E0E88FF960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D20C767EAE028E07642EC56369E049DCB56F6C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral469058482DD7BE31765E4E966F8C98EA4B3B6930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47655613208A2442002F378BF374CC45952A31F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548196CBB5E5F5105E575F464FE92F73144DFB34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DC9D5B9D0D0872BCFFE89C3B93B577646F49EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AAEF17DD886943DA28485F945C0BC92C838450F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890A68C9701B6B7B9E0ECC8C54874D634FB51E11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA37BC83F5B58D09130EA87C7BFA23EEF1ED5CE5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA172ACC20A09E7D83BFE71E65356790E5B24CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF3E6E43968D1C156E887454B8F9BDB7723036D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BB0CEDEC57E9981F22698838128030E062BF12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8E3A88F5BFAC46D4EA8953E6A2EA7D3C25746CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE248ED951626ABDD49B64B81CAEAF341755AF6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF21B662C3F976D9980F52B473208474F6C31CBE5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * V_4 = NULL;
	EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B14_0 = 0;
	int32_t G_B16_0 = 0;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	String_t* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	int32_t G_B20_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_AppUtilCallbacksLock_8();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			bool L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_AppUtilCallbacksInitialized_7();
			if (!L_2)
			{
				goto IL_001b;
			}
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x207, FINALLY_0200);
		}

IL_001b:
		{
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_3 = (EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124*)(EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124*)SZArrayNew(EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_4 = L_3;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_5 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_5, _stringLiteral04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF, _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_4);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_5);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_6 = L_4;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_7 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_7, _stringLiteralD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF, _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_7);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_7);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_8 = L_6;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_9 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_9, _stringLiteralF21B662C3F976D9980F52B473208474F6C31CBE5, _stringLiteralA37BC83F5B58D09130EA87C7BFA23EEF1ED5CE5D, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_9);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_10 = L_8;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_11 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_11, _stringLiteral39655E1CF62FCA36F81637138EABB8E0E88FF960, _stringLiteral3818B2A66126D8DEEF8DD9AFC89B116464489DA5, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_11);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_12 = L_10;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_13 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_13, _stringLiteral1611D456D2CEE02CE1487EE8445E48898D131F6B, _stringLiteralD8E3A88F5BFAC46D4EA8953E6A2EA7D3C25746CC, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_13);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_13);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_14 = L_12;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_15 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_15, _stringLiteralADA172ACC20A09E7D83BFE71E65356790E5B24CE, _stringLiteral3D20C767EAE028E07642EC56369E049DCB56F6C8, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_15);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_15);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_16 = L_14;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_17 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_17, _stringLiteral890A68C9701B6B7B9E0ECC8C54874D634FB51E11, _stringLiteral61DC9D5B9D0D0872BCFFE89C3B93B577646F49EC, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_17);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_17);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_18 = L_16;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_19 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_19, _stringLiteral0FBCAB8C3D9EDED5D0224DC45891EB0E0AAB4BB3, _stringLiteralC2BB0CEDEC57E9981F22698838128030E062BF12, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(7), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_19);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_20 = L_18;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_21 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_21, _stringLiteralAF3E6E43968D1C156E887454B8F9BDB7723036D3, _stringLiteral1103241B0617CC2365FF633B3B7D5125D1128C22, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, L_21);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(8), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_21);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_22 = L_20;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_23 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_23, _stringLiteral47655613208A2442002F378BF374CC45952A31F8, _stringLiteral7AAEF17DD886943DA28485F945C0BC92C838450F, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_23);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_23);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_24 = L_22;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_25 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_25, _stringLiteralEE248ED951626ABDD49B64B81CAEAF341755AF6C, _stringLiteral469058482DD7BE31765E4E966F8C98EA4B3B6930, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_24);
			ArrayElementTypeCheck (L_24, L_25);
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_25);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_26 = L_24;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_27 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_27, _stringLiteral7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1, _stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_27);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_27);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_28 = L_26;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_29 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_29, _stringLiteral16687478A33D5A15482DF6D441B61A0189583C64, _stringLiteral548196CBB5E5F5105E575F464FE92F73144DFB34, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, L_29);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_29);
			V_1 = L_28;
			bool L_30;
			L_30 = PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628(/*hidden argument*/NULL);
			V_2 = L_30;
			V_3 = (bool)0;
			bool L_31 = V_2;
			if (L_31)
			{
				goto IL_0134;
			}
		}

IL_012c:
		{
			AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2((bool)0, /*hidden argument*/NULL);
			V_3 = (bool)1;
		}

IL_0134:
		{
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_32 = V_1;
			V_5 = L_32;
			V_6 = 0;
			goto IL_01ea;
		}

IL_013f:
		{
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_33 = V_5;
			int32_t L_34 = V_6;
			NullCheck(L_33);
			int32_t L_35 = L_34;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			V_4 = L_36;
			V_7 = (bool)0;
		}

IL_0149:
		try
		{ // begin try (depth: 2)
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_37 = V_4;
			NullCheck(L_37);
			String_t* L_38;
			L_38 = EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B_inline(L_37, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_39;
			L_39 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_38, FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_39) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0168;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0162;
			}
			throw e;
		}

CATCH_0162:
		{ // begin catch(System.Exception)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0168;
		} // end catch (depth: 2)

IL_0168:
		{
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_40 = V_4;
			NullCheck(L_40);
			String_t* L_41;
			L_41 = EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline(L_40, /*hidden argument*/NULL);
			bool L_42;
			L_42 = AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513(L_41, /*hidden argument*/NULL);
			V_8 = L_42;
			bool L_43 = V_7;
			if (!L_43)
			{
				goto IL_0196;
			}
		}

IL_017d:
		{
			bool L_44 = V_3;
			if (L_44)
			{
				goto IL_0193;
			}
		}

IL_0183:
		{
			bool L_45 = V_8;
			if (L_45)
			{
				goto IL_0193;
			}
		}

IL_018a:
		{
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_46 = V_4;
			NullCheck(L_46);
			bool L_47;
			L_47 = EnableModuleParams_get_AlwaysEnable_m76B3B18100019E68E79EA0A0B320B1EAE0AB8260_inline(L_46, /*hidden argument*/NULL);
			G_B14_0 = ((int32_t)(L_47));
			goto IL_0194;
		}

IL_0193:
		{
			G_B14_0 = 1;
		}

IL_0194:
		{
			G_B16_0 = G_B14_0;
			goto IL_0197;
		}

IL_0196:
		{
			G_B16_0 = 0;
		}

IL_0197:
		{
			V_9 = (bool)G_B16_0;
			bool L_48 = V_9;
			bool L_49 = V_8;
			if ((((int32_t)L_48) == ((int32_t)L_49)))
			{
				goto IL_01d6;
			}
		}

IL_01a2:
		{
			bool L_50 = V_9;
			G_B18_0 = _stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE;
			G_B18_1 = 1;
			if (!L_50)
			{
				G_B19_0 = _stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE;
				G_B19_1 = 1;
				goto IL_01b9;
			}
		}

IL_01af:
		{
			G_B20_0 = _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
			G_B20_1 = G_B18_0;
			G_B20_2 = G_B18_1;
			goto IL_01be;
		}

IL_01b9:
		{
			G_B20_0 = _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
			G_B20_1 = G_B19_0;
			G_B20_2 = G_B19_1;
		}

IL_01be:
		{
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_51 = V_4;
			NullCheck(L_51);
			String_t* L_52;
			L_52 = EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline(L_51, /*hidden argument*/NULL);
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_53 = V_4;
			NullCheck(L_53);
			String_t* L_54;
			L_54 = EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B_inline(L_53, /*hidden argument*/NULL);
			String_t* L_55;
			L_55 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(G_B20_1, G_B20_0, L_52, L_54, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(G_B20_2, L_55, /*hidden argument*/NULL);
		}

IL_01d6:
		{
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_56 = V_4;
			NullCheck(L_56);
			String_t* L_57;
			L_57 = EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline(L_56, /*hidden argument*/NULL);
			bool L_58 = V_9;
			AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC(L_57, L_58, /*hidden argument*/NULL);
			int32_t L_59 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		}

IL_01ea:
		{
			int32_t L_60 = V_6;
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_61 = V_5;
			NullCheck(L_61);
			if ((((int32_t)L_60) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length))))))
			{
				goto IL_013f;
			}
		}

IL_01f5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_AppUtilCallbacksInitialized_7((bool)1);
			IL2CPP_LEAVE(0x207, FINALLY_0200);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0200;
	}

FINALLY_0200:
	{ // begin finally (depth: 1)
		RuntimeObject * L_62 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_62, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(512)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(512)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x207, IL_0207)
	}

IL_0207:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::OnAllAppsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		bool L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_PreventOnAllAppsDestroyed_9();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_1 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA(L_1, /*hidden argument*/Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
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
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_AppUtilCallbacksLock_8();
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			bool L_5 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_AppUtilCallbacksInitialized_7();
			if (!L_5)
			{
				goto IL_0047;
			}
		}

IL_0031:
		{
			bool L_6;
			L_6 = PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628(/*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0041;
			}
		}

IL_003b:
		{
			AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2((bool)0, /*hidden argument*/NULL);
		}

IL_0041:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_AppUtilCallbacksInitialized_7((bool)0);
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		return;
	}
}
// System.Boolean Firebase.FirebaseApp::InitializeCrashlyticsIfPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41AFC5CF6BD87FAE855E565E56413D254EFDD312);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A98A8B1C98564A92ABAE5D3EB9AB9D7723903A);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	MethodInfo_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Assembly_t * L_0;
			L_0 = Assembly_Load_m3B24B1EFB2FF6E40186586C3BE135D335BBF3A0A(_stringLiteral41AFC5CF6BD87FAE855E565E56413D254EFDD312, /*hidden argument*/NULL);
			V_0 = L_0;
			Assembly_t * L_1 = V_0;
			NullCheck(L_1);
			Type_t * L_2;
			L_2 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_1, _stringLiteralA3A98A8B1C98564A92ABAE5D3EB9AB9D7723903A);
			V_1 = L_2;
			Type_t * L_3 = V_1;
			if (L_3)
			{
				goto IL_0029;
			}
		}

IL_001d:
		{
			InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_4 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)));
			InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_4, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral238329B64A3729607F223FFEFA394456AE114908)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_RuntimeMethod_var)));
		}

IL_0029:
		{
			Type_t * L_5 = V_1;
			NullCheck(L_5);
			MethodInfo_t * L_6;
			L_6 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_5, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, ((int32_t)40), /*hidden argument*/NULL);
			V_2 = L_6;
			MethodInfo_t * L_7 = V_2;
			if (L_7)
			{
				goto IL_0049;
			}
		}

IL_003d:
		{
			InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_8 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)));
			InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_8, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62550204912BC90809B03D0FE60F2B4874EB15F8)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_RuntimeMethod_var)));
		}

IL_0049:
		{
			MethodInfo_t * L_9 = V_2;
			NullCheck(L_9);
			RuntimeObject * L_10;
			L_10 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_9, NULL, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
			goto IL_006f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005f;
		}
		throw e;
	}

CATCH_0057:
	{ // begin catch(System.IO.FileNotFoundException)
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0071;
	} // end catch (depth: 1)

CATCH_005f:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_11 = V_4;
		InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_12 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)));
		InitializationException__ctor_m56641135A502F6D70F771A69157A0D674EB99DD3(L_12, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral324FB463A34E73070FCEDC655BCD2F40B2E47971)), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_006f:
	{
		return (bool)1;
	}

IL_0071:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateAndTrack(Firebase.FirebaseApp/CreateDelegate,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * ___createDelegate0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___existingProxy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m897CB1E1E85B5420551BA39A79F33E380D02EEEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m48374F40728F7E5FC8EAA23E458292E5475B4EB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_U3CCreateAndTrackU3Em__1_m9C34C3C32726662CBE52EDB06D70C5E197AF62A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875842D645C31A13810035132C84A4C226BFDDA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7EFBEA6AABC35E96367379C5A6B509BB4044717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE83EFF84A2045FE5379CA94C53B51BA575BD5A6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t * V_8 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_9 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_10 = NULL;
	String_t* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA(/*hidden argument*/NULL);
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * L_0;
		L_0 = FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_Create_m1B30952F7479043520E3D7023F331D038F6B2125(L_0, /*hidden argument*/NULL);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_1 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_2 = L_1;
		RuntimeObject * L_2 = V_2;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064(/*hidden argument*/NULL);
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		}

IL_002f:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_3;
				L_3 = PlatformInformation_get_DefaultConfigLocation_mCC41CAB77CCA5F822E67C9B8D86478606777A06C(/*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
				FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F(L_3, /*hidden argument*/NULL);
				CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * L_4 = ___createDelegate0;
				NullCheck(L_4);
				FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_5;
				L_5 = CreateDelegate_Invoke_m9FC551133A4F9301FB4F107B90F7C98A66F95BE9(L_4, /*hidden argument*/NULL);
				V_1 = L_5;
				bool L_6;
				L_6 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
				if (!L_6)
				{
					goto IL_0050;
				}
			}

IL_004a:
			{
				Exception_t * L_7;
				L_7 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var)));
			}

IL_0050:
			{
				FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_8 = V_1;
				if (L_8)
				{
					goto IL_0062;
				}
			}

IL_0056:
			{
				InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_9 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)));
				InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_9, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral380FCBD323D8B608651CCA1F4D65A0B1AA362A2A)), /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var)));
			}

IL_0062:
			{
				FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_10 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
				HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_11;
				L_11 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_10, /*hidden argument*/NULL);
				V_3 = L_11;
				goto IL_00ee;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_006e;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e4;
			}
			throw e;
		}

CATCH_006e:
		{ // begin catch(System.ApplicationException)
			{
				V_4 = ((ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)IL2CPP_GET_ACTIVE_EXCEPTION(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *));
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var)));
				FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D(/*hidden argument*/NULL);
				ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_12 = V_4;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
				V_5 = L_13;
				V_6 = 1;
				String_t* L_14 = V_5;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D)), /*hidden argument*/NULL);
				V_7 = L_15;
				int32_t L_16 = V_7;
				if ((((int32_t)L_16) < ((int32_t)0)))
				{
					goto IL_00b5;
				}
			}

IL_0097:
			{
				String_t* L_17 = V_5;
				int32_t L_18 = V_7;
				NullCheck(L_17);
				String_t* L_19;
				L_19 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_17, 0, L_18, /*hidden argument*/NULL);
				int32_t L_20;
				L_20 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_19, /*hidden argument*/NULL);
				V_6 = L_20;
				String_t* L_21 = V_5;
				int32_t L_22 = V_7;
				NullCheck(L_21);
				String_t* L_23;
				L_23 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), /*hidden argument*/NULL);
				V_5 = L_23;
			}

IL_00b5:
			{
				String_t* L_24 = V_5;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B7B4B5C42CA1C2ED60073710A5266DC268AB4EB)), /*hidden argument*/NULL);
				if ((((int32_t)L_25) < ((int32_t)0)))
				{
					goto IL_00da;
				}
			}

IL_00c7:
			{
				String_t* L_26 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var)));
				String_t* L_27;
				L_27 = ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106(/*hidden argument*/NULL);
				String_t* L_28;
				L_28 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_27, /*hidden argument*/NULL);
				V_5 = L_28;
			}

IL_00da:
			{
				int32_t L_29 = V_6;
				String_t* L_30 = V_5;
				InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_31 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)));
				InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_31, L_29, L_30, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var)));
			}
		} // end catch (depth: 2)

CATCH_00e4:
		{ // begin catch(System.Exception)
			V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var)));
			FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D(/*hidden argument*/NULL);
			Exception_t * L_32 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var)));
		} // end catch (depth: 2)

IL_00ee:
		{
			intptr_t L_33;
			L_33 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_3), /*hidden argument*/NULL);
			bool L_34;
			L_34 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_33, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_010c;
			}
		}

IL_0104:
		{
			V_9 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL;
			IL2CPP_LEAVE(0x202, FINALLY_01d0);
		}

IL_010c:
		{
			V_10 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_35 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
			intptr_t L_36;
			L_36 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_3), /*hidden argument*/NULL);
			NullCheck(L_35);
			bool L_37;
			L_37 = Dictionary_2_TryGetValue_m897CB1E1E85B5420551BA39A79F33E380D02EEEA(L_35, (intptr_t)L_36, (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D **)(&V_10), /*hidden argument*/Dictionary_2_TryGetValue_m897CB1E1E85B5420551BA39A79F33E380D02EEEA_RuntimeMethod_var);
			if (!L_37)
			{
				goto IL_015b;
			}
		}

IL_0127:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_38 = V_10;
			if (!L_38)
			{
				goto IL_015b;
			}
		}

IL_012e:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_39 = ___existingProxy1;
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_40 = V_10;
			if ((((RuntimeObject*)(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)L_39) == ((RuntimeObject*)(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)L_40)))
			{
				goto IL_0152;
			}
		}

IL_0136:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_41 = ___existingProxy1;
			NullCheck(L_41);
			String_t* L_42;
			L_42 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8(L_41, /*hidden argument*/NULL);
			String_t* L_43;
			L_43 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB7EFBEA6AABC35E96367379C5A6B509BB4044717, L_42, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(3, L_43, /*hidden argument*/NULL);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_44 = ___existingProxy1;
			NullCheck(L_44);
			FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93(L_44, /*hidden argument*/NULL);
		}

IL_0152:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_45 = V_10;
			V_9 = L_45;
			IL2CPP_LEAVE(0x202, FINALLY_01d0);
		}

IL_015b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_46 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
			NullCheck(L_46);
			int32_t L_47;
			L_47 = Dictionary_2_get_Count_m48374F40728F7E5FC8EAA23E458292E5475B4EB3(L_46, /*hidden argument*/Dictionary_2_get_Count_m48374F40728F7E5FC8EAA23E458292E5475B4EB3_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_019d;
			}
		}

IL_016a:
		{
			String_t* L_48;
			L_48 = PlatformInformation_get_RuntimeName_m7DC9B4B120826252A1359FBB00EEA9CCA0B9FE81(/*hidden argument*/NULL);
			String_t* L_49;
			L_49 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral875842D645C31A13810035132C84A4C226BFDDA6, L_48, /*hidden argument*/NULL);
			V_11 = L_49;
			String_t* L_50 = V_11;
			String_t* L_51;
			L_51 = VersionInfo_get_SdkVersion_m98A33172434D6EA468C4FF32AC941045D88DCF8B(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164(L_50, L_51, /*hidden argument*/NULL);
			String_t* L_52 = V_11;
			String_t* L_53;
			L_53 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_52, _stringLiteralDE83EFF84A2045FE5379CA94C53B51BA575BD5A6, /*hidden argument*/NULL);
			String_t* L_54;
			L_54 = PlatformInformation_get_RuntimeVersion_m449590D737405693CC7C1AF5878FBAED5B49852F(/*hidden argument*/NULL);
			FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164(L_53, L_54, /*hidden argument*/NULL);
		}

IL_019d:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_55 = V_1;
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_56 = V_1;
			NullCheck(L_56);
			String_t* L_57;
			L_57 = FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75(L_56, /*hidden argument*/NULL);
			NullCheck(L_55);
			L_55->set_name_3(L_57);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_58 = V_1;
			NullCheck(L_58);
			FirebaseApp_AddReference_m1B148D579E5DBB9E6608813E714769757F33142B(L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			bool L_59 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_crashlyticsInitializationAttempted_10();
			if (L_59)
			{
				goto IL_01cb;
			}
		}

IL_01b9:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			bool L_60;
			L_60 = FirebaseApp_IsCheckDependenciesRunning_m35488E6B310C9CF1BC00E4464028166723C3F078(/*hidden argument*/NULL);
			if (L_60)
			{
				goto IL_01cb;
			}
		}

IL_01c3:
		{
			V_0 = (bool)1;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_crashlyticsInitializationAttempted_10((bool)1);
		}

IL_01cb:
		{
			IL2CPP_LEAVE(0x1D7, FINALLY_01d0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01d0;
	}

FINALLY_01d0:
	{ // begin finally (depth: 1)
		RuntimeObject * L_61 = V_2;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_61, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(464)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(464)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x202, IL_0202)
		IL2CPP_JUMP_TBL(0x1D7, IL_01d7)
	}

IL_01d7:
	{
		bool L_62 = V_0;
		if (!L_62)
		{
			goto IL_0200;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_63 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		if (L_63)
		{
			goto IL_01f5;
		}
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_64 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_64, NULL, (intptr_t)((intptr_t)FirebaseApp_U3CCreateAndTrackU3Em__1_m9C34C3C32726662CBE52EDB06D70C5E197AF62A5_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_17(L_64);
	}

IL_01f5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_65 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5(L_65, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_RuntimeMethod_var);
	}

IL_0200:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_67 = V_1;
		return L_67;
	}

IL_0202:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_68 = V_9;
		return L_68;
	}
}
// System.Void Firebase.FirebaseApp::SetCheckDependenciesThread(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_SetCheckDependenciesThread_m4DFA2531E30E77FFA43EBC45E23CD306E8BA8764 (int32_t ___threadId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThreadLock_14();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			int32_t L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
			if ((((int32_t)L_2) == ((int32_t)(-1))))
			{
				goto IL_0037;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			int32_t L_3 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-2))))
			{
				goto IL_0037;
			}
		}

IL_0023:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			int32_t L_4 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_5;
			L_5 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
			NullCheck(L_5);
			int32_t L_6;
			L_6 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_5, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
			{
				goto IL_0042;
			}
		}

IL_0037:
		{
			int32_t L_7 = ___threadId0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_CheckDependenciesThread_13(L_7);
			goto IL_004d;
		}

IL_0042:
		{
			InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
			InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF713BCAEC5B32A45A72E5F3972B1092DCC4FFB3)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_SetCheckDependenciesThread_m4DFA2531E30E77FFA43EBC45E23CD306E8BA8764_RuntimeMethod_var)));
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x59, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
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
// System.Void Firebase.FirebaseApp::ThrowIfCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThreadLock_14();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			int32_t L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
			if ((((int32_t)L_2) == ((int32_t)(-1))))
			{
				goto IL_0036;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			int32_t L_3 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4;
			L_4 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
			NullCheck(L_4);
			int32_t L_5;
			L_5 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_3) == ((int32_t)L_5)))
			{
				goto IL_0036;
			}
		}

IL_002b:
		{
			InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
			InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC79C1E7C1AB013FFB3AD9A42073405EF4995E70F)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA_RuntimeMethod_var)));
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
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		return;
	}
}
// System.Boolean Firebase.FirebaseApp::IsCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_IsCheckDependenciesRunning_m35488E6B310C9CF1BC00E4464028166723C3F078 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThreadLock_14();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		int32_t L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		IL2CPP_LEAVE(0x24, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * FirebaseApp_CheckDependenciesAsync_mB7A747897A064C84E4D84585DFEAF74A38D38F43 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_U3CCheckDependenciesAsyncU3Em__2_m7418E08620989B76203932B94ED9C94E3C928ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m5F5F8CB0138D49C8F12C7E262E2C24F4AFC2FC1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m921094A39C34868AA61ED303A1F473457BE52366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_SetCheckDependenciesThread_m4DFA2531E30E77FFA43EBC45E23CD306E8BA8764(((int32_t)-2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * L_0;
		L_0 = FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_CreatePartialOnMainThread_m5F79802A26DF07DAE2DFC2B250CDAB8DDFBC8C4B(L_0, /*hidden argument*/NULL);
		FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064(/*hidden argument*/NULL);
		Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * L_1 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_18();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * L_2 = (Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC *)il2cpp_codegen_object_new(Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC_il2cpp_TypeInfo_var);
		Func_1__ctor_m5F5F8CB0138D49C8F12C7E262E2C24F4AFC2FC1F(L_2, NULL, (intptr_t)((intptr_t)FirebaseApp_U3CCheckDependenciesAsyncU3Em__2_m7418E08620989B76203932B94ED9C94E3C928ACF_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m5F5F8CB0138D49C8F12C7E262E2C24F4AFC2FC1F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache2_18(L_2);
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * L_3 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_18();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_4;
		L_4 = Task_Run_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m921094A39C34868AA61ED303A1F473457BE52366(L_3, /*hidden argument*/Task_Run_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m921094A39C34868AA61ED303A1F473457BE52366_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckAndFixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * FirebaseApp_CheckAndFixDependenciesAsync_m268BF2FC002D4D4CC247EF2636CDF7EBFF043009 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_U3CCheckAndFixDependenciesAsyncU3Em__3_mC58ECF5CAA7305CB261496EACAC79A62C810C25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m71D94438C94116C12A8F41374634DD19DEDE271E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtensions_Unwrap_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m82E84B0615F463090AC4EECAA1A173C302D3EDA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m92959253715740CA309A66B613993A167C3D51D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * G_B2_0 = NULL;
	Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_0;
		L_0 = FirebaseApp_CheckDependenciesAsync_mB7A747897A064C84E4D84585DFEAF74A38D38F43(/*hidden argument*/NULL);
		Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * L_1 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_19();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001d;
		}
	}
	{
		Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * L_2 = (Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 *)il2cpp_codegen_object_new(Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079_il2cpp_TypeInfo_var);
		Func_2__ctor_m71D94438C94116C12A8F41374634DD19DEDE271E(L_2, NULL, (intptr_t)((intptr_t)FirebaseApp_U3CCheckAndFixDependenciesAsyncU3Em__3_mC58ECF5CAA7305CB261496EACAC79A62C810C25B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m71D94438C94116C12A8F41374634DD19DEDE271E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache3_19(L_2);
		G_B2_0 = G_B1_0;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * L_3 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_19();
		NullCheck(G_B2_0);
		Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080 * L_4;
		L_4 = Task_1_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m92959253715740CA309A66B613993A167C3D51D7(G_B2_0, L_3, /*hidden argument*/Task_1_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m92959253715740CA309A66B613993A167C3D51D7_RuntimeMethod_var);
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_5;
		L_5 = TaskExtensions_Unwrap_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m82E84B0615F463090AC4EECAA1A173C302D3EDA2(L_4, /*hidden argument*/TaskExtensions_Unwrap_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m82E84B0615F463090AC4EECAA1A173C302D3EDA2_RuntimeMethod_var);
		return L_5;
	}
}
// Firebase.DependencyStatus Firebase.FirebaseApp::CheckDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_CheckDependencies_mCD719D29867B855EBA5F74102286BB9A44FCB946 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckDependenciesU3Ec__AnonStorey2_U3CU3Em__0_mECC3E61E5A6E1E53D59A57324902DABE019526D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300 * V_0 = NULL;
	{
		U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300 * L_0 = (U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300 *)il2cpp_codegen_object_new(U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300_il2cpp_TypeInfo_var);
		U3CCheckDependenciesU3Ec__AnonStorey2__ctor_m0251932201CC1594FA83952DAA5A7DDE7DF0CDF6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_status_0(0);
		U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300 * L_2 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, L_2, (intptr_t)((intptr_t)U3CCheckDependenciesU3Ec__AnonStorey2_U3CU3Em__0_mECC3E61E5A6E1E53D59A57324902DABE019526D2_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D(L_3, /*hidden argument*/NULL);
		U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_status_0();
		return L_5;
	}
}
// Firebase.DependencyStatus Firebase.FirebaseApp::CheckDependenciesInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_CheckDependenciesInternal_m3C1FA1603F994655D1C49443FFF8053420F98509 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_1 = NULL;
	int32_t V_2 = 0;
	InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B23_0 = 0;
	{
		bool L_0;
		L_0 = PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_009e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C(/*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2;
		L_2 = FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_009e;
		}
	}
	{
		V_0 = 0;
		V_1 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_3;
			L_3 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
			V_1 = L_3;
			V_2 = 0;
			IL2CPP_LEAVE(0xA0, FINALLY_0040);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_002a;
			}
			throw e;
		}

CATCH_002a:
		{ // begin catch(Firebase.InitializationException)
			{
				V_3 = ((InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)IL2CPP_GET_ACTIVE_EXCEPTION(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *));
				InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_4 = V_3;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = InitializationException_get_InitResult_m597B4C9A381618A9F73238F131D9AF3433880CF7_inline(L_4, /*hidden argument*/NULL);
				V_0 = L_5;
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_003b;
				}
			}

IL_0039:
			{
				InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_7 = V_3;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CheckDependenciesInternal_m3C1FA1603F994655D1C49443FFF8053420F98509_RuntimeMethod_var)));
			}

IL_003b:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				IL2CPP_LEAVE(0x4D, FINALLY_0040);
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_8 = V_1;
			if (!L_8)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_9 = V_1;
			NullCheck(L_9);
			FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93(L_9, /*hidden argument*/NULL);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA0, IL_00a0)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
	}

IL_004d:
	{
		int32_t L_10;
		L_10 = AppUtil_CheckAndroidDependencies_mF6F1264E5DA034CDB3B4A20715419FB36BB09FED(/*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = V_4;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0080;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_0084;
			}
			case 3:
			{
				goto IL_0086;
			}
			case 4:
			{
				goto IL_0088;
			}
			case 5:
			{
				goto IL_008a;
			}
			case 6:
			{
				goto IL_008c;
			}
			case 7:
			{
				goto IL_008e;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_0080:
	{
		return (int32_t)(0);
	}

IL_0082:
	{
		return (int32_t)(1);
	}

IL_0084:
	{
		return (int32_t)(2);
	}

IL_0086:
	{
		return (int32_t)(3);
	}

IL_0088:
	{
		return (int32_t)(4);
	}

IL_008a:
	{
		return (int32_t)(5);
	}

IL_008c:
	{
		return (int32_t)(6);
	}

IL_008e:
	{
		return (int32_t)(7);
	}

IL_0090:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_009c;
		}
	}
	{
		G_B23_0 = 0;
		goto IL_009d;
	}

IL_009c:
	{
		G_B23_0 = 7;
	}

IL_009d:
	{
		return (int32_t)(G_B23_0);
	}

IL_009e:
	{
		return (int32_t)(0);
	}

IL_00a0:
	{
		int32_t L_13 = V_2;
		return L_13;
	}
}
// System.Threading.Tasks.Task Firebase.FirebaseApp::FixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * FirebaseApp_FixDependenciesAsync_mDBBC901E36336AE90E590E9DACD32FE1CCDB79E1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFixDependenciesAsyncU3Ec__AnonStorey3_U3CU3Em__0_mA13297C364FBCCC7D7AA0EE96EA755838C9D0FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * V_0 = NULL;
	{
		U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * L_0 = (U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 *)il2cpp_codegen_object_new(U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_il2cpp_TypeInfo_var);
		U3CFixDependenciesAsyncU3Ec__AnonStorey3__ctor_m973162F7E6495FC5DE2DCABF7315FE26018F5682(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_task_0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)NULL);
		U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * L_2 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, L_2, (intptr_t)((intptr_t)U3CFixDependenciesAsyncU3Ec__AnonStorey3_U3CU3Em__0_mA13297C364FBCCC7D7AA0EE96EA755838C9D0FFD_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D(L_3, /*hidden argument*/NULL);
		U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * L_4 = V_0;
		NullCheck(L_4);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5 = L_4->get_task_0();
		return L_5;
	}
}
// System.Void Firebase.FirebaseApp::ResetDefaultAppCPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ResetDefaultAppCPtr_m23794116100108FA137A11654DDF8C74A5C5F453 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA(/*hidden argument*/NULL);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		AppUtil_InitializePlayServicesInternal_mFDAD6568DBE745E692B38FC49EA137C6FBCB2850(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_PreventOnAllAppsDestroyed_9((bool)1);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2;
		L_2 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		V_1 = L_2;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_3 = V_1;
		NullCheck(L_3);
		FirebaseApp_RemoveReference_mF1E15EE01A41D7674FAFDAB777CF637071F907E0(L_3, /*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4 = V_1;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = AppUtilPINVOKE_FirebaseApp_CreateInternal__SWIG_0_mE02354511523AA50E810D1C60FA97DF31F050081(/*hidden argument*/NULL);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
		memset((&L_7), 0, sizeof(L_7));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), L_5, (intptr_t)L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_swigCPtr_0(L_7);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_8 = V_1;
		NullCheck(L_8);
		FirebaseApp_AddReference_m1B148D579E5DBB9E6608813E714769757F33142B(L_8, /*hidden argument*/NULL);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_PreventOnAllAppsDestroyed_9((bool)0);
		AppUtil_TerminatePlayServicesInternal_mEEDE73F4D1E3F490FFE1329DBD9255A944830B57(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x56, FINALLY_004f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		return;
	}
}
// System.String Firebase.FirebaseApp::get_NameInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AppUtilPINVOKE_FirebaseApp_NameInternal_get_m7A1FC05B47A670C5EF6228A284F2830D5F966AAF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_1 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = AppUtilPINVOKE_FirebaseApp_CreateInternal__SWIG_0_mE02354511523AA50E810D1C60FA97DF31F050081(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1 = V_0;
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)(NULL));
		goto IL_0023;
	}

IL_001c:
	{
		intptr_t L_3 = V_0;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)il2cpp_codegen_object_new(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp__ctor_mB94B4439B6474A9B3420A388F4C847153BB7DA2B(L_4, (intptr_t)L_3, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233_RuntimeMethod_var)));
	}

IL_0034:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_7 = V_1;
		return L_7;
	}
}
// System.Void Firebase.FirebaseApp::ReleaseReferenceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FirebaseApp_ReleaseReferenceInternal_m83E641C7626685F4E5018D332B214A4497F4437C(L_1, /*hidden argument*/NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934_RuntimeMethod_var)));
	}

IL_001b:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164 (String_t* ___library0, String_t* ___version1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___library0;
		String_t* L_1 = ___version1;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FirebaseApp_RegisterLibraryInternal_mE6579F83719F85B3867272A7FF967FD8E5F9CE87(L_0, L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FirebaseApp_AppSetDefaultConfigPath_m991D5A7289A762B01357BD1585E7C94270177C09(L_0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.String Firebase.FirebaseApp::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = AppUtilPINVOKE_FirebaseApp_DefaultName_get_mBAEE6B135FCB729CB583A3CA4597DB952D48C585(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::<Create>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_U3CCreateU3Em__0_m0C29C0EE9E16A55E80148E3233D6491114F11CA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0;
		L_0 = FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Firebase.FirebaseApp::<CreateAndTrack>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_U3CCreateAndTrackU3Em__1_m9C34C3C32726662CBE52EDB06D70C5E197AF62A5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B(/*hidden argument*/NULL);
		return L_0;
	}
}
// Firebase.DependencyStatus Firebase.FirebaseApp::<CheckDependenciesAsync>m__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_U3CCheckDependenciesAsyncU3Em__2_m7418E08620989B76203932B94ED9C94E3C928ACF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_SetCheckDependenciesThread_m4DFA2531E30E77FFA43EBC45E23CD306E8BA8764(L_1, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = FirebaseApp_CheckDependencies_mCD719D29867B855EBA5F74102286BB9A44FCB946(/*hidden argument*/NULL);
		V_0 = L_2;
		FirebaseApp_SetCheckDependenciesThread_m4DFA2531E30E77FFA43EBC45E23CD306E8BA8764((-1), /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<CheckAndFixDependenciesAsync>m__3(System.Threading.Tasks.Task`1<Firebase.DependencyStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * FirebaseApp_U3CCheckAndFixDependenciesAsyncU3Em__3_mC58ECF5CAA7305CB261496EACAC79A62C810C25B (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * ___checkTask0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_U3CCheckAndFixDependenciesAsyncU3Em__4_m2FAFE0753DFF5C2D5E1CF45BDB2870220F7E4484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m93BE3A4B083FE96C35A63DC5F2827DDAF4BA1B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtensions_Unwrap_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m82E84B0615F463090AC4EECAA1A173C302D3EDA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m11C639030242D392638044027C179CC828483747_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B3_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B2_0 = NULL;
	{
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_0 = ___checkTask0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E(L_0, /*hidden argument*/Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = FirebaseApp_FixDependenciesAsync_mDBBC901E36336AE90E590E9DACD32FE1CCDB79E1(/*hidden argument*/NULL);
		Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * L_4 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_20();
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002a;
		}
	}
	{
		Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * L_5 = (Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 *)il2cpp_codegen_object_new(Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91_il2cpp_TypeInfo_var);
		Func_2__ctor_m93BE3A4B083FE96C35A63DC5F2827DDAF4BA1B1C(L_5, NULL, (intptr_t)((intptr_t)FirebaseApp_U3CCheckAndFixDependenciesAsyncU3Em__4_m2FAFE0753DFF5C2D5E1CF45BDB2870220F7E4484_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m93BE3A4B083FE96C35A63DC5F2827DDAF4BA1B1C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache4_20(L_5);
		G_B3_0 = G_B2_0;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * L_6 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_20();
		NullCheck(G_B3_0);
		Task_1_t8FEB5362050CBC14019DB25C7C808BA28A9C9080 * L_7;
		L_7 = Task_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m11C639030242D392638044027C179CC828483747(G_B3_0, L_6, /*hidden argument*/Task_ContinueWith_TisTask_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_m11C639030242D392638044027C179CC828483747_RuntimeMethod_var);
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_8;
		L_8 = TaskExtensions_Unwrap_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m82E84B0615F463090AC4EECAA1A173C302D3EDA2(L_7, /*hidden argument*/TaskExtensions_Unwrap_TisDependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_m82E84B0615F463090AC4EECAA1A173C302D3EDA2_RuntimeMethod_var);
		return L_8;
	}

IL_003a:
	{
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_9 = ___checkTask0;
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<CheckAndFixDependenciesAsync>m__4(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * FirebaseApp_U3CCheckAndFixDependenciesAsyncU3Em__4_m2FAFE0753DFF5C2D5E1CF45BDB2870220F7E4484 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_0;
		L_0 = FirebaseApp_CheckDependenciesAsync_mB7A747897A064C84E4D84585DFEAF74A38D38F43(/*hidden argument*/NULL);
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
// System.Void Firebase.Platform.FirebaseAppUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__ctor_m69CA1CBCD58CB3128DF35E9560A3D1D38005845F (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * L_0 = ((FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils_TranslateDllNotFoundException_m6E4E3109BD0827EE0E675EE9CD50E9C6EE343356 (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils_PollCallbacks_m0A88A069EC5477A1CC9BFCEDC55DED431EE64E91 (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, const RuntimeMethod* method)
{
	{
		AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527(/*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.Platform.FirebaseAppUtils::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseAppUtils_GetLogLevel_m9E036F13631BCE81463AA50592FBCD54E9CB09D7 (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{ // begin catch(Firebase.InitializationException)
		V_0 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	} // end catch (depth: 1)

IL_0013:
	{
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = LogUtil_ConvertLogLevel_mD765D2120AA5F1681CFFCB822C189152704565FC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__cctor_mD68087540805827D81757968316C3971FF48B537 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * L_0 = (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E *)il2cpp_codegen_object_new(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		FirebaseAppUtils__ctor_m69CA1CBCD58CB3128DF35E9560A3D1D38005845F(L_0, /*hidden argument*/NULL);
		((FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___errorCode0;
		FirebaseException_set_ErrorCode_mE216C4C0EBAACC7ADA04ED328DEC1474680F9B5A_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Firebase.FirebaseException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mA7E9CF1AB755AEEE49032E4AC4A7A253C3735F60 (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Firebase.FirebaseException::set_ErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_mE216C4C0EBAACC7ADA04ED328DEC1474680F9B5A (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_17(L_0);
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
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
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
			IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
			AppUtilPINVOKE_delete_FutureBase_m05F2F373729A515D05275F4EDE8C244C5FD43FCC(L_6, /*hidden argument*/NULL);
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
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = AppUtilPINVOKE_FutureBase_status_mAADCE6BBF81EA978FD0AE85FB933E459B7F85604(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = AppUtilPINVOKE_FutureBase_error_m2D1B3DA922FE2A7A45D3C947B10CEF6D2D357533(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AppUtilPINVOKE_FutureBase_error_message_m8B286D44C72F4B764A402DBB4F3A14F6EBF92FF1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FutureString_SWIG_CompletionDispatcher_mF70841BDB2D4C1CD323DD8BDB5ACE5BF66D505D2(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FutureString_SWIG_CompletionDispatcher_mF70841BDB2D4C1CD323DD8BDB5ACE5BF66D505D2(___key0, NULL);

}
// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__ctor_mEE94FE29EDA6856652FFBFE07AF06BD33B5BBC82 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AppUtilPINVOKE_FutureString_SWIGUpcast_m3D751A9A23125A7512366A97993873952784A418((intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.FutureString::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_Finalize_mB6305C6EB07C7F50E313ACD220D24DD26F2D0E59 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.FutureString::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_Dispose_m47F695224312122CF024A272296BEF5328B1A3FA (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
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
			FutureString_SetCompletionData_mBC4FCA2EF3886CD720A27FFDAEC7F4D4A03F1CF9(__this, (intptr_t)(0), /*hidden argument*/NULL);
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
			IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
			AppUtilPINVOKE_delete_FutureString_mDBAD1215E2A4E96F7456D6B3DDD890534B78655C(L_6, /*hidden argument*/NULL);
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
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * FutureString_GetTask_m7CF681D446F480F4930D6B4A406CF9CE12B4A761 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mA5779D80D53EEFDC6F36BF5283B81F326398DCB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_0 = (U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_mC4E736186B15B13755932456B84F22137E2144DC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_1 = V_0;
		FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_3 = V_0;
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_4 = (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_6 = V_0;
		NullCheck(L_6);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_7 = L_6->get_tcs_1();
		Exception_t * L_8;
		L_8 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		NullCheck(L_7);
		TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA(L_7, L_8, /*hidden argument*/TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_10 = L_9->get_tcs_1();
		NullCheck(L_10);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_11;
		L_11 = TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline(L_10, /*hidden argument*/TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		return L_11;
	}

IL_003e:
	{
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_12 = V_0;
		NullCheck(L_12);
		FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_13 = L_12->get_fu_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0071;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_15 = V_0;
		NullCheck(L_15);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_16 = L_15->get_tcs_1();
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_17 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_17, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, /*hidden argument*/NULL);
		NullCheck(L_16);
		TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA(L_16, L_17, /*hidden argument*/TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_19 = L_18->get_tcs_1();
		NullCheck(L_19);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_20;
		L_20 = TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline(L_19, /*hidden argument*/TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		return L_20;
	}

IL_0071:
	{
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_21 = V_0;
		NullCheck(L_21);
		FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_22 = L_21->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_23 = V_0;
		Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * L_24 = (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 *)il2cpp_codegen_object_new(Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606_il2cpp_TypeInfo_var);
		Action__ctor_m5EB9223B37DA74BFAA497D2BFC061034B38B45F2(L_24, L_23, (intptr_t)((intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mA5779D80D53EEFDC6F36BF5283B81F326398DCB2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		FutureString_SetOnCompletionCallback_m878C505E25F5712C619B311473DC5DD3CCDB3D68(L_22, L_24, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * L_25 = V_0;
		NullCheck(L_25);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_26 = L_25->get_tcs_1();
		NullCheck(L_26);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_27;
		L_27 = TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline(L_26, /*hidden argument*/TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		return L_27;
	}
}
// System.Void Firebase.FutureString::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_ThrowIfDisposed_m1F2D5089BB1C888631DF053DFD0F38F4345FB5F3 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureString_ThrowIfDisposed_m1F2D5089BB1C888631DF053DFD0F38F4345FB5F3_RuntimeMethod_var)));
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.FutureString::SetOnCompletionCallback(Firebase.FutureString/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SetOnCompletionCallback_m878C505E25F5712C619B311473DC5DD3CCDB3D68 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAA47B2096D829BAFC77594ACE0841684F083EE4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9FE9C86C85A197ED19B2739ACBECECC36C54484D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureString_SWIG_CompletionDispatcher_mF70841BDB2D4C1CD323DD8BDB5ACE5BF66D505D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		FutureString_ThrowIfDisposed_m1F2D5089BB1C888631DF053DFD0F38F4345FB5F3(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * L_1 = (SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_mA94A734983B630AD0AD8815F10FC080BCCC45DE8(L_1, NULL, (intptr_t)((intptr_t)FutureString_SWIG_CompletionDispatcher_mF70841BDB2D4C1CD323DD8BDB5ACE5BF66D505D2_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_1);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
			Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * L_4 = ((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_4)
			{
				goto IL_0043;
			}
		}

IL_0039:
		{
			Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * L_5 = (Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B *)il2cpp_codegen_object_new(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mAA47B2096D829BAFC77594ACE0841684F083EE4F(L_5, /*hidden argument*/Dictionary_2__ctor_mAA47B2096D829BAFC77594ACE0841684F083EE4F_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
			((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->set_Callbacks_3(L_5);
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
			int32_t L_6 = ((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_7);
			V_0 = L_7;
			Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * L_8 = ((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_9 = V_0;
			Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * L_10 = ___userCompletionCallback0;
			NullCheck(L_8);
			Dictionary_2_set_Item_m9FE9C86C85A197ED19B2739ACBECECC36C54484D(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m9FE9C86C85A197ED19B2739ACBECECC36C54484D_RuntimeMethod_var);
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
		SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * L_12 = __this->get_SWIG_CompletionCB_7();
		int32_t L_13 = V_0;
		intptr_t L_14;
		L_14 = FutureString_SWIG_OnCompletion_m73D0FB17B8063EEBF36900B519B00EBD1DFF22E6(__this, L_12, L_13, /*hidden argument*/NULL);
		FutureString_SetCompletionData_mBC4FCA2EF3886CD720A27FFDAEC7F4D4A03F1CF9(__this, (intptr_t)L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FutureString::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SetCompletionData_mBC4FCA2EF3886CD720A27FFDAEC7F4D4A03F1CF9 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		FutureString_ThrowIfDisposed_m1F2D5089BB1C888631DF053DFD0F38F4345FB5F3(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		FutureString_SWIG_FreeCompletionData_mA0E9ABB8F418A39F2135AB385995207964B74C66(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.FutureString::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SWIG_CompletionDispatcher_mF70841BDB2D4C1CD323DD8BDB5ACE5BF66D505D2 (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m09E8B3853C217AA69305DDB29A60FF8E7E406C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mFEC798F3DEC9F83DECDCF61605BCE1FCB94BD687_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
			Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * L_2 = ((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
			Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * L_3 = ((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_TryGetValue_mFEC798F3DEC9F83DECDCF61605BCE1FCB94BD687(L_3, L_4, (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mFEC798F3DEC9F83DECDCF61605BCE1FCB94BD687_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
			Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * L_6 = ((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			bool L_8;
			L_8 = Dictionary_2_Remove_m09E8B3853C217AA69305DDB29A60FF8E7E406C38(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m09E8B3853C217AA69305DDB29A60FF8E7E406C38_RuntimeMethod_var);
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
		Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * L_11 = V_0;
		NullCheck(L_11);
		Action_Invoke_m8AEC3442D3825511735DB7CCF3F68124CCD3976F(L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.FutureString::SWIG_OnCompletion(Firebase.FutureString/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureString_SWIG_OnCompletion_m73D0FB17B8063EEBF36900B519B00EBD1DFF22E6 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AppUtilPINVOKE_FutureString_SWIG_OnCompletion_m7EC712A100C419FDD49B37EA086EF94D878559EE(L_0, L_1, L_2, /*hidden argument*/NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureString_SWIG_OnCompletion_m73D0FB17B8063EEBF36900B519B00EBD1DFF22E6_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.FutureString::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString_SWIG_FreeCompletionData_mA0E9ABB8F418A39F2135AB385995207964B74C66 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FutureString_SWIG_FreeCompletionData_m01DFA5A99CF26EDB802FDA5D8C4CEC55635EB303(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureString_SWIG_FreeCompletionData_mA0E9ABB8F418A39F2135AB385995207964B74C66_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.String Firebase.FutureString::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureString_GetResult_m44B49349D344B988B4BD2F8782BE5B81EDE12B20 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AppUtilPINVOKE_FutureString_GetResult_mA4942C0B33E7F4BE319658D60607920DC791AA1E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureString_GetResult_m44B49349D344B988B4BD2F8782BE5B81EDE12B20_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.FutureString::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__cctor_mFEA2D128868417773638967DA7ED28A09ACC36C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields*)il2cpp_codegen_static_fields_for(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FutureVoid_SWIG_CompletionDispatcher_m60ECAC83E9887F17ECCAFE1C1DE0340903FB5281(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FutureVoid_SWIG_CompletionDispatcher_m60ECAC83E9887F17ECCAFE1C1DE0340903FB5281(___key0, NULL);

}
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__ctor_m1360132BEDC4A7668F93C0D1EB79CE3E28E94597 (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AppUtilPINVOKE_FutureVoid_SWIGUpcast_m34C07BD600DBA8A05C4DA0B553472CBC407C55FF((intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.FutureVoid::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_Finalize_mB465E6923BAB39AFFCBCBB52DDF12FB02166E0B5 (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.FutureVoid::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_Dispose_mFF268F835BFCFFFBF90B730ABBB16B4E438D9A7E (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
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
			FutureVoid_SetCompletionData_mF298BA528990E45DD85839CA0E91130876DAF491(__this, (intptr_t)(0), /*hidden argument*/NULL);
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
			IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
			AppUtilPINVOKE_delete_FutureVoid_m23422CC33D67D0B3ACBA292B975FC62633FA5D90(L_6, /*hidden argument*/NULL);
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
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * FutureVoid_GetTask_m99313F8ED4D21B3440FA37F24EDE6206F6B0E3BF (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mBDC99E2B07B94C3D13918A68BD7E4B85AA737008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_0 = (U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_m7F3052D39B10F90854FA21CA6AFA941CC6CC1307(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_1 = V_0;
		FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_3 = V_0;
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_4 = (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_6 = V_0;
		NullCheck(L_6);
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_7 = L_6->get_tcs_1();
		Exception_t * L_8;
		L_8 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		NullCheck(L_7);
		TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348(L_7, L_8, /*hidden argument*/TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_10 = L_9->get_tcs_1();
		NullCheck(L_10);
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_11;
		L_11 = TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_inline(L_10, /*hidden argument*/TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_RuntimeMethod_var);
		return L_11;
	}

IL_003e:
	{
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_12 = V_0;
		NullCheck(L_12);
		FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * L_13 = L_12->get_fu_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0071;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_15 = V_0;
		NullCheck(L_15);
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_16 = L_15->get_tcs_1();
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_17 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_17, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, /*hidden argument*/NULL);
		NullCheck(L_16);
		TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348(L_16, L_17, /*hidden argument*/TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_19 = L_18->get_tcs_1();
		NullCheck(L_19);
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_20;
		L_20 = TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_inline(L_19, /*hidden argument*/TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_RuntimeMethod_var);
		return L_20;
	}

IL_0071:
	{
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_21 = V_0;
		NullCheck(L_21);
		FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * L_22 = L_21->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_23 = V_0;
		Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * L_24 = (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC *)il2cpp_codegen_object_new(Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC_il2cpp_TypeInfo_var);
		Action__ctor_mBB9FA88AEDA150A5C03EF7CC69344846B1A4FD22(L_24, L_23, (intptr_t)((intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mBDC99E2B07B94C3D13918A68BD7E4B85AA737008_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		FutureVoid_SetOnCompletionCallback_mA6429D52596940DA40C03180D7020560EAB0C14B(L_22, L_24, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * L_25 = V_0;
		NullCheck(L_25);
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_26 = L_25->get_tcs_1();
		NullCheck(L_26);
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_27;
		L_27 = TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_inline(L_26, /*hidden argument*/TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_RuntimeMethod_var);
		return L_27;
	}
}
// System.Void Firebase.FutureVoid::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_ThrowIfDisposed_mA7C1D4055AA1AC53502961F16F6449C4647792AF (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, const RuntimeMethod* method)
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureVoid_ThrowIfDisposed_mA7C1D4055AA1AC53502961F16F6449C4647792AF_RuntimeMethod_var)));
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.FutureVoid::SetOnCompletionCallback(Firebase.FutureVoid/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SetOnCompletionCallback_mA6429D52596940DA40C03180D7020560EAB0C14B (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m40D55C1FAA52BC455039C6A408F32F7F6CF7A35D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7DF158BD4B2366A2ECB033F55E8AA74204182884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_SWIG_CompletionDispatcher_m60ECAC83E9887F17ECCAFE1C1DE0340903FB5281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		FutureVoid_ThrowIfDisposed_mA7C1D4055AA1AC53502961F16F6449C4647792AF(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * L_1 = (SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_m93C9C83EF65339E2A9134FA2E79AA1895FE881A2(L_1, NULL, (intptr_t)((intptr_t)FutureVoid_SWIG_CompletionDispatcher_m60ECAC83E9887F17ECCAFE1C1DE0340903FB5281_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_1);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
			Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * L_4 = ((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_4)
			{
				goto IL_0043;
			}
		}

IL_0039:
		{
			Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * L_5 = (Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D *)il2cpp_codegen_object_new(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m40D55C1FAA52BC455039C6A408F32F7F6CF7A35D(L_5, /*hidden argument*/Dictionary_2__ctor_m40D55C1FAA52BC455039C6A408F32F7F6CF7A35D_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
			((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->set_Callbacks_3(L_5);
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
			int32_t L_6 = ((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_7);
			V_0 = L_7;
			Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * L_8 = ((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_9 = V_0;
			Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * L_10 = ___userCompletionCallback0;
			NullCheck(L_8);
			Dictionary_2_set_Item_m7DF158BD4B2366A2ECB033F55E8AA74204182884(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m7DF158BD4B2366A2ECB033F55E8AA74204182884_RuntimeMethod_var);
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
		SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * L_12 = __this->get_SWIG_CompletionCB_7();
		int32_t L_13 = V_0;
		intptr_t L_14;
		L_14 = FutureVoid_SWIG_OnCompletion_m48F9542CC9CFAF8D061DB014E2791A8C4D6EEBF3(__this, L_12, L_13, /*hidden argument*/NULL);
		FutureVoid_SetCompletionData_mF298BA528990E45DD85839CA0E91130876DAF491(__this, (intptr_t)L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FutureVoid::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SetCompletionData_mF298BA528990E45DD85839CA0E91130876DAF491 (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		FutureVoid_ThrowIfDisposed_mA7C1D4055AA1AC53502961F16F6449C4647792AF(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		FutureVoid_SWIG_FreeCompletionData_mFEA68F96EA671BB05C45C11DDC981A965E7C4ACF(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.FutureVoid::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SWIG_CompletionDispatcher_m60ECAC83E9887F17ECCAFE1C1DE0340903FB5281 (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m40A1170DC06A6110BD8790F9859FF82637ADC6DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mEDBD75BE439C76291822BF481D24B4F376B6102B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
			Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * L_2 = ((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
			Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * L_3 = ((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_TryGetValue_mEDBD75BE439C76291822BF481D24B4F376B6102B(L_3, L_4, (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mEDBD75BE439C76291822BF481D24B4F376B6102B_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
			Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * L_6 = ((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			bool L_8;
			L_8 = Dictionary_2_Remove_m40A1170DC06A6110BD8790F9859FF82637ADC6DB(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m40A1170DC06A6110BD8790F9859FF82637ADC6DB_RuntimeMethod_var);
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
		Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * L_10 = V_0;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * L_11 = V_0;
		NullCheck(L_11);
		Action_Invoke_m8F270518E4B4FBDC595EA69BEC37C94DE19EBB3E(L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.FutureVoid::SWIG_OnCompletion(Firebase.FutureVoid/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FutureVoid_SWIG_OnCompletion_m48F9542CC9CFAF8D061DB014E2791A8C4D6EEBF3 (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AppUtilPINVOKE_FutureVoid_SWIG_OnCompletion_m8ECE4C8E41A5F9C81C5FBF6739AF216985DA369B(L_0, L_1, L_2, /*hidden argument*/NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureVoid_SWIG_OnCompletion_m48F9542CC9CFAF8D061DB014E2791A8C4D6EEBF3_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.FutureVoid::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid_SWIG_FreeCompletionData_mFEA68F96EA671BB05C45C11DDC981A965E7C4ACF (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_FutureVoid_SWIG_FreeCompletionData_m145C4A7934C1933C03D6834965B42B94DE99AD87(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FutureVoid_SWIG_FreeCompletionData_mFEA68F96EA671BB05C45C11DDC981A965E7C4ACF_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Void Firebase.FutureVoid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__cctor_mDCA344A3A0F77964E3A10A61E864E8DA62070ADD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields*)il2cpp_codegen_static_fields_for(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_mCE6B67DCF469CF7CC9CC8A5C6C2E6CAC73D6366F (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___result0;
		InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___result0;
		InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m56641135A502F6D70F771A69157A0D674EB99DD3 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, String_t* ___message1, Exception_t * ___inner2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		Exception_t * L_1 = ___inner2;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___result0;
		InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.InitResult Firebase.InitializationException::get_InitResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InitializationException_get_InitResult_m597B4C9A381618A9F73238F131D9AF3433880CF7 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CInitResultU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Firebase.InitializationException::set_InitResult(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInitResultU3Ek__BackingField_17(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107(int32_t ___logLevel0, char* ___message1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107(___logLevel0, ____message1_unmarshaled, NULL);

}
// System.Void Firebase.LogUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__cctor_m3A18E1D17E9D3E61E2A8B33C51742249F708BB0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->set__instance_0((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 *)NULL);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->set_InitializeLoggingLock_1(L_0);
		LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * L_1 = (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 *)il2cpp_codegen_object_new(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil__ctor_mE6F41CDC7EFF92D76E3D07B5F8350BF7D5A4983D(L_1, /*hidden argument*/NULL);
		((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->set__instance_0(L_1);
		return;
	}
}
// System.Void Firebase.LogUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__ctor_mE6F41CDC7EFF92D76E3D07B5F8350BF7D5A4983D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_U3CLogUtilU3Em__0_mE0E18AA95FE82B679A079D3C7208ED52CC513A15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * L_0 = ((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * L_1 = (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 *)il2cpp_codegen_object_new(LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84_il2cpp_TypeInfo_var);
		LogMessageDelegate__ctor_mEBA3FFB53CCE522DBB1B5571A5623A649E6643F0(L_1, NULL, (intptr_t)((intptr_t)LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_3(L_1);
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * L_2 = ((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB(L_2, /*hidden argument*/NULL);
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_3;
		L_3 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_4, __this, (intptr_t)((intptr_t)LogUtil_U3CLogUtilU3Em__0_mE0E18AA95FE82B679A079D3C7208ED52CC513A15_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		AppDomain_add_DomainUnload_mE808522233A3DFCFBC771C2CB69544808938A134(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->get_InitializeLoggingLock_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66((bool)1, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_2, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
	}

IL_001e:
	{
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.LogUtil::ConvertLogLevel(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogUtil_ConvertLogLevel_mD765D2120AA5F1681CFFCB822C189152704565FC (int32_t ___logLevel0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___logLevel0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0021;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001f:
	{
		return (int32_t)(0);
	}

IL_0021:
	{
		return (int32_t)(2);
	}

IL_0023:
	{
		return (int32_t)(3);
	}

IL_0025:
	{
		return (int32_t)(4);
	}

IL_0027:
	{
		return (int32_t)(1);
	}
}
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___logLevel0;
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = LogUtil_ConvertLogLevel_mD765D2120AA5F1681CFFCB822C189152704565FC(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::LogMessageFromCallback(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FirebaseLogger_get_CanRedirectNativeLogs_mA3ED5F874C3D698FB2D1656B3B4E1EAFE257BBF4(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___logLevel0;
		String_t* L_2 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Firebase.LogUtil::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Finalize_mD288B9870DD8D7AF744044513FCA62F9AB42A85C (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		LogUtil_Dispose_m3E431D1105B6EBDC3183FA2B55AA7608607BBC6D(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.LogUtil::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_mB12D003420083CAA79A613F44A635DA5418C989D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogUtil_Dispose_m3E431D1105B6EBDC3183FA2B55AA7608607BBC6D(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m3E431D1105B6EBDC3183FA2B55AA7608607BBC6D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_2();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB((LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 *)NULL, /*hidden argument*/NULL);
		__this->set__disposed_2((bool)1);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.LogUtil::<LogUtil>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_U3CLogUtilU3Em__0_mE0E18AA95FE82B679A079D3C7208ED52CC513A15 (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	{
		LogUtil_Dispose_m3E431D1105B6EBDC3183FA2B55AA7608607BBC6D(__this, (bool)0, /*hidden argument*/NULL);
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
// System.Void Firebase.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mD5BA102663DCE67244B79EF374E5641E765AB5CB (MonoPInvokeCallbackAttribute_tF7B8E107CCA490884BAD9F808FA46A4943C293AA * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.String Firebase.VersionInfo::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_SdkVersion_m98A33172434D6EA468C4FF32AC941045D88DCF8B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74137207FD3822D16F2EDD5B394BD31D5E0DC5A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral74137207FD3822D16F2EDD5B394BD31D5E0DC5A1;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m88D96246E0C2DD75CFC4054F09FA9044A5B6FA90 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_0 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_1 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_2 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_3 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_4 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_5 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_6 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_7 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_8 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_9 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_10 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_11 = (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_12 = (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_13 = (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_14 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_15 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_16 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_17 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_18 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_19 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_20 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_21 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_22 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_23 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_24 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m73FDAC85B33251A5207C88493A40F2F24D634676(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_25 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_26 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_27 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m8F9C20ECB599940EF0CFCFF5598BD3C3222E2B37(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m06C48C4611CDA458CA1AF651ED06BF7FF7EDF536 (SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m73FDAC85B33251A5207C88493A40F2F24D634676 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___applicationDelegate0, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___arithmeticDelegate1, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___divideByZeroDelegate2, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___indexOutOfRangeDelegate3, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidCastDelegate4, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidOperationDelegate5, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___ioDelegate6, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___nullReferenceDelegate7, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___outOfMemoryDelegate8, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___overflowDelegate9, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "SWIGRegisterExceptionCallbacks_AppUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AppUtil)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m8F9C20ECB599940EF0CFCFF5598BD3C3222E2B37 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentDelegate0, ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "SWIGRegisterExceptionArgumentCallbacks_AppUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_AppUtil)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
		L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
		L_0 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
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
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
		L_0 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
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
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_8, /*hidden argument*/NULL);
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
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_pendingException_0();
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
// System.Void Firebase.AppUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Exception_t * L_0 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_5 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A_RuntimeMethod_var)));
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_0_0_0_var) };
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
		int32_t L_10 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
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
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_0_0_0_var) };
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
		int32_t L_6 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m8EE8BC5E0ABB17F0F9D0A2F615EE4987FD86F3B0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * L_0 = (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 *)il2cpp_codegen_object_new(SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mED39AF7AB0675F58D7C5E732BB50C419BF321299(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * L_1 = ((SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_m72D311A8F2D513C5602B6F4E7936C2910DBECA15(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m9F305BAB06F185B49FD5AC05A407928C69D672F6 (SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AppUtil(Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_m72D311A8F2D513C5602B6F4E7936C2910DBECA15 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_5_0"), "SWIGRegisterStringCallback_AppUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_5_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AppUtil)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.AppUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC (String_t* ___cString0, const RuntimeMethod* method)
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
// System.Void Firebase.FirebaseApp/<CheckDependencies>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckDependenciesU3Ec__AnonStorey2__ctor_m0251932201CC1594FA83952DAA5A7DDE7DF0CDF6 (U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp/<CheckDependencies>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckDependenciesU3Ec__AnonStorey2_U3CU3Em__0_mECC3E61E5A6E1E53D59A57324902DABE019526D2 (U3CCheckDependenciesU3Ec__AnonStorey2_t14EFAE87056C2245706BEA919BFAE963F17A9300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FirebaseApp_CheckDependenciesInternal_m3C1FA1603F994655D1C49443FFF8053420F98509(/*hidden argument*/NULL);
		__this->set_status_0(L_0);
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
// System.Void Firebase.FirebaseApp/<FixDependenciesAsync>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixDependenciesAsyncU3Ec__AnonStorey3__ctor_m973162F7E6495FC5DE2DCABF7315FE26018F5682 (U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp/<FixDependenciesAsync>c__AnonStorey3::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixDependenciesAsyncU3Ec__AnonStorey3_U3CU3Em__0_mA13297C364FBCCC7D7AA0EE96EA755838C9D0FFD (U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFixDependenciesAsyncU3Ec__AnonStorey3_U3CU3Em__1_mD41D7E8967C69FA3765509BAD33BF548FB64092D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B2_0 = NULL;
	U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * G_B2_1 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B1_0 = NULL;
	U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7 * G_B1_1 = NULL;
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0;
		L_0 = AppUtil_FixAndroidDependenciesAsync_m4E0A5F5046D85FBCEEB21963516269A404D9ACA7(/*hidden argument*/NULL);
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_1 = ((U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_StaticFields*)il2cpp_codegen_static_fields_for(U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_1();
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_2 = (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 *)il2cpp_codegen_object_new(Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C(L_2, NULL, (intptr_t)((intptr_t)U3CFixDependenciesAsyncU3Ec__AnonStorey3_U3CU3Em__1_mD41D7E8967C69FA3765509BAD33BF548FB64092D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		((U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_StaticFields*)il2cpp_codegen_static_fields_for(U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_3 = ((U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_StaticFields*)il2cpp_codegen_static_fields_for(U3CFixDependenciesAsyncU3Ec__AnonStorey3_t409F42F0F491B93B7465F8D6A85BDAFF7D0444E7_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_1();
		NullCheck(G_B2_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = Task_ContinueWith_m8540E40049DA1A53066538EBEBC69DE46859748F(G_B2_0, L_3, /*hidden argument*/NULL);
		NullCheck(G_B2_1);
		G_B2_1->set_task_0(L_4);
		return;
	}
}
// System.Void Firebase.FirebaseApp/<FixDependenciesAsync>c__AnonStorey3::<>m__1(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixDependenciesAsyncU3Ec__AnonStorey3_U3CU3Em__1_mD41D7E8967C69FA3765509BAD33BF548FB64092D (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___t0;
		NullCheck(L_0);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_1;
		L_1 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___t0;
		NullCheck(L_2);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_3;
		L_3 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFixDependenciesAsyncU3Ec__AnonStorey3_U3CU3Em__1_mD41D7E8967C69FA3765509BAD33BF548FB64092D_RuntimeMethod_var)));
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ResetDefaultAppCPtr_m23794116100108FA137A11654DDF8C74A5C5F453(/*hidden argument*/NULL);
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
// System.Void Firebase.FirebaseApp/CreateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateDelegate__ctor_m9B61AF9F4EFF9CCA9FC10B8BDB5E8AD7130E4DE1 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Firebase.FirebaseApp Firebase.FirebaseApp/CreateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * CreateDelegate_Invoke_m9FC551133A4F9301FB4F107B90F7C98A66F95BE9 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, const RuntimeMethod* method)
{
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * result = NULL;
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
				typedef FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.FirebaseApp/CreateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateDelegate_BeginInvoke_mE55A9209FBD926992A08A1F0C0DCAC9083CC66A5 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// Firebase.FirebaseApp Firebase.FirebaseApp/CreateDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * CreateDelegate_EndInvoke_mA8FE3700C59A150FAA37B17BDAA7A44319C1116E (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.FirebaseApp/EnableModuleParams::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___csharp0, String_t* ___cpp1, bool ___always2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___csharp0;
		EnableModuleParams_set_CSharpClassName_mB1413BCF93E8A3B658798ED556E586C47981F018_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___cpp1;
		EnableModuleParams_set_CppModuleName_m780B77AD33765B83D0675C02876BB379B9EFCCEB_inline(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___always2;
		EnableModuleParams_set_AlwaysEnable_m38C379905DD5810F629E35AD34DD0F677990ACFE_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CppModuleName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCppModuleNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CppModuleName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_m780B77AD33765B83D0675C02876BB379B9EFCCEB (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCppModuleNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CSharpClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCSharpClassNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CSharpClassName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_mB1413BCF93E8A3B658798ED556E586C47981F018 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCSharpClassNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Firebase.FirebaseApp/EnableModuleParams::get_AlwaysEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_m76B3B18100019E68E79EA0A0B320B1EAE0AB8260 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAlwaysEnableU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_AlwaysEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m38C379905DD5810F629E35AD34DD0F677990ACFE (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAlwaysEnableU3Ek__BackingField_2(L_0);
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
// System.Void Firebase.FutureString/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_mC4E736186B15B13755932456B84F22137E2144DC (U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FutureString/<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mA5779D80D53EEFDC6F36BF5283B81F326398DCB2 (U3CGetTaskU3Ec__AnonStorey0_t58443DBB733F89AC11187BE5565F22C9A99E343B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m881733D8D9CAFA8A00F5313F0E5142D4C523FF2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var);
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
			FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_0 = __this->get_fu_0();
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
			TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_2 = __this->get_tcs_1();
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_m881733D8D9CAFA8A00F5313F0E5142D4C523FF2A(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m881733D8D9CAFA8A00F5313F0E5142D4C523FF2A_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0021:
		{
			FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_3 = __this->get_fu_0();
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
			TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_6 = __this->get_tcs_1();
			int32_t L_7 = V_0;
			FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_8 = __this->get_fu_0();
			NullCheck(L_8);
			String_t* L_9;
			L_9 = FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774(L_8, /*hidden argument*/NULL);
			FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_10, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0054:
		{
			TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_11 = __this->get_tcs_1();
			FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_12 = __this->get_fu_0();
			NullCheck(L_12);
			String_t* L_13;
			L_13 = FutureString_GetResult_m44B49349D344B988B4BD2F8782BE5B81EDE12B20(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var);
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
		FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_16 = __this->get_fu_0();
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.FutureString/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m5EB9223B37DA74BFAA497D2BFC061034B38B45F2 (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.FutureString/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m8AEC3442D3825511735DB7CCF3F68124CCD3976F (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * __this, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.FutureString/Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m5F1427DF1B48FD24F83E4A0536A3E5476AF22E3D (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Firebase.FutureString/Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m6953546D1860D0FFCEBCAD104E8E7870E16DEC30 (Action_t194F39A1544D7CCA85CE8262A1DC2BDBE497A606 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 (SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.FutureString/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mA94A734983B630AD0AD8815F10FC080BCCC45DE8 (SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.FutureString/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m8D12A0B28F8226371F614F927ABFEE5199049153 (SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * __this, int32_t ___index0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.FutureString/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m14AB81912E26ECFE7E5F7CBDD7CD7BDDF3332949 (SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * __this, int32_t ___index0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
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
// System.Void Firebase.FutureString/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m6615391FBE0AA5F5D8C25138C98D36EEEFAF5327 (SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.FutureVoid/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m7F3052D39B10F90854FA21CA6AFA941CC6CC1307 (U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FutureVoid/<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mBDC99E2B07B94C3D13918A68BD7E4B85AA737008 (U3CGetTaskU3Ec__AnonStorey0_tF06A18F93ACFD5121A684EF0D66E1ED9705A7B5A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m743753CE9201E167F700E05EC425BF9F63E880F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mBAC8295937C8CD785F85FFBD657A084A1A811982_RuntimeMethod_var);
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
			FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * L_0 = __this->get_fu_0();
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
			TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_2 = __this->get_tcs_1();
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_m743753CE9201E167F700E05EC425BF9F63E880F2(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m743753CE9201E167F700E05EC425BF9F63E880F2_RuntimeMethod_var);
			goto IL_0060;
		}

IL_0021:
		{
			FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * L_3 = __this->get_fu_0();
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
			TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_6 = __this->get_tcs_1();
			int32_t L_7 = V_0;
			FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * L_8 = __this->get_fu_0();
			NullCheck(L_8);
			String_t* L_9;
			L_9 = FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774(L_8, /*hidden argument*/NULL);
			FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_10, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_mDB82A007129607E7A1636C31799BDBB420313348_RuntimeMethod_var);
			goto IL_0060;
		}

IL_0054:
		{
			TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_11 = __this->get_tcs_1();
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_mBAC8295937C8CD785F85FFBD657A084A1A811982(L_11, 0, /*hidden argument*/TaskCompletionSource_1_SetResult_mBAC8295937C8CD785F85FFBD657A084A1A811982_RuntimeMethod_var);
		}

IL_0060:
		{
			goto IL_007c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0065;
		}
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_1;
		String_t* L_13;
		L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(4, L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007c;
	} // end catch (depth: 1)

IL_007c:
	{
		FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * L_14 = __this->get_fu_0();
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, L_14);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.FutureVoid/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBB9FA88AEDA150A5C03EF7CC69344846B1A4FD22 (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.FutureVoid/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m8F270518E4B4FBDC595EA69BEC37C94DE19EBB3E (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * __this, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.FutureVoid/Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m880F277B9978E98E5E80FB4B6F6B92085AA9DC10 (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Firebase.FutureVoid/Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m25D93B13687F5F2BF6E3C41FA7E3BC79CDA289AB (Action_tA166CCE0E00A94BB300974487FE20CE9F118E0FC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 (SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.FutureVoid/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m93C9C83EF65339E2A9134FA2E79AA1895FE881A2 (SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.FutureVoid/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m331EF656E6CAEB2B61DFD5CF6A68D4045F486CE5 (SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * __this, int32_t ___index0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.FutureVoid/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_mADCF9246A7BD1637ABAA9876C8C16EBFD318C78C (SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * __this, int32_t ___index0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
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
// System.Void Firebase.FutureVoid/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m3D04ABBCBB71B86479A9252A5B3D39C7A15AF54C (SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, int32_t ___log_level0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___log_level0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void Firebase.LogUtil/LogMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate__ctor_mEBA3FFB53CCE522DBB1B5571A5623A649E6643F0 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.LogUtil/LogMessageDelegate::Invoke(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate_Invoke_mB54C38843065556AF65D1E42C9DDC9AFAFA5C5E8 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, int32_t ___log_level0, String_t* ___message1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___log_level0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___log_level0, ___message1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___log_level0, ___message1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___log_level0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___log_level0, ___message1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___log_level0, ___message1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___log_level0) - 1), ___message1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___log_level0, ___message1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.LogUtil/LogMessageDelegate::BeginInvoke(Firebase.LogLevel,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogMessageDelegate_BeginInvoke_m9A9B00026484A1266F2E8E1101699C83D2755654 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, int32_t ___log_level0, String_t* ___message1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200_il2cpp_TypeInfo_var, &___log_level0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.LogUtil/LogMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate_EndInvoke_m13C568B3D481DF381F37AAEF2FA598025FDB8C95 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_mD10622418D792C1CDA2D02B0117C251187C52D74 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m0410594AB6ABF10A9740F06B324A5A6C059E39B9 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_mE24172C5085232AD4E4A4EAC36FBF77A79A93C31 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mE907915DC5B6A911DE7F253DF0E0D82F63B23A06 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m72D31AEE58624296E481B8F6C28EDF28C445F92B (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mCD778A944D0755D6227785C17547B6F3FCCB9D59 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mED39AF7AB0675F58D7C5E732BB50C419BF321299 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_mE2D5B14F87E5528B7095C2B08CFD4B10A4926BDF (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m071087F52EF4FF4FB5914D2D986CD4607DFDE8E7 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m4A38AD7D0C3965603592F826BC582D78A7FB7AA0 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCSharpClassNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCppModuleNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_m76B3B18100019E68E79EA0A0B320B1EAE0AB8260_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAlwaysEnableU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * L_0 = ((FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InitializationException_get_InitResult_m597B4C9A381618A9F73238F131D9AF3433880CF7_inline (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CInitResultU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_mE216C4C0EBAACC7ADA04ED328DEC1474680F9B5A_inline (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInitResultU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_mB1413BCF93E8A3B658798ED556E586C47981F018_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCSharpClassNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_m780B77AD33765B83D0675C02876BB379B9EFCCEB_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCppModuleNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m38C379905DD5810F629E35AD34DD0F677990ACFE_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAlwaysEnableU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_gshared_inline (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this->get_m_task_0();
		return (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_0;
	}
}
