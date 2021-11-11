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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
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
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Mapbox.IO.Compression.CopyEncoder
struct CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B;
// Mapbox.IO.Compression.DeflateInput
struct DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F;
// Mapbox.IO.Compression.DeflateStream
struct DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07;
// Mapbox.IO.Compression.DeflateStreamAsyncResult
struct DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108;
// Mapbox.IO.Compression.DeflaterManaged
struct DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// Mapbox.IO.Compression.FastEncoder
struct FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C;
// Mapbox.IO.Compression.FastEncoderWindow
struct FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC;
// Mapbox.IO.Compression.GZipDecoder
struct GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642;
// Mapbox.IO.Compression.GZipFormatter
struct GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE;
// Mapbox.IO.Compression.GZipStream
struct GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC;
// Mapbox.IO.Compression.HuffmanTree
struct HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Mapbox.IO.Compression.IDeflater
struct IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Mapbox.IO.Compression.IFileFormatReader
struct IFileFormatReader_t88D5482CB4A0A56C7896ABE9D4B6231F742BCD72;
// Mapbox.IO.Compression.IFileFormatWriter
struct IFileFormatWriter_t95696D3893A9B72EC1B620999B5D98759C856F7D;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// Mapbox.IO.Compression.Inflater
struct Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108;
// Mapbox.IO.Compression.InputBuffer
struct InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A;
// Mapbox.IO.Compression.InvalidDataException
struct InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// Mapbox.IO.Compression.Match
struct Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// Mapbox.IO.Compression.OutputBuffer
struct OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58;
// Mapbox.IO.Compression.OutputWindow
struct OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842;
// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate
struct AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflaterState_t5F48BA92088CA0EA39C4FEA4075EC9A4C3B456CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileFormatReader_t88D5482CB4A0A56C7896ABE9D4B6231F742BCD72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileFormatWriter_t95696D3893A9B72EC1B620999B5D98759C856F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____2492606636F4A4666E0D617B51116A5A68539881_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____C31FD54E9E8CFB2BC8835475B92A0D179827B581_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4B30AD24F5B4E2579117D84F879B0C60CE3F8;
IL2CPP_EXTERN_C String_t* _stringLiteral0ECF86EA93D4F92036A429C0359578EA574C786C;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED4D712B21E2F101127EAF7B91F0D73AB41809F;
IL2CPP_EXTERN_C String_t* _stringLiteral10FD9642E7ACB04ED69F426A8E578F98FE4B20DD;
IL2CPP_EXTERN_C String_t* _stringLiteral163C3DED22CE392C8A1B4C506AB01BBEB6723CA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1699893850CFEE56496C8D279CA733207A899E92;
IL2CPP_EXTERN_C String_t* _stringLiteral175AF943E8C780500BB6737145BBBE0BA4A35DD3;
IL2CPP_EXTERN_C String_t* _stringLiteral19D47A5312FE25416B96E64DB07299182A488CDD;
IL2CPP_EXTERN_C String_t* _stringLiteral1BAB371171E70FE198F89E69A8E43AE0C36E4601;
IL2CPP_EXTERN_C String_t* _stringLiteral20CE60EA3E450A03EA17B3AA9245E467705D5A19;
IL2CPP_EXTERN_C String_t* _stringLiteral215E7389CFC4724D02E42EABC72E0403D31CF637;
IL2CPP_EXTERN_C String_t* _stringLiteral24E5BF9C3F6A409BBD8886942C11DF531662BE9C;
IL2CPP_EXTERN_C String_t* _stringLiteral26D8CE9FE2015E7788C95222F757DBD0FFCA067A;
IL2CPP_EXTERN_C String_t* _stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA;
IL2CPP_EXTERN_C String_t* _stringLiteral28A2F47C431541E8C6C7DC36FE14CC30D56B13D6;
IL2CPP_EXTERN_C String_t* _stringLiteral2C743C875078F8C0513325ED4E9171AC6D4B4DAE;
IL2CPP_EXTERN_C String_t* _stringLiteral319B80E8ADC4EAB9C7A135DCEFD23ECDB203BFBD;
IL2CPP_EXTERN_C String_t* _stringLiteral32ABEBB1F95BCEB7EA8A0016EAA3C740C514AC8F;
IL2CPP_EXTERN_C String_t* _stringLiteral3351F4504223173C7A5AA816C29AD8A199461EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral35BFDEE211261605558130258CBD2499BD6546D1;
IL2CPP_EXTERN_C String_t* _stringLiteral3A211A45BE5BBF07891D1769619F24F013279182;
IL2CPP_EXTERN_C String_t* _stringLiteral3A46861F502859D61F566A451B736EE48725C754;
IL2CPP_EXTERN_C String_t* _stringLiteral3C7448C7123F21DE7996D5E505FF15795F7E3406;
IL2CPP_EXTERN_C String_t* _stringLiteral4451CD074D52851117B66787CD1C4ED164A359F2;
IL2CPP_EXTERN_C String_t* _stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2E6B73549B8F487C653D431108C7D89FF4514C;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA490CA6A9F70C8AFCBE8CB3CB47F96773F1B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5;
IL2CPP_EXTERN_C String_t* _stringLiteral58AEA0CFCAEBE62F65EEAF7033FF9A7641169066;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8B047C6745895948A00EBAA806CB7C0F1F0954;
IL2CPP_EXTERN_C String_t* _stringLiteral6FC50567C608356789F168FAB22BFF661DEE3513;
IL2CPP_EXTERN_C String_t* _stringLiteral704FBA8309D79E032485BB8BA966C3FCD5614B4E;
IL2CPP_EXTERN_C String_t* _stringLiteral70B5BDCED641CEE45F2FAFA3C0E91AC23A1D8B9A;
IL2CPP_EXTERN_C String_t* _stringLiteral71941A6CD1B2B7C0B750E2D670E2625BB278E19B;
IL2CPP_EXTERN_C String_t* _stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B;
IL2CPP_EXTERN_C String_t* _stringLiteral741151246679D1B14A39D2821A64B26BBAF31827;
IL2CPP_EXTERN_C String_t* _stringLiteral74B6D1787D88E73449E00137F1A1CDDA4737D85A;
IL2CPP_EXTERN_C String_t* _stringLiteral827FB9B81D37440B2A0AD644005CF071D59080D5;
IL2CPP_EXTERN_C String_t* _stringLiteral82F08919641B79AB61608B2AAA086EE79385F70C;
IL2CPP_EXTERN_C String_t* _stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638;
IL2CPP_EXTERN_C String_t* _stringLiteral985A1732EF5F957F008D3779CF47BBF2B21D3798;
IL2CPP_EXTERN_C String_t* _stringLiteral9B3E23BEBC37E841B92530E780C1587A1D04A323;
IL2CPP_EXTERN_C String_t* _stringLiteralA03D2FB83BEF8B66E42EA7EE3FEC45067F5863C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA465E00C713E7E72045D2EFF274E985042DD1E2E;
IL2CPP_EXTERN_C String_t* _stringLiteralA63DD7EB8A588570079DA49C861495FFA1981EC1;
IL2CPP_EXTERN_C String_t* _stringLiteralA772D2D655EFD5780BE5B0CC76ECC49947AA2D43;
IL2CPP_EXTERN_C String_t* _stringLiteralABDBE2717F62037C4CA1A77B2864BC2457804361;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB35DE45BF13FD662B11D547D43F796EC31AFD6B8;
IL2CPP_EXTERN_C String_t* _stringLiteralB646107306B4C954FBAB60DFA719BF11291B7988;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBDB5B65098C5E7E595009BB3FC45594C192D82CD;
IL2CPP_EXTERN_C String_t* _stringLiteralC156D24D9629AA45DAC9B7C975434CCCA93C9CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralC4F83E3BD187DA4E615AE86429BC0A3235C54C53;
IL2CPP_EXTERN_C String_t* _stringLiteralC7C15A7AB70C5E950073A69AB67A6B7C48196F01;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0BC7CA7559FF98833686B7E0FB03B44A717E72;
IL2CPP_EXTERN_C String_t* _stringLiteralD441F6A551BEC4597643C445F810EFB1FBBCB0F5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF0AA069E2ECAA3C78085B48D7771C42F4D451722;
IL2CPP_EXTERN_C String_t* _stringLiteralF662EE1DF2B55F36C4CB700B246D3C4E4661AF3E;
IL2CPP_EXTERN_C String_t* _stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E147DD30C395A3CDE2EF30D1102DF4D8E8D539;
IL2CPP_EXTERN_C String_t* _stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginRead_mDB8D36C5A628AF67BA3DBB2DEAA47D1B72EA784F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginWrite_m60BCB6D0DB8E956A215886844AFC4FFE01DB1E84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_CheckEndXxxxLegalStateAndParams_m52710FAB4DC5960AC18F1C94DEF18350EFB4340C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_CreateDeflater_m2795C21730ED89CCAD525A4C06E23261BBCA2E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndRead_m3F55910F18468161118E274E90AB75C20D5FAE26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndWrite_mBCC4F142534E12A55A9E22A335852D29ED3A6345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EnsureCompressionMode_m37D5D641A319928058CAF8A4D31A5CE4A2C0756D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EnsureDecompressionMode_m88E9CD56FAE981884DD00DED734F419625E39015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_InternalWrite_m05CD0933EEB96A478C210F3D6D6A23D9B76818CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ReadCallback_m6B4FB2EED55D8A81B3893B6C464098C7027F746A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_m3C13C8C37F37F4F40A708E5FE25BA9417B4E6D26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_WriteCallback_mAE4E6DD8C7C94C80468DC69A16DB36CB97B6CDDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_m45B3AABC3B79983617168C2B3D7F1E78333BFF7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_mF13A24A59F741FD84AA4ADDEE5065DF96BF6C6E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_mD66A7332140B1FBB9039D9753DE339423EE5A045_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Position_mAAD627D38010E8F8C5C3026CD2E58796C57FE84F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_mBE577279C88E94999851A16B475C67DBC3236973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipDecoder_ReadHeader_m570C6C2D1B03CABEC5461727C95624A527713D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipDecoder_Validate_mEFD0167620063BAC03E48102E0E3E0104B2A2507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_BeginRead_mBADA14B0AF99415648C993E1E68B7A1A8F80A676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_BeginWrite_mB2A8292656A86B474BC333A63CC670F10000B65B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_EndRead_m194340A50F62AD26F4B59CFA1EB7E821630508E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_EndWrite_m5F266A1E8FE6073C46BC972F2E2BA5CEA50529E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Flush_m59609BA7C3F05F3AAF6CFE31C89DF473F9167554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Read_m7EC01009ADB1833DEF60A38C8CA77AB8916CB56F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Seek_m7E1E16FC59C0B693825C5618D9AEBB27AFA2EFC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Write_mE7D86A45030C126D472E650EFA4D4B5C28295368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Length_mB3A98AAF538090D127621FEC8073941AEB9C0B1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Position_mD5335B565077F139E064F5DDE1EBE31E73B8B8F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Position_mCB961668F4DC8321430B3A67648F8402997C5CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HuffmanTree_CreateTable_mBE682910545502736514AFDD7ECB7BDAC467CF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HuffmanTree_GetNextSymbol_mE02D67A58296F556CE194530DA41109DC2D4441E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Inflater_DecodeBlock_m0623A8A98C73121D1DDB774EA840647DAEDADB93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Inflater_DecodeUncompressedBlock_mC7C7C7FCC629BE7366DDD3231CB03EE6A001D4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Inflater_Decode_mF890E39C3E7F019161CFDDCDE63A3A6AD35B9394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m71744537E77A3127A3BEBE8A52094C27C4305468_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6683C17527BEDE3188C7C85FFCD12BA682275948 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Mapbox.IO.Compression.CopyEncoder
struct CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B  : public RuntimeObject
{
public:

public:
};


// Mapbox.IO.Compression.Crc32Helper
struct Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B  : public RuntimeObject
{
public:

public:
};

struct Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_StaticFields
{
public:
	// System.UInt32[] Mapbox.IO.Compression.Crc32Helper::crcTable
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___crcTable_0;

public:
	inline static int32_t get_offset_of_crcTable_0() { return static_cast<int32_t>(offsetof(Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_StaticFields, ___crcTable_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_crcTable_0() const { return ___crcTable_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_crcTable_0() { return &___crcTable_0; }
	inline void set_crcTable_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___crcTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crcTable_0), (void*)value);
	}
};


// Mapbox.IO.Compression.DeflateInput
struct DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.DeflateInput::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.DeflateInput::count
	int32_t ___count_1;
	// System.Int32 Mapbox.IO.Compression.DeflateInput::startIndex
	int32_t ___startIndex_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F, ___buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_startIndex_2() { return static_cast<int32_t>(offsetof(DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F, ___startIndex_2)); }
	inline int32_t get_startIndex_2() const { return ___startIndex_2; }
	inline int32_t* get_address_of_startIndex_2() { return &___startIndex_2; }
	inline void set_startIndex_2(int32_t value)
	{
		___startIndex_2 = value;
	}
};


// Mapbox.IO.Compression.DeflateStreamAsyncResult
struct DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.DeflateStreamAsyncResult::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::offset
	int32_t ___offset_1;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::count
	int32_t ___count_2;
	// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::isWrite
	bool ___isWrite_3;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncObject
	RuntimeObject * ___m_AsyncObject_4;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncState
	RuntimeObject * ___m_AsyncState_5;
	// System.AsyncCallback Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___m_AsyncCallback_6;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Result
	RuntimeObject * ___m_Result_7;
	// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::m_CompletedSynchronously
	bool ___m_CompletedSynchronously_8;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::m_InvokedCallback
	int32_t ___m_InvokedCallback_9;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Completed
	int32_t ___m_Completed_10;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Event
	RuntimeObject * ___m_Event_11;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_isWrite_3() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___isWrite_3)); }
	inline bool get_isWrite_3() const { return ___isWrite_3; }
	inline bool* get_address_of_isWrite_3() { return &___isWrite_3; }
	inline void set_isWrite_3(bool value)
	{
		___isWrite_3 = value;
	}

	inline static int32_t get_offset_of_m_AsyncObject_4() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___m_AsyncObject_4)); }
	inline RuntimeObject * get_m_AsyncObject_4() const { return ___m_AsyncObject_4; }
	inline RuntimeObject ** get_address_of_m_AsyncObject_4() { return &___m_AsyncObject_4; }
	inline void set_m_AsyncObject_4(RuntimeObject * value)
	{
		___m_AsyncObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AsyncObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AsyncState_5() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___m_AsyncState_5)); }
	inline RuntimeObject * get_m_AsyncState_5() const { return ___m_AsyncState_5; }
	inline RuntimeObject ** get_address_of_m_AsyncState_5() { return &___m_AsyncState_5; }
	inline void set_m_AsyncState_5(RuntimeObject * value)
	{
		___m_AsyncState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AsyncState_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_AsyncCallback_6() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___m_AsyncCallback_6)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_m_AsyncCallback_6() const { return ___m_AsyncCallback_6; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_m_AsyncCallback_6() { return &___m_AsyncCallback_6; }
	inline void set_m_AsyncCallback_6(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___m_AsyncCallback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AsyncCallback_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Result_7() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___m_Result_7)); }
	inline RuntimeObject * get_m_Result_7() const { return ___m_Result_7; }
	inline RuntimeObject ** get_address_of_m_Result_7() { return &___m_Result_7; }
	inline void set_m_Result_7(RuntimeObject * value)
	{
		___m_Result_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Result_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_CompletedSynchronously_8() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___m_CompletedSynchronously_8)); }
	inline bool get_m_CompletedSynchronously_8() const { return ___m_CompletedSynchronously_8; }
	inline bool* get_address_of_m_CompletedSynchronously_8() { return &___m_CompletedSynchronously_8; }
	inline void set_m_CompletedSynchronously_8(bool value)
	{
		___m_CompletedSynchronously_8 = value;
	}

	inline static int32_t get_offset_of_m_InvokedCallback_9() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___m_InvokedCallback_9)); }
	inline int32_t get_m_InvokedCallback_9() const { return ___m_InvokedCallback_9; }
	inline int32_t* get_address_of_m_InvokedCallback_9() { return &___m_InvokedCallback_9; }
	inline void set_m_InvokedCallback_9(int32_t value)
	{
		___m_InvokedCallback_9 = value;
	}

	inline static int32_t get_offset_of_m_Completed_10() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___m_Completed_10)); }
	inline int32_t get_m_Completed_10() const { return ___m_Completed_10; }
	inline int32_t* get_address_of_m_Completed_10() { return &___m_Completed_10; }
	inline void set_m_Completed_10(int32_t value)
	{
		___m_Completed_10 = value;
	}

	inline static int32_t get_offset_of_m_Event_11() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108, ___m_Event_11)); }
	inline RuntimeObject * get_m_Event_11() const { return ___m_Event_11; }
	inline RuntimeObject ** get_address_of_m_Event_11() { return &___m_Event_11; }
	inline void set_m_Event_11(RuntimeObject * value)
	{
		___m_Event_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Event_11), (void*)value);
	}
};


// Mapbox.IO.Compression.FastEncoder
struct FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C  : public RuntimeObject
{
public:
	// Mapbox.IO.Compression.FastEncoderWindow Mapbox.IO.Compression.FastEncoder::inputWindow
	FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * ___inputWindow_0;
	// Mapbox.IO.Compression.Match Mapbox.IO.Compression.FastEncoder::currentMatch
	Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * ___currentMatch_1;
	// System.Double Mapbox.IO.Compression.FastEncoder::lastCompressionRatio
	double ___lastCompressionRatio_2;

public:
	inline static int32_t get_offset_of_inputWindow_0() { return static_cast<int32_t>(offsetof(FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C, ___inputWindow_0)); }
	inline FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * get_inputWindow_0() const { return ___inputWindow_0; }
	inline FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC ** get_address_of_inputWindow_0() { return &___inputWindow_0; }
	inline void set_inputWindow_0(FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * value)
	{
		___inputWindow_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputWindow_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentMatch_1() { return static_cast<int32_t>(offsetof(FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C, ___currentMatch_1)); }
	inline Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * get_currentMatch_1() const { return ___currentMatch_1; }
	inline Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF ** get_address_of_currentMatch_1() { return &___currentMatch_1; }
	inline void set_currentMatch_1(Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * value)
	{
		___currentMatch_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMatch_1), (void*)value);
	}

	inline static int32_t get_offset_of_lastCompressionRatio_2() { return static_cast<int32_t>(offsetof(FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C, ___lastCompressionRatio_2)); }
	inline double get_lastCompressionRatio_2() const { return ___lastCompressionRatio_2; }
	inline double* get_address_of_lastCompressionRatio_2() { return &___lastCompressionRatio_2; }
	inline void set_lastCompressionRatio_2(double value)
	{
		___lastCompressionRatio_2 = value;
	}
};


// Mapbox.IO.Compression.FastEncoderStatics
struct FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968  : public RuntimeObject
{
public:

public:
};

struct FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields
{
public:
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::FastEncoderTreeStructureData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___FastEncoderTreeStructureData_0;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::BFinalFastEncoderTreeStructureData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___BFinalFastEncoderTreeStructureData_1;
	// System.UInt32[] Mapbox.IO.Compression.FastEncoderStatics::FastEncoderLiteralCodeInfo
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___FastEncoderLiteralCodeInfo_2;
	// System.UInt32[] Mapbox.IO.Compression.FastEncoderStatics::FastEncoderDistanceCodeInfo
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___FastEncoderDistanceCodeInfo_3;
	// System.UInt32[] Mapbox.IO.Compression.FastEncoderStatics::BitMask
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___BitMask_4;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::ExtraLengthBits
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ExtraLengthBits_5;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::ExtraDistanceBits
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ExtraDistanceBits_6;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::distLookup
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___distLookup_7;

public:
	inline static int32_t get_offset_of_FastEncoderTreeStructureData_0() { return static_cast<int32_t>(offsetof(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields, ___FastEncoderTreeStructureData_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_FastEncoderTreeStructureData_0() const { return ___FastEncoderTreeStructureData_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_FastEncoderTreeStructureData_0() { return &___FastEncoderTreeStructureData_0; }
	inline void set_FastEncoderTreeStructureData_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___FastEncoderTreeStructureData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FastEncoderTreeStructureData_0), (void*)value);
	}

	inline static int32_t get_offset_of_BFinalFastEncoderTreeStructureData_1() { return static_cast<int32_t>(offsetof(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields, ___BFinalFastEncoderTreeStructureData_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_BFinalFastEncoderTreeStructureData_1() const { return ___BFinalFastEncoderTreeStructureData_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_BFinalFastEncoderTreeStructureData_1() { return &___BFinalFastEncoderTreeStructureData_1; }
	inline void set_BFinalFastEncoderTreeStructureData_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___BFinalFastEncoderTreeStructureData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BFinalFastEncoderTreeStructureData_1), (void*)value);
	}

	inline static int32_t get_offset_of_FastEncoderLiteralCodeInfo_2() { return static_cast<int32_t>(offsetof(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields, ___FastEncoderLiteralCodeInfo_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_FastEncoderLiteralCodeInfo_2() const { return ___FastEncoderLiteralCodeInfo_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_FastEncoderLiteralCodeInfo_2() { return &___FastEncoderLiteralCodeInfo_2; }
	inline void set_FastEncoderLiteralCodeInfo_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___FastEncoderLiteralCodeInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FastEncoderLiteralCodeInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of_FastEncoderDistanceCodeInfo_3() { return static_cast<int32_t>(offsetof(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields, ___FastEncoderDistanceCodeInfo_3)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_FastEncoderDistanceCodeInfo_3() const { return ___FastEncoderDistanceCodeInfo_3; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_FastEncoderDistanceCodeInfo_3() { return &___FastEncoderDistanceCodeInfo_3; }
	inline void set_FastEncoderDistanceCodeInfo_3(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___FastEncoderDistanceCodeInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FastEncoderDistanceCodeInfo_3), (void*)value);
	}

	inline static int32_t get_offset_of_BitMask_4() { return static_cast<int32_t>(offsetof(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields, ___BitMask_4)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_BitMask_4() const { return ___BitMask_4; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_BitMask_4() { return &___BitMask_4; }
	inline void set_BitMask_4(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___BitMask_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BitMask_4), (void*)value);
	}

	inline static int32_t get_offset_of_ExtraLengthBits_5() { return static_cast<int32_t>(offsetof(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields, ___ExtraLengthBits_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ExtraLengthBits_5() const { return ___ExtraLengthBits_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ExtraLengthBits_5() { return &___ExtraLengthBits_5; }
	inline void set_ExtraLengthBits_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ExtraLengthBits_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtraLengthBits_5), (void*)value);
	}

	inline static int32_t get_offset_of_ExtraDistanceBits_6() { return static_cast<int32_t>(offsetof(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields, ___ExtraDistanceBits_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ExtraDistanceBits_6() const { return ___ExtraDistanceBits_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ExtraDistanceBits_6() { return &___ExtraDistanceBits_6; }
	inline void set_ExtraDistanceBits_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ExtraDistanceBits_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtraDistanceBits_6), (void*)value);
	}

	inline static int32_t get_offset_of_distLookup_7() { return static_cast<int32_t>(offsetof(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields, ___distLookup_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_distLookup_7() const { return ___distLookup_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_distLookup_7() { return &___distLookup_7; }
	inline void set_distLookup_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___distLookup_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distLookup_7), (void*)value);
	}
};


// Mapbox.IO.Compression.FastEncoderWindow
struct FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.FastEncoderWindow::window
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___window_0;
	// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::bufPos
	int32_t ___bufPos_1;
	// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::bufEnd
	int32_t ___bufEnd_2;
	// System.UInt16[] Mapbox.IO.Compression.FastEncoderWindow::prev
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___prev_3;
	// System.UInt16[] Mapbox.IO.Compression.FastEncoderWindow::lookup
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___lookup_4;

public:
	inline static int32_t get_offset_of_window_0() { return static_cast<int32_t>(offsetof(FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC, ___window_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_window_0() const { return ___window_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_window_0() { return &___window_0; }
	inline void set_window_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___window_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_0), (void*)value);
	}

	inline static int32_t get_offset_of_bufPos_1() { return static_cast<int32_t>(offsetof(FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC, ___bufPos_1)); }
	inline int32_t get_bufPos_1() const { return ___bufPos_1; }
	inline int32_t* get_address_of_bufPos_1() { return &___bufPos_1; }
	inline void set_bufPos_1(int32_t value)
	{
		___bufPos_1 = value;
	}

	inline static int32_t get_offset_of_bufEnd_2() { return static_cast<int32_t>(offsetof(FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC, ___bufEnd_2)); }
	inline int32_t get_bufEnd_2() const { return ___bufEnd_2; }
	inline int32_t* get_address_of_bufEnd_2() { return &___bufEnd_2; }
	inline void set_bufEnd_2(int32_t value)
	{
		___bufEnd_2 = value;
	}

	inline static int32_t get_offset_of_prev_3() { return static_cast<int32_t>(offsetof(FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC, ___prev_3)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_prev_3() const { return ___prev_3; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_prev_3() { return &___prev_3; }
	inline void set_prev_3(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___prev_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_3), (void*)value);
	}

	inline static int32_t get_offset_of_lookup_4() { return static_cast<int32_t>(offsetof(FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC, ___lookup_4)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_lookup_4() const { return ___lookup_4; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_lookup_4() { return &___lookup_4; }
	inline void set_lookup_4(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___lookup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookup_4), (void*)value);
	}
};


// Mapbox.IO.Compression.GZipFormatter
struct GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.GZipFormatter::headerBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headerBytes_0;
	// System.UInt32 Mapbox.IO.Compression.GZipFormatter::_crc32
	uint32_t ____crc32_1;
	// System.Int64 Mapbox.IO.Compression.GZipFormatter::_inputStreamSizeModulo
	int64_t ____inputStreamSizeModulo_2;

public:
	inline static int32_t get_offset_of_headerBytes_0() { return static_cast<int32_t>(offsetof(GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE, ___headerBytes_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_headerBytes_0() const { return ___headerBytes_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_headerBytes_0() { return &___headerBytes_0; }
	inline void set_headerBytes_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___headerBytes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerBytes_0), (void*)value);
	}

	inline static int32_t get_offset_of__crc32_1() { return static_cast<int32_t>(offsetof(GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE, ____crc32_1)); }
	inline uint32_t get__crc32_1() const { return ____crc32_1; }
	inline uint32_t* get_address_of__crc32_1() { return &____crc32_1; }
	inline void set__crc32_1(uint32_t value)
	{
		____crc32_1 = value;
	}

	inline static int32_t get_offset_of__inputStreamSizeModulo_2() { return static_cast<int32_t>(offsetof(GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE, ____inputStreamSizeModulo_2)); }
	inline int64_t get__inputStreamSizeModulo_2() const { return ____inputStreamSizeModulo_2; }
	inline int64_t* get_address_of__inputStreamSizeModulo_2() { return &____inputStreamSizeModulo_2; }
	inline void set__inputStreamSizeModulo_2(int64_t value)
	{
		____inputStreamSizeModulo_2 = value;
	}
};


// Mapbox.IO.Compression.HuffmanTree
struct HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.IO.Compression.HuffmanTree::tableBits
	int32_t ___tableBits_0;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::table
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___table_1;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::left
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___left_2;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::right
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___right_3;
	// System.Byte[] Mapbox.IO.Compression.HuffmanTree::codeLengthArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___codeLengthArray_4;
	// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::codeArrayDebug
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___codeArrayDebug_5;
	// System.Int32 Mapbox.IO.Compression.HuffmanTree::tableMask
	int32_t ___tableMask_6;

public:
	inline static int32_t get_offset_of_tableBits_0() { return static_cast<int32_t>(offsetof(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B, ___tableBits_0)); }
	inline int32_t get_tableBits_0() const { return ___tableBits_0; }
	inline int32_t* get_address_of_tableBits_0() { return &___tableBits_0; }
	inline void set_tableBits_0(int32_t value)
	{
		___tableBits_0 = value;
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B, ___table_1)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_table_1() const { return ___table_1; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_1), (void*)value);
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B, ___left_2)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_left_2() const { return ___left_2; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___left_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___left_2), (void*)value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B, ___right_3)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_right_3() const { return ___right_3; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___right_3), (void*)value);
	}

	inline static int32_t get_offset_of_codeLengthArray_4() { return static_cast<int32_t>(offsetof(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B, ___codeLengthArray_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_codeLengthArray_4() const { return ___codeLengthArray_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_codeLengthArray_4() { return &___codeLengthArray_4; }
	inline void set_codeLengthArray_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___codeLengthArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codeLengthArray_4), (void*)value);
	}

	inline static int32_t get_offset_of_codeArrayDebug_5() { return static_cast<int32_t>(offsetof(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B, ___codeArrayDebug_5)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_codeArrayDebug_5() const { return ___codeArrayDebug_5; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_codeArrayDebug_5() { return &___codeArrayDebug_5; }
	inline void set_codeArrayDebug_5(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___codeArrayDebug_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codeArrayDebug_5), (void*)value);
	}

	inline static int32_t get_offset_of_tableMask_6() { return static_cast<int32_t>(offsetof(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B, ___tableMask_6)); }
	inline int32_t get_tableMask_6() const { return ___tableMask_6; }
	inline int32_t* get_address_of_tableMask_6() { return &___tableMask_6; }
	inline void set_tableMask_6(int32_t value)
	{
		___tableMask_6 = value;
	}
};

struct HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_StaticFields
{
public:
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::staticLiteralLengthTree
	HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * ___staticLiteralLengthTree_7;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::staticDistanceTree
	HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * ___staticDistanceTree_8;

public:
	inline static int32_t get_offset_of_staticLiteralLengthTree_7() { return static_cast<int32_t>(offsetof(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_StaticFields, ___staticLiteralLengthTree_7)); }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * get_staticLiteralLengthTree_7() const { return ___staticLiteralLengthTree_7; }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B ** get_address_of_staticLiteralLengthTree_7() { return &___staticLiteralLengthTree_7; }
	inline void set_staticLiteralLengthTree_7(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * value)
	{
		___staticLiteralLengthTree_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticLiteralLengthTree_7), (void*)value);
	}

	inline static int32_t get_offset_of_staticDistanceTree_8() { return static_cast<int32_t>(offsetof(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_StaticFields, ___staticDistanceTree_8)); }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * get_staticDistanceTree_8() const { return ___staticDistanceTree_8; }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B ** get_address_of_staticDistanceTree_8() { return &___staticDistanceTree_8; }
	inline void set_staticDistanceTree_8(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * value)
	{
		___staticDistanceTree_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticDistanceTree_8), (void*)value);
	}
};


// Mapbox.IO.Compression.InputBuffer
struct InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.InputBuffer::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::start
	int32_t ___start_1;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::end
	int32_t ___end_2;
	// System.UInt32 Mapbox.IO.Compression.InputBuffer::bitBuffer
	uint32_t ___bitBuffer_3;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::bitsInBuffer
	int32_t ___bitsInBuffer_4;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A, ___buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A, ___start_1)); }
	inline int32_t get_start_1() const { return ___start_1; }
	inline int32_t* get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(int32_t value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_end_2() { return static_cast<int32_t>(offsetof(InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A, ___end_2)); }
	inline int32_t get_end_2() const { return ___end_2; }
	inline int32_t* get_address_of_end_2() { return &___end_2; }
	inline void set_end_2(int32_t value)
	{
		___end_2 = value;
	}

	inline static int32_t get_offset_of_bitBuffer_3() { return static_cast<int32_t>(offsetof(InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A, ___bitBuffer_3)); }
	inline uint32_t get_bitBuffer_3() const { return ___bitBuffer_3; }
	inline uint32_t* get_address_of_bitBuffer_3() { return &___bitBuffer_3; }
	inline void set_bitBuffer_3(uint32_t value)
	{
		___bitBuffer_3 = value;
	}

	inline static int32_t get_offset_of_bitsInBuffer_4() { return static_cast<int32_t>(offsetof(InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A, ___bitsInBuffer_4)); }
	inline int32_t get_bitsInBuffer_4() const { return ___bitsInBuffer_4; }
	inline int32_t* get_address_of_bitsInBuffer_4() { return &___bitsInBuffer_4; }
	inline void set_bitsInBuffer_4(int32_t value)
	{
		___bitsInBuffer_4 = value;
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

// Mapbox.IO.Compression.OutputBuffer
struct OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.OutputBuffer::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_0;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer::pos
	int32_t ___pos_1;
	// System.UInt32 Mapbox.IO.Compression.OutputBuffer::bitBuf
	uint32_t ___bitBuf_2;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer::bitCount
	int32_t ___bitCount_3;

public:
	inline static int32_t get_offset_of_byteBuffer_0() { return static_cast<int32_t>(offsetof(OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58, ___byteBuffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_0() const { return ___byteBuffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_0() { return &___byteBuffer_0; }
	inline void set_byteBuffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_bitBuf_2() { return static_cast<int32_t>(offsetof(OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58, ___bitBuf_2)); }
	inline uint32_t get_bitBuf_2() const { return ___bitBuf_2; }
	inline uint32_t* get_address_of_bitBuf_2() { return &___bitBuf_2; }
	inline void set_bitBuf_2(uint32_t value)
	{
		___bitBuf_2 = value;
	}

	inline static int32_t get_offset_of_bitCount_3() { return static_cast<int32_t>(offsetof(OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58, ___bitCount_3)); }
	inline int32_t get_bitCount_3() const { return ___bitCount_3; }
	inline int32_t* get_address_of_bitCount_3() { return &___bitCount_3; }
	inline void set_bitCount_3(int32_t value)
	{
		___bitCount_3 = value;
	}
};


// Mapbox.IO.Compression.OutputWindow
struct OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.OutputWindow::window
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___window_0;
	// System.Int32 Mapbox.IO.Compression.OutputWindow::end
	int32_t ___end_1;
	// System.Int32 Mapbox.IO.Compression.OutputWindow::bytesUsed
	int32_t ___bytesUsed_2;

public:
	inline static int32_t get_offset_of_window_0() { return static_cast<int32_t>(offsetof(OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49, ___window_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_window_0() const { return ___window_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_window_0() { return &___window_0; }
	inline void set_window_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___window_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_0), (void*)value);
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49, ___end_1)); }
	inline int32_t get_end_1() const { return ___end_1; }
	inline int32_t* get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(int32_t value)
	{
		___end_1 = value;
	}

	inline static int32_t get_offset_of_bytesUsed_2() { return static_cast<int32_t>(offsetof(OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49, ___bytesUsed_2)); }
	inline int32_t get_bytesUsed_2() const { return ___bytesUsed_2; }
	inline int32_t* get_address_of_bytesUsed_2() { return &___bytesUsed_2; }
	inline void set_bytesUsed_2(int32_t value)
	{
		___bytesUsed_2 = value;
	}
};


// Mapbox.IO.Compression.SR
struct SR_t75925AC02F1979AB906E0CF240BC90EF6971C137  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t670C39EA4F96A2699907CC3EBFBFF6D546BE64B4 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t670C39EA4F96A2699907CC3EBFBFF6D546BE64B4__padding[10];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_t57A7542E538CD95980C3B7E3E4BFA6DC3CD613D0 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_t57A7542E538CD95980C3B7E3E4BFA6DC3CD613D0__padding[1024];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116
struct __StaticArrayInitTypeSizeU3D116_t5806A416D63D5F31B9152113C276F364131AECB8 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_t5806A416D63D5F31B9152113C276F364131AECB8__padding[116];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F__padding[128];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19
struct __StaticArrayInitTypeSizeU3D19_tCFBD069EB391BFA210B43BF540F00113A6F4C61B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D19_tCFBD069EB391BFA210B43BF540F00113A6F4C61B__padding[19];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2052
struct __StaticArrayInitTypeSizeU3D2052_t4430DF91B4BD96D654515AAB7A2986D27F52945B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2052_t4430DF91B4BD96D654515AAB7A2986D27F52945B__padding[2052];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=29
struct __StaticArrayInitTypeSizeU3D29_t1BBF3B02D8119D0772672B4404D7C5D9FA5CA56F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D29_t1BBF3B02D8119D0772672B4404D7C5D9FA5CA56F__padding[29];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD__padding[32];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t04CE82B21DC2F6A2516EE39865D35F3F008F19E2 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t04CE82B21DC2F6A2516EE39865D35F3F008F19E2__padding[64];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98
struct __StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253__padding[98];
	};

public:
};


// Mapbox.IO.Compression.DeflateInput/InputState
struct InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB 
{
public:
	// System.Int32 Mapbox.IO.Compression.DeflateInput/InputState::count
	int32_t ___count_0;
	// System.Int32 Mapbox.IO.Compression.DeflateInput/InputState::startIndex
	int32_t ___startIndex_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_startIndex_1() { return static_cast<int32_t>(offsetof(InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB, ___startIndex_1)); }
	inline int32_t get_startIndex_1() const { return ___startIndex_1; }
	inline int32_t* get_address_of_startIndex_1() { return &___startIndex_1; }
	inline void set_startIndex_1(int32_t value)
	{
		___startIndex_1 = value;
	}
};


// Mapbox.IO.Compression.OutputBuffer/BufferState
struct BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485 
{
public:
	// System.Int32 Mapbox.IO.Compression.OutputBuffer/BufferState::pos
	int32_t ___pos_0;
	// System.UInt32 Mapbox.IO.Compression.OutputBuffer/BufferState::bitBuf
	uint32_t ___bitBuf_1;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer/BufferState::bitCount
	int32_t ___bitCount_2;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485, ___pos_0)); }
	inline int32_t get_pos_0() const { return ___pos_0; }
	inline int32_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(int32_t value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_bitBuf_1() { return static_cast<int32_t>(offsetof(BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485, ___bitBuf_1)); }
	inline uint32_t get_bitBuf_1() const { return ___bitBuf_1; }
	inline uint32_t* get_address_of_bitBuf_1() { return &___bitBuf_1; }
	inline void set_bitBuf_1(uint32_t value)
	{
		___bitBuf_1 = value;
	}

	inline static int32_t get_offset_of_bitCount_2() { return static_cast<int32_t>(offsetof(BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485, ___bitCount_2)); }
	inline int32_t get_bitCount_2() const { return ___bitCount_2; }
	inline int32_t* get_address_of_bitCount_2() { return &___bitCount_2; }
	inline void set_bitCount_2(int32_t value)
	{
		___bitCount_2 = value;
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2492606636F4A4666E0D617B51116A5A68539881
	__StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD  ___2492606636F4A4666E0D617B51116A5A68539881_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=29 <PrivateImplementationDetails>::2DAF59AD82CBE58E893B0C025E68180B6C4037B4
	__StaticArrayInitTypeSizeU3D29_t1BBF3B02D8119D0772672B4404D7C5D9FA5CA56F  ___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98 <PrivateImplementationDetails>::345AD00C4B31ADE2765BCF63BC137F7F7E6819B8
	__StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253  ___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::373B494F210C656134C5728D551D4C97B013EB33
	__StaticArrayInitTypeSizeU3D1024_t57A7542E538CD95980C3B7E3E4BFA6DC3CD613D0  ___373B494F210C656134C5728D551D4C97B013EB33_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98 <PrivateImplementationDetails>::5001D1286D6CE39FFA3E67C66D5D68A487F49D0D
	__StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253  ___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::6A94F0C3DCA389344CEDB99F171FA1E092E842E6
	__StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F  ___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6
	__StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD  ___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::8ED4E99B936B26A09EDFAB9E336CF75F4913B454
	__StaticArrayInitTypeSizeU3D64_t04CE82B21DC2F6A2516EE39865D35F3F008F19E2  ___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19 <PrivateImplementationDetails>::9F8365E9D6C62D3B47026EC465B05A7B5526B5CD
	__StaticArrayInitTypeSizeU3D19_tCFBD069EB391BFA210B43BF540F00113A6F4C61B  ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2052 <PrivateImplementationDetails>::C0C10EC6AF4A4101F894B153E1CD493ADC01A67F
	__StaticArrayInitTypeSizeU3D2052_t4430DF91B4BD96D654515AAB7A2986D27F52945B  ___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::C31FD54E9E8CFB2BC8835475B92A0D179827B581
	__StaticArrayInitTypeSizeU3D10_t670C39EA4F96A2699907CC3EBFBFF6D546BE64B4  ___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF
	__StaticArrayInitTypeSizeU3D116_t5806A416D63D5F31B9152113C276F364131AECB8  ___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::FD5BE77C4372533D7C16BF67D58A3ABBE604ED81
	__StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F  ___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12;

public:
	inline static int32_t get_offset_of_U32492606636F4A4666E0D617B51116A5A68539881_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___2492606636F4A4666E0D617B51116A5A68539881_0)); }
	inline __StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD  get_U32492606636F4A4666E0D617B51116A5A68539881_0() const { return ___2492606636F4A4666E0D617B51116A5A68539881_0; }
	inline __StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD * get_address_of_U32492606636F4A4666E0D617B51116A5A68539881_0() { return &___2492606636F4A4666E0D617B51116A5A68539881_0; }
	inline void set_U32492606636F4A4666E0D617B51116A5A68539881_0(__StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD  value)
	{
		___2492606636F4A4666E0D617B51116A5A68539881_0 = value;
	}

	inline static int32_t get_offset_of_U32DAF59AD82CBE58E893B0C025E68180B6C4037B4_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1)); }
	inline __StaticArrayInitTypeSizeU3D29_t1BBF3B02D8119D0772672B4404D7C5D9FA5CA56F  get_U32DAF59AD82CBE58E893B0C025E68180B6C4037B4_1() const { return ___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1; }
	inline __StaticArrayInitTypeSizeU3D29_t1BBF3B02D8119D0772672B4404D7C5D9FA5CA56F * get_address_of_U32DAF59AD82CBE58E893B0C025E68180B6C4037B4_1() { return &___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1; }
	inline void set_U32DAF59AD82CBE58E893B0C025E68180B6C4037B4_1(__StaticArrayInitTypeSizeU3D29_t1BBF3B02D8119D0772672B4404D7C5D9FA5CA56F  value)
	{
		___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1 = value;
	}

	inline static int32_t get_offset_of_U3345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2)); }
	inline __StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253  get_U3345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2() const { return ___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2; }
	inline __StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253 * get_address_of_U3345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2() { return &___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2; }
	inline void set_U3345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2(__StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253  value)
	{
		___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2 = value;
	}

	inline static int32_t get_offset_of_U3373B494F210C656134C5728D551D4C97B013EB33_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___373B494F210C656134C5728D551D4C97B013EB33_3)); }
	inline __StaticArrayInitTypeSizeU3D1024_t57A7542E538CD95980C3B7E3E4BFA6DC3CD613D0  get_U3373B494F210C656134C5728D551D4C97B013EB33_3() const { return ___373B494F210C656134C5728D551D4C97B013EB33_3; }
	inline __StaticArrayInitTypeSizeU3D1024_t57A7542E538CD95980C3B7E3E4BFA6DC3CD613D0 * get_address_of_U3373B494F210C656134C5728D551D4C97B013EB33_3() { return &___373B494F210C656134C5728D551D4C97B013EB33_3; }
	inline void set_U3373B494F210C656134C5728D551D4C97B013EB33_3(__StaticArrayInitTypeSizeU3D1024_t57A7542E538CD95980C3B7E3E4BFA6DC3CD613D0  value)
	{
		___373B494F210C656134C5728D551D4C97B013EB33_3 = value;
	}

	inline static int32_t get_offset_of_U35001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4)); }
	inline __StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253  get_U35001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4() const { return ___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4; }
	inline __StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253 * get_address_of_U35001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4() { return &___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4; }
	inline void set_U35001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4(__StaticArrayInitTypeSizeU3D98_tB989604DADB39FDF37642CAD7AE6C145060E9253  value)
	{
		___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4 = value;
	}

	inline static int32_t get_offset_of_U36A94F0C3DCA389344CEDB99F171FA1E092E842E6_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5)); }
	inline __StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F  get_U36A94F0C3DCA389344CEDB99F171FA1E092E842E6_5() const { return ___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5; }
	inline __StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F * get_address_of_U36A94F0C3DCA389344CEDB99F171FA1E092E842E6_5() { return &___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5; }
	inline void set_U36A94F0C3DCA389344CEDB99F171FA1E092E842E6_5(__StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F  value)
	{
		___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5 = value;
	}

	inline static int32_t get_offset_of_U3794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6)); }
	inline __StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD  get_U3794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6() const { return ___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6; }
	inline __StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD * get_address_of_U3794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6() { return &___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6; }
	inline void set_U3794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6(__StaticArrayInitTypeSizeU3D32_t7D298A0B41FED89B4F17342984B34A26CDD1E6AD  value)
	{
		___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6 = value;
	}

	inline static int32_t get_offset_of_U38ED4E99B936B26A09EDFAB9E336CF75F4913B454_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7)); }
	inline __StaticArrayInitTypeSizeU3D64_t04CE82B21DC2F6A2516EE39865D35F3F008F19E2  get_U38ED4E99B936B26A09EDFAB9E336CF75F4913B454_7() const { return ___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7; }
	inline __StaticArrayInitTypeSizeU3D64_t04CE82B21DC2F6A2516EE39865D35F3F008F19E2 * get_address_of_U38ED4E99B936B26A09EDFAB9E336CF75F4913B454_7() { return &___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7; }
	inline void set_U38ED4E99B936B26A09EDFAB9E336CF75F4913B454_7(__StaticArrayInitTypeSizeU3D64_t04CE82B21DC2F6A2516EE39865D35F3F008F19E2  value)
	{
		___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7 = value;
	}

	inline static int32_t get_offset_of_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8)); }
	inline __StaticArrayInitTypeSizeU3D19_tCFBD069EB391BFA210B43BF540F00113A6F4C61B  get_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8() const { return ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8; }
	inline __StaticArrayInitTypeSizeU3D19_tCFBD069EB391BFA210B43BF540F00113A6F4C61B * get_address_of_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8() { return &___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8; }
	inline void set_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8(__StaticArrayInitTypeSizeU3D19_tCFBD069EB391BFA210B43BF540F00113A6F4C61B  value)
	{
		___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8 = value;
	}

	inline static int32_t get_offset_of_C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9)); }
	inline __StaticArrayInitTypeSizeU3D2052_t4430DF91B4BD96D654515AAB7A2986D27F52945B  get_C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9() const { return ___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9; }
	inline __StaticArrayInitTypeSizeU3D2052_t4430DF91B4BD96D654515AAB7A2986D27F52945B * get_address_of_C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9() { return &___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9; }
	inline void set_C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9(__StaticArrayInitTypeSizeU3D2052_t4430DF91B4BD96D654515AAB7A2986D27F52945B  value)
	{
		___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9 = value;
	}

	inline static int32_t get_offset_of_C31FD54E9E8CFB2BC8835475B92A0D179827B581_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10)); }
	inline __StaticArrayInitTypeSizeU3D10_t670C39EA4F96A2699907CC3EBFBFF6D546BE64B4  get_C31FD54E9E8CFB2BC8835475B92A0D179827B581_10() const { return ___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10; }
	inline __StaticArrayInitTypeSizeU3D10_t670C39EA4F96A2699907CC3EBFBFF6D546BE64B4 * get_address_of_C31FD54E9E8CFB2BC8835475B92A0D179827B581_10() { return &___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10; }
	inline void set_C31FD54E9E8CFB2BC8835475B92A0D179827B581_10(__StaticArrayInitTypeSizeU3D10_t670C39EA4F96A2699907CC3EBFBFF6D546BE64B4  value)
	{
		___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10 = value;
	}

	inline static int32_t get_offset_of_D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11)); }
	inline __StaticArrayInitTypeSizeU3D116_t5806A416D63D5F31B9152113C276F364131AECB8  get_D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11() const { return ___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11; }
	inline __StaticArrayInitTypeSizeU3D116_t5806A416D63D5F31B9152113C276F364131AECB8 * get_address_of_D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11() { return &___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11; }
	inline void set_D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11(__StaticArrayInitTypeSizeU3D116_t5806A416D63D5F31B9152113C276F364131AECB8  value)
	{
		___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11 = value;
	}

	inline static int32_t get_offset_of_FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E_StaticFields, ___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12)); }
	inline __StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F  get_FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12() const { return ___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12; }
	inline __StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F * get_address_of_FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12() { return &___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12; }
	inline void set_FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12(__StaticArrayInitTypeSizeU3D128_tE89604E158FE00CD29475B6508B9460B6488EF0F  value)
	{
		___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12 = value;
	}
};


// Mapbox.IO.Compression.BlockType
struct BlockType_t561B1E147AA36A579F9C6706B92B0D46341E3829 
{
public:
	// System.Int32 Mapbox.IO.Compression.BlockType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlockType_t561B1E147AA36A579F9C6706B92B0D46341E3829, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.IO.Compression.CompressionLevel
struct CompressionLevel_t5081FD9E1AB6CACA8CA94477F5F60FC040BB1DE4 
{
public:
	// System.Int32 Mapbox.IO.Compression.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_t5081FD9E1AB6CACA8CA94477F5F60FC040BB1DE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.IO.Compression.CompressionMode
struct CompressionMode_t8395FE29DC5284609069B80E45C96DD5504EC2EB 
{
public:
	// System.Int32 Mapbox.IO.Compression.CompressionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMode_t8395FE29DC5284609069B80E45C96DD5504EC2EB, ___value___2)); }
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

// Mapbox.IO.Compression.GZipStream
struct GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// Mapbox.IO.Compression.DeflateStream Mapbox.IO.Compression.GZipStream::deflateStream
	DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * ___deflateStream_5;

public:
	inline static int32_t get_offset_of_deflateStream_5() { return static_cast<int32_t>(offsetof(GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC, ___deflateStream_5)); }
	inline DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * get_deflateStream_5() const { return ___deflateStream_5; }
	inline DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 ** get_address_of_deflateStream_5() { return &___deflateStream_5; }
	inline void set_deflateStream_5(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * value)
	{
		___deflateStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deflateStream_5), (void*)value);
	}
};


// Mapbox.IO.Compression.InflaterState
struct InflaterState_t9FD4FB01DC159C9DF8064E93E32AA1A5635B27C3 
{
public:
	// System.Int32 Mapbox.IO.Compression.InflaterState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InflaterState_t9FD4FB01DC159C9DF8064E93E32AA1A5635B27C3, ___value___2)); }
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


// MatchState
struct MatchState_tB6F1A1A29527CE56FBDFA68167799D5B8CB0A713 
{
public:
	// System.Int32 MatchState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchState_tB6F1A1A29527CE56FBDFA68167799D5B8CB0A713, ___value___2)); }
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


// System.IO.SeekOrigin
struct SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
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

// Mapbox.IO.Compression.DeflateStream/WorkerType
struct WorkerType_t79C07F3492DB4D639DECB8491AB4ED69E0DE3730 
{
public:
	// System.Byte Mapbox.IO.Compression.DeflateStream/WorkerType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorkerType_t79C07F3492DB4D639DECB8491AB4ED69E0DE3730, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.IO.Compression.DeflaterManaged/DeflaterState
struct DeflaterState_t5F48BA92088CA0EA39C4FEA4075EC9A4C3B456CA 
{
public:
	// System.Int32 Mapbox.IO.Compression.DeflaterManaged/DeflaterState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeflaterState_t5F48BA92088CA0EA39C4FEA4075EC9A4C3B456CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState
struct GzipHeaderState_t7E7996BBE8B63BBEDA495DAE31375DE81F0F62A4 
{
public:
	// System.Int32 Mapbox.IO.Compression.GZipDecoder/GzipHeaderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GzipHeaderState_t7E7996BBE8B63BBEDA495DAE31375DE81F0F62A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>
struct Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Mapbox.IO.Compression.DeflateStream
struct DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Stream Mapbox.IO.Compression.DeflateStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_5;
	// Mapbox.IO.Compression.CompressionMode Mapbox.IO.Compression.DeflateStream::_mode
	int32_t ____mode_6;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::_leaveOpen
	bool ____leaveOpen_7;
	// Mapbox.IO.Compression.Inflater Mapbox.IO.Compression.DeflateStream::inflater
	Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * ___inflater_8;
	// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::deflater
	RuntimeObject* ___deflater_9;
	// System.Byte[] Mapbox.IO.Compression.DeflateStream::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_10;
	// System.Int32 Mapbox.IO.Compression.DeflateStream::asyncOperations
	int32_t ___asyncOperations_11;
	// System.AsyncCallback Mapbox.IO.Compression.DeflateStream::m_CallBack
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___m_CallBack_12;
	// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate Mapbox.IO.Compression.DeflateStream::m_AsyncWriterDelegate
	AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * ___m_AsyncWriterDelegate_13;
	// Mapbox.IO.Compression.IFileFormatWriter Mapbox.IO.Compression.DeflateStream::formatWriter
	RuntimeObject* ___formatWriter_14;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::wroteHeader
	bool ___wroteHeader_15;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::wroteBytes
	bool ___wroteBytes_16;

public:
	inline static int32_t get_offset_of__stream_5() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ____stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_5() const { return ____stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_5() { return &____stream_5; }
	inline void set__stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_5), (void*)value);
	}

	inline static int32_t get_offset_of__mode_6() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ____mode_6)); }
	inline int32_t get__mode_6() const { return ____mode_6; }
	inline int32_t* get_address_of__mode_6() { return &____mode_6; }
	inline void set__mode_6(int32_t value)
	{
		____mode_6 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_7() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ____leaveOpen_7)); }
	inline bool get__leaveOpen_7() const { return ____leaveOpen_7; }
	inline bool* get_address_of__leaveOpen_7() { return &____leaveOpen_7; }
	inline void set__leaveOpen_7(bool value)
	{
		____leaveOpen_7 = value;
	}

	inline static int32_t get_offset_of_inflater_8() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ___inflater_8)); }
	inline Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * get_inflater_8() const { return ___inflater_8; }
	inline Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 ** get_address_of_inflater_8() { return &___inflater_8; }
	inline void set_inflater_8(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * value)
	{
		___inflater_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inflater_8), (void*)value);
	}

	inline static int32_t get_offset_of_deflater_9() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ___deflater_9)); }
	inline RuntimeObject* get_deflater_9() const { return ___deflater_9; }
	inline RuntimeObject** get_address_of_deflater_9() { return &___deflater_9; }
	inline void set_deflater_9(RuntimeObject* value)
	{
		___deflater_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deflater_9), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_10() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ___buffer_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_10() const { return ___buffer_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_10() { return &___buffer_10; }
	inline void set_buffer_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_10), (void*)value);
	}

	inline static int32_t get_offset_of_asyncOperations_11() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ___asyncOperations_11)); }
	inline int32_t get_asyncOperations_11() const { return ___asyncOperations_11; }
	inline int32_t* get_address_of_asyncOperations_11() { return &___asyncOperations_11; }
	inline void set_asyncOperations_11(int32_t value)
	{
		___asyncOperations_11 = value;
	}

	inline static int32_t get_offset_of_m_CallBack_12() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ___m_CallBack_12)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_m_CallBack_12() const { return ___m_CallBack_12; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_m_CallBack_12() { return &___m_CallBack_12; }
	inline void set_m_CallBack_12(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___m_CallBack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CallBack_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_AsyncWriterDelegate_13() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ___m_AsyncWriterDelegate_13)); }
	inline AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * get_m_AsyncWriterDelegate_13() const { return ___m_AsyncWriterDelegate_13; }
	inline AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B ** get_address_of_m_AsyncWriterDelegate_13() { return &___m_AsyncWriterDelegate_13; }
	inline void set_m_AsyncWriterDelegate_13(AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * value)
	{
		___m_AsyncWriterDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AsyncWriterDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_formatWriter_14() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ___formatWriter_14)); }
	inline RuntimeObject* get_formatWriter_14() const { return ___formatWriter_14; }
	inline RuntimeObject** get_address_of_formatWriter_14() { return &___formatWriter_14; }
	inline void set_formatWriter_14(RuntimeObject* value)
	{
		___formatWriter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formatWriter_14), (void*)value);
	}

	inline static int32_t get_offset_of_wroteHeader_15() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ___wroteHeader_15)); }
	inline bool get_wroteHeader_15() const { return ___wroteHeader_15; }
	inline bool* get_address_of_wroteHeader_15() { return &___wroteHeader_15; }
	inline void set_wroteHeader_15(bool value)
	{
		___wroteHeader_15 = value;
	}

	inline static int32_t get_offset_of_wroteBytes_16() { return static_cast<int32_t>(offsetof(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07, ___wroteBytes_16)); }
	inline bool get_wroteBytes_16() const { return ___wroteBytes_16; }
	inline bool* get_address_of_wroteBytes_16() { return &___wroteBytes_16; }
	inline void set_wroteBytes_16(bool value)
	{
		___wroteBytes_16 = value;
	}
};


// Mapbox.IO.Compression.DeflaterManaged
struct DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC  : public RuntimeObject
{
public:
	// Mapbox.IO.Compression.FastEncoder Mapbox.IO.Compression.DeflaterManaged::deflateEncoder
	FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * ___deflateEncoder_0;
	// Mapbox.IO.Compression.CopyEncoder Mapbox.IO.Compression.DeflaterManaged::copyEncoder
	CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * ___copyEncoder_1;
	// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.DeflaterManaged::input
	DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input_2;
	// Mapbox.IO.Compression.OutputBuffer Mapbox.IO.Compression.DeflaterManaged::output
	OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output_3;
	// Mapbox.IO.Compression.DeflaterManaged/DeflaterState Mapbox.IO.Compression.DeflaterManaged::processingState
	int32_t ___processingState_4;
	// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.DeflaterManaged::inputFromHistory
	DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___inputFromHistory_5;

public:
	inline static int32_t get_offset_of_deflateEncoder_0() { return static_cast<int32_t>(offsetof(DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC, ___deflateEncoder_0)); }
	inline FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * get_deflateEncoder_0() const { return ___deflateEncoder_0; }
	inline FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C ** get_address_of_deflateEncoder_0() { return &___deflateEncoder_0; }
	inline void set_deflateEncoder_0(FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * value)
	{
		___deflateEncoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deflateEncoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_copyEncoder_1() { return static_cast<int32_t>(offsetof(DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC, ___copyEncoder_1)); }
	inline CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * get_copyEncoder_1() const { return ___copyEncoder_1; }
	inline CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B ** get_address_of_copyEncoder_1() { return &___copyEncoder_1; }
	inline void set_copyEncoder_1(CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * value)
	{
		___copyEncoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___copyEncoder_1), (void*)value);
	}

	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC, ___input_2)); }
	inline DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * get_input_2() const { return ___input_2; }
	inline DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F ** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_2), (void*)value);
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC, ___output_3)); }
	inline OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * get_output_3() const { return ___output_3; }
	inline OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 ** get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * value)
	{
		___output_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_3), (void*)value);
	}

	inline static int32_t get_offset_of_processingState_4() { return static_cast<int32_t>(offsetof(DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC, ___processingState_4)); }
	inline int32_t get_processingState_4() const { return ___processingState_4; }
	inline int32_t* get_address_of_processingState_4() { return &___processingState_4; }
	inline void set_processingState_4(int32_t value)
	{
		___processingState_4 = value;
	}

	inline static int32_t get_offset_of_inputFromHistory_5() { return static_cast<int32_t>(offsetof(DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC, ___inputFromHistory_5)); }
	inline DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * get_inputFromHistory_5() const { return ___inputFromHistory_5; }
	inline DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F ** get_address_of_inputFromHistory_5() { return &___inputFromHistory_5; }
	inline void set_inputFromHistory_5(DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * value)
	{
		___inputFromHistory_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputFromHistory_5), (void*)value);
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// Mapbox.IO.Compression.GZipDecoder
struct GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642  : public RuntimeObject
{
public:
	// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState Mapbox.IO.Compression.GZipDecoder::gzipHeaderSubstate
	int32_t ___gzipHeaderSubstate_0;
	// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState Mapbox.IO.Compression.GZipDecoder::gzipFooterSubstate
	int32_t ___gzipFooterSubstate_1;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::gzip_header_flag
	int32_t ___gzip_header_flag_2;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::gzip_header_xlen
	int32_t ___gzip_header_xlen_3;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::expectedCrc32
	uint32_t ___expectedCrc32_4;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::expectedOutputStreamSizeModulo
	uint32_t ___expectedOutputStreamSizeModulo_5;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::loopCounter
	int32_t ___loopCounter_6;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::actualCrc32
	uint32_t ___actualCrc32_7;
	// System.Int64 Mapbox.IO.Compression.GZipDecoder::actualStreamSizeModulo
	int64_t ___actualStreamSizeModulo_8;

public:
	inline static int32_t get_offset_of_gzipHeaderSubstate_0() { return static_cast<int32_t>(offsetof(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642, ___gzipHeaderSubstate_0)); }
	inline int32_t get_gzipHeaderSubstate_0() const { return ___gzipHeaderSubstate_0; }
	inline int32_t* get_address_of_gzipHeaderSubstate_0() { return &___gzipHeaderSubstate_0; }
	inline void set_gzipHeaderSubstate_0(int32_t value)
	{
		___gzipHeaderSubstate_0 = value;
	}

	inline static int32_t get_offset_of_gzipFooterSubstate_1() { return static_cast<int32_t>(offsetof(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642, ___gzipFooterSubstate_1)); }
	inline int32_t get_gzipFooterSubstate_1() const { return ___gzipFooterSubstate_1; }
	inline int32_t* get_address_of_gzipFooterSubstate_1() { return &___gzipFooterSubstate_1; }
	inline void set_gzipFooterSubstate_1(int32_t value)
	{
		___gzipFooterSubstate_1 = value;
	}

	inline static int32_t get_offset_of_gzip_header_flag_2() { return static_cast<int32_t>(offsetof(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642, ___gzip_header_flag_2)); }
	inline int32_t get_gzip_header_flag_2() const { return ___gzip_header_flag_2; }
	inline int32_t* get_address_of_gzip_header_flag_2() { return &___gzip_header_flag_2; }
	inline void set_gzip_header_flag_2(int32_t value)
	{
		___gzip_header_flag_2 = value;
	}

	inline static int32_t get_offset_of_gzip_header_xlen_3() { return static_cast<int32_t>(offsetof(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642, ___gzip_header_xlen_3)); }
	inline int32_t get_gzip_header_xlen_3() const { return ___gzip_header_xlen_3; }
	inline int32_t* get_address_of_gzip_header_xlen_3() { return &___gzip_header_xlen_3; }
	inline void set_gzip_header_xlen_3(int32_t value)
	{
		___gzip_header_xlen_3 = value;
	}

	inline static int32_t get_offset_of_expectedCrc32_4() { return static_cast<int32_t>(offsetof(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642, ___expectedCrc32_4)); }
	inline uint32_t get_expectedCrc32_4() const { return ___expectedCrc32_4; }
	inline uint32_t* get_address_of_expectedCrc32_4() { return &___expectedCrc32_4; }
	inline void set_expectedCrc32_4(uint32_t value)
	{
		___expectedCrc32_4 = value;
	}

	inline static int32_t get_offset_of_expectedOutputStreamSizeModulo_5() { return static_cast<int32_t>(offsetof(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642, ___expectedOutputStreamSizeModulo_5)); }
	inline uint32_t get_expectedOutputStreamSizeModulo_5() const { return ___expectedOutputStreamSizeModulo_5; }
	inline uint32_t* get_address_of_expectedOutputStreamSizeModulo_5() { return &___expectedOutputStreamSizeModulo_5; }
	inline void set_expectedOutputStreamSizeModulo_5(uint32_t value)
	{
		___expectedOutputStreamSizeModulo_5 = value;
	}

	inline static int32_t get_offset_of_loopCounter_6() { return static_cast<int32_t>(offsetof(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642, ___loopCounter_6)); }
	inline int32_t get_loopCounter_6() const { return ___loopCounter_6; }
	inline int32_t* get_address_of_loopCounter_6() { return &___loopCounter_6; }
	inline void set_loopCounter_6(int32_t value)
	{
		___loopCounter_6 = value;
	}

	inline static int32_t get_offset_of_actualCrc32_7() { return static_cast<int32_t>(offsetof(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642, ___actualCrc32_7)); }
	inline uint32_t get_actualCrc32_7() const { return ___actualCrc32_7; }
	inline uint32_t* get_address_of_actualCrc32_7() { return &___actualCrc32_7; }
	inline void set_actualCrc32_7(uint32_t value)
	{
		___actualCrc32_7 = value;
	}

	inline static int32_t get_offset_of_actualStreamSizeModulo_8() { return static_cast<int32_t>(offsetof(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642, ___actualStreamSizeModulo_8)); }
	inline int64_t get_actualStreamSizeModulo_8() const { return ___actualStreamSizeModulo_8; }
	inline int64_t* get_address_of_actualStreamSizeModulo_8() { return &___actualStreamSizeModulo_8; }
	inline void set_actualStreamSizeModulo_8(int64_t value)
	{
		___actualStreamSizeModulo_8 = value;
	}
};


// Mapbox.IO.Compression.Inflater
struct Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108  : public RuntimeObject
{
public:
	// Mapbox.IO.Compression.OutputWindow Mapbox.IO.Compression.Inflater::output
	OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * ___output_5;
	// Mapbox.IO.Compression.InputBuffer Mapbox.IO.Compression.Inflater::input
	InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * ___input_6;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::literalLengthTree
	HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * ___literalLengthTree_7;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::distanceTree
	HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * ___distanceTree_8;
	// Mapbox.IO.Compression.InflaterState Mapbox.IO.Compression.Inflater::state
	int32_t ___state_9;
	// System.Boolean Mapbox.IO.Compression.Inflater::hasFormatReader
	bool ___hasFormatReader_10;
	// System.Int32 Mapbox.IO.Compression.Inflater::bfinal
	int32_t ___bfinal_11;
	// Mapbox.IO.Compression.BlockType Mapbox.IO.Compression.Inflater::blockType
	int32_t ___blockType_12;
	// System.Byte[] Mapbox.IO.Compression.Inflater::blockLengthBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___blockLengthBuffer_13;
	// System.Int32 Mapbox.IO.Compression.Inflater::blockLength
	int32_t ___blockLength_14;
	// System.Int32 Mapbox.IO.Compression.Inflater::length
	int32_t ___length_15;
	// System.Int32 Mapbox.IO.Compression.Inflater::distanceCode
	int32_t ___distanceCode_16;
	// System.Int32 Mapbox.IO.Compression.Inflater::extraBits
	int32_t ___extraBits_17;
	// System.Int32 Mapbox.IO.Compression.Inflater::loopCounter
	int32_t ___loopCounter_18;
	// System.Int32 Mapbox.IO.Compression.Inflater::literalLengthCodeCount
	int32_t ___literalLengthCodeCount_19;
	// System.Int32 Mapbox.IO.Compression.Inflater::distanceCodeCount
	int32_t ___distanceCodeCount_20;
	// System.Int32 Mapbox.IO.Compression.Inflater::codeLengthCodeCount
	int32_t ___codeLengthCodeCount_21;
	// System.Int32 Mapbox.IO.Compression.Inflater::codeArraySize
	int32_t ___codeArraySize_22;
	// System.Int32 Mapbox.IO.Compression.Inflater::lengthCode
	int32_t ___lengthCode_23;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeList
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___codeList_24;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeLengthTreeCodeLength
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___codeLengthTreeCodeLength_25;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::codeLengthTree
	HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * ___codeLengthTree_26;
	// Mapbox.IO.Compression.IFileFormatReader Mapbox.IO.Compression.Inflater::formatReader
	RuntimeObject* ___formatReader_27;

public:
	inline static int32_t get_offset_of_output_5() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___output_5)); }
	inline OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * get_output_5() const { return ___output_5; }
	inline OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 ** get_address_of_output_5() { return &___output_5; }
	inline void set_output_5(OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * value)
	{
		___output_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_5), (void*)value);
	}

	inline static int32_t get_offset_of_input_6() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___input_6)); }
	inline InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * get_input_6() const { return ___input_6; }
	inline InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A ** get_address_of_input_6() { return &___input_6; }
	inline void set_input_6(InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * value)
	{
		___input_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_6), (void*)value);
	}

	inline static int32_t get_offset_of_literalLengthTree_7() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___literalLengthTree_7)); }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * get_literalLengthTree_7() const { return ___literalLengthTree_7; }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B ** get_address_of_literalLengthTree_7() { return &___literalLengthTree_7; }
	inline void set_literalLengthTree_7(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * value)
	{
		___literalLengthTree_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___literalLengthTree_7), (void*)value);
	}

	inline static int32_t get_offset_of_distanceTree_8() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___distanceTree_8)); }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * get_distanceTree_8() const { return ___distanceTree_8; }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B ** get_address_of_distanceTree_8() { return &___distanceTree_8; }
	inline void set_distanceTree_8(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * value)
	{
		___distanceTree_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distanceTree_8), (void*)value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_hasFormatReader_10() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___hasFormatReader_10)); }
	inline bool get_hasFormatReader_10() const { return ___hasFormatReader_10; }
	inline bool* get_address_of_hasFormatReader_10() { return &___hasFormatReader_10; }
	inline void set_hasFormatReader_10(bool value)
	{
		___hasFormatReader_10 = value;
	}

	inline static int32_t get_offset_of_bfinal_11() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___bfinal_11)); }
	inline int32_t get_bfinal_11() const { return ___bfinal_11; }
	inline int32_t* get_address_of_bfinal_11() { return &___bfinal_11; }
	inline void set_bfinal_11(int32_t value)
	{
		___bfinal_11 = value;
	}

	inline static int32_t get_offset_of_blockType_12() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___blockType_12)); }
	inline int32_t get_blockType_12() const { return ___blockType_12; }
	inline int32_t* get_address_of_blockType_12() { return &___blockType_12; }
	inline void set_blockType_12(int32_t value)
	{
		___blockType_12 = value;
	}

	inline static int32_t get_offset_of_blockLengthBuffer_13() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___blockLengthBuffer_13)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_blockLengthBuffer_13() const { return ___blockLengthBuffer_13; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_blockLengthBuffer_13() { return &___blockLengthBuffer_13; }
	inline void set_blockLengthBuffer_13(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___blockLengthBuffer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockLengthBuffer_13), (void*)value);
	}

	inline static int32_t get_offset_of_blockLength_14() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___blockLength_14)); }
	inline int32_t get_blockLength_14() const { return ___blockLength_14; }
	inline int32_t* get_address_of_blockLength_14() { return &___blockLength_14; }
	inline void set_blockLength_14(int32_t value)
	{
		___blockLength_14 = value;
	}

	inline static int32_t get_offset_of_length_15() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___length_15)); }
	inline int32_t get_length_15() const { return ___length_15; }
	inline int32_t* get_address_of_length_15() { return &___length_15; }
	inline void set_length_15(int32_t value)
	{
		___length_15 = value;
	}

	inline static int32_t get_offset_of_distanceCode_16() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___distanceCode_16)); }
	inline int32_t get_distanceCode_16() const { return ___distanceCode_16; }
	inline int32_t* get_address_of_distanceCode_16() { return &___distanceCode_16; }
	inline void set_distanceCode_16(int32_t value)
	{
		___distanceCode_16 = value;
	}

	inline static int32_t get_offset_of_extraBits_17() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___extraBits_17)); }
	inline int32_t get_extraBits_17() const { return ___extraBits_17; }
	inline int32_t* get_address_of_extraBits_17() { return &___extraBits_17; }
	inline void set_extraBits_17(int32_t value)
	{
		___extraBits_17 = value;
	}

	inline static int32_t get_offset_of_loopCounter_18() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___loopCounter_18)); }
	inline int32_t get_loopCounter_18() const { return ___loopCounter_18; }
	inline int32_t* get_address_of_loopCounter_18() { return &___loopCounter_18; }
	inline void set_loopCounter_18(int32_t value)
	{
		___loopCounter_18 = value;
	}

	inline static int32_t get_offset_of_literalLengthCodeCount_19() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___literalLengthCodeCount_19)); }
	inline int32_t get_literalLengthCodeCount_19() const { return ___literalLengthCodeCount_19; }
	inline int32_t* get_address_of_literalLengthCodeCount_19() { return &___literalLengthCodeCount_19; }
	inline void set_literalLengthCodeCount_19(int32_t value)
	{
		___literalLengthCodeCount_19 = value;
	}

	inline static int32_t get_offset_of_distanceCodeCount_20() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___distanceCodeCount_20)); }
	inline int32_t get_distanceCodeCount_20() const { return ___distanceCodeCount_20; }
	inline int32_t* get_address_of_distanceCodeCount_20() { return &___distanceCodeCount_20; }
	inline void set_distanceCodeCount_20(int32_t value)
	{
		___distanceCodeCount_20 = value;
	}

	inline static int32_t get_offset_of_codeLengthCodeCount_21() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___codeLengthCodeCount_21)); }
	inline int32_t get_codeLengthCodeCount_21() const { return ___codeLengthCodeCount_21; }
	inline int32_t* get_address_of_codeLengthCodeCount_21() { return &___codeLengthCodeCount_21; }
	inline void set_codeLengthCodeCount_21(int32_t value)
	{
		___codeLengthCodeCount_21 = value;
	}

	inline static int32_t get_offset_of_codeArraySize_22() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___codeArraySize_22)); }
	inline int32_t get_codeArraySize_22() const { return ___codeArraySize_22; }
	inline int32_t* get_address_of_codeArraySize_22() { return &___codeArraySize_22; }
	inline void set_codeArraySize_22(int32_t value)
	{
		___codeArraySize_22 = value;
	}

	inline static int32_t get_offset_of_lengthCode_23() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___lengthCode_23)); }
	inline int32_t get_lengthCode_23() const { return ___lengthCode_23; }
	inline int32_t* get_address_of_lengthCode_23() { return &___lengthCode_23; }
	inline void set_lengthCode_23(int32_t value)
	{
		___lengthCode_23 = value;
	}

	inline static int32_t get_offset_of_codeList_24() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___codeList_24)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_codeList_24() const { return ___codeList_24; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_codeList_24() { return &___codeList_24; }
	inline void set_codeList_24(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___codeList_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codeList_24), (void*)value);
	}

	inline static int32_t get_offset_of_codeLengthTreeCodeLength_25() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___codeLengthTreeCodeLength_25)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_codeLengthTreeCodeLength_25() const { return ___codeLengthTreeCodeLength_25; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_codeLengthTreeCodeLength_25() { return &___codeLengthTreeCodeLength_25; }
	inline void set_codeLengthTreeCodeLength_25(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___codeLengthTreeCodeLength_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codeLengthTreeCodeLength_25), (void*)value);
	}

	inline static int32_t get_offset_of_codeLengthTree_26() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___codeLengthTree_26)); }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * get_codeLengthTree_26() const { return ___codeLengthTree_26; }
	inline HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B ** get_address_of_codeLengthTree_26() { return &___codeLengthTree_26; }
	inline void set_codeLengthTree_26(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * value)
	{
		___codeLengthTree_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codeLengthTree_26), (void*)value);
	}

	inline static int32_t get_offset_of_formatReader_27() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108, ___formatReader_27)); }
	inline RuntimeObject* get_formatReader_27() const { return ___formatReader_27; }
	inline RuntimeObject** get_address_of_formatReader_27() { return &___formatReader_27; }
	inline void set_formatReader_27(RuntimeObject* value)
	{
		___formatReader_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formatReader_27), (void*)value);
	}
};

struct Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields
{
public:
	// System.Byte[] Mapbox.IO.Compression.Inflater::extraLengthBits
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extraLengthBits_0;
	// System.Int32[] Mapbox.IO.Compression.Inflater::lengthBase
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___lengthBase_1;
	// System.Int32[] Mapbox.IO.Compression.Inflater::distanceBasePosition
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___distanceBasePosition_2;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeOrder
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___codeOrder_3;
	// System.Byte[] Mapbox.IO.Compression.Inflater::staticDistanceTreeTable
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___staticDistanceTreeTable_4;

public:
	inline static int32_t get_offset_of_extraLengthBits_0() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields, ___extraLengthBits_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_extraLengthBits_0() const { return ___extraLengthBits_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_extraLengthBits_0() { return &___extraLengthBits_0; }
	inline void set_extraLengthBits_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___extraLengthBits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extraLengthBits_0), (void*)value);
	}

	inline static int32_t get_offset_of_lengthBase_1() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields, ___lengthBase_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_lengthBase_1() const { return ___lengthBase_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_lengthBase_1() { return &___lengthBase_1; }
	inline void set_lengthBase_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___lengthBase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lengthBase_1), (void*)value);
	}

	inline static int32_t get_offset_of_distanceBasePosition_2() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields, ___distanceBasePosition_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_distanceBasePosition_2() const { return ___distanceBasePosition_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_distanceBasePosition_2() { return &___distanceBasePosition_2; }
	inline void set_distanceBasePosition_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___distanceBasePosition_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distanceBasePosition_2), (void*)value);
	}

	inline static int32_t get_offset_of_codeOrder_3() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields, ___codeOrder_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_codeOrder_3() const { return ___codeOrder_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_codeOrder_3() { return &___codeOrder_3; }
	inline void set_codeOrder_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___codeOrder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codeOrder_3), (void*)value);
	}

	inline static int32_t get_offset_of_staticDistanceTreeTable_4() { return static_cast<int32_t>(offsetof(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields, ___staticDistanceTreeTable_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_staticDistanceTreeTable_4() const { return ___staticDistanceTreeTable_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_staticDistanceTreeTable_4() { return &___staticDistanceTreeTable_4; }
	inline void set_staticDistanceTreeTable_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___staticDistanceTreeTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticDistanceTreeTable_4), (void*)value);
	}
};


// Mapbox.IO.Compression.Match
struct Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF  : public RuntimeObject
{
public:
	// MatchState Mapbox.IO.Compression.Match::state
	int32_t ___state_0;
	// System.Int32 Mapbox.IO.Compression.Match::pos
	int32_t ___pos_1;
	// System.Int32 Mapbox.IO.Compression.Match::len
	int32_t ___len_2;
	// System.Byte Mapbox.IO.Compression.Match::symbol
	uint8_t ___symbol_3;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_symbol_3() { return static_cast<int32_t>(offsetof(Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF, ___symbol_3)); }
	inline uint8_t get_symbol_3() const { return ___symbol_3; }
	inline uint8_t* get_address_of_symbol_3() { return &___symbol_3; }
	inline void set_symbol_3(uint8_t value)
	{
		___symbol_3 = value;
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Mapbox.IO.Compression.InvalidDataException
struct InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate
struct AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B  : public MulticastDelegate_t
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


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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


// System.Void System.Nullable`1<System.Int32Enum>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m904114DBE44D14D291456629D60BF66ECA75BB42_gshared (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, int32_t ___value0, const RuntimeMethod* method);

// System.Void System.Diagnostics.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m290B087CA6F58852C5EACE90EA3A398216C7B136 (bool ___condition0, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_FreeBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_FreeBytes_m4C01AB876EA197FDCD7B024E86E34C3FBA9A2A5E (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BitsInBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_BitsInBuffer_m07D4BBB2FB90289515496087B226A1CF15FB1A8C (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBits(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, int32_t ___n0, uint32_t ___bits1, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputBuffer::FlushBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_FlushBits_m92110691FD37EE010EDF95FA03CB5A5320A60A77 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.CopyEncoder::WriteLenNLen(System.UInt16,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder_WriteLenNLen_mF2BB5A6FE54C0005D6C4F572D4730076037B4BCF (CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * __this, uint16_t ___len0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, const RuntimeMethod* method);
// System.Byte[] Mapbox.IO.Compression.DeflateInput::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DeflateInput_get_Buffer_mF7DE4151A19B65F3CEBEB100D454D2F0DA14B7FE (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_StartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateInput_get_StartIndex_m08AD971B1AAD2A797DD58638D8252C79D76853D7 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBytes_mFB21CDF29333A5C98ADDD34BDCC3DF38BC8D27BE (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateInput::ConsumeBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_ConsumeBytes_mC55226E76E66464DADA33EA4D14F8546B86404CC (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, int32_t ___n0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteUInt16(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteUInt16_m134C6B243A3939E77B50748521263CDA9835AEA1 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.String Mapbox.IO.Compression.SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F (String_t* ___p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.Inflater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater__ctor_m4373E28FB097E3A6EF12DFB3E10539492900F668 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::CreateDeflater(System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_CreateDeflater_m2795C21730ED89CCAD525A4C06E23261BBCA2E3A (Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E  ___compressionLevel0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate__ctor_m28DAF20677832C084D8D204E92A1FCF8242BF9DA (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>::.ctor(!0)
inline void Nullable_1__ctor_m71744537E77A3127A3BEBE8A52094C27C4305468 (Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m904114DBE44D14D291456629D60BF66ECA75BB42_gshared)(__this, ___value0, method);
}
// Mapbox.IO.Compression.DeflateStream/WorkerType Mapbox.IO.Compression.DeflateStream::GetDeflaterType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t DeflateStream_GetDeflaterType_mD721352EA76B99BF2404B102FF84C4818A920314 (const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflaterManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged__ctor_m479A630D1B7B6150D384EE969EDC8020B94B400A (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.Inflater::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_SetFileFormatReader_m3A402897FFDD7DC4F14DC3A16113A8B1F315FE19 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureDecompressionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureDecompressionMode_m88E9CD56FAE981884DD00DED734F419625E39015 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::ValidateParameters(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_Inflate_m982C2E275B50C5E06AE7C4341742464558B08C1A (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.Inflater::Finished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_Finished_m567445FF848582887054CB1268E97F1C6B869E79 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.Inflater::get_AvailableOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_get_AvailableOutput_m3C933C0A54909A301DB6AB6B12EC43DBE4D6BB3E (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.Inflater::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_NeedsInput_mF2C2F1B0D5BC92B1AB912499F0C452152CA32A96 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_SetInput_m2656520B8CF3F1AAC59727E2AA5323875B66544E (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inputBytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mC830C2F97D5314DF72EEFFE749E7F7FB467D0382 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::.ctor(System.Object,System.Object,System.AsyncCallback,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult__ctor_m447087A29C3437C3EFC9661EB30655EEA12B2189 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, RuntimeObject * ___asyncObject0, RuntimeObject * ___asyncState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___asyncCallback2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___offset4, int32_t ___count5, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_InvokeCallback_m3B31F563D243DDCB3977F527C0E24102E92E7D54 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, bool ___completedSynchronously0, RuntimeObject * ___result1, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStreamAsyncResult_get_IsCompleted_m5E81938F83C4E4EEA02A71EAE6F557A7B097CAEE (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF (int32_t* ___location0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_InvokeCallback_m37E7CE8E665105A485398295ED33250270725CE6 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::CheckEndXxxxLegalStateAndParams(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_CheckEndXxxxLegalStateAndParams_m52710FAB4DC5960AC18F1C94DEF18350EFB4340C (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::AwaitAsyncResultCompletion(Mapbox.IO.Compression.DeflateStreamAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_AwaitAsyncResultCompletion_m1B4FF7C27CDFE00BE9A01B0BBB9C7307684E7072 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * ___asyncResult0, const RuntimeMethod* method);
// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DeflateStreamAsyncResult_get_Result_m9153B98D779D6FDC474FA05A961E06CFDF0F6EE8 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureCompressionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureCompressionMode_m37D5D641A319928058CAF8A4D31A5CE4A2C0756D (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::InternalWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_InternalWrite_m05CD0933EEB96A478C210F3D6D6A23D9B76818CE (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::DoMaintenance(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_DoMaintenance_m4C92D64832F59F313C3F0C0B79B36C5CD5CB41E0 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::WriteDeflaterOutput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteDeflaterOutput_m12EC5CF322D49E34DF8B65DD026FF84A6EDDE080 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, bool ___isAsync0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::DoWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_DoWrite_mE224C7C5B1A0DA2582707A00A81D5922F08FC0A5 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::PurgeBuffers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_PurgeBuffers_mFBE28AC293B5895A3F927D136E90D4065B72B0EE (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, bool ___disposing0, const RuntimeMethod* method);
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncWriteDelegate_BeginInvoke_mA7DE2CB9736E3A2479BDB973F50DF3228EEACAF6 (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate_EndInvoke_m6786DED730B0BCA270F5850A71979B1FCD3DB4D1 (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * __this, RuntimeObject* ___result0, const RuntimeMethod* method);
// System.Threading.WaitHandle Mapbox.IO.Compression.DeflateStreamAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * DeflateStreamAsyncResult_get_AsyncWaitHandle_m35C2485579D9DCE856624860B08CEAE9B58C9E66 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Close_mE1D967DC25EBF068EC4E39048527D823290C8E21 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Interlocked_CompareExchange_mFAD09589A5DAFDBABB05C62A2D35CD5B92BC6961 (RuntimeObject ** ___location10, RuntimeObject * ___value1, RuntimeObject * ___comparand2, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Complete_mF86A934B9D5912471283B72A314714749E6C1A70 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, bool ___completedSynchronously0, RuntimeObject * ___result1, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Complete_mC6D9FE2855C85824325F75CD0D79F34A465F7D42 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mFCCCB843AEC4B5B3FC89BCED2BA839783920EA47 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject* ___ar0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder__ctor_m14AC299A2A49EDC9941B259C479F885DD1E8BD25 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.CopyEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder__ctor_m94DEB49AA8BC426642B5F0AFB630ECB3E630253C (CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput__ctor_mF0DCBD3F73EB098E6356B9851ABE7AA69E558DA2 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer__ctor_m9ADCADAAD6C128D3E09033101575D35588D1D54C (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.FastEncoder::get_BytesInHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoder_get_BytesInHistory_m383E90EC17DDB7055715FA3370FA7570525B576B (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateInput::set_Buffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_Buffer_m01D97BF285FCBD27AA84CDB89ECE494B40B06D56 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateInput::set_Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_Count_m7D7D2B81F390684949526A08035E252E6A906517 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateInput::set_StartIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_StartIndex_m5AE5F3922A902FC12B4A4E2F3E60421ECECA9772 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_NeedsInput_mB713DF75540BE5E426D913F90917C84B2E777707 (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputBuffer::UpdateBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_UpdateBuffer_mF5E2EAEFEBAC0ABE8458C70CC744FFBCD7EFFDAF (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, const RuntimeMethod* method);
// Mapbox.IO.Compression.DeflateInput/InputState Mapbox.IO.Compression.DeflateInput::DumpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  DeflateInput_DumpState_mDA8FB072CFCC0ABB2CD4F62B47A157E2092C3095 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method);
// Mapbox.IO.Compression.OutputBuffer/BufferState Mapbox.IO.Compression.OutputBuffer::DumpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  OutputBuffer_DumpState_m29CB78FF2DF72426DF0FF44DA6EEF961BC062F5A (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockHeader(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlockHeader_mD2AAB4F14483792B26524767B0EDCF768481CF1E (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedData(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedData_mFD10172D24ABF1CE6BF5910A05CB76DED6ECAC6E (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, const RuntimeMethod* method);
// System.Double Mapbox.IO.Compression.FastEncoder::get_LastCompressionRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FastEncoder_get_LastCompressionRatio_m7711B3B1F605A900930D6B8FA00F4A1D450D265B (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::UseCompressed(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_UseCompressed_m93A1F259F00A5AC8E89B6633EC6B4CA0C770D801 (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, double ___ratio0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateInput::RestoreState(Mapbox.IO.Compression.DeflateInput/InputState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_RestoreState_m22459E83254C1B15684EA31B1397CC0C2B76B973 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  ___state0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputBuffer::RestoreState(Mapbox.IO.Compression.OutputBuffer/BufferState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_RestoreState_mA73DFB36F7705D25D8C77632D0F1112661715B53 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  ___state0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.CopyEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder_GetBlock_m220C3F0D4C621DF22AEB134C46AA993FB22B12A5 (CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, bool ___isFinal2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflaterManaged::FlushInputWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_FlushInputWindows_mBCFE17379E248577F75A6614F1AFF8A59B49DBBA (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method);
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoder::get_UnprocessedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * FastEncoder_get_UnprocessedInput_m16B02D287C8925715C90D0C2EEC0863B5B160B33 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockFooter(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlockFooter_mD84DC321C932D327F55BA1E70198A1F7EE778A29 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::FlushInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_FlushInput_m25B32C749243DFCC7D9704E9DEB3C1006DA38166 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlock_m4A0D50C206D9969933908A4B5B2FD78C835663AE (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BytesWritten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_BytesWritten_mF8A815B61637FD151B9D4FF7FD87DDB801F55B21 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflaterManaged::WriteFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_WriteFinal_m38DD3D1EE7C6DC5AD7069D859C560F9C3429FCDD (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoderWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow__ctor_mA9ECC8AFB8AAC1ADAF0917779578A28FCDC2EA50 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.Match::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match__ctor_m37BC99AA370A79BBC1024D762A53CBE40D92A1E8 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_BytesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_get_BytesAvailable_mBB38926C21E022545D4E7C576281CB7FF342ECFC (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method);
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoderWindow::get_UnprocessedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * FastEncoderWindow_get_UnprocessedInput_mCB79E3C0D88E1070E31F88ABA152B9D6C1FC198A (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoderWindow::FlushWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_FlushWindow_m48DF4798A03C12DF98075DE13AD482CB184161B4 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.FastEncoder::InputAvailable(Mapbox.IO.Compression.DeflateInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoder_InputAvailable_m7916C29C8B9EA9DDF26C9265D6A9E283866B0B84 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::WriteDeflatePreamble(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteDeflatePreamble_mE980F2908A2784A1883876AC77DFBD13E917DC41 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedOutput_m3F31DAEB694C2C2121473E7CBA58EBEECE2696DC (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::WriteEndOfBlock(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteEndOfBlock_m3271D9AEFF55F650C83D8DD228361B123836F70A (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_FreeWindowSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_get_FreeWindowSpace_m770221DC462730EEF079079D2560E97F0C5C4B95 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoderWindow::CopyBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_CopyBytes_m0814B8F8FF6695965210C050C5C7D4DA24FEB5C7 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedOutput_m6D3A22136E8896D30A2DD90D7161A61ADEA1D8A5 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.FastEncoder::SafeToWriteTo(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoder_SafeToWriteTo_mA202C2C78AFFF0FC8A059211ED0A7F7E27D32B86 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.FastEncoderWindow::GetNextSymbolOrMatch(Mapbox.IO.Compression.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoderWindow_GetNextSymbolOrMatch_m95B81365D888A7561C7EF350764F63D75F4DF029 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * ___match0, const RuntimeMethod* method);
// MatchState Mapbox.IO.Compression.Match::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_State_m407AB40EFEA751CE8BC696321AC15C44B8DFB972 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method);
// System.Byte Mapbox.IO.Compression.Match::get_Symbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Match_get_Symbol_m359D7D5DADDEBDA40056D4C727A82E77E76F6266 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::WriteChar(System.Byte,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteChar_mDD0544D32EA72BEEEC3057683314BD7F186502F8 (uint8_t ___b0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.Match::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_Length_m589799882D83FEE591707948E0DDC2A3A5F60FD4 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.Match::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_Position_m391158F9894F9328F0FFA2D8930BBE63F3E21BDA (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoder::WriteMatch(System.Int32,System.Int32,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteMatch_m7160269E70EED4D1DD2420989A82F7C950D566A6 (int32_t ___matchLen0, int32_t ___matchPos1, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output2, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.FastEncoderStatics::GetSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderStatics_GetSlot_mB8444E2D265041CEE202C16BB4D55CEBF8C30C14 (int32_t ___pos0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoderWindow::ResetWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_ResetWindow_m5E046F669CAA143280713A7A9D1DE8BC689908B0 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoderWindow::VerifyHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_VerifyHashes_m8E2D54F1AD43EDF3F98FCADA9DF29484D5C064DE (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::HashValue(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_HashValue_m51D0B2DE56F0027C2719237BF265A63956353441 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, uint32_t ___hash0, uint8_t ___b1, const RuntimeMethod* method);
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::InsertString(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_InsertString_m02BE5E784F528CF922FE96FB808AB16FDC6FDCC4 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, uint32_t* ___hash0, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::FindMatch(System.Int32,System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_FindMatch_m1343CEE0E7A5FC1D3624755F24D924EDB044A71E (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, int32_t ___search0, int32_t* ___matchPos1, int32_t ___searchDepth2, int32_t ___niceLength3, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.Match::set_State(MatchState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_State_m6AEF59FFDA04A71E10E139CD2C303C608BE436FB (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.Match::set_Symbol(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Symbol_m9D4CC885E80D5A6F4B440C4B5352C1021AF9A7BB (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.Match::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Position_m91B7F5B73009A6FD8D012D35688CBE509F20D914 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.Match::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Length_mF40EF86B8E87033FF2A6F941585E3AC43FECC044 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoderWindow::InsertStrings(System.UInt32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_InsertStrings_m93A2E2BA8D6AE1932B877FB90001188BD0D3A991 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, uint32_t* ___hash0, int32_t ___matchLen1, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.FastEncoderWindow::MoveWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_MoveWindows_m0680861AAAAF38215C32120D94FEECD9F0BA788E (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method);
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::RecalculateHash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_RecalculateHash_m3D716C83E9066B7B6E1C2824EF19CC97BDB22CFB (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, int32_t ___position0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.GZipDecoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder_Reset_mBFCC2CBAE041DA3F062E3D0A182EA2F84C8F2642 (GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.InputBuffer::GetBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04 (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.InputBuffer::SkipToByteBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SkipToByteBoundary_m880737E647E4EA4D56247710D221A162ECE137DE (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method);
// System.UInt32 Mapbox.IO.Compression.Crc32Helper::UpdateCrc32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Crc32Helper_UpdateCrc32_m4C13E760F50FD18AB5D81F93BE3FCD111A1E06E1 (uint32_t ___crc320, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter__ctor_m269710FE1AA91F733EC5B7C3C70655FCA4CE6B29 (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * __this, int32_t ___compressionLevel0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.GZipFormatter::WriteUInt32(System.Byte[],System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter_WriteUInt32_mF7D62F8D30278EC2D9AB885530E45B97E15714B4 (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, uint32_t ___value1, int32_t ___startIndex2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m285A4C43285F2BD969B81846BE2B7E10067B8A77 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mF13A24A59F741FD84AA4ADDEE5065DF96BF6C6E6 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.GZipStream::SetDeflateStreamFileFormatter(Mapbox.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetDeflateStreamFileFormatter_m7994DDAB831E4685CD9C9EFCA76E5CD7E7C2C54E (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m13B9EDC7842E7E322E755E60C13CB26BE573E945 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m45B3AABC3B79983617168C2B3D7F1E78333BFF7B (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter__ctor_mB911BCF54076CB4BDE6D81D928EE8F8EDECA3EF3 (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatWriter(Mapbox.IO.Compression.IFileFormatWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetFileFormatWriter_m21E3D443AE7A81A40E019AC9F67769B4E94D386B (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___writer0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.GZipDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder__ctor_m460381FEC121E9B97ED66053D6842A3BB4CF9DC2 (GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetFileFormatReader_m65A1BA5FFAD4ED5581F1DDA300B33BADE5B847AE (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method);
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticLiteralTreeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HuffmanTree_GetStaticLiteralTreeLength_mEBF3EFFB8ECEDBCFD58E36C54FA212217B5D4862 (const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.HuffmanTree::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree__ctor_m2BB6B8291AEB95E04C011EE9FD3FBFDCBFD7A07E (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___codeLengths0, const RuntimeMethod* method);
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticDistanceTreeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HuffmanTree_GetStaticDistanceTreeLength_m87DEFC0F5766267D6D95D6053B4C0BB14C7FA2D7 (const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.HuffmanTree::CreateTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree_CreateTable_mBE682910545502736514AFDD7ECB7BDAC467CF60 (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * __this, const RuntimeMethod* method);
// System.UInt32 Mapbox.IO.Compression.FastEncoderStatics::BitReverse(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderStatics_BitReverse_m064FB316BD6E6F335ABF1D5671F0D01224D601EC (uint32_t ___code0, int32_t ___length1, const RuntimeMethod* method);
// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::CalculateHuffmanCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* HuffmanTree_CalculateHuffmanCode_m61F194AD423DDB46359D6B4F5055A525901CD7BB (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * __this, const RuntimeMethod* method);
// System.UInt32 Mapbox.IO.Compression.InputBuffer::TryLoad16Bits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputBuffer_TryLoad16Bits_m608DB3021EF9AAB709662C735228F0C7320A39A3 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_get_AvailableBits_m62A0FF1647B17687BDB8E8A2F0EFFD30A5D65A86 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.InputBuffer::SkipBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SkipBits_m2CFC5F47E99A2C4D06CAF57F57DF8DFBEAED66CE (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, int32_t ___n0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow__ctor_mD07D9E7402B0F446ECC777F26E8A077622537560 (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.InputBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer__ctor_m64BDA0D242DDCB103A6426FCEBCB12A97DEF1505 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.Inflater::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_Reset_m9AE1FC850A3B453021FDD71EA4CDAFE46B2F0C62 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.InputBuffer::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SetInput_mAFEA90F5041C2829FC6199A55A134CFCE7523461 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_get_AvailableBytes_mEAE98CBDFD2B860160884D6CA85916339BBE651C (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.InputBuffer::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBuffer_NeedsInput_mF58F53107FC685B8D25F56BEA21616BC0967DB28 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyTo(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyTo_m59DC739EE2C3CBD3F6181681FDD4F0F4FDACDC3A (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.Inflater::Decode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_Decode_mF890E39C3E7F019161CFDDCDE63A3A6AD35B9394 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.InputBuffer::EnsureBitsAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBuffer_EnsureBitsAvailable_mBEC2D96C8A668A9439F2B326559D67156491EE55 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, int32_t ___count0, const RuntimeMethod* method);
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticLiteralLengthTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * HuffmanTree_get_StaticLiteralLengthTree_m6C84EC52071369FCDBEBDD74CEB2CC9EED4AAC8F (const RuntimeMethod* method);
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticDistanceTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * HuffmanTree_get_StaticDistanceTree_mB83DE4804C6B6594C070AF71690FBEEC816A2221 (const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeDynamicBlockHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeBlock(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeBlock_m0623A8A98C73121D1DDB774EA840647DAEDADB93 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, bool* ___end_of_block_code_seen0, const RuntimeMethod* method);
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeUncompressedBlock(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeUncompressedBlock_mC7C7C7FCC629BE7366DDD3231CB03EE6A001D4BA (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, bool* ___end_of_block0, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyFrom(Mapbox.IO.Compression.InputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyFrom_m4D13F6B53BC537901B80A64EC79B4E9A0409110F (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * ___input0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_FreeBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_get_FreeBytes_m097178A25925767D52C0FFBD8AEB9F07658C7B75 (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.HuffmanTree::GetNextSymbol(Mapbox.IO.Compression.InputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HuffmanTree_GetNextSymbol_mE02D67A58296F556CE194530DA41109DC2D4441E (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * __this, InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * ___input0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputWindow::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_Write_m5AC193639E1A972D0DDBFB53F6E46B4ECFDF14BD (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, uint8_t ___b0, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputWindow::WriteLengthDistance(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_WriteLengthDistance_mF24BD4E93684CF1FBE6F7A8137AEE3F2F0AA4C86 (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, int32_t ___length0, int32_t ___distance1, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m6B7CABF63CAAD191221D1D03A9B69A6465446AF8 (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.UInt32 Mapbox.IO.Compression.InputBuffer::GetBitMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputBuffer_GetBitMask_mEECF40FA75E3261AF5D88714EC6F913B1D1335B8 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m20F619D15EAA349C6CE181A65A47C336200EBD19 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytesUnaligned(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBytesUnaligned_m25E2FC160872690A7EE50198E714287CE7DC1FEB (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteByteUnaligned(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteByteUnaligned_m845272B2382A70E341DCDBADD828D6F5572FCEF8 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, uint8_t ___b0, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_get_AvailableBytes_m6374A68C647F6DB6DC6ED55A7F00FF7EDB317974 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method);
// System.Int32 Mapbox.IO.Compression.InputBuffer::CopyTo(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_CopyTo_m9460BDE5E050FA63AA978D2D70BA28599A1ADB70 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
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
// System.Void Mapbox.IO.Compression.CopyEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder_GetBlock_m220C3F0D4C621DF22AEB134C46AA993FB22B12A5 (CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, bool ___isFinal2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_0 = ___output1;
		Debug_Assert_m290B087CA6F58852C5EACE90EA3A398216C7B136((bool)((!(((RuntimeObject*)(OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_1 = ___output1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = OutputBuffer_get_FreeBytes_m4C01AB876EA197FDCD7B024E86E34C3FBA9A2A5E(L_1, /*hidden argument*/NULL);
		Debug_Assert_m290B087CA6F58852C5EACE90EA3A398216C7B136((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		V_0 = 0;
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_3 = ___input0;
		V_1 = (bool)((!(((RuntimeObject*)(DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_5 = ___input0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_5, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_7 = ___output1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = OutputBuffer_get_FreeBytes_m4C01AB876EA197FDCD7B024E86E34C3FBA9A2A5E(L_7, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_9 = ___output1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = OutputBuffer_get_BitsInBuffer_m07D4BBB2FB90289515496087B226A1CF15FB1A8C(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)5)), (int32_t)L_10)), /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		V_2 = (bool)((((int32_t)L_12) > ((int32_t)((int32_t)65531)))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		V_0 = ((int32_t)65531);
	}

IL_0057:
	{
	}

IL_0058:
	{
		bool L_14 = ___isFinal2;
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_16 = ___output1;
		NullCheck(L_16);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_16, 3, 1, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_006a:
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_17 = ___output1;
		NullCheck(L_17);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_17, 3, 0, /*hidden argument*/NULL);
	}

IL_0075:
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_18 = ___output1;
		NullCheck(L_18);
		OutputBuffer_FlushBits_m92110691FD37EE010EDF95FA03CB5A5320A60A77(L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_20 = ___output1;
		CopyEncoder_WriteLenNLen_mF2BB5A6FE54C0005D6C4F572D4730076037B4BCF(__this, (uint16_t)((int32_t)((uint16_t)L_19)), L_20, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_21 = ___input0;
		if (!L_21)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_22 = V_0;
		G_B10_0 = ((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B10_0 = 0;
	}

IL_0090:
	{
		V_4 = (bool)G_B10_0;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00b4;
		}
	}
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_24 = ___output1;
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_25 = ___input0;
		NullCheck(L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
		L_26 = DeflateInput_get_Buffer_mF7DE4151A19B65F3CEBEB100D454D2F0DA14B7FE(L_25, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_27 = ___input0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = DeflateInput_get_StartIndex_m08AD971B1AAD2A797DD58638D8252C79D76853D7(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		NullCheck(L_24);
		OutputBuffer_WriteBytes_mFB21CDF29333A5C98ADDD34BDCC3DF38BC8D27BE(L_24, L_26, L_28, L_29, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_30 = ___input0;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		DeflateInput_ConsumeBytes_mC55226E76E66464DADA33EA4D14F8546B86404CC(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.CopyEncoder::WriteLenNLen(System.UInt16,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder_WriteLenNLen_mF2BB5A6FE54C0005D6C4F572D4730076037B4BCF (CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * __this, uint16_t ___len0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_0 = ___output1;
		uint16_t L_1 = ___len0;
		NullCheck(L_0);
		OutputBuffer_WriteUInt16_m134C6B243A3939E77B50748521263CDA9835AEA1(L_0, L_1, /*hidden argument*/NULL);
		uint16_t L_2 = ___len0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((~L_2))));
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_3 = ___output1;
		uint16_t L_4 = V_0;
		NullCheck(L_3);
		OutputBuffer_WriteUInt16_m134C6B243A3939E77B50748521263CDA9835AEA1(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.CopyEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder__ctor_m94DEB49AA8BC426642B5F0AFB630ECB3E630253C (CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * __this, const RuntimeMethod* method)
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
// System.UInt32 Mapbox.IO.Compression.Crc32Helper::UpdateCrc32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Crc32Helper_UpdateCrc32_m4C13E760F50FD18AB5D81F93BE3FCD111A1E06E1 (uint32_t ___crc320, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35BFDEE211261605558130258CBD2499BD6546D1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___offset2;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___length3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___offset2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___buffer1;
		NullCheck(L_4);
		int32_t L_5 = ___length3;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B5_0 = 0;
	}

IL_001a:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B5_0, _stringLiteral35BFDEE211261605558130258CBD2499BD6546D1, /*hidden argument*/NULL);
		uint32_t L_6 = ___crc320;
		___crc320 = ((int32_t)((int32_t)L_6^(int32_t)(-1)));
		goto IL_004a;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_7 = ((Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_StaticFields*)il2cpp_codegen_static_fields_for(Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var))->get_crcTable_0();
		uint32_t L_8 = ___crc320;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___buffer1;
		int32_t L_10 = ___offset2;
		int32_t L_11 = L_10;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		int32_t L_14 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8^(int32_t)L_13))&(int32_t)((int32_t)255)));
		uint32_t L_15 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		uint32_t L_16 = ___crc320;
		___crc320 = ((int32_t)((int32_t)L_15^(int32_t)((int32_t)((uint32_t)L_16>>8))));
	}

IL_004a:
	{
		int32_t L_17 = ___length3;
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		___length3 = L_18;
		V_0 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_20 = ___crc320;
		___crc320 = ((int32_t)((int32_t)L_20^(int32_t)(-1)));
		uint32_t L_21 = ___crc320;
		V_1 = L_21;
		goto IL_0063;
	}

IL_0063:
	{
		uint32_t L_22 = V_1;
		return L_22;
	}
}
// System.Void Mapbox.IO.Compression.Crc32Helper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32Helper__cctor_m86E1B961DFF422FB67B4653AF61DED7DB2BDD247 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_StaticFields*)il2cpp_codegen_static_fields_for(Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var))->set_crcTable_0(L_1);
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
// System.Byte[] Mapbox.IO.Compression.DeflateInput::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DeflateInput_get_Buffer_mF7DE4151A19B65F3CEBEB100D454D2F0DA14B7FE (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buffer_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::set_Buffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_Buffer_m01D97BF285FCBD27AA84CDB89ECE494B40B06D56 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_buffer_0(L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_count_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::set_Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_Count_m7D7D2B81F390684949526A08035E252E6A906517 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_count_1(L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_StartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateInput_get_StartIndex_m08AD971B1AAD2A797DD58638D8252C79D76853D7 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_startIndex_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::set_StartIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_StartIndex_m5AE5F3922A902FC12B4A4E2F3E60421ECECA9772 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_startIndex_2(L_0);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::ConsumeBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_ConsumeBytes_mC55226E76E66464DADA33EA4D14F8546B86404CC (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BAB371171E70FE198F89E69A8E43AE0C36E4601);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70B5BDCED641CEE45F2FAFA3C0E91AC23A1D8B9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___n0;
		int32_t L_1 = __this->get_count_1();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral1BAB371171E70FE198F89E69A8E43AE0C36E4601, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_startIndex_2();
		int32_t L_3 = ___n0;
		__this->set_startIndex_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		int32_t L_4 = __this->get_count_1();
		int32_t L_5 = ___n0;
		__this->set_count_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)));
		int32_t L_6 = __this->get_startIndex_2();
		int32_t L_7 = __this->get_count_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_buffer_0();
		NullCheck(L_8);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral70B5BDCED641CEE45F2FAFA3C0E91AC23A1D8B9A, /*hidden argument*/NULL);
		return;
	}
}
// Mapbox.IO.Compression.DeflateInput/InputState Mapbox.IO.Compression.DeflateInput::DumpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  DeflateInput_DumpState_mDA8FB072CFCC0ABB2CD4F62B47A157E2092C3095 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method)
{
	InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_count_1();
		(&V_0)->set_count_0(L_0);
		int32_t L_1 = __this->get_startIndex_2();
		(&V_0)->set_startIndex_1(L_1);
		InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  L_2 = V_0;
		V_1 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  L_3 = V_1;
		return L_3;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::RestoreState(Mapbox.IO.Compression.DeflateInput/InputState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_RestoreState_m22459E83254C1B15684EA31B1397CC0C2B76B973 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  ___state0, const RuntimeMethod* method)
{
	{
		InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  L_0 = ___state0;
		int32_t L_1 = L_0.get_count_0();
		__this->set_count_1(L_1);
		InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  L_2 = ___state0;
		int32_t L_3 = L_2.get_startIndex_1();
		__this->set_startIndex_2(L_3);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput__ctor_mF0DCBD3F73EB098E6356B9851ABE7AA69E558DA2 (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * __this, const RuntimeMethod* method)
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
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mF13A24A59F741FD84AA4ADDEE5065DF96BF6C6E6 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_InternalWrite_m05CD0933EEB96A478C210F3D6D6A23D9B76818CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_ReadCallback_m6B4FB2EED55D8A81B3893B6C464098C7027F746A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteCallback_mAE4E6DD8C7C94C80468DC69A16DB36CB97B6CDDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		V_0 = (bool)((((RuntimeObject*)(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_mF13A24A59F741FD84AA4ADDEE5065DF96BF6C6E6_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_3 = ___mode1;
		if ((((int32_t)1) == ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = ___mode1;
		G_B5_0 = ((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = 0;
	}

IL_0026:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6;
		L_6 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28A2F47C431541E8C6C7DC36FE14CC30D56B13D6)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_mF13A24A59F741FD84AA4ADDEE5065DF96BF6C6E6_RuntimeMethod_var)));
	}

IL_003f:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___stream0;
		__this->set__stream_5(L_8);
		int32_t L_9 = ___mode1;
		__this->set__mode_6(L_9);
		bool L_10 = ___leaveOpen2;
		__this->set__leaveOpen_7(L_10);
		int32_t L_11 = __this->get__mode_6();
		V_2 = L_11;
		int32_t L_12 = V_2;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0115;
	}

IL_0069:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = __this->get__stream_5();
		NullCheck(L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_14);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_17;
		L_17 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral163C3DED22CE392C8A1B4C506AB01BBEB6723CA7)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_mF13A24A59F741FD84AA4ADDEE5065DF96BF6C6E6_RuntimeMethod_var)));
	}

IL_0091:
	{
		Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_19 = (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 *)il2cpp_codegen_object_new(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		Inflater__ctor_m4373E28FB097E3A6EF12DFB3E10539492900F668(L_19, /*hidden argument*/NULL);
		__this->set_inflater_8(L_19);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_20 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_20, __this, (intptr_t)((intptr_t)DeflateStream_ReadCallback_m6B4FB2EED55D8A81B3893B6C464098C7027F746A_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_m_CallBack_12(L_20);
		goto IL_0115;
	}

IL_00b0:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_21 = __this->get__stream_5();
		NullCheck(L_21);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_21);
		V_4 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_24;
		L_24 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215E7389CFC4724D02E42EABC72E0403D31CF637)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_25 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_25, L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_mF13A24A59F741FD84AA4ADDEE5065DF96BF6C6E6_RuntimeMethod_var)));
	}

IL_00da:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E ));
		Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E  L_26 = V_5;
		RuntimeObject* L_27;
		L_27 = DeflateStream_CreateDeflater_m2795C21730ED89CCAD525A4C06E23261BBCA2E3A(L_26, /*hidden argument*/NULL);
		__this->set_deflater_9(L_27);
		AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * L_28 = (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B *)il2cpp_codegen_object_new(AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B_il2cpp_TypeInfo_var);
		AsyncWriteDelegate__ctor_m28DAF20677832C084D8D204E92A1FCF8242BF9DA(L_28, __this, (intptr_t)((intptr_t)DeflateStream_InternalWrite_m05CD0933EEB96A478C210F3D6D6A23D9B76818CE_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_m_AsyncWriterDelegate_13(L_28);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_29 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_29, __this, (intptr_t)((intptr_t)DeflateStream_WriteCallback_mAE4E6DD8C7C94C80468DC69A16DB36CB97B6CDDA_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_m_CallBack_12(L_29);
		goto IL_0115;
	}

IL_0115:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		__this->set_buffer_10(L_30);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m45B3AABC3B79983617168C2B3D7F1E78333BFF7B (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_InternalWrite_m05CD0933EEB96A478C210F3D6D6A23D9B76818CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteCallback_mAE4E6DD8C7C94C80468DC69A16DB36CB97B6CDDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m71744537E77A3127A3BEBE8A52094C27C4305468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		V_0 = (bool)((((RuntimeObject*)(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m45B3AABC3B79983617168C2B3D7F1E78333BFF7B_RuntimeMethod_var)));
	}

IL_001b:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = ___stream0;
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_6;
		L_6 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215E7389CFC4724D02E42EABC72E0403D31CF637)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m45B3AABC3B79983617168C2B3D7F1E78333BFF7B_RuntimeMethod_var)));
	}

IL_003d:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___stream0;
		__this->set__stream_5(L_8);
		__this->set__mode_6(1);
		bool L_9 = ___leaveOpen2;
		__this->set__leaveOpen_7(L_9);
		int32_t L_10 = ___compressionLevel1;
		Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m71744537E77A3127A3BEBE8A52094C27C4305468((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m71744537E77A3127A3BEBE8A52094C27C4305468_RuntimeMethod_var);
		RuntimeObject* L_12;
		L_12 = DeflateStream_CreateDeflater_m2795C21730ED89CCAD525A4C06E23261BBCA2E3A(L_11, /*hidden argument*/NULL);
		__this->set_deflater_9(L_12);
		AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * L_13 = (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B *)il2cpp_codegen_object_new(AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B_il2cpp_TypeInfo_var);
		AsyncWriteDelegate__ctor_m28DAF20677832C084D8D204E92A1FCF8242BF9DA(L_13, __this, (intptr_t)((intptr_t)DeflateStream_InternalWrite_m05CD0933EEB96A478C210F3D6D6A23D9B76818CE_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_m_AsyncWriterDelegate_13(L_13);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_14 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_14, __this, (intptr_t)((intptr_t)DeflateStream_WriteCallback_mAE4E6DD8C7C94C80468DC69A16DB36CB97B6CDDA_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_m_CallBack_12(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		__this->set_buffer_10(L_15);
		return;
	}
}
// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::CreateDeflater(System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_CreateDeflater_m2795C21730ED89CCAD525A4C06E23261BBCA2E3A (Nullable_1_tC95FA09E371A600C7E2A6F07349E4D9582EA9D1E  ___compressionLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint8_t L_0;
		L_0 = DeflateStream_GetDeflaterType_mD721352EA76B99BF2404B102FF84C4818A920314(/*hidden argument*/NULL);
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * L_2 = (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC *)il2cpp_codegen_object_new(DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC_il2cpp_TypeInfo_var);
		DeflaterManaged__ctor_m479A630D1B7B6150D384EE969EDC8020B94B400A(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_001f;
	}

IL_0014:
	{
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_3 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var)));
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0AA069E2ECAA3C78085B48D7771C42F4D451722)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_CreateDeflater_m2795C21730ED89CCAD525A4C06E23261BBCA2E3A_RuntimeMethod_var)));
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// Mapbox.IO.Compression.DeflateStream/WorkerType Mapbox.IO.Compression.DeflateStream::GetDeflaterType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t DeflateStream_GetDeflaterType_mD721352EA76B99BF2404B102FF84C4818A920314 (const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		uint8_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetFileFormatReader_m65A1BA5FFAD4ED5581F1DDA300B33BADE5B847AE (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___reader0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_2 = __this->get_inflater_8();
		RuntimeObject* L_3 = ___reader0;
		NullCheck(L_2);
		Inflater_SetFileFormatReader_m3A402897FFDD7DC4F14DC3A16113A8B1F315FE19(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatWriter(Mapbox.IO.Compression.IFileFormatWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetFileFormatWriter_m21E3D443AE7A81A40E019AC9F67769B4E94D386B (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___writer0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___writer0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_2 = ___writer0;
		__this->set_formatWriter_14(L_2);
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_mE505FC59A68352AF7A29EA843D0E1BF899D8D377 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_5();
		V_0 = (bool)((((RuntimeObject*)(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_0013:
	{
		int32_t L_2 = __this->get__mode_6();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get__stream_5();
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_mF2FCD5D479E3EB85720C753E46AE33950A427F7A (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_5();
		V_0 = (bool)((((RuntimeObject*)(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002d;
	}

IL_0013:
	{
		int32_t L_2 = __this->get__mode_6();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get__stream_5();
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
	}

IL_002a:
	{
		V_1 = (bool)G_B5_0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m50ABDAAD358B15D90C57B1AB095A411BE14C8335 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int64 Mapbox.IO.Compression.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_mD66A7332140B1FBB9039D9753DE339423EE5A045 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_mD66A7332140B1FBB9039D9753DE339423EE5A045_RuntimeMethod_var)));
	}
}
// System.Int64 Mapbox.IO.Compression.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_mAAD627D38010E8F8C5C3026CD2E58796C57FE84F (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Position_mAAD627D38010E8F8C5C3026CD2E58796C57FE84F_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_mBE577279C88E94999851A16B475C67DBC3236973 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_mBE577279C88E94999851A16B475C67DBC3236973_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_mA0ADDE3B1275DDF18247C667CD0D464BCBDBD5CF (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method)
{
	{
		DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E(__this, /*hidden argument*/NULL);
		goto IL_000a;
	}

IL_000a:
	{
		return;
	}
}
// System.Int64 Mapbox.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_m3C13C8C37F37F4F40A708E5FE25BA9417B4E6D26 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_m3C13C8C37F37F4F40A708E5FE25BA9417B4E6D26_RuntimeMethod_var)));
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m0041B09B45CB0374881982F03B182AA3852044F0 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral175AF943E8C780500BB6737145BBBE0BA4A35DD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C743C875078F8C0513325ED4E9171AC6D4B4DAE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	{
		DeflateStream_EnsureDecompressionMode_m88E9CD56FAE981884DD00DED734F419625E39015(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___offset1;
		V_1 = L_3;
		int32_t L_4 = ___count2;
		V_2 = L_4;
		goto IL_00ca;
	}

IL_0022:
	{
		Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_5 = __this->get_inflater_8();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___array0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_5);
		int32_t L_9;
		L_9 = Inflater_Inflate_m982C2E275B50C5E06AE7C4341742464558B08C1A(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13));
		int32_t L_14 = V_2;
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_004a;
		}
	}
	{
		goto IL_00d2;
	}

IL_004a:
	{
		Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_16 = __this->get_inflater_8();
		NullCheck(L_16);
		bool L_17;
		L_17 = Inflater_Finished_m567445FF848582887054CB1268E97F1C6B869E79(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0077;
		}
	}
	{
		Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_19 = __this->get_inflater_8();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Inflater_get_AvailableOutput_m3C933C0A54909A301DB6AB6B12EC43DBE4D6BB3E(L_19, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0), _stringLiteral2C743C875078F8C0513325ED4E9171AC6D4B4DAE, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_0077:
	{
		Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_21 = __this->get_inflater_8();
		NullCheck(L_21);
		bool L_22;
		L_22 = Inflater_NeedsInput_mF2C2F1B0D5BC92B1AB912499F0C452152CA32A96(L_21, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B(L_22, _stringLiteral175AF943E8C780500BB6737145BBBE0BA4A35DD3, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_23 = __this->get__stream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = __this->get_buffer_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_buffer_10();
		NullCheck(L_25);
		NullCheck(L_23);
		int32_t L_26;
		L_26 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))));
		V_3 = L_26;
		int32_t L_27 = V_3;
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00d2;
	}

IL_00b5:
	{
		Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_29 = __this->get_inflater_8();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = __this->get_buffer_10();
		int32_t L_31 = V_3;
		NullCheck(L_29);
		Inflater_SetInput_m2656520B8CF3F1AAC59727E2AA5323875B66544E(L_29, L_30, 0, L_31, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		V_7 = (bool)1;
		goto IL_0022;
	}

IL_00d2:
	{
		int32_t L_32 = ___count2;
		int32_t L_33 = V_2;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33));
		goto IL_00d9;
	}

IL_00d9:
	{
		int32_t L_34 = V_8;
		return L_34;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::ValidateParameters(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___offset1;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___count2;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60_RuntimeMethod_var)));
	}

IL_003a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		V_3 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDB5B65098C5E7E595009BB3FC45594C192D82CD)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60_RuntimeMethod_var)));
	}

IL_0056:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_5();
		V_0 = (bool)((((RuntimeObject*)(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), /*hidden argument*/NULL);
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_3 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mC830C2F97D5314DF72EEFFE749E7F7FB467D0382(L_3, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E_RuntimeMethod_var)));
	}

IL_001f:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureDecompressionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureDecompressionMode_m88E9CD56FAE981884DD00DED734F419625E39015 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get__mode_6();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82F08919641B79AB61608B2AAA086EE79385F70C)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EnsureDecompressionMode_m88E9CD56FAE981884DD00DED734F419625E39015_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureCompressionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureCompressionMode_m37D5D641A319928058CAF8A4D31A5CE4A2C0756D (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get__mode_6();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC156D24D9629AA45DAC9B7C975434CCCA93C9CC8)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EnsureCompressionMode_m37D5D641A319928058CAF8A4D31A5CE4A2C0756D_RuntimeMethod_var)));
	}

IL_0021:
	{
		return;
	}
}
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginRead_mDB8D36C5A628AF67BA3DBB2DEAA47D1B72EA784F (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___asyncCallback3, RuntimeObject * ___asyncState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		DeflateStream_EnsureDecompressionMode_m88E9CD56FAE981884DD00DED734F419625E39015(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_asyncOperations_11();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA465E00C713E7E72045D2EFF274E985042DD1E2E)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_mDB8D36C5A628AF67BA3DBB2DEAA47D1B72EA784F_RuntimeMethod_var)));
	}

IL_0025:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___offset1;
		int32_t L_6 = ___count2;
		DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E(__this, /*hidden argument*/NULL);
		int32_t* L_7 = __this->get_address_of_asyncOperations_11();
		int32_t L_8;
		L_8 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_7, /*hidden argument*/NULL);
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_9 = ___asyncState4;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_10 = ___asyncCallback3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___array0;
			int32_t L_12 = ___offset1;
			int32_t L_13 = ___count2;
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_14 = (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 *)il2cpp_codegen_object_new(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var);
			DeflateStreamAsyncResult__ctor_m447087A29C3437C3EFC9661EB30655EEA12B2189(L_14, __this, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
			V_1 = L_14;
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_15 = V_1;
			NullCheck(L_15);
			L_15->set_isWrite_3((bool)0);
			Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_16 = __this->get_inflater_8();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___array0;
			int32_t L_18 = ___offset1;
			int32_t L_19 = ___count2;
			NullCheck(L_16);
			int32_t L_20;
			L_20 = Inflater_Inflate_m982C2E275B50C5E06AE7C4341742464558B08C1A(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
			V_2 = L_20;
			int32_t L_21 = V_2;
			V_3 = (bool)((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0);
			bool L_22 = V_3;
			if (!L_22)
			{
				goto IL_0083;
			}
		}

IL_006f:
		{
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_23 = V_1;
			int32_t L_24 = V_2;
			int32_t L_25 = L_24;
			RuntimeObject * L_26 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_25);
			NullCheck(L_23);
			DeflateStreamAsyncResult_InvokeCallback_m3B31F563D243DDCB3977F527C0E24102E92E7D54(L_23, (bool)1, L_26, /*hidden argument*/NULL);
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_27 = V_1;
			V_4 = L_27;
			goto IL_00f2;
		}

IL_0083:
		{
			Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_28 = __this->get_inflater_8();
			NullCheck(L_28);
			bool L_29;
			L_29 = Inflater_Finished_m567445FF848582887054CB1268E97F1C6B869E79(L_28, /*hidden argument*/NULL);
			V_5 = L_29;
			bool L_30 = V_5;
			if (!L_30)
			{
				goto IL_00a8;
			}
		}

IL_0094:
		{
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_31 = V_1;
			int32_t L_32 = 0;
			RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
			NullCheck(L_31);
			DeflateStreamAsyncResult_InvokeCallback_m3B31F563D243DDCB3977F527C0E24102E92E7D54(L_31, (bool)1, L_33, /*hidden argument*/NULL);
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_34 = V_1;
			V_4 = L_34;
			goto IL_00f2;
		}

IL_00a8:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_35 = __this->get__stream_5();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = __this->get_buffer_10();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = __this->get_buffer_10();
			NullCheck(L_37);
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_38 = __this->get_m_CallBack_12();
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_39 = V_1;
			NullCheck(L_35);
			RuntimeObject* L_40;
			L_40 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_35, L_36, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))), L_38, L_39);
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_41 = V_1;
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_42 = L_41;
			NullCheck(L_42);
			bool L_43 = L_42->get_m_CompletedSynchronously_8();
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_44 = V_1;
			NullCheck(L_44);
			bool L_45;
			L_45 = DeflateStreamAsyncResult_get_IsCompleted_m5E81938F83C4E4EEA02A71EAE6F557A7B097CAEE(L_44, /*hidden argument*/NULL);
			NullCheck(L_42);
			L_42->set_m_CompletedSynchronously_8((bool)((int32_t)((int32_t)L_43&(int32_t)L_45)));
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_46 = V_1;
			V_4 = L_46;
			goto IL_00f2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e2;
		}
		throw e;
	}

CATCH_00e2:
	{ // begin catch(System.Object)
		int32_t* L_47 = __this->get_address_of_asyncOperations_11();
		int32_t L_48;
		L_48 = Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF((int32_t*)L_47, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_mDB8D36C5A628AF67BA3DBB2DEAA47D1B72EA784F_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00f2:
	{
		RuntimeObject* L_49 = V_4;
		return L_49;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::ReadCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_ReadCallback_m6B4FB2EED55D8A81B3893B6C464098C7027F746A (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___baseStreamResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject* L_0 = ___baseStreamResult0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_0);
		V_0 = ((DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 *)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_2 = V_0;
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_3 = L_2;
		NullCheck(L_3);
		bool L_4 = L_3->get_m_CompletedSynchronously_8();
		RuntimeObject* L_5 = ___baseStreamResult0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		L_3->set_m_CompletedSynchronously_8((bool)((int32_t)((int32_t)L_4&(int32_t)L_6)));
		V_1 = 0;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E(__this, /*hidden argument*/NULL);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_7 = __this->get__stream_5();
			RuntimeObject* L_8 = ___baseStreamResult0;
			NullCheck(L_7);
			int32_t L_9;
			L_9 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(20 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_7, L_8);
			V_1 = L_9;
			int32_t L_10 = V_1;
			V_2 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_0055;
			}
		}

IL_0042:
		{
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_12 = V_0;
			int32_t L_13 = 0;
			RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_12);
			DeflateStreamAsyncResult_InvokeCallback_m37E7CE8E665105A485398295ED33250270725CE6(L_12, L_14, /*hidden argument*/NULL);
			goto IL_00e5;
		}

IL_0055:
		{
			Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_15 = __this->get_inflater_8();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_buffer_10();
			int32_t L_17 = V_1;
			NullCheck(L_15);
			Inflater_SetInput_m2656520B8CF3F1AAC59727E2AA5323875B66544E(L_15, L_16, 0, L_17, /*hidden argument*/NULL);
			Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_18 = __this->get_inflater_8();
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_19 = V_0;
			NullCheck(L_19);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = L_19->get_buffer_0();
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = L_21->get_offset_1();
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = L_23->get_count_2();
			NullCheck(L_18);
			int32_t L_25;
			L_25 = Inflater_Inflate_m982C2E275B50C5E06AE7C4341742464558B08C1A(L_18, L_20, L_22, L_24, /*hidden argument*/NULL);
			V_1 = L_25;
			int32_t L_26 = V_1;
			if (L_26)
			{
				goto IL_009a;
			}
		}

IL_008a:
		{
			Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * L_27 = __this->get_inflater_8();
			NullCheck(L_27);
			bool L_28;
			L_28 = Inflater_Finished_m567445FF848582887054CB1268E97F1C6B869E79(L_27, /*hidden argument*/NULL);
			G_B6_0 = ((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
			goto IL_009b;
		}

IL_009a:
		{
			G_B6_0 = 0;
		}

IL_009b:
		{
			V_3 = (bool)G_B6_0;
			bool L_29 = V_3;
			if (!L_29)
			{
				goto IL_00c5;
			}
		}

IL_009f:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_30 = __this->get__stream_5();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = __this->get_buffer_10();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = __this->get_buffer_10();
			NullCheck(L_32);
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_33 = __this->get_m_CallBack_12();
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_34 = V_0;
			NullCheck(L_30);
			RuntimeObject* L_35;
			L_35 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_30, L_31, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))), L_33, L_34);
			goto IL_00d4;
		}

IL_00c5:
		{
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_36 = V_0;
			int32_t L_37 = V_1;
			int32_t L_38 = L_37;
			RuntimeObject * L_39 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_38);
			NullCheck(L_36);
			DeflateStreamAsyncResult_InvokeCallback_m37E7CE8E665105A485398295ED33250270725CE6(L_36, L_39, /*hidden argument*/NULL);
		}

IL_00d4:
		{
			goto IL_00e5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d7;
		}
		throw e;
	}

CATCH_00d7:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_40 = V_0;
		Exception_t * L_41 = V_4;
		NullCheck(L_40);
		DeflateStreamAsyncResult_InvokeCallback_m37E7CE8E665105A485398295ED33250270725CE6(L_40, L_41, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e5;
	} // end catch (depth: 1)

IL_00e5:
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_EndRead_m3F55910F18468161118E274E90AB75C20D5FAE26 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		DeflateStream_EnsureDecompressionMode_m88E9CD56FAE981884DD00DED734F419625E39015(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___asyncResult0;
		DeflateStream_CheckEndXxxxLegalStateAndParams_m52710FAB4DC5960AC18F1C94DEF18350EFB4340C(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___asyncResult0;
		V_0 = ((DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 *)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_2 = V_0;
		DeflateStream_AwaitAsyncResultCompletion_m1B4FF7C27CDFE00BE9A01B0BBB9C7307684E7072(__this, L_2, /*hidden argument*/NULL);
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = DeflateStreamAsyncResult_get_Result_m9153B98D779D6FDC474FA05A961E06CFDF0F6EE8(L_3, /*hidden argument*/NULL);
		V_1 = ((Exception_t *)IsInstClass((RuntimeObject*)L_4, Exception_t_il2cpp_TypeInfo_var));
		Exception_t * L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Exception_t * L_7 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3F55910F18468161118E274E90AB75C20D5FAE26_RuntimeMethod_var)));
	}

IL_0036:
	{
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = DeflateStreamAsyncResult_get_Result_m9153B98D779D6FDC474FA05A961E06CFDF0F6EE8(L_8, /*hidden argument*/NULL);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_10 = V_3;
		return L_10;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_mF64DD68D61074D02634A2F0459F656F904592C71 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		DeflateStream_EnsureCompressionMode_m37D5D641A319928058CAF8A4D31A5CE4A2C0756D(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___array0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		DeflateStream_InternalWrite_m05CD0933EEB96A478C210F3D6D6A23D9B76818CE(__this, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::InternalWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_InternalWrite_m05CD0933EEB96A478C210F3D6D6A23D9B76818CE (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		DeflateStream_DoMaintenance_m4C92D64832F59F313C3F0C0B79B36C5CD5CB41E0(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = ___isAsync3;
		DeflateStream_WriteDeflaterOutput_m12EC5CF322D49E34DF8B65DD026FF84A6EDDE080(__this, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = __this->get_deflater_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		InterfaceActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(1 /* System.Void Mapbox.IO.Compression.IDeflater::SetInput(System.Byte[],System.Int32,System.Int32) */, IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
		bool L_8 = ___isAsync3;
		DeflateStream_WriteDeflaterOutput_m12EC5CF322D49E34DF8B65DD026FF84A6EDDE080(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::WriteDeflaterOutput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteDeflaterOutput_m12EC5CF322D49E34DF8B65DD026FF84A6EDDE080 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, bool ___isAsync0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_002f;
	}

IL_0003:
	{
		RuntimeObject* L_0 = __this->get_deflater_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_buffer_10();
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(2 /* System.Int32 Mapbox.IO.Compression.IDeflater::GetDeflateOutput(System.Byte[]) */, IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_buffer_10();
		int32_t L_6 = V_0;
		bool L_7 = ___isAsync0;
		DeflateStream_DoWrite_mE224C7C5B1A0DA2582707A00A81D5922F08FC0A5(__this, L_5, 0, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
	}

IL_002f:
	{
		RuntimeObject* L_8 = __this->get_deflater_9();
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Mapbox.IO.Compression.IDeflater::NeedsInput() */, IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var, L_8);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::DoWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_DoWrite_mE224C7C5B1A0DA2582707A00A81D5922F08FC0A5 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		Debug_Assert_m290B087CA6F58852C5EACE90EA3A398216C7B136((bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_1 = ___count2;
		Debug_Assert_m290B087CA6F58852C5EACE90EA3A398216C7B136((bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		bool L_2 = ___isAsync3;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get__stream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		RuntimeObject* L_8;
		L_8 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(22 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)NULL, NULL);
		V_1 = L_8;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = __this->get__stream_5();
		RuntimeObject* L_10 = V_1;
		NullCheck(L_9);
		VirtActionInvoker1< RuntimeObject* >::Invoke(23 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_9, L_10);
		goto IL_004e;
	}

IL_003d:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = __this->get__stream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___array0;
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___count2;
		NullCheck(L_11);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, L_13, L_14);
	}

IL_004e:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::DoMaintenance(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_DoMaintenance_m4C92D64832F59F313C3F0C0B79B36C5CD5CB41E0 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileFormatWriter_t95696D3893A9B72EC1B620999B5D98759C856F7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	{
		int32_t L_0 = ___count2;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0066;
	}

IL_000e:
	{
		__this->set_wroteBytes_16((bool)1);
		RuntimeObject* L_2 = __this->get_formatWriter_14();
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0066;
	}

IL_0024:
	{
		bool L_4 = __this->get_wroteHeader_15();
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_formatWriter_14();
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = InterfaceFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(0 /* System.Byte[] Mapbox.IO.Compression.IFileFormatWriter::GetHeader() */, IFileFormatWriter_t95696D3893A9B72EC1B620999B5D98759C856F7D_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = __this->get__stream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_3;
		NullCheck(L_10);
		NullCheck(L_8);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))));
		__this->set_wroteHeader_15((bool)1);
	}

IL_0057:
	{
		RuntimeObject* L_11 = __this->get_formatWriter_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___array0;
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___count2;
		NullCheck(L_11);
		InterfaceActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(1 /* System.Void Mapbox.IO.Compression.IFileFormatWriter::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32) */, IFileFormatWriter_t95696D3893A9B72EC1B620999B5D98759C856F7D_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14);
	}

IL_0066:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::PurgeBuffers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_PurgeBuffers_mFBE28AC293B5895A3F927D136E90D4065B72B0EE (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileFormatWriter_t95696D3893A9B72EC1B620999B5D98759C856F7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_9 = NULL;
	int32_t G_B15_0 = 0;
	{
		bool L_0 = ___disposing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00c7;
	}

IL_000e:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = __this->get__stream_5();
		V_1 = (bool)((((RuntimeObject*)(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_00c7;
	}

IL_0020:
	{
		VirtActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Flush() */, __this);
		int32_t L_4 = __this->get__mode_6();
		V_2 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00c7;
	}

IL_003c:
	{
		bool L_6 = __this->get_wroteBytes_16();
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_008e;
		}
	}
	{
		DeflateStream_WriteDeflaterOutput_m12EC5CF322D49E34DF8B65DD026FF84A6EDDE080(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		RuntimeObject* L_8 = __this->get_deflater_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_buffer_10();
		NullCheck(L_8);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t* >::Invoke(3 /* System.Boolean Mapbox.IO.Compression.IDeflater::Finish(System.Byte[],System.Int32&) */, IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var, L_8, L_9, (int32_t*)(&V_5));
		V_4 = L_10;
		int32_t L_11 = V_5;
		V_6 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_buffer_10();
		int32_t L_14 = V_5;
		DeflateStream_DoWrite_mE224C7C5B1A0DA2582707A00A81D5922F08FC0A5(__this, L_13, 0, L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0081:
	{
		bool L_15 = V_4;
		V_7 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (L_16)
		{
			goto IL_004f;
		}
	}
	{
	}

IL_008e:
	{
		RuntimeObject* L_17 = __this->get_formatWriter_14();
		if (!L_17)
		{
			goto IL_009e;
		}
	}
	{
		bool L_18 = __this->get_wroteHeader_15();
		G_B15_0 = ((int32_t)(L_18));
		goto IL_009f;
	}

IL_009e:
	{
		G_B15_0 = 0;
	}

IL_009f:
	{
		V_8 = (bool)G_B15_0;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject* L_20 = __this->get_formatWriter_14();
		NullCheck(L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
		L_21 = InterfaceFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(2 /* System.Byte[] Mapbox.IO.Compression.IFileFormatWriter::GetFooter() */, IFileFormatWriter_t95696D3893A9B72EC1B620999B5D98759C856F7D_il2cpp_TypeInfo_var, L_20);
		V_9 = L_21;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_22 = __this->get__stream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_9;
		NullCheck(L_24);
		NullCheck(L_22);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))));
	}

IL_00c7:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_mCCA014BA4C4294C9DE05797B6856B71CEE443962 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B7_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		bool L_0 = ___disposing0;
		DeflateStream_PurgeBuffers_mFBE28AC293B5895A3F927D136E90D4065B72B0EE(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x74, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		{
		}

IL_000e:
		try
		{ // begin try (depth: 2)
			{
				bool L_1 = ___disposing0;
				if (!L_1)
				{
					goto IL_0025;
				}
			}

IL_0012:
			{
				bool L_2 = __this->get__leaveOpen_7();
				if (L_2)
				{
					goto IL_0025;
				}
			}

IL_001a:
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get__stream_5();
				G_B7_0 = ((!(((RuntimeObject*)(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				goto IL_0026;
			}

IL_0025:
			{
				G_B7_0 = 0;
			}

IL_0026:
			{
				V_0 = (bool)G_B7_0;
				bool L_4 = V_0;
				if (!L_4)
				{
					goto IL_0036;
				}
			}

IL_002a:
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = __this->get__stream_5();
				NullCheck(L_5);
				VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_5);
			}

IL_0036:
			{
				IL2CPP_LEAVE(0x72, FINALLY_0039);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0039;
		}

FINALLY_0039:
		{ // begin finally (depth: 2)
			{
				__this->set__stream_5((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
			}

IL_0041:
			try
			{ // begin try (depth: 3)
				{
					RuntimeObject* L_6 = __this->get_deflater_9();
					V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
					bool L_7 = V_1;
					if (!L_7)
					{
						goto IL_005b;
					}
				}

IL_004f:
				{
					RuntimeObject* L_8 = __this->get_deflater_9();
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
				}

IL_005b:
				{
					IL2CPP_LEAVE(0x70, FINALLY_005e);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_005e;
			}

FINALLY_005e:
			{ // begin finally (depth: 3)
				__this->set_deflater_9((RuntimeObject*)NULL);
				bool L_9 = ___disposing0;
				Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE(__this, L_9, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(94)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(94)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x70, IL_0070)
			}

IL_0070:
			{
				IL2CPP_END_FINALLY(57)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(57)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x72, IL_0072)
		}

IL_0072:
		{
			IL2CPP_END_FINALLY(13)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
	}

IL_0074:
	{
		return;
	}
}
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginWrite_m60BCB6D0DB8E956A215886844AFC4FFE01DB1E84 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___asyncCallback3, RuntimeObject * ___asyncState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		DeflateStream_EnsureCompressionMode_m37D5D641A319928058CAF8A4D31A5CE4A2C0756D(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_asyncOperations_11();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA465E00C713E7E72045D2EFF274E985042DD1E2E)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m60BCB6D0DB8E956A215886844AFC4FFE01DB1E84_RuntimeMethod_var)));
	}

IL_0025:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___offset1;
		int32_t L_6 = ___count2;
		DeflateStream_ValidateParameters_m7F05D30F6CF3FBCF036AE190C4F6D83D60D22C60(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E(__this, /*hidden argument*/NULL);
		int32_t* L_7 = __this->get_address_of_asyncOperations_11();
		int32_t L_8;
		L_8 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_7, /*hidden argument*/NULL);
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_9 = ___asyncState4;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_10 = ___asyncCallback3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___array0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_14 = (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 *)il2cpp_codegen_object_new(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var);
		DeflateStreamAsyncResult__ctor_m447087A29C3437C3EFC9661EB30655EEA12B2189(L_14, __this, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_15 = V_1;
		NullCheck(L_15);
		L_15->set_isWrite_3((bool)1);
		AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * L_16 = __this->get_m_AsyncWriterDelegate_13();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		int32_t L_19 = ___count2;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_20 = __this->get_m_CallBack_12();
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_21 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = AsyncWriteDelegate_BeginInvoke_mA7DE2CB9736E3A2479BDB973F50DF3228EEACAF6(L_16, L_17, L_18, L_19, (bool)1, L_20, L_21, /*hidden argument*/NULL);
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_23 = V_1;
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_24 = L_23;
		NullCheck(L_24);
		bool L_25 = L_24->get_m_CompletedSynchronously_8();
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_26 = V_1;
		NullCheck(L_26);
		bool L_27;
		L_27 = DeflateStreamAsyncResult_get_IsCompleted_m5E81938F83C4E4EEA02A71EAE6F557A7B097CAEE(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_m_CompletedSynchronously_8((bool)((int32_t)((int32_t)L_25&(int32_t)L_27)));
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_28 = V_1;
		V_2 = L_28;
		goto IL_0096;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{ // begin catch(System.Object)
		int32_t* L_29 = __this->get_address_of_asyncOperations_11();
		int32_t L_30;
		L_30 = Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF((int32_t*)L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m60BCB6D0DB8E956A215886844AFC4FFE01DB1E84_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0096:
	{
		RuntimeObject* L_31 = V_2;
		return L_31;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::WriteCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCallback_mAE4E6DD8C7C94C80468DC69A16DB36CB97B6CDDA (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject* L_0 = ___asyncResult0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_0);
		V_0 = ((DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 *)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_2 = V_0;
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_3 = L_2;
		NullCheck(L_3);
		bool L_4 = L_3->get_m_CompletedSynchronously_8();
		RuntimeObject* L_5 = ___asyncResult0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		L_3->set_m_CompletedSynchronously_8((bool)((int32_t)((int32_t)L_4&(int32_t)L_6)));
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * L_7 = __this->get_m_AsyncWriterDelegate_13();
		RuntimeObject* L_8 = ___asyncResult0;
		NullCheck(L_7);
		AsyncWriteDelegate_EndInvoke_m6786DED730B0BCA270F5850A71979B1FCD3DB4D1(L_7, L_8, /*hidden argument*/NULL);
		goto IL_003d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_9 = V_0;
		Exception_t * L_10 = V_1;
		NullCheck(L_9);
		DeflateStreamAsyncResult_InvokeCallback_m37E7CE8E665105A485398295ED33250270725CE6(L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0045;
	} // end catch (depth: 1)

IL_003d:
	{
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_11 = V_0;
		NullCheck(L_11);
		DeflateStreamAsyncResult_InvokeCallback_m37E7CE8E665105A485398295ED33250270725CE6(L_11, NULL, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EndWrite_mBCC4F142534E12A55A9E22A335852D29ED3A6345 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	{
		DeflateStream_EnsureCompressionMode_m37D5D641A319928058CAF8A4D31A5CE4A2C0756D(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___asyncResult0;
		DeflateStream_CheckEndXxxxLegalStateAndParams_m52710FAB4DC5960AC18F1C94DEF18350EFB4340C(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___asyncResult0;
		V_0 = ((DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 *)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_2 = V_0;
		DeflateStream_AwaitAsyncResultCompletion_m1B4FF7C27CDFE00BE9A01B0BBB9C7307684E7072(__this, L_2, /*hidden argument*/NULL);
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = DeflateStreamAsyncResult_get_Result_m9153B98D779D6FDC474FA05A961E06CFDF0F6EE8(L_3, /*hidden argument*/NULL);
		V_1 = ((Exception_t *)IsInstClass((RuntimeObject*)L_4, Exception_t_il2cpp_TypeInfo_var));
		Exception_t * L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Exception_t * L_7 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_mBCC4F142534E12A55A9E22A335852D29ED3A6345_RuntimeMethod_var)));
	}

IL_0036:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::CheckEndXxxxLegalStateAndParams(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_CheckEndXxxxLegalStateAndParams_m52710FAB4DC5960AC18F1C94DEF18350EFB4340C (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_asyncOperations_11();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0CA4B30AD24F5B4E2579117D84F879B0C60CE3F8)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_CheckEndXxxxLegalStateAndParams_m52710FAB4DC5960AC18F1C94DEF18350EFB4340C_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_CheckEndXxxxLegalStateAndParams_m52710FAB4DC5960AC18F1C94DEF18350EFB4340C_RuntimeMethod_var)));
	}

IL_0034:
	{
		DeflateStream_EnsureNotDisposed_m8F6477228CF0167A5476BF09184B47FD8AF5F93E(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = ___asyncResult0;
		V_0 = ((DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 *)IsInstClass((RuntimeObject*)L_7, DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_8 = V_0;
		V_3 = (bool)((((RuntimeObject*)(DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_10 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_CheckEndXxxxLegalStateAndParams_m52710FAB4DC5960AC18F1C94DEF18350EFB4340C_RuntimeMethod_var)));
	}

IL_0055:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::AwaitAsyncResultCompletion(Mapbox.IO.Compression.DeflateStreamAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_AwaitAsyncResultCompletion_m1B4FF7C27CDFE00BE9A01B0BBB9C7307684E7072 (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * __this, DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * ___asyncResult0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_0 = ___asyncResult0;
			NullCheck(L_0);
			bool L_1;
			L_1 = DeflateStreamAsyncResult_get_IsCompleted_m5E81938F83C4E4EEA02A71EAE6F557A7B097CAEE(L_0, /*hidden argument*/NULL);
			V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_001b;
			}
		}

IL_000f:
		{
			DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_3 = ___asyncResult0;
			NullCheck(L_3);
			WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * L_4;
			L_4 = DeflateStreamAsyncResult_get_AsyncWaitHandle_m35C2485579D9DCE856624860B08CEAE9B58C9E66(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			bool L_5;
			L_5 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x34, FINALLY_001e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		int32_t* L_6 = __this->get_address_of_asyncOperations_11();
		int32_t L_7;
		L_7 = Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF((int32_t*)L_6, /*hidden argument*/NULL);
		DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * L_8 = ___asyncResult0;
		NullCheck(L_8);
		DeflateStreamAsyncResult_Close_mE1D967DC25EBF068EC4E39048527D823290C8E21(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
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
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::.ctor(System.Object,System.Object,System.AsyncCallback,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult__ctor_m447087A29C3437C3EFC9661EB30655EEA12B2189 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, RuntimeObject * ___asyncObject0, RuntimeObject * ___asyncState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___asyncCallback2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___offset4, int32_t ___count5, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer3;
		__this->set_buffer_0(L_0);
		int32_t L_1 = ___offset4;
		__this->set_offset_1(L_1);
		int32_t L_2 = ___count5;
		__this->set_count_2(L_2);
		__this->set_m_CompletedSynchronously_8((bool)1);
		RuntimeObject * L_3 = ___asyncObject0;
		__this->set_m_AsyncObject_4(L_3);
		RuntimeObject * L_4 = ___asyncState1;
		__this->set_m_AsyncState_5(L_4);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_5 = ___asyncCallback2;
		__this->set_m_AsyncCallback_6(L_5);
		return;
	}
}
// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::get_AsyncState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DeflateStreamAsyncResult_get_AsyncState_m377CF1F15861AE8264E240C377D8B33C3499FC0D (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_m_AsyncState_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Threading.WaitHandle Mapbox.IO.Compression.DeflateStreamAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * DeflateStreamAsyncResult_get_AsyncWaitHandle_m35C2485579D9DCE856624860B08CEAE9B58C9E66 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * V_4 = NULL;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->get_m_Completed_10();
		V_0 = L_0;
		RuntimeObject * L_1 = __this->get_m_Event_11();
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject ** L_3 = __this->get_address_of_m_Event_11();
		int32_t L_4 = V_0;
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_5, (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		RuntimeObject * L_6;
		L_6 = Interlocked_CompareExchange_mFAD09589A5DAFDBABB05C62A2D35CD5B92BC6961((RuntimeObject **)L_3, L_5, NULL, /*hidden argument*/NULL);
	}

IL_002d:
	{
		RuntimeObject * L_7 = __this->get_m_Event_11();
		V_1 = ((ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)CastclassSealed((RuntimeObject*)L_7, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var));
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = __this->get_m_Completed_10();
		G_B5_0 = ((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		V_3 = (bool)G_B5_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_11 = V_1;
		NullCheck(L_11);
		bool L_12;
		L_12 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_11, /*hidden argument*/NULL);
	}

IL_0055:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_13 = V_1;
		V_4 = L_13;
		goto IL_005a;
	}

IL_005a:
	{
		WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * L_14 = V_4;
		return L_14;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStreamAsyncResult_get_CompletedSynchronously_m4ACA6559D03CD748EE2890CB854F8BAFE5353161 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_CompletedSynchronously_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStreamAsyncResult_get_IsCompleted_m5E81938F83C4E4EEA02A71EAE6F557A7B097CAEE (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Completed_10();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DeflateStreamAsyncResult_get_Result_m9153B98D779D6FDC474FA05A961E06CFDF0F6EE8 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_m_Result_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Close_mE1D967DC25EBF068EC4E39048527D823290C8E21 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = __this->get_m_Event_11();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject * L_2 = __this->get_m_Event_11();
		NullCheck(((ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)CastclassSealed((RuntimeObject*)L_2, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var)));
		VirtActionInvoker0::Invoke(12 /* System.Void System.Threading.WaitHandle::Close() */, ((ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)CastclassSealed((RuntimeObject*)L_2, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var)));
	}

IL_0021:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_InvokeCallback_m3B31F563D243DDCB3977F527C0E24102E92E7D54 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, bool ___completedSynchronously0, RuntimeObject * ___result1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___completedSynchronously0;
		RuntimeObject * L_1 = ___result1;
		DeflateStreamAsyncResult_Complete_mF86A934B9D5912471283B72A314714749E6C1A70(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_InvokeCallback_m37E7CE8E665105A485398295ED33250270725CE6 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___result0;
		DeflateStreamAsyncResult_Complete_mC6D9FE2855C85824325F75CD0D79F34A465F7D42(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Complete_mF86A934B9D5912471283B72A314714749E6C1A70 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, bool ___completedSynchronously0, RuntimeObject * ___result1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___completedSynchronously0;
		__this->set_m_CompletedSynchronously_8(L_0);
		RuntimeObject * L_1 = ___result1;
		DeflateStreamAsyncResult_Complete_mC6D9FE2855C85824325F75CD0D79F34A465F7D42(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Complete_mC6D9FE2855C85824325F75CD0D79F34A465F7D42 (DeflateStreamAsyncResult_t8EE3D28A87418EFA16DC7A0A5E9A58EB7AF3D108 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___result0;
		__this->set_m_Result_7(L_0);
		int32_t* L_1 = __this->get_address_of_m_Completed_10();
		int32_t L_2;
		L_2 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_1, /*hidden argument*/NULL);
		RuntimeObject * L_3 = __this->get_m_Event_11();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_5 = __this->get_m_Event_11();
		NullCheck(((ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)CastclassSealed((RuntimeObject*)L_5, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var)));
		bool L_6;
		L_6 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(((ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)CastclassSealed((RuntimeObject*)L_5, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0034:
	{
		int32_t* L_7 = __this->get_address_of_m_InvokedCallback_9();
		int32_t L_8;
		L_8 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_7, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_10 = __this->get_m_AsyncCallback_6();
		V_2 = (bool)((!(((RuntimeObject*)(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_12 = __this->get_m_AsyncCallback_6();
		NullCheck(L_12);
		AsyncCallback_Invoke_mFCCCB843AEC4B5B3FC89BCED2BA839783920EA47(L_12, __this, /*hidden argument*/NULL);
	}

IL_0063:
	{
	}

IL_0064:
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
// System.Void Mapbox.IO.Compression.DeflaterManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged__ctor_m479A630D1B7B6150D384EE969EDC8020B94B400A (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_0 = (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C *)il2cpp_codegen_object_new(FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C_il2cpp_TypeInfo_var);
		FastEncoder__ctor_m14AC299A2A49EDC9941B259C479F885DD1E8BD25(L_0, /*hidden argument*/NULL);
		__this->set_deflateEncoder_0(L_0);
		CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * L_1 = (CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B *)il2cpp_codegen_object_new(CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B_il2cpp_TypeInfo_var);
		CopyEncoder__ctor_m94DEB49AA8BC426642B5F0AFB630ECB3E630253C(L_1, /*hidden argument*/NULL);
		__this->set_copyEncoder_1(L_1);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_2 = (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F *)il2cpp_codegen_object_new(DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F_il2cpp_TypeInfo_var);
		DeflateInput__ctor_mF0DCBD3F73EB098E6356B9851ABE7AA69E558DA2(L_2, /*hidden argument*/NULL);
		__this->set_input_2(L_2);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_3 = (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 *)il2cpp_codegen_object_new(OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58_il2cpp_TypeInfo_var);
		OutputBuffer__ctor_m9ADCADAAD6C128D3E09033101575D35588D1D54C(L_3, /*hidden argument*/NULL);
		__this->set_output_3(L_3);
		__this->set_processingState_4(0);
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_NeedsInput_mB713DF75540BE5E426D913F90917C84B2E777707 (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Mapbox.IO.Compression.IDeflater::NeedsInput() */, IDeflater_t5287575E8EE937CE25CA930B4CF4DE7484F25CD9_il2cpp_TypeInfo_var, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_Mapbox_IO_Compression_IDeflater_NeedsInput_m61BF0ED39C07DC96E77F1B3841524A66CEC078F5 (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_0 = __this->get_input_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_2 = __this->get_deflateEncoder_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FastEncoder_get_BytesInHistory_m383E90EC17DDB7055715FA3370FA7570525B576B(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_Mapbox_IO_Compression_IDeflater_SetInput_m7A2DE7572B1B78343E6D7FA41E6D84F9729CE3A9 (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58AEA0CFCAEBE62F65EEAF7033FF9A7641169066);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_0 = __this->get_input_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_0, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral58AEA0CFCAEBE62F65EEAF7033FF9A7641169066, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_2 = __this->get_input_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___inputBuffer0;
		NullCheck(L_2);
		DeflateInput_set_Buffer_m01D97BF285FCBD27AA84CDB89ECE494B40B06D56(L_2, L_3, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_4 = __this->get_input_2();
		int32_t L_5 = ___count2;
		NullCheck(L_4);
		DeflateInput_set_Count_m7D7D2B81F390684949526A08035E252E6A906517(L_4, L_5, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_6 = __this->get_input_2();
		int32_t L_7 = ___startIndex1;
		NullCheck(L_6);
		DeflateInput_set_StartIndex_m5AE5F3922A902FC12B4A4E2F3E60421ECECA9772(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_9 = ___count2;
		G_B3_0 = ((((int32_t)L_9) < ((int32_t)((int32_t)256)))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B3_0 = 0;
	}

IL_0050:
	{
		V_0 = (bool)G_B3_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_11 = __this->get_processingState_4();
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_0061;
	}

IL_0061:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_0076;
		}
	}
	{
		goto IL_0067;
	}

IL_0067:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)5)))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_007f;
	}

IL_006d:
	{
		__this->set_processingState_4(3);
		goto IL_007f;
	}

IL_0076:
	{
		__this->set_processingState_4(6);
		goto IL_007f;
	}

IL_007f:
	{
	}

IL_0080:
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.GetDeflateOutput(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflaterManaged_Mapbox_IO_Compression_IDeflater_GetDeflateOutput_mBA91B0AB75DE91BBC2820288D9890404C0250362 (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___outputBuffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral741151246679D1B14A39D2821A64B26BBAF31827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B3E23BEBC37E841B92530E780C1587A1D04A323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  V_7;
	memset((&V_7), 0, sizeof(V_7));
	BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t V_10 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___outputBuffer0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), _stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA, /*hidden argument*/NULL);
		bool L_1;
		L_1 = DeflaterManaged_NeedsInput_mB713DF75540BE5E426D913F90917C84B2E777707(__this, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral9B3E23BEBC37E841B92530E780C1587A1D04A323, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_2 = __this->get_output_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___outputBuffer0;
		NullCheck(L_2);
		OutputBuffer_UpdateBuffer_mF5E2EAEFEBAC0ABE8458C70CC744FFBCD7EFFDAF(L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_processingState_4();
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_0178;
			}
			case 2:
			{
				goto IL_0194;
			}
			case 3:
			{
				goto IL_029d;
			}
			case 4:
			{
				goto IL_0126;
			}
			case 5:
			{
				goto IL_01f2;
			}
			case 6:
			{
				goto IL_02b9;
			}
		}
	}
	{
		goto IL_02d4;
	}

IL_005f:
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_6 = __this->get_deflateEncoder_0();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FastEncoder_get_BytesInHistory_m383E90EC17DDB7055715FA3370FA7570525B576B(L_6, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), _stringLiteral741151246679D1B14A39D2821A64B26BBAF31827, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_8 = __this->get_input_2();
		NullCheck(L_8);
		InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  L_9;
		L_9 = DeflateInput_DumpState_mDA8FB072CFCC0ABB2CD4F62B47A157E2092C3095(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_10 = __this->get_output_3();
		NullCheck(L_10);
		BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  L_11;
		L_11 = OutputBuffer_DumpState_m29CB78FF2DF72426DF0FF44DA6EEF961BC062F5A(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_12 = __this->get_deflateEncoder_0();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_13 = __this->get_output_3();
		NullCheck(L_12);
		FastEncoder_GetBlockHeader_mD2AAB4F14483792B26524767B0EDCF768481CF1E(L_12, L_13, /*hidden argument*/NULL);
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_14 = __this->get_deflateEncoder_0();
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_15 = __this->get_input_2();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_16 = __this->get_output_3();
		NullCheck(L_14);
		FastEncoder_GetCompressedData_mFD10172D24ABF1CE6BF5910A05CB76DED6ECAC6E(L_14, L_15, L_16, /*hidden argument*/NULL);
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_17 = __this->get_deflateEncoder_0();
		NullCheck(L_17);
		double L_18;
		L_18 = FastEncoder_get_LastCompressionRatio_m7711B3B1F605A900930D6B8FA00F4A1D450D265B(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = DeflaterManaged_UseCompressed_m93A1F259F00A5AC8E89B6633EC6B4CA0C770D801(__this, L_18, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_0118;
		}
	}
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_21 = __this->get_input_2();
		InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  L_22 = V_1;
		NullCheck(L_21);
		DeflateInput_RestoreState_m22459E83254C1B15684EA31B1397CC0C2B76B973(L_21, L_22, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_23 = __this->get_output_3();
		BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  L_24 = V_2;
		NullCheck(L_23);
		OutputBuffer_RestoreState_mA73DFB36F7705D25D8C77632D0F1112661715B53(L_23, L_24, /*hidden argument*/NULL);
		CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * L_25 = __this->get_copyEncoder_1();
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_26 = __this->get_input_2();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_27 = __this->get_output_3();
		NullCheck(L_25);
		CopyEncoder_GetBlock_m220C3F0D4C621DF22AEB134C46AA993FB22B12A5(L_25, L_26, L_27, (bool)0, /*hidden argument*/NULL);
		DeflaterManaged_FlushInputWindows_mBCFE17379E248577F75A6614F1AFF8A59B49DBBA(__this, /*hidden argument*/NULL);
		__this->set_processingState_4(5);
		goto IL_0121;
	}

IL_0118:
	{
		__this->set_processingState_4(4);
	}

IL_0121:
	{
		goto IL_02d4;
	}

IL_0126:
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_28 = __this->get_deflateEncoder_0();
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_29 = __this->get_input_2();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_30 = __this->get_output_3();
		NullCheck(L_28);
		FastEncoder_GetCompressedData_mFD10172D24ABF1CE6BF5910A05CB76DED6ECAC6E(L_28, L_29, L_30, /*hidden argument*/NULL);
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_31 = __this->get_deflateEncoder_0();
		NullCheck(L_31);
		double L_32;
		L_32 = FastEncoder_get_LastCompressionRatio_m7711B3B1F605A900930D6B8FA00F4A1D450D265B(L_31, /*hidden argument*/NULL);
		bool L_33;
		L_33 = DeflaterManaged_UseCompressed_m93A1F259F00A5AC8E89B6633EC6B4CA0C770D801(__this, L_32, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_0173;
		}
	}
	{
		__this->set_processingState_4(1);
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_35 = __this->get_deflateEncoder_0();
		NullCheck(L_35);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_36;
		L_36 = FastEncoder_get_UnprocessedInput_m16B02D287C8925715C90D0C2EEC0863B5B160B33(L_35, /*hidden argument*/NULL);
		__this->set_inputFromHistory_5(L_36);
	}

IL_0173:
	{
		goto IL_02d4;
	}

IL_0178:
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_37 = __this->get_deflateEncoder_0();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_38 = __this->get_output_3();
		NullCheck(L_37);
		FastEncoder_GetBlockFooter_mD84DC321C932D327F55BA1E70198A1F7EE778A29(L_37, L_38, /*hidden argument*/NULL);
		__this->set_processingState_4(2);
		goto IL_0194;
	}

IL_0194:
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_39 = __this->get_inputFromHistory_5();
		NullCheck(L_39);
		int32_t L_40;
		L_40 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_39, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_40) > ((int32_t)0))? 1 : 0);
		bool L_41 = V_5;
		if (!L_41)
		{
			goto IL_01c4;
		}
	}
	{
		CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * L_42 = __this->get_copyEncoder_1();
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_43 = __this->get_inputFromHistory_5();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_44 = __this->get_output_3();
		NullCheck(L_42);
		CopyEncoder_GetBlock_m220C3F0D4C621DF22AEB134C46AA993FB22B12A5(L_42, L_43, L_44, (bool)0, /*hidden argument*/NULL);
	}

IL_01c4:
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_45 = __this->get_inputFromHistory_5();
		NullCheck(L_45);
		int32_t L_46;
		L_46 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_45, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_6;
		if (!L_47)
		{
			goto IL_01ed;
		}
	}
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_48 = __this->get_deflateEncoder_0();
		NullCheck(L_48);
		FastEncoder_FlushInput_m25B32C749243DFCC7D9704E9DEB3C1006DA38166(L_48, /*hidden argument*/NULL);
		__this->set_processingState_4(5);
	}

IL_01ed:
	{
		goto IL_02d4;
	}

IL_01f2:
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_49 = __this->get_deflateEncoder_0();
		NullCheck(L_49);
		int32_t L_50;
		L_50 = FastEncoder_get_BytesInHistory_m383E90EC17DDB7055715FA3370FA7570525B576B(L_49, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0), _stringLiteral741151246679D1B14A39D2821A64B26BBAF31827, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_51 = __this->get_input_2();
		NullCheck(L_51);
		InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  L_52;
		L_52 = DeflateInput_DumpState_mDA8FB072CFCC0ABB2CD4F62B47A157E2092C3095(L_51, /*hidden argument*/NULL);
		V_7 = L_52;
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_53 = __this->get_output_3();
		NullCheck(L_53);
		BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  L_54;
		L_54 = OutputBuffer_DumpState_m29CB78FF2DF72426DF0FF44DA6EEF961BC062F5A(L_53, /*hidden argument*/NULL);
		V_8 = L_54;
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_55 = __this->get_deflateEncoder_0();
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_56 = __this->get_input_2();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_57 = __this->get_output_3();
		NullCheck(L_55);
		FastEncoder_GetBlock_m4A0D50C206D9969933908A4B5B2FD78C835663AE(L_55, L_56, L_57, ((int32_t)8072), /*hidden argument*/NULL);
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_58 = __this->get_deflateEncoder_0();
		NullCheck(L_58);
		double L_59;
		L_59 = FastEncoder_get_LastCompressionRatio_m7711B3B1F605A900930D6B8FA00F4A1D450D265B(L_58, /*hidden argument*/NULL);
		bool L_60;
		L_60 = DeflaterManaged_UseCompressed_m93A1F259F00A5AC8E89B6633EC6B4CA0C770D801(__this, L_59, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
		bool L_61 = V_9;
		if (!L_61)
		{
			goto IL_029b;
		}
	}
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_62 = __this->get_input_2();
		InputState_tA2C37B2C189C155C48A82FAC28F1AF9F7B68CAEB  L_63 = V_7;
		NullCheck(L_62);
		DeflateInput_RestoreState_m22459E83254C1B15684EA31B1397CC0C2B76B973(L_62, L_63, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_64 = __this->get_output_3();
		BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  L_65 = V_8;
		NullCheck(L_64);
		OutputBuffer_RestoreState_mA73DFB36F7705D25D8C77632D0F1112661715B53(L_64, L_65, /*hidden argument*/NULL);
		CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * L_66 = __this->get_copyEncoder_1();
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_67 = __this->get_input_2();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_68 = __this->get_output_3();
		NullCheck(L_66);
		CopyEncoder_GetBlock_m220C3F0D4C621DF22AEB134C46AA993FB22B12A5(L_66, L_67, L_68, (bool)0, /*hidden argument*/NULL);
		DeflaterManaged_FlushInputWindows_mBCFE17379E248577F75A6614F1AFF8A59B49DBBA(__this, /*hidden argument*/NULL);
	}

IL_029b:
	{
		goto IL_02d4;
	}

IL_029d:
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_69 = __this->get_deflateEncoder_0();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_70 = __this->get_output_3();
		NullCheck(L_69);
		FastEncoder_GetBlockHeader_mD2AAB4F14483792B26524767B0EDCF768481CF1E(L_69, L_70, /*hidden argument*/NULL);
		__this->set_processingState_4(6);
		goto IL_02b9;
	}

IL_02b9:
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_71 = __this->get_deflateEncoder_0();
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_72 = __this->get_input_2();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_73 = __this->get_output_3();
		NullCheck(L_71);
		FastEncoder_GetCompressedData_mFD10172D24ABF1CE6BF5910A05CB76DED6ECAC6E(L_71, L_72, L_73, /*hidden argument*/NULL);
		goto IL_02d4;
	}

IL_02d4:
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_74 = __this->get_output_3();
		NullCheck(L_74);
		int32_t L_75;
		L_75 = OutputBuffer_get_BytesWritten_mF8A815B61637FD151B9D4FF7FD87DDB801F55B21(L_74, /*hidden argument*/NULL);
		V_10 = L_75;
		goto IL_02e3;
	}

IL_02e3:
	{
		int32_t L_76 = V_10;
		return L_76;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.Finish(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_Mapbox_IO_Compression_IDeflater_Finish_mD3A164E35BD6E6B1464F01A4A2EB308F2F4C5E19 (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___outputBuffer0, int32_t* ___bytesRead1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflaterState_t5F48BA92088CA0EA39C4FEA4075EC9A4C3B456CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA03D2FB83BEF8B66E42EA7EE3FEC45067F5863C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___outputBuffer0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), _stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_processingState_4();
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = __this->get_processingState_4();
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = __this->get_processingState_4();
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = __this->get_processingState_4();
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = __this->get_processingState_4();
		G_B6_0 = ((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 1;
	}

IL_003f:
	{
		int32_t L_6 = __this->get_processingState_4();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(DeflaterState_t5F48BA92088CA0EA39C4FEA4075EC9A4C3B456CA_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralA03D2FB83BEF8B66E42EA7EE3FEC45067F5863C6, L_8, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B6_0, L_9, /*hidden argument*/NULL);
		bool L_10;
		L_10 = DeflaterManaged_NeedsInput_mB713DF75540BE5E426D913F90917C84B2E777707(__this, /*hidden argument*/NULL);
		Debug_Assert_m290B087CA6F58852C5EACE90EA3A398216C7B136(L_10, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_processingState_4();
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		int32_t* L_13 = ___bytesRead1;
		*((int32_t*)L_13) = (int32_t)0;
		V_1 = (bool)1;
		goto IL_00d6;
	}

IL_007b:
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_14 = __this->get_output_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___outputBuffer0;
		NullCheck(L_14);
		OutputBuffer_UpdateBuffer_mF5E2EAEFEBAC0ABE8458C70CC744FFBCD7EFFDAF(L_14, L_15, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_processingState_4();
		if ((((int32_t)L_16) == ((int32_t)4)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_17 = __this->get_processingState_4();
		if ((((int32_t)L_17) == ((int32_t)6)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_18 = __this->get_processingState_4();
		G_B12_0 = ((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B12_0 = 1;
	}

IL_00a6:
	{
		V_2 = (bool)G_B12_0;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00be;
		}
	}
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_20 = __this->get_deflateEncoder_0();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_21 = __this->get_output_3();
		NullCheck(L_20);
		FastEncoder_GetBlockFooter_mD84DC321C932D327F55BA1E70198A1F7EE778A29(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00be:
	{
		DeflaterManaged_WriteFinal_m38DD3D1EE7C6DC5AD7069D859C560F9C3429FCDD(__this, /*hidden argument*/NULL);
		int32_t* L_22 = ___bytesRead1;
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_23 = __this->get_output_3();
		NullCheck(L_23);
		int32_t L_24;
		L_24 = OutputBuffer_get_BytesWritten_mF8A815B61637FD151B9D4FF7FD87DDB801F55B21(L_23, /*hidden argument*/NULL);
		*((int32_t*)L_22) = (int32_t)L_24;
		V_1 = (bool)1;
		goto IL_00d6;
	}

IL_00d6:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_System_IDisposable_Dispose_m12CFC68E02FD0B69E07D764EC48FE2C794537670 (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::UseCompressed(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_UseCompressed_m93A1F259F00A5AC8E89B6633EC6B4CA0C770D801 (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, double ___ratio0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		double L_0 = ___ratio0;
		V_0 = (bool)((((int32_t)((!(((double)L_0) <= ((double)(1.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::FlushInputWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_FlushInputWindows_mBCFE17379E248577F75A6614F1AFF8A59B49DBBA (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method)
{
	{
		FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * L_0 = __this->get_deflateEncoder_0();
		NullCheck(L_0);
		FastEncoder_FlushInput_m25B32C749243DFCC7D9704E9DEB3C1006DA38166(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::WriteFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_WriteFinal_m38DD3D1EE7C6DC5AD7069D859C560F9C3429FCDD (DeflaterManaged_t7C282E7BC6A18FA3D3FB6FF81790E698513D8ABC * __this, const RuntimeMethod* method)
{
	{
		CopyEncoder_tF6F525C1323CB7FEA4F2A15FE2A31815FD00982B * L_0 = __this->get_copyEncoder_1();
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_1 = __this->get_output_3();
		NullCheck(L_0);
		CopyEncoder_GetBlock_m220C3F0D4C621DF22AEB134C46AA993FB22B12A5(L_0, (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F *)NULL, L_1, (bool)1, /*hidden argument*/NULL);
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
// System.Void Mapbox.IO.Compression.FastEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder__ctor_m14AC299A2A49EDC9941B259C479F885DD1E8BD25 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * L_0 = (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC *)il2cpp_codegen_object_new(FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC_il2cpp_TypeInfo_var);
		FastEncoderWindow__ctor_mA9ECC8AFB8AAC1ADAF0917779578A28FCDC2EA50(L_0, /*hidden argument*/NULL);
		__this->set_inputWindow_0(L_0);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_1 = (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF *)il2cpp_codegen_object_new(Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF_il2cpp_TypeInfo_var);
		Match__ctor_m37BC99AA370A79BBC1024D762A53CBE40D92A1E8(L_1, /*hidden argument*/NULL);
		__this->set_currentMatch_1(L_1);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoder::get_BytesInHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoder_get_BytesInHistory_m383E90EC17DDB7055715FA3370FA7570525B576B (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * L_0 = __this->get_inputWindow_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FastEncoderWindow_get_BytesAvailable_mBB38926C21E022545D4E7C576281CB7FF342ECFC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoder::get_UnprocessedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * FastEncoder_get_UnprocessedInput_m16B02D287C8925715C90D0C2EEC0863B5B160B33 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method)
{
	DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * V_0 = NULL;
	{
		FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * L_0 = __this->get_inputWindow_0();
		NullCheck(L_0);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_1;
		L_1 = FastEncoderWindow_get_UnprocessedInput_mCB79E3C0D88E1070E31F88ABA152B9D6C1FC198A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::FlushInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_FlushInput_m25B32C749243DFCC7D9704E9DEB3C1006DA38166 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method)
{
	{
		FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * L_0 = __this->get_inputWindow_0();
		NullCheck(L_0);
		FastEncoderWindow_FlushWindow_m48DF4798A03C12DF98075DE13AD482CB184161B4(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Double Mapbox.IO.Compression.FastEncoder::get_LastCompressionRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FastEncoder_get_LastCompressionRatio_m7711B3B1F605A900930D6B8FA00F4A1D450D265B (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = __this->get_lastCompressionRatio_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlock_m4A0D50C206D9969933908A4B5B2FD78C835663AE (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1699893850CFEE56496C8D279CA733207A899E92);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_0 = ___input0;
		bool L_1;
		L_1 = FastEncoder_InputAvailable_m7916C29C8B9EA9DDF26C9265D6A9E283866B0B84(__this, L_0, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B(L_1, _stringLiteral1699893850CFEE56496C8D279CA733207A899E92, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_2 = ___output1;
		FastEncoder_WriteDeflatePreamble_mE980F2908A2784A1883876AC77DFBD13E917DC41(L_2, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_3 = ___input0;
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_4 = ___output1;
		int32_t L_5 = ___maxBytesToCopy2;
		FastEncoder_GetCompressedOutput_m3F31DAEB694C2C2121473E7CBA58EBEECE2696DC(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_6 = ___output1;
		FastEncoder_WriteEndOfBlock_m3271D9AEFF55F650C83D8DD228361B123836F70A(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedData(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedData_mFD10172D24ABF1CE6BF5910A05CB76DED6ECAC6E (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, const RuntimeMethod* method)
{
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_0 = ___input0;
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_1 = ___output1;
		FastEncoder_GetCompressedOutput_m3F31DAEB694C2C2121473E7CBA58EBEECE2696DC(__this, L_0, L_1, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockHeader(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlockHeader_mD2AAB4F14483792B26524767B0EDCF768481CF1E (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method)
{
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_0 = ___output0;
		FastEncoder_WriteDeflatePreamble_mE980F2908A2784A1883876AC77DFBD13E917DC41(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockFooter(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlockFooter_mD84DC321C932D327F55BA1E70198A1F7EE778A29 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method)
{
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_0 = ___output0;
		FastEncoder_WriteEndOfBlock_m3271D9AEFF55F650C83D8DD228361B123836F70A(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedOutput_m3F31DAEB694C2C2121473E7CBA58EBEECE2696DC (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_0 = ___output1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OutputBuffer_get_BytesWritten_mF8A815B61637FD151B9D4FF7FD87DDB801F55B21(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		int32_t L_2;
		L_2 = FastEncoder_get_BytesInHistory_m383E90EC17DDB7055715FA3370FA7570525B576B(__this, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_3, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4));
	}

IL_0018:
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_5 = ___input0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_5, /*hidden argument*/NULL);
		FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * L_7 = __this->get_inputWindow_0();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = FastEncoderWindow_get_FreeWindowSpace_m770221DC462730EEF079079D2560E97F0C5C4B95(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0039;
		}
	}
	{
		FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * L_9 = __this->get_inputWindow_0();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = FastEncoderWindow_get_FreeWindowSpace_m770221DC462730EEF079079D2560E97F0C5C4B95(L_9, /*hidden argument*/NULL);
		G_B4_0 = L_10;
		goto IL_003f;
	}

IL_0039:
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_11 = ___input0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_11, /*hidden argument*/NULL);
		G_B4_0 = L_12;
	}

IL_003f:
	{
		V_7 = G_B4_0;
		int32_t L_13 = ___maxBytesToCopy2;
		V_8 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_15 = V_7;
		int32_t L_16 = ___maxBytesToCopy2;
		int32_t L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		V_7 = L_18;
	}

IL_005c:
	{
		int32_t L_19 = V_7;
		V_9 = (bool)((((int32_t)L_19) > ((int32_t)0))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0091;
		}
	}
	{
		FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * L_21 = __this->get_inputWindow_0();
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_22 = ___input0;
		NullCheck(L_22);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = DeflateInput_get_Buffer_mF7DE4151A19B65F3CEBEB100D454D2F0DA14B7FE(L_22, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_24 = ___input0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = DeflateInput_get_StartIndex_m08AD971B1AAD2A797DD58638D8252C79D76853D7(L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_7;
		NullCheck(L_21);
		FastEncoderWindow_CopyBytes_m0814B8F8FF6695965210C050C5C7D4DA24FEB5C7(L_21, L_23, L_25, L_26, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_27 = ___input0;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		DeflateInput_ConsumeBytes_mC55226E76E66464DADA33EA4D14F8546B86404CC(L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		int32_t L_30 = V_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
	}

IL_0091:
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_31 = ___output1;
		FastEncoder_GetCompressedOutput_m6D3A22136E8896D30A2DD90D7161A61ADEA1D8A5(__this, L_31, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_32 = ___output1;
		bool L_33;
		L_33 = FastEncoder_SafeToWriteTo_mA202C2C78AFFF0FC8A059211ED0A7F7E27D32B86(__this, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_34 = ___input0;
		bool L_35;
		L_35 = FastEncoder_InputAvailable_m7916C29C8B9EA9DDF26C9265D6A9E283866B0B84(__this, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_36 = ___maxBytesToCopy2;
		if ((((int32_t)L_36) < ((int32_t)1)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_37 = V_1;
		int32_t L_38 = ___maxBytesToCopy2;
		G_B13_0 = ((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B13_0 = 1;
	}

IL_00b7:
	{
		G_B15_0 = G_B13_0;
		goto IL_00ba;
	}

IL_00b9:
	{
		G_B15_0 = 0;
	}

IL_00ba:
	{
		V_10 = (bool)G_B15_0;
		bool L_39 = V_10;
		if (L_39)
		{
			goto IL_0018;
		}
	}
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_40 = ___output1;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = OutputBuffer_get_BytesWritten_mF8A815B61637FD151B9D4FF7FD87DDB801F55B21(L_40, /*hidden argument*/NULL);
		V_3 = L_41;
		int32_t L_42 = V_3;
		int32_t L_43 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43));
		int32_t L_44;
		L_44 = FastEncoder_get_BytesInHistory_m383E90EC17DDB7055715FA3370FA7570525B576B(__this, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_45 = ___input0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_45, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_46));
		int32_t L_47 = V_2;
		int32_t L_48 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_48));
		int32_t L_49 = V_4;
		V_11 = (bool)((!(((uint32_t)L_49) <= ((uint32_t)0)))? 1 : 0);
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_51 = V_4;
		int32_t L_52 = V_6;
		__this->set_lastCompressionRatio_2(((double)((double)((double)((double)L_51))/(double)((double)((double)L_52)))));
	}

IL_00fe:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedOutput_m6D3A22136E8896D30A2DD90D7161A61ADEA1D8A5 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B10_0 = 0;
	{
		goto IL_00a6;
	}

IL_0006:
	{
		FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * L_0 = __this->get_inputWindow_0();
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_1 = __this->get_currentMatch_1();
		NullCheck(L_0);
		bool L_2;
		L_2 = FastEncoderWindow_GetNextSymbolOrMatch_m95B81365D888A7561C7EF350764F63D75F4DF029(L_0, L_1, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_3 = __this->get_currentMatch_1();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Match_get_State_m407AB40EFEA751CE8BC696321AC15C44B8DFB972(L_3, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_6 = __this->get_currentMatch_1();
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = Match_get_Symbol_m359D7D5DADDEBDA40056D4C727A82E77E76F6266(L_6, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_8 = ___output0;
		FastEncoder_WriteChar_mDD0544D32EA72BEEEC3057683314BD7F186502F8(L_7, L_8, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_0041:
	{
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_9 = __this->get_currentMatch_1();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Match_get_State_m407AB40EFEA751CE8BC696321AC15C44B8DFB972(L_9, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_12 = __this->get_currentMatch_1();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Match_get_Length_m589799882D83FEE591707948E0DDC2A3A5F60FD4(L_12, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_14 = __this->get_currentMatch_1();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Match_get_Position_m391158F9894F9328F0FFA2D8930BBE63F3E21BDA(L_14, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_16 = ___output0;
		FastEncoder_WriteMatch_m7160269E70EED4D1DD2420989A82F7C950D566A6(L_13, L_15, L_16, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_0074:
	{
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_17 = __this->get_currentMatch_1();
		NullCheck(L_17);
		uint8_t L_18;
		L_18 = Match_get_Symbol_m359D7D5DADDEBDA40056D4C727A82E77E76F6266(L_17, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_19 = ___output0;
		FastEncoder_WriteChar_mDD0544D32EA72BEEEC3057683314BD7F186502F8(L_18, L_19, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_20 = __this->get_currentMatch_1();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Match_get_Length_m589799882D83FEE591707948E0DDC2A3A5F60FD4(L_20, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_22 = __this->get_currentMatch_1();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Match_get_Position_m391158F9894F9328F0FFA2D8930BBE63F3E21BDA(L_22, /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_24 = ___output0;
		FastEncoder_WriteMatch_m7160269E70EED4D1DD2420989A82F7C950D566A6(L_21, L_23, L_24, /*hidden argument*/NULL);
	}

IL_00a5:
	{
	}

IL_00a6:
	{
		FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * L_25 = __this->get_inputWindow_0();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = FastEncoderWindow_get_BytesAvailable_mBB38926C21E022545D4E7C576281CB7FF342ECFC(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_27 = ___output0;
		bool L_28;
		L_28 = FastEncoder_SafeToWriteTo_mA202C2C78AFFF0FC8A059211ED0A7F7E27D32B86(__this, L_27, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_28));
		goto IL_00be;
	}

IL_00bd:
	{
		G_B10_0 = 0;
	}

IL_00be:
	{
		V_2 = (bool)G_B10_0;
		bool L_29 = V_2;
		if (L_29)
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.FastEncoder::InputAvailable(Mapbox.IO.Compression.DeflateInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoder_InputAvailable_m7916C29C8B9EA9DDF26C9265D6A9E283866B0B84 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * ___input0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DeflateInput_get_Count_m8B5EAB865A0756F539176BB9E7352165A0ECECCB(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2;
		L_2 = FastEncoder_get_BytesInHistory_m383E90EC17DDB7055715FA3370FA7570525B576B(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Mapbox.IO.Compression.FastEncoder::SafeToWriteTo(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoder_SafeToWriteTo_mA202C2C78AFFF0FC8A059211ED0A7F7E27D32B86 (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_0 = ___output0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OutputBuffer_get_FreeBytes_m4C01AB876EA197FDCD7B024E86E34C3FBA9A2A5E(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteEndOfBlock(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteEndOfBlock_m3271D9AEFF55F650C83D8DD228361B123836F70A (FastEncoder_tE37CF7609BFEA0A6F9311A56C03113723A4EB85C * __this, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_FastEncoderLiteralCodeInfo_2();
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)256);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		uint32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_3&(int32_t)((int32_t)31)));
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_4 = ___output0;
		int32_t L_5 = V_1;
		uint32_t L_6 = V_0;
		NullCheck(L_4);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_4, L_5, ((int32_t)((uint32_t)L_6>>5)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteMatch(System.Int32,System.Int32,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteMatch_m7160269E70EED4D1DD2420989A82F7C950D566A6 (int32_t ___matchLen0, int32_t ___matchPos1, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20CE60EA3E450A03EA17B3AA9245E467705D5A19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD441F6A551BEC4597643C445F810EFB1FBBCB0F5);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___matchLen0;
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___matchLen0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)258)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B3_0, _stringLiteralD441F6A551BEC4597643C445F810EFB1FBBCB0F5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_FastEncoderLiteralCodeInfo_2();
		int32_t L_3 = ___matchLen0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)254), (int32_t)L_3));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		uint32_t L_6 = V_0;
		V_1 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)));
		int32_t L_7 = V_1;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0), _stringLiteral20CE60EA3E450A03EA17B3AA9245E467705D5A19, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_10 = ___output2;
		int32_t L_11 = V_1;
		uint32_t L_12 = V_0;
		NullCheck(L_10);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_10, L_11, ((int32_t)((uint32_t)L_12>>5)), /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_005b:
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_13 = ___output2;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_13, ((int32_t)16), ((int32_t)((int32_t)((int32_t)((uint32_t)L_14>>5))&(int32_t)((int32_t)65535))), /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_15 = ___output2;
		int32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		NullCheck(L_15);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)16))), ((int32_t)((uint32_t)L_17>>((int32_t)21))), /*hidden argument*/NULL);
	}

IL_007e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_18 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_FastEncoderDistanceCodeInfo_3();
		int32_t L_19 = ___matchPos1;
		int32_t L_20;
		L_20 = FastEncoderStatics_GetSlot_mB8444E2D265041CEE202C16BB4D55CEBF8C30C14(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_21 = L_20;
		uint32_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = L_22;
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_23 = ___output2;
		uint32_t L_24 = V_0;
		uint32_t L_25 = V_0;
		NullCheck(L_23);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_23, ((int32_t)((int32_t)L_24&(int32_t)((int32_t)15))), ((int32_t)((uint32_t)L_25>>8)), /*hidden argument*/NULL);
		uint32_t L_26 = V_0;
		V_2 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_26>>4))&(int32_t)((int32_t)15)));
		int32_t L_27 = V_2;
		V_4 = (bool)((!(((uint32_t)L_27) <= ((uint32_t)0)))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00bd;
		}
	}
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_29 = ___output2;
		int32_t L_30 = V_2;
		int32_t L_31 = ___matchPos1;
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_32 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_BitMask_4();
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_29);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_29, L_30, ((int32_t)((int32_t)L_31&(int32_t)L_35)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteChar(System.Byte,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteChar_mDD0544D32EA72BEEEC3057683314BD7F186502F8 (uint8_t ___b0, OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_FastEncoderLiteralCodeInfo_2();
		uint8_t L_1 = ___b0;
		NullCheck(L_0);
		uint8_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_4 = ___output1;
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_0;
		NullCheck(L_4);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_4, ((int32_t)((int32_t)L_5&(int32_t)((int32_t)31))), ((int32_t)((uint32_t)L_6>>5)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteDeflatePreamble(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteDeflatePreamble_mE980F2908A2784A1883876AC77DFBD13E917DC41 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_0 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_FastEncoderTreeStructureData_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_FastEncoderTreeStructureData_0();
		NullCheck(L_2);
		NullCheck(L_0);
		OutputBuffer_WriteBytes_mFB21CDF29333A5C98ADDD34BDCC3DF38BC8D27BE(L_0, L_1, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * L_3 = ___output0;
		NullCheck(L_3);
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(L_3, ((int32_t)9), ((int32_t)34), /*hidden argument*/NULL);
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
// System.Void Mapbox.IO.Compression.FastEncoderStatics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderStatics__cctor_mB498D70269149A46EE98A5B47122F2A2672963B6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____2492606636F4A4666E0D617B51116A5A68539881_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)98));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->set_FastEncoderTreeStructureData_0(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)98));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->set_BFinalFastEncoderTreeStructureData_1(L_4);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)513));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->set_FastEncoderLiteralCodeInfo_2(L_7);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_9 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->set_FastEncoderDistanceCodeInfo_3(L_10);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_12 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_13 = L_12;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->set_BitMask_4(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = L_15;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->set_ExtraLengthBits_5(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = L_18;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____2492606636F4A4666E0D617B51116A5A68539881_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_19, L_20, /*hidden argument*/NULL);
		((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->set_ExtraDistanceBits_6(L_19);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->set_distLookup_7(L_21);
		V_0 = 0;
		V_1 = 0;
		goto IL_00e8;
	}

IL_00ba:
	{
		V_2 = 0;
		goto IL_00d0;
	}

IL_00bf:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_distLookup_7();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_1;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)((int32_t)((uint8_t)L_25)));
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00d0:
	{
		int32_t L_27 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_6();
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)31)))))))? 1 : 0);
		bool L_32 = V_3;
		if (L_32)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00e8:
	{
		int32_t L_34 = V_1;
		V_4 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_35 = V_4;
		if (L_35)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_36 = V_0;
		V_0 = ((int32_t)((int32_t)L_36>>(int32_t)7));
		goto IL_0135;
	}

IL_00f9:
	{
		V_5 = 0;
		goto IL_0118;
	}

IL_00ff:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_distLookup_7();
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		int32_t L_40 = V_1;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)L_39))), (uint8_t)((int32_t)((uint8_t)L_40)));
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0118:
	{
		int32_t L_42 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_6();
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_6 = (bool)((((int32_t)L_42) < ((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)7))&(int32_t)((int32_t)31)))))))? 1 : 0);
		bool L_47 = V_6;
		if (L_47)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_0135:
	{
		int32_t L_49 = V_1;
		V_7 = (bool)((((int32_t)L_49) < ((int32_t)((int32_t)30)))? 1 : 0);
		bool L_50 = V_7;
		if (L_50)
		{
			goto IL_00f9;
		}
	}
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderStatics::GetSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderStatics_GetSlot_mB8444E2D265041CEE202C16BB4D55CEBF8C30C14 (int32_t ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B2_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ((FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var))->get_distLookup_7();
		int32_t L_1 = ___pos0;
		G_B1_0 = L_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)256))))
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___pos0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)((int32_t)((int32_t)L_2>>(int32_t)7))));
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		int32_t L_3 = ___pos0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = G_B3_0;
		uint8_t L_5 = (G_B3_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderStatics::BitReverse(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderStatics_BitReverse_m064FB316BD6E6F335ABF1D5671F0D01224D601EC (uint32_t ___code0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C8B047C6745895948A00EBAA806CB7C0F1F0954);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___length1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___length1;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B3_0, _stringLiteral6C8B047C6745895948A00EBAA806CB7C0F1F0954, /*hidden argument*/NULL);
	}

IL_001d:
	{
		uint32_t L_2 = V_0;
		uint32_t L_3 = ___code0;
		V_0 = ((int32_t)((int32_t)L_2|(int32_t)((int32_t)((int32_t)L_3&(int32_t)1))));
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4<<(int32_t)1));
		uint32_t L_5 = ___code0;
		___code0 = ((int32_t)((uint32_t)L_5>>1));
		int32_t L_6 = ___length1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		___length1 = L_7;
		V_1 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_001d;
		}
	}
	{
		uint32_t L_9 = V_0;
		V_2 = ((int32_t)((uint32_t)L_9>>1));
		goto IL_0041;
	}

IL_0041:
	{
		uint32_t L_10 = V_2;
		return L_10;
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
// System.Void Mapbox.IO.Compression.FastEncoderWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow__ctor_mA9ECC8AFB8AAC1ADAF0917779578A28FCDC2EA50 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FastEncoderWindow_ResetWindow_m5E046F669CAA143280713A7A9D1DE8BC689908B0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_BytesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_get_BytesAvailable_mBB38926C21E022545D4E7C576281CB7FF342ECFC (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A211A45BE5BBF07891D1769619F24F013279182);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufEnd_2();
		int32_t L_1 = __this->get_bufPos_1();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral3A211A45BE5BBF07891D1769619F24F013279182, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bufEnd_2();
		int32_t L_3 = __this->get_bufPos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoderWindow::get_UnprocessedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * FastEncoderWindow_get_UnprocessedInput_mCB79E3C0D88E1070E31F88ABA152B9D6C1FC198A (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * V_0 = NULL;
	DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * V_1 = NULL;
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_0 = (DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F *)il2cpp_codegen_object_new(DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F_il2cpp_TypeInfo_var);
		DeflateInput__ctor_mF0DCBD3F73EB098E6356B9851ABE7AA69E558DA2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_1 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_window_0();
		NullCheck(L_1);
		DeflateInput_set_Buffer_m01D97BF285FCBD27AA84CDB89ECE494B40B06D56(L_1, L_2, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_3 = V_0;
		int32_t L_4 = __this->get_bufPos_1();
		NullCheck(L_3);
		DeflateInput_set_StartIndex_m5AE5F3922A902FC12B4A4E2F3E60421ECECA9772(L_3, L_4, /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_5 = V_0;
		int32_t L_6 = __this->get_bufEnd_2();
		int32_t L_7 = __this->get_bufPos_1();
		NullCheck(L_5);
		DeflateInput_set_Count_m7D7D2B81F390684949526A08035E252E6A906517(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/NULL);
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_8 = V_0;
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		DeflateInput_t4A900B84B4EAA3C85E36137545AB83A11FF6CE3F * L_9 = V_1;
		return L_9;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::FlushWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_FlushWindow_m48DF4798A03C12DF98075DE13AD482CB184161B4 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method)
{
	{
		FastEncoderWindow_ResetWindow_m5E046F669CAA143280713A7A9D1DE8BC689908B0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::ResetWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_ResetWindow_m5E046F669CAA143280713A7A9D1DE8BC689908B0 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16646));
		__this->set_window_0(L_0);
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_1 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8450));
		__this->set_prev_3(L_1);
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_2 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		__this->set_lookup_4(L_2);
		__this->set_bufPos_1(((int32_t)8192));
		int32_t L_3 = __this->get_bufPos_1();
		__this->set_bufEnd_2(L_3);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_FreeWindowSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_get_FreeWindowSpace_m770221DC462730EEF079079D2560E97F0C5C4B95 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufEnd_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16384), (int32_t)L_0));
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::CopyBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_CopyBytes_m0814B8F8FF6695965210C050C5C7D4DA24FEB5C7 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___inputBuffer0;
		int32_t L_1 = ___startIndex1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_window_0();
		int32_t L_3 = __this->get_bufEnd_2();
		int32_t L_4 = ___count2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_0, L_1, (RuntimeArray *)(RuntimeArray *)L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_bufEnd_2();
		int32_t L_6 = ___count2;
		__this->set_bufEnd_2(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)));
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::MoveWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_MoveWindows_m0680861AAAAF38215C32120D94FEECD9F0BA788E (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA63DD7EB8A588570079DA49C861495FFA1981EC1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->get_bufPos_1();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_0) == ((int32_t)((int32_t)16384)))? 1 : 0), _stringLiteralA63DD7EB8A588570079DA49C861495FFA1981EC1, /*hidden argument*/NULL);
		FastEncoderWindow_VerifyHashes_m8E2D54F1AD43EDF3F98FCADA9DF29484D5C064DE(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_window_0();
		int32_t L_2 = __this->get_bufPos_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_window_0();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)8192))), (RuntimeArray *)(RuntimeArray *)L_3, 0, ((int32_t)8192), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0081;
	}

IL_0048:
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_4 = __this->get_lookup_4();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)8192)));
		int32_t L_8 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_10 = __this->get_lookup_4();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint16_t)0);
		goto IL_007c;
	}

IL_0070:
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_12 = __this->get_lookup_4();
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint16_t)((int32_t)((uint16_t)L_14)));
	}

IL_007c:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0081:
	{
		int32_t L_16 = V_0;
		V_3 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)2048)))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0048;
		}
	}
	{
		V_0 = 0;
		goto IL_00d2;
	}

IL_0091:
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_18 = __this->get_prev_3();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint16_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((uint64_t)L_21)), (int64_t)((int64_t)((int64_t)((int32_t)8192)))));
		int64_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int64_t)L_22) > ((int64_t)((int64_t)((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00c0;
		}
	}
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_24 = __this->get_prev_3();
		int32_t L_25 = V_0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint16_t)0);
		goto IL_00cd;
	}

IL_00c0:
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_26 = __this->get_prev_3();
		int32_t L_27 = V_0;
		int64_t L_28 = V_4;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint16_t)((int32_t)((uint16_t)L_28)));
	}

IL_00cd:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00d2:
	{
		int32_t L_30 = V_0;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)8192)))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0091;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = __this->get_window_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = __this->get_window_0();
		NullCheck(L_33);
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_32, ((int32_t)8192), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))), (int32_t)((int32_t)8192))), /*hidden argument*/NULL);
		FastEncoderWindow_VerifyHashes_m8E2D54F1AD43EDF3F98FCADA9DF29484D5C064DE(__this, /*hidden argument*/NULL);
		__this->set_bufPos_1(((int32_t)8192));
		int32_t L_34 = __this->get_bufPos_1();
		__this->set_bufEnd_2(L_34);
		return;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::HashValue(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_HashValue_m51D0B2DE56F0027C2719237BF265A63956353441 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, uint32_t ___hash0, uint8_t ___b1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___hash0;
		uint8_t L_1 = ___b1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)4))^(int32_t)L_1));
		goto IL_0009;
	}

IL_0009:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::InsertString(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_InsertString_m02BE5E784F528CF922FE96FB808AB16FDC6FDCC4 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, uint32_t* ___hash0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t* L_0 = ___hash0;
		uint32_t* L_1 = ___hash0;
		int32_t L_2 = *((uint32_t*)L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_window_0();
		int32_t L_4 = __this->get_bufPos_1();
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint32_t L_7;
		L_7 = FastEncoderWindow_HashValue_m51D0B2DE56F0027C2719237BF265A63956353441(__this, L_2, L_6, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_7;
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_8 = __this->get_lookup_4();
		uint32_t* L_9 = ___hash0;
		int32_t L_10 = *((uint32_t*)L_9);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)((int32_t)L_10&(int32_t)((int32_t)2047)));
		uint16_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = L_12;
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_13 = __this->get_lookup_4();
		uint32_t* L_14 = ___hash0;
		int32_t L_15 = *((uint32_t*)L_14);
		int32_t L_16 = __this->get_bufPos_1();
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_15&(int32_t)((int32_t)2047)))), (uint16_t)((int32_t)((uint16_t)L_16)));
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_17 = __this->get_prev_3();
		int32_t L_18 = __this->get_bufPos_1();
		uint32_t L_19 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_18&(int32_t)((int32_t)8191)))), (uint16_t)((int32_t)((uint16_t)L_19)));
		uint32_t L_20 = V_0;
		V_1 = L_20;
		goto IL_0059;
	}

IL_0059:
	{
		uint32_t L_21 = V_1;
		return L_21;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::InsertStrings(System.UInt32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_InsertStrings_m93A2E2BA8D6AE1932B877FB90001188BD0D3A991 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, uint32_t* ___hash0, int32_t ___matchLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32ABEBB1F95BCEB7EA8A0016EAA3C740C514AC8F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___matchLen1;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0), _stringLiteral32ABEBB1F95BCEB7EA8A0016EAA3C740C514AC8F, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_bufEnd_2();
		int32_t L_2 = __this->get_bufPos_1();
		int32_t L_3 = ___matchLen1;
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = __this->get_bufPos_1();
		int32_t L_6 = ___matchLen1;
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))));
		goto IL_0064;
	}

IL_003b:
	{
		goto IL_0056;
	}

IL_003e:
	{
		uint32_t* L_7 = ___hash0;
		uint32_t L_8;
		L_8 = FastEncoderWindow_InsertString_m02BE5E784F528CF922FE96FB808AB16FDC6FDCC4(__this, (uint32_t*)L_7, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
	}

IL_0056:
	{
		int32_t L_10 = ___matchLen1;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		___matchLen1 = L_11;
		V_1 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_003e;
		}
	}
	{
	}

IL_0064:
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.FastEncoderWindow::GetNextSymbolOrMatch(Mapbox.IO.Compression.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoderWindow_GetNextSymbolOrMatch_m95B81365D888A7561C7EF350764F63D75F4DF029 (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * ___match0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8E147DD30C395A3CDE2EF30D1102DF4D8E8D539);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * G_B17_2 = NULL;
	int32_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t* G_B18_1 = NULL;
	int32_t G_B18_2 = 0;
	FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * G_B18_3 = NULL;
	{
		int32_t L_0 = __this->get_bufPos_1();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)8192))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->get_bufPos_1();
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)16384)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B3_0, _stringLiteralF8E147DD30C395A3CDE2EF30D1102DF4D8E8D539, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_window_0();
		int32_t L_3 = __this->get_bufPos_1();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		uint32_t L_6;
		L_6 = FastEncoderWindow_HashValue_m51D0B2DE56F0027C2719237BF265A63956353441(__this, 0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		uint32_t L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_window_0();
		int32_t L_9 = __this->get_bufPos_1();
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		uint32_t L_12;
		L_12 = FastEncoderWindow_HashValue_m51D0B2DE56F0027C2719237BF265A63956353441(__this, L_7, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		V_2 = 0;
		FastEncoderWindow_VerifyHashes_m8E2D54F1AD43EDF3F98FCADA9DF29484D5C064DE(__this, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_bufEnd_2();
		int32_t L_14 = __this->get_bufPos_1();
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14))) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		V_1 = 0;
		goto IL_00cd;
	}

IL_007b:
	{
		uint32_t L_16;
		L_16 = FastEncoderWindow_InsertString_m02BE5E784F528CF922FE96FB808AB16FDC6FDCC4(__this, (uint32_t*)(&V_0), /*hidden argument*/NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		V_5 = (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_19 = V_4;
		int32_t L_20;
		L_20 = FastEncoderWindow_FindMatch_m1343CEE0E7A5FC1D3624755F24D924EDB044A71E(__this, L_19, (int32_t*)(&V_2), ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = __this->get_bufPos_1();
		int32_t L_22 = V_1;
		int32_t L_23 = __this->get_bufEnd_2();
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22))) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_25 = __this->get_bufEnd_2();
		int32_t L_26 = __this->get_bufPos_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26));
	}

IL_00c5:
	{
		goto IL_00cc;
	}

IL_00c8:
	{
		V_1 = 0;
	}

IL_00cc:
	{
	}

IL_00cd:
	{
		int32_t L_27 = V_1;
		V_7 = (bool)((((int32_t)L_27) < ((int32_t)3))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0108;
		}
	}
	{
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_29 = ___match0;
		NullCheck(L_29);
		Match_set_State_m6AEF59FFDA04A71E10E139CD2C303C608BE436FB(L_29, 1, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_30 = ___match0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = __this->get_window_0();
		int32_t L_32 = __this->get_bufPos_1();
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_30);
		Match_set_Symbol_m9D4CC885E80D5A6F4B440C4B5352C1021AF9A7BB(L_30, L_34, /*hidden argument*/NULL);
		int32_t L_35 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
		goto IL_0240;
	}

IL_0108:
	{
		int32_t L_36 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		int32_t L_37 = V_1;
		V_8 = (bool)((((int32_t)((((int32_t)L_37) > ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_021b;
		}
	}
	{
		V_10 = 0;
		uint32_t L_39;
		L_39 = FastEncoderWindow_InsertString_m02BE5E784F528CF922FE96FB808AB16FDC6FDCC4(__this, (uint32_t*)(&V_0), /*hidden argument*/NULL);
		V_11 = L_39;
		int32_t L_40 = V_11;
		V_12 = (bool)((!(((uint32_t)L_40) <= ((uint32_t)0)))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_0183;
		}
	}
	{
		int32_t L_42 = V_11;
		int32_t L_43 = V_1;
		G_B16_0 = (&V_10);
		G_B16_1 = L_42;
		G_B16_2 = __this;
		if ((((int32_t)L_43) < ((int32_t)4)))
		{
			G_B17_0 = (&V_10);
			G_B17_1 = L_42;
			G_B17_2 = __this;
			goto IL_014d;
		}
	}
	{
		G_B18_0 = 8;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_014f;
	}

IL_014d:
	{
		G_B18_0 = ((int32_t)32);
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_014f:
	{
		NullCheck(G_B18_3);
		int32_t L_44;
		L_44 = FastEncoderWindow_FindMatch_m1343CEE0E7A5FC1D3624755F24D924EDB044A71E(G_B18_3, G_B18_2, (int32_t*)G_B18_1, G_B18_0, ((int32_t)32), /*hidden argument*/NULL);
		V_9 = L_44;
		int32_t L_45 = __this->get_bufPos_1();
		int32_t L_46 = V_9;
		int32_t L_47 = __this->get_bufEnd_2();
		V_13 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46))) > ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_49 = __this->get_bufEnd_2();
		int32_t L_50 = __this->get_bufPos_1();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50));
	}

IL_0180:
	{
		goto IL_0188;
	}

IL_0183:
	{
		V_9 = 0;
	}

IL_0188:
	{
		int32_t L_51 = V_9;
		int32_t L_52 = V_1;
		V_14 = (bool)((((int32_t)L_51) > ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_14;
		if (!L_53)
		{
			goto IL_01e2;
		}
	}
	{
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_54 = ___match0;
		NullCheck(L_54);
		Match_set_State_m6AEF59FFDA04A71E10E139CD2C303C608BE436FB(L_54, 3, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_55 = ___match0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56 = __this->get_window_0();
		int32_t L_57 = __this->get_bufPos_1();
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1));
		uint8_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_55);
		Match_set_Symbol_m9D4CC885E80D5A6F4B440C4B5352C1021AF9A7BB(L_55, L_59, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_60 = ___match0;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		Match_set_Position_m91B7F5B73009A6FD8D012D35688CBE509F20D914(L_60, L_61, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_62 = ___match0;
		int32_t L_63 = V_9;
		NullCheck(L_62);
		Match_set_Length_mF40EF86B8E87033FF2A6F941585E3AC43FECC044(L_62, L_63, /*hidden argument*/NULL);
		int32_t L_64 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1)));
		int32_t L_65 = V_9;
		V_1 = L_65;
		int32_t L_66 = V_1;
		FastEncoderWindow_InsertStrings_m93A2E2BA8D6AE1932B877FB90001188BD0D3A991(__this, (uint32_t*)(&V_0), L_66, /*hidden argument*/NULL);
		goto IL_0218;
	}

IL_01e2:
	{
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_67 = ___match0;
		NullCheck(L_67);
		Match_set_State_m6AEF59FFDA04A71E10E139CD2C303C608BE436FB(L_67, 2, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_68 = ___match0;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		Match_set_Position_m91B7F5B73009A6FD8D012D35688CBE509F20D914(L_68, L_69, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_70 = ___match0;
		int32_t L_71 = V_1;
		NullCheck(L_70);
		Match_set_Length_mF40EF86B8E87033FF2A6F941585E3AC43FECC044(L_70, L_71, /*hidden argument*/NULL);
		int32_t L_72 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)1));
		int32_t L_73 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1)));
		int32_t L_74 = V_1;
		FastEncoderWindow_InsertStrings_m93A2E2BA8D6AE1932B877FB90001188BD0D3A991(__this, (uint32_t*)(&V_0), L_74, /*hidden argument*/NULL);
	}

IL_0218:
	{
		goto IL_023f;
	}

IL_021b:
	{
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_75 = ___match0;
		NullCheck(L_75);
		Match_set_State_m6AEF59FFDA04A71E10E139CD2C303C608BE436FB(L_75, 2, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_76 = ___match0;
		int32_t L_77 = V_2;
		NullCheck(L_76);
		Match_set_Position_m91B7F5B73009A6FD8D012D35688CBE509F20D914(L_76, L_77, /*hidden argument*/NULL);
		Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * L_78 = ___match0;
		int32_t L_79 = V_1;
		NullCheck(L_78);
		Match_set_Length_mF40EF86B8E87033FF2A6F941585E3AC43FECC044(L_78, L_79, /*hidden argument*/NULL);
		int32_t L_80 = V_1;
		FastEncoderWindow_InsertStrings_m93A2E2BA8D6AE1932B877FB90001188BD0D3A991(__this, (uint32_t*)(&V_0), L_80, /*hidden argument*/NULL);
	}

IL_023f:
	{
	}

IL_0240:
	{
		int32_t L_81 = __this->get_bufPos_1();
		V_15 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)16384)))? 1 : 0);
		bool L_82 = V_15;
		if (!L_82)
		{
			goto IL_025c;
		}
	}
	{
		FastEncoderWindow_MoveWindows_m0680861AAAAF38215C32120D94FEECD9F0BA788E(__this, /*hidden argument*/NULL);
	}

IL_025c:
	{
		V_16 = (bool)1;
		goto IL_0261;
	}

IL_0261:
	{
		bool L_83 = V_16;
		return L_83;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::FindMatch(System.Int32,System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_FindMatch_m1343CEE0E7A5FC1D3624755F24D924EDB044A71E (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, int32_t ___search0, int32_t* ___matchPos1, int32_t ___searchDepth2, int32_t ___niceLength3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10FD9642E7ACB04ED69F426A8E578F98FE4B20DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19D47A5312FE25416B96E64DB07299182A488CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26D8CE9FE2015E7788C95222F757DBD0FFCA067A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D2E6B73549B8F487C653D431108C7D89FF4514C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B6D1787D88E73449E00137F1A1CDDA4737D85A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985A1732EF5F957F008D3779CF47BBF2B21D3798);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B27_0 = 0;
	{
		int32_t L_0 = __this->get_bufPos_1();
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_bufPos_1();
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)16384)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B3_0, _stringLiteral10FD9642E7ACB04ED69F426A8E578F98FE4B20DD, /*hidden argument*/NULL);
		int32_t L_2 = ___search0;
		int32_t L_3 = __this->get_bufPos_1();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0), _stringLiteral26D8CE9FE2015E7788C95222F757DBD0FFCA067A, /*hidden argument*/NULL);
		int32_t L_4 = ___search0;
		uint32_t L_5;
		L_5 = FastEncoderWindow_RecalculateHash_m3D716C83E9066B7B6E1C2824EF19CC97BDB22CFB(__this, L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_bufPos_1();
		uint32_t L_7;
		L_7 = FastEncoderWindow_RecalculateHash_m3D716C83E9066B7B6E1C2824EF19CC97BDB22CFB(__this, L_6, /*hidden argument*/NULL);
		Debug_Assert_m290B087CA6F58852C5EACE90EA3A398216C7B136((bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0), /*hidden argument*/NULL);
		V_0 = 0;
		V_1 = 0;
		int32_t L_8 = __this->get_bufPos_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)8192)));
		int32_t L_9 = V_2;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral19D47A5312FE25416B96E64DB07299182A488CDD, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_window_0();
		int32_t L_11 = __this->get_bufPos_1();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		goto IL_0174;
	}

IL_008a:
	{
		int32_t L_14 = ___search0;
		uint32_t L_15;
		L_15 = FastEncoderWindow_RecalculateHash_m3D716C83E9066B7B6E1C2824EF19CC97BDB22CFB(__this, L_14, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_bufPos_1();
		uint32_t L_17;
		L_17 = FastEncoderWindow_RecalculateHash_m3D716C83E9066B7B6E1C2824EF19CC97BDB22CFB(__this, L_16, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0), _stringLiteral4D2E6B73549B8F487C653D431108C7D89FF4514C, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_window_0();
		int32_t L_19 = ___search0;
		int32_t L_20 = V_0;
		NullCheck(L_18);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20));
		uint8_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		uint8_t L_23 = V_3;
		V_4 = (bool)((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_0135;
		}
	}
	{
		V_5 = 0;
		goto IL_00f4;
	}

IL_00c4:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_window_0();
		int32_t L_26 = __this->get_bufPos_1();
		int32_t L_27 = V_5;
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27));
		uint8_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = __this->get_window_0();
		int32_t L_31 = ___search0;
		int32_t L_32 = V_5;
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_6 = (bool)((((int32_t)((((int32_t)L_29) == ((int32_t)L_34))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0103;
	}

IL_00ed:
	{
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00f4:
	{
		int32_t L_37 = V_5;
		V_7 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)258)))? 1 : 0);
		bool L_38 = V_7;
		if (L_38)
		{
			goto IL_00c4;
		}
	}

IL_0103:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_0;
		V_8 = (bool)((((int32_t)L_39) > ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_42 = V_5;
		V_0 = L_42;
		int32_t L_43 = ___search0;
		V_1 = L_43;
		int32_t L_44 = V_5;
		V_9 = (bool)((((int32_t)L_44) > ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0122;
		}
	}
	{
		goto IL_0181;
	}

IL_0122:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = __this->get_window_0();
		int32_t L_47 = __this->get_bufPos_1();
		int32_t L_48 = V_5;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
		uint8_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_3 = L_50;
	}

IL_0134:
	{
	}

IL_0135:
	{
		int32_t L_51 = ___searchDepth2;
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		___searchDepth2 = L_52;
		V_10 = (bool)((((int32_t)L_52) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_0181;
	}

IL_0147:
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_54 = __this->get_prev_3();
		int32_t L_55 = ___search0;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)((int32_t)L_55&(int32_t)((int32_t)8191)));
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		int32_t L_58 = ___search0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_57) < ((int32_t)L_58))? 1 : 0), _stringLiteral74B6D1787D88E73449E00137F1A1CDDA4737D85A, /*hidden argument*/NULL);
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_59 = __this->get_prev_3();
		int32_t L_60 = ___search0;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)((int32_t)L_60&(int32_t)((int32_t)8191)));
		uint16_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		___search0 = L_62;
	}

IL_0174:
	{
		int32_t L_63 = ___search0;
		int32_t L_64 = V_2;
		V_11 = (bool)((((int32_t)L_63) > ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_11;
		if (L_65)
		{
			goto IL_008a;
		}
	}

IL_0181:
	{
		int32_t* L_66 = ___matchPos1;
		int32_t L_67 = __this->get_bufPos_1();
		int32_t L_68 = V_1;
		*((int32_t*)L_66) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68)), (int32_t)1));
		int32_t L_69 = V_0;
		if ((!(((uint32_t)L_69) == ((uint32_t)3))))
		{
			goto IL_019f;
		}
	}
	{
		int32_t* L_70 = ___matchPos1;
		int32_t L_71 = *((int32_t*)L_70);
		G_B22_0 = ((((int32_t)((((int32_t)L_71) < ((int32_t)((int32_t)16384)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01a0;
	}

IL_019f:
	{
		G_B22_0 = 0;
	}

IL_01a0:
	{
		V_12 = (bool)G_B22_0;
		bool L_72 = V_12;
		if (!L_72)
		{
			goto IL_01ac;
		}
	}
	{
		V_13 = 0;
		goto IL_01cc;
	}

IL_01ac:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)3)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t* L_74 = ___matchPos1;
		int32_t L_75 = *((int32_t*)L_74);
		G_B27_0 = ((((int32_t)L_75) < ((int32_t)((int32_t)8192)))? 1 : 0);
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B27_0 = 1;
	}

IL_01bc:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B27_0, _stringLiteral985A1732EF5F957F008D3779CF47BBF2B21D3798, /*hidden argument*/NULL);
		int32_t L_76 = V_0;
		V_13 = L_76;
		goto IL_01cc;
	}

IL_01cc:
	{
		int32_t L_77 = V_13;
		return L_77;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::VerifyHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_VerifyHashes_m8E2D54F1AD43EDF3F98FCADA9DF29484D5C064DE (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C7448C7123F21DE7996D5E505FF15795F7E3406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA772D2D655EFD5780BE5B0CC76ECC49947AA2D43);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		goto IL_0083;
	}

IL_0005:
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_0 = __this->get_lookup_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		goto IL_0063;
	}

IL_0011:
	{
		uint16_t L_4 = V_1;
		uint32_t L_5;
		L_5 = FastEncoderWindow_RecalculateHash_m3D716C83E9066B7B6E1C2824EF19CC97BDB22CFB(__this, L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int64_t)((int64_t)((uint64_t)L_5))) == ((int64_t)((int64_t)((int64_t)L_6))))? 1 : 0), _stringLiteralA772D2D655EFD5780BE5B0CC76ECC49947AA2D43, /*hidden argument*/NULL);
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_7 = __this->get_prev_3();
		uint16_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)((int32_t)L_8&(int32_t)((int32_t)8191)));
		uint16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		int32_t L_11 = __this->get_bufPos_1();
		uint16_t L_12 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12))) < ((int32_t)((int32_t)8192)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		goto IL_007e;
	}

IL_0051:
	{
		uint16_t L_14 = V_2;
		uint16_t L_15 = V_1;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0), _stringLiteral3C7448C7123F21DE7996D5E505FF15795F7E3406, /*hidden argument*/NULL);
		uint16_t L_16 = V_2;
		V_1 = L_16;
	}

IL_0063:
	{
		uint16_t L_17 = V_1;
		if (!L_17)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_18 = __this->get_bufPos_1();
		uint16_t L_19 = V_1;
		G_B8_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19))) < ((int32_t)((int32_t)8192)))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B8_0 = 0;
	}

IL_0078:
	{
		V_4 = (bool)G_B8_0;
		bool L_20 = V_4;
		if (L_20)
		{
			goto IL_0011;
		}
	}

IL_007e:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_22 = V_0;
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)2048)))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::RecalculateHash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_RecalculateHash_m3D716C83E9066B7B6E1C2824EF19CC97BDB22CFB (FastEncoderWindow_tB04CD014346D1003263A2CD608EB7AA2FAC22EEC * __this, int32_t ___position0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_window_0();
		int32_t L_1 = ___position0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_window_0();
		int32_t L_5 = ___position0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_window_0();
		int32_t L_9 = ___position0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)8))^(int32_t)((int32_t)((int32_t)L_7<<(int32_t)4))))^(int32_t)L_11))&(int32_t)((int32_t)2047)));
		goto IL_002c;
	}

IL_002c:
	{
		uint32_t L_12 = V_0;
		return L_12;
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
// System.Void Mapbox.IO.Compression.GZipDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder__ctor_m460381FEC121E9B97ED66053D6842A3BB4CF9DC2 (GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		GZipDecoder_Reset_mBFCC2CBAE041DA3F062E3D0A182EA2F84C8F2642(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipDecoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder_Reset_mBFCC2CBAE041DA3F062E3D0A182EA2F84C8F2642 (GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 * __this, const RuntimeMethod* method)
{
	{
		__this->set_gzipHeaderSubstate_0(0);
		__this->set_gzipFooterSubstate_1(((int32_t)15));
		__this->set_expectedCrc32_4(0);
		__this->set_expectedOutputStreamSizeModulo_5(0);
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipDecoder::ReadHeader(Mapbox.IO.Compression.InputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipDecoder_ReadHeader_m570C6C2D1B03CABEC5461727C95624A527713D86 (GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 * __this, InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * ___input0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	{
		goto IL_03d6;
	}

IL_0006:
	{
		int32_t L_0 = __this->get_gzipHeaderSubstate_0();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0095;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_011c;
			}
			case 4:
			{
				goto IL_014d;
			}
			case 5:
			{
				goto IL_019a;
			}
			case 6:
			{
				goto IL_01bd;
			}
			case 7:
			{
				goto IL_01e0;
			}
			case 8:
			{
				goto IL_0221;
			}
			case 9:
			{
				goto IL_025c;
			}
			case 10:
			{
				goto IL_02af;
			}
			case 11:
			{
				goto IL_0303;
			}
			case 12:
			{
				goto IL_0358;
			}
			case 13:
			{
				goto IL_0395;
			}
			case 14:
			{
				goto IL_03b6;
			}
		}
	}
	{
		goto IL_03ba;
	}

IL_0055:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_2, 8, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_006d:
	{
		int32_t L_6 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_8;
		L_8 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ECF86EA93D4F92036A429C0359578EA574C786C)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_9 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_ReadHeader_m570C6C2D1B03CABEC5461727C95624A527713D86_RuntimeMethod_var)));
	}

IL_008c:
	{
		__this->set_gzipHeaderSubstate_0(1);
		goto IL_0095;
	}

IL_0095:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_10 = ___input0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_10, 8, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		V_5 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_00af:
	{
		int32_t L_14 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)((int32_t)139)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		String_t* L_16;
		L_16 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ECF86EA93D4F92036A429C0359578EA574C786C)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_17 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_ReadHeader_m570C6C2D1B03CABEC5461727C95624A527713D86_RuntimeMethod_var)));
	}

IL_00d1:
	{
		__this->set_gzipHeaderSubstate_0(2);
		goto IL_00da;
	}

IL_00da:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_18 = ___input0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_18, 8, /*hidden argument*/NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_00f4;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_00f4:
	{
		int32_t L_22 = V_0;
		V_8 = (bool)((((int32_t)((((int32_t)L_22) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_24;
		L_24 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24E5BF9C3F6A409BBD8886942C11DF531662BE9C)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_25 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_25, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_ReadHeader_m570C6C2D1B03CABEC5461727C95624A527713D86_RuntimeMethod_var)));
	}

IL_0112:
	{
		__this->set_gzipHeaderSubstate_0(3);
		goto IL_011c;
	}

IL_011c:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_26 = ___input0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_26, 8, /*hidden argument*/NULL);
		V_0 = L_27;
		int32_t L_28 = V_0;
		V_9 = (bool)((((int32_t)L_28) < ((int32_t)0))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_0136;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_0136:
	{
		int32_t L_30 = V_0;
		__this->set_gzip_header_flag_2(L_30);
		__this->set_gzipHeaderSubstate_0(4);
		__this->set_loopCounter_6(0);
		goto IL_014d;
	}

IL_014d:
	{
		V_0 = 0;
		goto IL_017b;
	}

IL_0151:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_31 = ___input0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_31, 8, /*hidden argument*/NULL);
		V_0 = L_32;
		int32_t L_33 = V_0;
		V_10 = (bool)((((int32_t)L_33) < ((int32_t)0))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_016c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_016c:
	{
		int32_t L_35 = __this->get_loopCounter_6();
		__this->set_loopCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
	}

IL_017b:
	{
		int32_t L_36 = __this->get_loopCounter_6();
		V_11 = (bool)((((int32_t)L_36) < ((int32_t)4))? 1 : 0);
		bool L_37 = V_11;
		if (L_37)
		{
			goto IL_0151;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(5);
		__this->set_loopCounter_6(0);
		goto IL_019a;
	}

IL_019a:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_38 = ___input0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_38, 8, /*hidden argument*/NULL);
		V_0 = L_39;
		int32_t L_40 = V_0;
		V_12 = (bool)((((int32_t)L_40) < ((int32_t)0))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_01b4;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_01b4:
	{
		__this->set_gzipHeaderSubstate_0(6);
		goto IL_01bd;
	}

IL_01bd:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_42 = ___input0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_42, 8, /*hidden argument*/NULL);
		V_0 = L_43;
		int32_t L_44 = V_0;
		V_13 = (bool)((((int32_t)L_44) < ((int32_t)0))? 1 : 0);
		bool L_45 = V_13;
		if (!L_45)
		{
			goto IL_01d7;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_01d7:
	{
		__this->set_gzipHeaderSubstate_0(7);
		goto IL_01e0;
	}

IL_01e0:
	{
		int32_t L_46 = __this->get_gzip_header_flag_2();
		V_14 = (bool)((((int32_t)((int32_t)((int32_t)L_46&(int32_t)4))) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_14;
		if (!L_47)
		{
			goto IL_01f7;
		}
	}
	{
		goto IL_02af;
	}

IL_01f7:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_48 = ___input0;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_48, 8, /*hidden argument*/NULL);
		V_0 = L_49;
		int32_t L_50 = V_0;
		V_15 = (bool)((((int32_t)L_50) < ((int32_t)0))? 1 : 0);
		bool L_51 = V_15;
		if (!L_51)
		{
			goto IL_0211;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_0211:
	{
		int32_t L_52 = V_0;
		__this->set_gzip_header_xlen_3(L_52);
		__this->set_gzipHeaderSubstate_0(8);
		goto IL_0221;
	}

IL_0221:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_53 = ___input0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_53, 8, /*hidden argument*/NULL);
		V_0 = L_54;
		int32_t L_55 = V_0;
		V_16 = (bool)((((int32_t)L_55) < ((int32_t)0))? 1 : 0);
		bool L_56 = V_16;
		if (!L_56)
		{
			goto IL_023b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_023b:
	{
		int32_t L_57 = __this->get_gzip_header_xlen_3();
		int32_t L_58 = V_0;
		__this->set_gzip_header_xlen_3(((int32_t)((int32_t)L_57|(int32_t)((int32_t)((int32_t)L_58<<(int32_t)8)))));
		__this->set_gzipHeaderSubstate_0(((int32_t)9));
		__this->set_loopCounter_6(0);
		goto IL_025c;
	}

IL_025c:
	{
		V_0 = 0;
		goto IL_028a;
	}

IL_0260:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_59 = ___input0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_59, 8, /*hidden argument*/NULL);
		V_0 = L_60;
		int32_t L_61 = V_0;
		V_17 = (bool)((((int32_t)L_61) < ((int32_t)0))? 1 : 0);
		bool L_62 = V_17;
		if (!L_62)
		{
			goto IL_027b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_027b:
	{
		int32_t L_63 = __this->get_loopCounter_6();
		__this->set_loopCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1)));
	}

IL_028a:
	{
		int32_t L_64 = __this->get_loopCounter_6();
		int32_t L_65 = __this->get_gzip_header_xlen_3();
		V_18 = (bool)((((int32_t)L_64) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_18;
		if (L_66)
		{
			goto IL_0260;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)10));
		__this->set_loopCounter_6(0);
		goto IL_02af;
	}

IL_02af:
	{
		int32_t L_67 = __this->get_gzip_header_flag_2();
		V_19 = (bool)((((int32_t)((int32_t)((int32_t)L_67&(int32_t)8))) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_19;
		if (!L_68)
		{
			goto IL_02cb;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)11));
		goto IL_0303;
	}

IL_02cb:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_69 = ___input0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_69, 8, /*hidden argument*/NULL);
		V_0 = L_70;
		int32_t L_71 = V_0;
		V_20 = (bool)((((int32_t)L_71) < ((int32_t)0))? 1 : 0);
		bool L_72 = V_20;
		if (!L_72)
		{
			goto IL_02e6;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_02e6:
	{
		int32_t L_73 = V_0;
		V_21 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_21;
		if (!L_74)
		{
			goto IL_02f3;
		}
	}
	{
		goto IL_02f9;
	}

IL_02f3:
	{
		V_22 = (bool)1;
		goto IL_02cb;
	}

IL_02f9:
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)11));
		goto IL_0303;
	}

IL_0303:
	{
		int32_t L_75 = __this->get_gzip_header_flag_2();
		V_23 = (bool)((((int32_t)((int32_t)((int32_t)L_75&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_23;
		if (!L_76)
		{
			goto IL_0320;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)12));
		goto IL_0358;
	}

IL_0320:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_77 = ___input0;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_77, 8, /*hidden argument*/NULL);
		V_0 = L_78;
		int32_t L_79 = V_0;
		V_24 = (bool)((((int32_t)L_79) < ((int32_t)0))? 1 : 0);
		bool L_80 = V_24;
		if (!L_80)
		{
			goto IL_033b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_033b:
	{
		int32_t L_81 = V_0;
		V_25 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_25;
		if (!L_82)
		{
			goto IL_0348;
		}
	}
	{
		goto IL_034e;
	}

IL_0348:
	{
		V_26 = (bool)1;
		goto IL_0320;
	}

IL_034e:
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)12));
		goto IL_0358;
	}

IL_0358:
	{
		int32_t L_83 = __this->get_gzip_header_flag_2();
		V_27 = (bool)((((int32_t)((int32_t)((int32_t)L_83&(int32_t)2))) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_27;
		if (!L_84)
		{
			goto IL_0374;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)14));
		goto IL_03b6;
	}

IL_0374:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_85 = ___input0;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_85, 8, /*hidden argument*/NULL);
		V_0 = L_86;
		int32_t L_87 = V_0;
		V_28 = (bool)((((int32_t)L_87) < ((int32_t)0))? 1 : 0);
		bool L_88 = V_28;
		if (!L_88)
		{
			goto IL_038b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_038b:
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)13));
		goto IL_0395;
	}

IL_0395:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_89 = ___input0;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_89, 8, /*hidden argument*/NULL);
		V_0 = L_90;
		int32_t L_91 = V_0;
		V_29 = (bool)((((int32_t)L_91) < ((int32_t)0))? 1 : 0);
		bool L_92 = V_29;
		if (!L_92)
		{
			goto IL_03ac;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_03ac:
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)14));
		goto IL_03b6;
	}

IL_03b6:
	{
		V_3 = (bool)1;
		goto IL_03de;
	}

IL_03ba:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral827FB9B81D37440B2A0AD644005CF071D59080D5)), /*hidden argument*/NULL);
		String_t* L_93;
		L_93 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_94 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_94, L_93, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_ReadHeader_m570C6C2D1B03CABEC5461727C95624A527713D86_RuntimeMethod_var)));
	}

IL_03d6:
	{
		V_30 = (bool)1;
		goto IL_0006;
	}

IL_03de:
	{
		bool L_95 = V_3;
		return L_95;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipDecoder::ReadFooter(Mapbox.IO.Compression.InputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipDecoder_ReadFooter_m9F2583FC531D130FCA871686E1D50CDF4E54FC45 (GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 * __this, InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * ___input0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_0 = ___input0;
		NullCheck(L_0);
		InputBuffer_SkipToByteBoundary_m880737E647E4EA4D56247710D221A162ECE137DE(L_0, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_gzipFooterSubstate_1();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_005b;
	}

IL_0019:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_3, 8, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00fb;
	}

IL_0032:
	{
		uint32_t L_7 = __this->get_expectedCrc32_4();
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_loopCounter_6();
		__this->set_expectedCrc32_4(((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_9))&(int32_t)((int32_t)31))))))));
		int32_t L_10 = __this->get_loopCounter_6();
		__this->set_loopCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_005b:
	{
		int32_t L_11 = __this->get_loopCounter_6();
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)4))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0019;
		}
	}
	{
		__this->set_gzipFooterSubstate_1(((int32_t)16));
		__this->set_loopCounter_6(0);
	}

IL_007a:
	{
		int32_t L_13 = __this->get_gzipFooterSubstate_1();
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_15 = __this->get_loopCounter_6();
		V_6 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00a1;
		}
	}
	{
		__this->set_expectedOutputStreamSizeModulo_5(0);
	}

IL_00a1:
	{
		goto IL_00e7;
	}

IL_00a3:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_17 = ___input0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_17, 8, /*hidden argument*/NULL);
		V_7 = L_18;
		int32_t L_19 = V_7;
		V_8 = (bool)((((int32_t)L_19) < ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00bd;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00fb;
	}

IL_00bd:
	{
		uint32_t L_21 = __this->get_expectedOutputStreamSizeModulo_5();
		int32_t L_22 = V_7;
		int32_t L_23 = __this->get_loopCounter_6();
		__this->set_expectedOutputStreamSizeModulo_5(((int32_t)((int32_t)L_21|(int32_t)((int32_t)((int32_t)L_22<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_23))&(int32_t)((int32_t)31))))))));
		int32_t L_24 = __this->get_loopCounter_6();
		__this->set_loopCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_00e7:
	{
		int32_t L_25 = __this->get_loopCounter_6();
		V_9 = (bool)((((int32_t)L_25) < ((int32_t)4))? 1 : 0);
		bool L_26 = V_9;
		if (L_26)
		{
			goto IL_00a3;
		}
	}
	{
	}

IL_00f7:
	{
		V_3 = (bool)1;
		goto IL_00fb;
	}

IL_00fb:
	{
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Void Mapbox.IO.Compression.GZipDecoder::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder_UpdateWithBytesRead_m6ED1EC427A1406E31F80787810E0CCACCAB31414 (GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___copied2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		uint32_t L_0 = __this->get_actualCrc32_7();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___copied2;
		IL2CPP_RUNTIME_CLASS_INIT(Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = Crc32Helper_UpdateCrc32_m4C13E760F50FD18AB5D81F93BE3FCD111A1E06E1(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_actualCrc32_7(L_4);
		int64_t L_5 = __this->get_actualStreamSizeModulo_8();
		int32_t L_6 = ___copied2;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_6))))));
		int64_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((((int64_t)L_7) < ((int64_t)((int64_t)4294967296LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int64_t L_9 = V_0;
		V_0 = ((int64_t)((int64_t)L_9%(int64_t)((int64_t)4294967296LL)));
	}

IL_0040:
	{
		int64_t L_10 = V_0;
		__this->set_actualStreamSizeModulo_8(L_10);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipDecoder::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder_Validate_mEFD0167620063BAC03E48102E0E3E0104B2A2507 (GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		uint32_t L_0 = __this->get_expectedCrc32_4();
		uint32_t L_1 = __this->get_actualCrc32_7();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE0BC7CA7559FF98833686B7E0FB03B44A717E72)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_4 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_Validate_mEFD0167620063BAC03E48102E0E3E0104B2A2507_RuntimeMethod_var)));
	}

IL_0027:
	{
		int64_t L_5 = __this->get_actualStreamSizeModulo_8();
		uint32_t L_6 = __this->get_expectedOutputStreamSizeModulo_5();
		V_1 = (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)((int64_t)((uint64_t)L_6))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_8;
		L_8 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A46861F502859D61F566A451B736EE48725C754)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_9 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_Validate_mEFD0167620063BAC03E48102E0E3E0104B2A2507_RuntimeMethod_var)));
	}

IL_004e:
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
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter__ctor_mB911BCF54076CB4BDE6D81D928EE8F8EDECA3EF3 (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * __this, const RuntimeMethod* method)
{
	{
		GZipFormatter__ctor_m269710FE1AA91F733EC5B7C3C70655FCA4CE6B29(__this, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter__ctor_m269710FE1AA91F733EC5B7C3C70655FCA4CE6B29 (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * __this, int32_t ___compressionLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____C31FD54E9E8CFB2BC8835475B92A0D179827B581_10_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____C31FD54E9E8CFB2BC8835475B92A0D179827B581_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_headerBytes_0(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___compressionLevel0;
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_headerBytes_0();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)2);
	}

IL_0034:
	{
		return;
	}
}
// System.Byte[] Mapbox.IO.Compression.GZipFormatter::GetHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GZipFormatter_GetHeader_m1E7181999E47BC322B04DA71581EF4A8F66FE69F (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_headerBytes_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.GZipFormatter::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter_UpdateWithBytesRead_mE898EA84D354C6C9C721D99074C330CA03DD466E (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___bytesToCopy2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		uint32_t L_0 = __this->get__crc32_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___bytesToCopy2;
		IL2CPP_RUNTIME_CLASS_INIT(Crc32Helper_tF89219B3F28750A25938A65A90EB2AFB30BC4C1B_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = Crc32Helper_UpdateCrc32_m4C13E760F50FD18AB5D81F93BE3FCD111A1E06E1(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set__crc32_1(L_4);
		int64_t L_5 = __this->get__inputStreamSizeModulo_2();
		int32_t L_6 = ___bytesToCopy2;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)L_6))))));
		int64_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((((int64_t)L_7) < ((int64_t)((int64_t)4294967296LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int64_t L_9 = V_0;
		V_0 = ((int64_t)((int64_t)L_9%(int64_t)((int64_t)4294967296LL)));
	}

IL_0040:
	{
		int64_t L_10 = V_0;
		__this->set__inputStreamSizeModulo_2(L_10);
		return;
	}
}
// System.Byte[] Mapbox.IO.Compression.GZipFormatter::GetFooter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GZipFormatter_GetFooter_mFCECCC9E5538EC249D63223DFCB24E6EC9B696F5 (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		uint32_t L_2 = __this->get__crc32_1();
		GZipFormatter_WriteUInt32_mF7D62F8D30278EC2D9AB885530E45B97E15714B4(__this, L_1, L_2, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		int64_t L_4 = __this->get__inputStreamSizeModulo_2();
		GZipFormatter_WriteUInt32_mF7D62F8D30278EC2D9AB885530E45B97E15714B4(__this, L_3, ((int32_t)((uint32_t)L_4)), 4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		return L_6;
	}
}
// System.Void Mapbox.IO.Compression.GZipFormatter::WriteUInt32(System.Byte[],System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter_WriteUInt32_mF7D62F8D30278EC2D9AB885530E45B97E15714B4 (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, uint32_t ___value1, int32_t ___startIndex2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___b0;
		int32_t L_1 = ___startIndex2;
		uint32_t L_2 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___b0;
		int32_t L_4 = ___startIndex2;
		uint32_t L_5 = ___value1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_5>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___b0;
		int32_t L_7 = ___startIndex2;
		uint32_t L_8 = ___value1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___b0;
		int32_t L_10 = ___startIndex2;
		uint32_t L_11 = ___value1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24))))));
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
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m9B6F09C492F3B1951D36CED47B9E7FCAB35ED264 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		GZipStream__ctor_m285A4C43285F2BD969B81846BE2B7E10067B8A77(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m285A4C43285F2BD969B81846BE2B7E10067B8A77 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_3 = (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)il2cpp_codegen_object_new(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07_il2cpp_TypeInfo_var);
		DeflateStream__ctor_mF13A24A59F741FD84AA4ADDEE5065DF96BF6C6E6(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_deflateStream_5(L_3);
		int32_t L_4 = ___mode1;
		GZipStream_SetDeflateStreamFileFormatter_m7994DDAB831E4685CD9C9EFCA76E5CD7E7C2C54E(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m746E96C5F39A5E21DAAC21C6A10560739FFCB466 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___compressionLevel1, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___compressionLevel1;
		GZipStream__ctor_m13B9EDC7842E7E322E755E60C13CB26BE573E945(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m13B9EDC7842E7E322E755E60C13CB26BE573E945 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___compressionLevel1;
		bool L_2 = ___leaveOpen2;
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_3 = (DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)il2cpp_codegen_object_new(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07_il2cpp_TypeInfo_var);
		DeflateStream__ctor_m45B3AABC3B79983617168C2B3D7F1E78333BFF7B(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_deflateStream_5(L_3);
		GZipStream_SetDeflateStreamFileFormatter_m7994DDAB831E4685CD9C9EFCA76E5CD7E7C2C54E(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::SetDeflateStreamFileFormatter(Mapbox.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetDeflateStreamFileFormatter_m7994DDAB831E4685CD9C9EFCA76E5CD7E7C2C54E (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = ___mode0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE * L_2 = (GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE *)il2cpp_codegen_object_new(GZipFormatter_t2D739930A72C320CFE1A115C38196FC2035759EE_il2cpp_TypeInfo_var);
		GZipFormatter__ctor_mB911BCF54076CB4BDE6D81D928EE8F8EDECA3EF3(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_3 = __this->get_deflateStream_5();
		RuntimeObject* L_4 = V_1;
		NullCheck(L_3);
		DeflateStream_SetFileFormatWriter_m21E3D443AE7A81A40E019AC9F67769B4E94D386B(L_3, L_4, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_0020:
	{
		GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 * L_5 = (GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642 *)il2cpp_codegen_object_new(GZipDecoder_t41C423EEDBFB649F7C4314828366E72574BE3642_il2cpp_TypeInfo_var);
		GZipDecoder__ctor_m460381FEC121E9B97ED66053D6842A3BB4CF9DC2(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_6 = __this->get_deflateStream_5();
		RuntimeObject* L_7 = V_2;
		NullCheck(L_6);
		DeflateStream_SetFileFormatReader_m65A1BA5FFAD4ED5581F1DDA300B33BADE5B847AE(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_m84EEED5A11257A07195ACBB7FCD43A77B3EE5855 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_2 = __this->get_deflateStream_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_mCB792C0BA0AA88664C64FB9B251B85E10D259725 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_2 = __this->get_deflateStream_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_m5BE34A9F758BDF367DD2F4B51AC294979FB4D2ED (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_2 = __this->get_deflateStream_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_2);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Int64 Mapbox.IO.Compression.GZipStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_mB3A98AAF538090D127621FEC8073941AEB9C0B1D (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Length_mB3A98AAF538090D127621FEC8073941AEB9C0B1D_RuntimeMethod_var)));
	}
}
// System.Int64 Mapbox.IO.Compression.GZipStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_mD5335B565077F139E064F5DDE1EBE31E73B8B8F0 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Position_mD5335B565077F139E064F5DDE1EBE31E73B8B8F0_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Position_mCB961668F4DC8321430B3A67648F8402997C5CAF (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Position_mCB961668F4DC8321430B3A67648F8402997C5CAF_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Flush_m59609BA7C3F05F3AAF6CFE31C89DF473F9167554 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), /*hidden argument*/NULL);
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_3 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mC830C2F97D5314DF72EEFFE749E7F7FB467D0382(L_3, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Flush_m59609BA7C3F05F3AAF6CFE31C89DF473F9167554_RuntimeMethod_var)));
	}

IL_0020:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_4 = __this->get_deflateStream_5();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Flush() */, L_4);
		goto IL_002e;
	}

IL_002e:
	{
		return;
	}
}
// System.Int64 Mapbox.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_m7E1E16FC59C0B693825C5618D9AEBB27AFA2EFC3 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Seek_m7E1E16FC59C0B693825C5618D9AEBB27AFA2EFC3_RuntimeMethod_var)));
	}
}
// System.IAsyncResult Mapbox.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginRead_mBADA14B0AF99415648C993E1E68B7A1A8F80A676 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___asyncCallback3, RuntimeObject * ___asyncState4, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_BeginRead_mBADA14B0AF99415648C993E1E68B7A1A8F80A676_RuntimeMethod_var)));
	}

IL_001f:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_4 = __this->get_deflateStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_8 = ___asyncCallback3;
		RuntimeObject * L_9 = ___asyncState4;
		NullCheck(L_4);
		RuntimeObject* L_10;
		L_10 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, L_8, L_9);
		V_1 = L_10;
		goto IL_0034;
	}

IL_0034:
	{
		RuntimeObject* L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Mapbox.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EndRead_m194340A50F62AD26F4B59CFA1EB7E821630508E3 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_EndRead_m194340A50F62AD26F4B59CFA1EB7E821630508E3_RuntimeMethod_var)));
	}

IL_001f:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_4 = __this->get_deflateStream_5();
		RuntimeObject* L_5 = ___asyncResult0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(20 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_4, L_5);
		V_1 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.IAsyncResult Mapbox.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginWrite_mB2A8292656A86B474BC333A63CC670F10000B65B (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___asyncCallback3, RuntimeObject * ___asyncState4, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_BeginWrite_mB2A8292656A86B474BC333A63CC670F10000B65B_RuntimeMethod_var)));
	}

IL_001f:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_4 = __this->get_deflateStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_8 = ___asyncCallback3;
		RuntimeObject * L_9 = ___asyncState4;
		NullCheck(L_4);
		RuntimeObject* L_10;
		L_10 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(22 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, L_8, L_9);
		V_1 = L_10;
		goto IL_0034;
	}

IL_0034:
	{
		RuntimeObject* L_11 = V_1;
		return L_11;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_EndWrite_m5F266A1E8FE6073C46BC972F2E2BA5CEA50529E8 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_EndWrite_m5F266A1E8FE6073C46BC972F2E2BA5CEA50529E8_RuntimeMethod_var)));
	}

IL_001f:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_4 = __this->get_deflateStream_5();
		RuntimeObject* L_5 = ___asyncResult0;
		NullCheck(L_4);
		VirtActionInvoker1< RuntimeObject* >::Invoke(23 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_4, L_5);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_m7EC01009ADB1833DEF60A38C8CA77AB8916CB56F (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), /*hidden argument*/NULL);
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_3 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mC830C2F97D5314DF72EEFFE749E7F7FB467D0382(L_3, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Read_m7EC01009ADB1833DEF60A38C8CA77AB8916CB56F_RuntimeMethod_var)));
	}

IL_0020:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_4 = __this->get_deflateStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, L_6, L_7);
		V_1 = L_8;
		goto IL_0031;
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mE7D86A45030C126D472E650EFA4D4B5C28295368 (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_0 = __this->get_deflateStream_5();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), /*hidden argument*/NULL);
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_3 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mC830C2F97D5314DF72EEFFE749E7F7FB467D0382(L_3, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Write_mE7D86A45030C126D472E650EFA4D4B5C28295368_RuntimeMethod_var)));
	}

IL_0020:
	{
		DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_4 = __this->get_deflateStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, L_6, L_7);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Dispose_m152FED26978DAF5CE3FF752AACA5394937D758AC (GZipStream_t81AA82344B8DA71E0AED55FAB1DDF92E950EF0AC * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = ___disposing0;
			if (!L_0)
			{
				goto IL_0010;
			}
		}

IL_0005:
		{
			DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_1 = __this->get_deflateStream_5();
			G_B4_0 = ((!(((RuntimeObject*)(DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_0011;
		}

IL_0010:
		{
			G_B4_0 = 0;
		}

IL_0011:
		{
			V_0 = (bool)G_B4_0;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_0023;
			}
		}

IL_0015:
		{
			DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 * L_3 = __this->get_deflateStream_5();
			NullCheck(L_3);
			VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_3);
		}

IL_0023:
		{
			__this->set_deflateStream_5((DeflateStream_t4C3B3803027DCFFB7291BBCF79C3EAEFA38DEC07 *)NULL);
			IL2CPP_LEAVE(0x38, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		bool L_4 = ___disposing0;
		Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
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
// System.Void Mapbox.IO.Compression.HuffmanTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree__cctor_mA24C32707AD13D4A639178FD623E9D0F5DB10E5A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = HuffmanTree_GetStaticLiteralTreeLength_mEBF3EFFB8ECEDBCFD58E36C54FA212217B5D4862(/*hidden argument*/NULL);
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_1 = (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B *)il2cpp_codegen_object_new(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m2BB6B8291AEB95E04C011EE9FD3FBFDCBFD7A07E(L_1, L_0, /*hidden argument*/NULL);
		((HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var))->set_staticLiteralLengthTree_7(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = HuffmanTree_GetStaticDistanceTreeLength_m87DEFC0F5766267D6D95D6053B4C0BB14C7FA2D7(/*hidden argument*/NULL);
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_3 = (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B *)il2cpp_codegen_object_new(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m2BB6B8291AEB95E04C011EE9FD3FBFDCBFD7A07E(L_3, L_2, /*hidden argument*/NULL);
		((HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var))->set_staticDistanceTree_8(L_3);
		return;
	}
}
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticLiteralLengthTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * HuffmanTree_get_StaticLiteralLengthTree_m6C84EC52071369FCDBEBDD74CEB2CC9EED4AAC8F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_0 = ((HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var))->get_staticLiteralLengthTree_7();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_1 = V_0;
		return L_1;
	}
}
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticDistanceTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * HuffmanTree_get_StaticDistanceTree_mB83DE4804C6B6594C070AF71690FBEEC816A2221 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_0 = ((HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var))->get_staticDistanceTree_8();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.HuffmanTree::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree__ctor_m2BB6B8291AEB95E04C011EE9FD3FBFDCBFD7A07E (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___codeLengths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4F83E3BD187DA4E615AE86429BC0A3235C54C53);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___codeLengths0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)((int32_t)288))))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___codeLengths0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)((int32_t)32))))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___codeLengths0;
		NullCheck(L_2);
		G_B4_0 = ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((int32_t)((int32_t)19)))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
	}

IL_0023:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B4_0, _stringLiteralC4F83E3BD187DA4E615AE86429BC0A3235C54C53, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___codeLengths0;
		__this->set_codeLengthArray_4(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_codeLengthArray_4();
		NullCheck(L_4);
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) == ((int32_t)((int32_t)288)))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		__this->set_tableBits_0(((int32_t)9));
		goto IL_005d;
	}

IL_0054:
	{
		__this->set_tableBits_0(7);
	}

IL_005d:
	{
		int32_t L_6 = __this->get_tableBits_0();
		__this->set_tableMask_6(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31))))), (int32_t)1)));
		HuffmanTree_CreateTable_mBE682910545502736514AFDD7ECB7BDAC467CF60(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticLiteralTreeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HuffmanTree_GetStaticLiteralTreeLength_mEBF3EFFB8ECEDBCFD58E36C54FA212217B5D4862 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_9 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_0010:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)8);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)143)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_0010;
		}
	}
	{
		V_3 = ((int32_t)144);
		goto IL_0038;
	}

IL_002f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)9));
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0038:
	{
		int32_t L_9 = V_3;
		V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_002f;
		}
	}
	{
		V_5 = ((int32_t)256);
		goto IL_005d;
	}

IL_0052:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)7);
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_14 = V_5;
		V_6 = (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)((int32_t)279)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_0052;
		}
	}
	{
		V_7 = ((int32_t)280);
		goto IL_0083;
	}

IL_0078:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_0;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)8);
		int32_t L_18 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_19 = V_7;
		V_8 = (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)((int32_t)287)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (L_20)
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_0;
		V_9 = L_21;
		goto IL_009a;
	}

IL_009a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_9;
		return L_22;
	}
}
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticDistanceTreeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HuffmanTree_GetStaticDistanceTreeLength_m87DEFC0F5766267D6D95D6053B4C0BB14C7FA2D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)5);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		V_3 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_3;
		return L_7;
	}
}
// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::CalculateHuffmanCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* HuffmanTree_CalculateHuffmanCode_m61F194AD423DDB46359D6B4F5055A525901CD7BB (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_1 = NULL;
	uint32_t V_2 = 0;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_13 = NULL;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_codeLengthArray_4();
		V_4 = L_1;
		V_5 = 0;
		goto IL_0033;
	}

IL_0017:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_4;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_6 = L_5;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = V_0;
		int32_t L_7 = V_6;
		NullCheck(L_6);
		uint32_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)));
		int32_t L_9 = *((uint32_t*)L_8);
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_11 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_4;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_13 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_14 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		V_1 = L_14;
		V_2 = 0;
		V_7 = 1;
		goto IL_0066;
	}

IL_004e:
	{
		uint32_t L_15 = V_2;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_16 = V_0;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_19))<<(int32_t)1));
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_20 = V_1;
		int32_t L_21 = V_7;
		uint32_t L_22 = V_2;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)L_22);
		int32_t L_23 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0066:
	{
		int32_t L_24 = V_7;
		V_8 = (bool)((((int32_t)((((int32_t)L_24) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_004e;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_26 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288));
		V_3 = L_26;
		V_9 = 0;
		goto IL_00c1;
	}

IL_0085:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = __this->get_codeLengthArray_4();
		int32_t L_28 = V_9;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_10 = L_30;
		int32_t L_31 = V_10;
		V_11 = (bool)((((int32_t)L_31) > ((int32_t)0))? 1 : 0);
		bool L_32 = V_11;
		if (!L_32)
		{
			goto IL_00ba;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_33 = V_3;
		int32_t L_34 = V_9;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_35 = V_1;
		int32_t L_36 = V_10;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_tDFE0B3C7CA9B6DF50E08203F07CB00619C9CA968_il2cpp_TypeInfo_var);
		uint32_t L_40;
		L_40 = FastEncoderStatics_BitReverse_m064FB316BD6E6F335ABF1D5671F0D01224D601EC(L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint32_t)L_40);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_41 = V_1;
		int32_t L_42 = V_10;
		NullCheck(L_41);
		uint32_t* L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)));
		int32_t L_44 = *((uint32_t*)L_43);
		*((int32_t*)L_43) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00ba:
	{
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00c1:
	{
		int32_t L_46 = V_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = __this->get_codeLengthArray_4();
		NullCheck(L_47);
		V_12 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))? 1 : 0);
		bool L_48 = V_12;
		if (L_48)
		{
			goto IL_0085;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_49 = V_3;
		V_13 = L_49;
		goto IL_00d8;
	}

IL_00d8:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_50 = V_13;
		return L_50;
	}
}
// System.Void Mapbox.IO.Compression.HuffmanTree::CreateTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree_CreateTable_mBE682910545502736514AFDD7ECB7BDAC467CF60 (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral319B80E8ADC4EAB9C7A135DCEFD23ECDB203BFBD);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_15 = NULL;
	int16_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0;
		L_0 = HuffmanTree_CalculateHuffmanCode_m61F194AD423DDB46359D6B4F5055A525901CD7BB(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = __this->get_tableBits_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31))))));
		__this->set_table_1(L_2);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = V_0;
		__this->set_codeArrayDebug_5(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_codeLengthArray_4();
		NullCheck(L_4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))));
		__this->set_left_2(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_codeLengthArray_4();
		NullCheck(L_6);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))));
		__this->set_right_3(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_codeLengthArray_4();
		NullCheck(L_8);
		V_1 = ((int16_t)((int16_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))));
		V_2 = 0;
		goto IL_01cf;
	}

IL_0060:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_codeLengthArray_4();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		int32_t L_13 = V_3;
		V_4 = (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_01ca;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_15 = V_0;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		int32_t L_19 = V_3;
		int32_t L_20 = __this->get_tableBits_0();
		V_6 = (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_22 = V_3;
		V_7 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))));
		int32_t L_23 = V_5;
		int32_t L_24 = V_7;
		V_9 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_26;
		L_26 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB35DE45BF13FD662B11D547D43F796EC31AFD6B8)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_27 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_27, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HuffmanTree_CreateTable_mBE682910545502736514AFDD7ECB7BDAC467CF60_RuntimeMethod_var)));
	}

IL_00b8:
	{
		int32_t L_28 = __this->get_tableBits_0();
		int32_t L_29 = V_3;
		V_8 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29))&(int32_t)((int32_t)31)))));
		V_10 = 0;
		goto IL_00e6;
	}

IL_00cc:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_30 = __this->get_table_1();
		int32_t L_31 = V_5;
		int32_t L_32 = V_2;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int16_t)((int16_t)((int16_t)L_32)));
		int32_t L_33 = V_5;
		int32_t L_34 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34));
		int32_t L_35 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00e6:
	{
		int32_t L_36 = V_10;
		int32_t L_37 = V_8;
		V_11 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_11;
		if (L_38)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01c9;
	}

IL_00f8:
	{
		int32_t L_39 = V_3;
		int32_t L_40 = __this->get_tableBits_0();
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40));
		int32_t L_41 = __this->get_tableBits_0();
		V_13 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_41&(int32_t)((int32_t)31)))));
		int32_t L_42 = V_5;
		int32_t L_43 = __this->get_tableBits_0();
		V_14 = ((int32_t)((int32_t)L_42&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)31))))), (int32_t)1))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_44 = __this->get_table_1();
		V_15 = L_44;
	}

IL_012a:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_45 = V_15;
		int32_t L_46 = V_14;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int16_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_16 = L_48;
		int16_t L_49 = V_16;
		V_17 = (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_0151;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_51 = V_15;
		int32_t L_52 = V_14;
		int16_t L_53 = V_1;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int16_t)((int16_t)((int16_t)((-L_53)))));
		int16_t L_54 = V_1;
		V_16 = ((int16_t)((int16_t)((-L_54))));
		int16_t L_55 = V_1;
		V_1 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1))));
	}

IL_0151:
	{
		int16_t L_56 = V_16;
		V_18 = (bool)((((int32_t)L_56) > ((int32_t)0))? 1 : 0);
		bool L_57 = V_18;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		String_t* L_58;
		L_58 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB35DE45BF13FD662B11D547D43F796EC31AFD6B8)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_59 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_59, L_58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HuffmanTree_CreateTable_mBE682910545502736514AFDD7ECB7BDAC467CF60_RuntimeMethod_var)));
	}

IL_016d:
	{
		int16_t L_60 = V_16;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_60) < ((int32_t)0))? 1 : 0), _stringLiteral319B80E8ADC4EAB9C7A135DCEFD23ECDB203BFBD, /*hidden argument*/NULL);
		int32_t L_61 = V_5;
		int32_t L_62 = V_13;
		V_19 = (bool)((((int32_t)((int32_t)((int32_t)L_61&(int32_t)L_62))) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_19;
		if (!L_63)
		{
			goto IL_0197;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_64 = __this->get_left_2();
		V_15 = L_64;
		goto IL_01a1;
	}

IL_0197:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_65 = __this->get_right_3();
		V_15 = L_65;
	}

IL_01a1:
	{
		int16_t L_66 = V_16;
		V_14 = ((-L_66));
		int32_t L_67 = V_13;
		V_13 = ((int32_t)((int32_t)L_67<<(int32_t)1));
		int32_t L_68 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)1));
		int32_t L_69 = V_12;
		V_20 = (bool)((!(((uint32_t)L_69) <= ((uint32_t)0)))? 1 : 0);
		bool L_70 = V_20;
		if (L_70)
		{
			goto IL_012a;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_71 = V_15;
		int32_t L_72 = V_14;
		int32_t L_73 = V_2;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (int16_t)((int16_t)((int16_t)L_73)));
	}

IL_01c9:
	{
	}

IL_01ca:
	{
		int32_t L_74 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01cf:
	{
		int32_t L_75 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76 = __this->get_codeLengthArray_4();
		NullCheck(L_76);
		V_21 = (bool)((((int32_t)L_75) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))? 1 : 0);
		bool L_77 = V_21;
		if (L_77)
		{
			goto IL_0060;
		}
	}
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.HuffmanTree::GetNextSymbol(Mapbox.IO.Compression.InputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HuffmanTree_GetNextSymbol_mE02D67A58296F556CE194530DA41109DC2D4441E (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * __this, InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_GetNextSymbol_mE02D67A58296F556CE194530DA41109DC2D4441E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	uint32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_0 = ___input0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = InputBuffer_TryLoad16Bits_m608DB3021EF9AAB709662C735228F0C7320A39A3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputBuffer_get_AvailableBits_m62A0FF1647B17687BDB8E8A2F0EFFD30A5D65A86(L_2, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		V_4 = (-1);
		goto IL_00c9;
	}

IL_001e:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = __this->get_table_1();
		uint32_t L_6 = V_0;
		int32_t L_7 = __this->get_tableMask_6();
		if ((int64_t)(((int64_t)((int64_t)((int64_t)((uint64_t)L_6))&(int64_t)((int64_t)((int64_t)L_7))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), HuffmanTree_GetNextSymbol_mE02D67A58296F556CE194530DA41109DC2D4441E_RuntimeMethod_var);
		NullCheck(L_5);
		intptr_t L_8 = ((intptr_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_6))&(int64_t)((int64_t)((int64_t)L_7)))));
		int16_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		int32_t L_10 = V_1;
		V_5 = (bool)((((int32_t)L_10) < ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_12 = __this->get_tableBits_0();
		V_6 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)31)))));
	}

IL_0049:
	{
		int32_t L_13 = V_1;
		V_1 = ((-L_13));
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_6;
		V_7 = (bool)((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_17 = __this->get_left_2();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int16_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = L_20;
		goto IL_006e;
	}

IL_0065:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = __this->get_right_3();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_1 = L_24;
	}

IL_006e:
	{
		uint32_t L_25 = V_6;
		V_6 = ((int32_t)((int32_t)L_25<<(int32_t)1));
		int32_t L_26 = V_1;
		V_8 = (bool)((((int32_t)L_26) < ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_0049;
		}
	}
	{
	}

IL_0080:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = __this->get_codeLengthArray_4();
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_2 = L_31;
		int32_t L_32 = V_2;
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_34;
		L_34 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB35DE45BF13FD662B11D547D43F796EC31AFD6B8)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_35 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_35, L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HuffmanTree_GetNextSymbol_mE02D67A58296F556CE194530DA41109DC2D4441E_RuntimeMethod_var)));
	}

IL_00a7:
	{
		int32_t L_36 = V_2;
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_37 = ___input0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = InputBuffer_get_AvailableBits_m62A0FF1647B17687BDB8E8A2F0EFFD30A5D65A86(L_37, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_36) > ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_00bc;
		}
	}
	{
		V_4 = (-1);
		goto IL_00c9;
	}

IL_00bc:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_40 = ___input0;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		InputBuffer_SkipBits_m2CFC5F47E99A2C4D06CAF57F57DF8DFBEAED66CE(L_40, L_41, /*hidden argument*/NULL);
		int32_t L_42 = V_1;
		V_4 = L_42;
		goto IL_00c9;
	}

IL_00c9:
	{
		int32_t L_43 = V_4;
		return L_43;
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
// System.Void Mapbox.IO.Compression.Inflater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater__ctor_m4373E28FB097E3A6EF12DFB3E10539492900F668 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_blockLengthBuffer_13(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * L_1 = (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 *)il2cpp_codegen_object_new(OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49_il2cpp_TypeInfo_var);
		OutputWindow__ctor_mD07D9E7402B0F446ECC777F26E8A077622537560(L_1, /*hidden argument*/NULL);
		__this->set_output_5(L_1);
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_2 = (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A *)il2cpp_codegen_object_new(InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A_il2cpp_TypeInfo_var);
		InputBuffer__ctor_m64BDA0D242DDCB103A6426FCEBCB12A97DEF1505(L_2, /*hidden argument*/NULL);
		__this->set_input_6(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)320));
		__this->set_codeList_24(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		__this->set_codeLengthTreeCodeLength_25(L_4);
		Inflater_Reset_m9AE1FC850A3B453021FDD71EA4CDAFE46B2F0C62(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_SetFileFormatReader_m3A402897FFDD7DC4F14DC3A16113A8B1F315FE19 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___reader0;
		__this->set_formatReader_27(L_0);
		__this->set_hasFormatReader_10((bool)1);
		Inflater_Reset_m9AE1FC850A3B453021FDD71EA4CDAFE46B2F0C62(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_Reset_m9AE1FC850A3B453021FDD71EA4CDAFE46B2F0C62 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_hasFormatReader_10();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		__this->set_state_9(0);
		goto IL_001f;
	}

IL_0016:
	{
		__this->set_state_9(2);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_SetInput_m2656520B8CF3F1AAC59727E2AA5323875B66544E (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inputBytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_0 = __this->get_input_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___inputBytes0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		InputBuffer_SetInput_mAFEA90F5041C2829FC6199A55A134CFCE7523461(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::Finished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_Finished_m567445FF848582887054CB1268E97F1C6B869E79 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_state_9();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)24))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_state_9();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)23)))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Mapbox.IO.Compression.Inflater::get_AvailableOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_get_AvailableOutput_m3C933C0A54909A301DB6AB6B12EC43DBE4D6BB3E (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * L_0 = __this->get_output_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OutputWindow_get_AvailableBytes_mEAE98CBDFD2B860160884D6CA85916339BBE651C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_NeedsInput_mF2C2F1B0D5BC92B1AB912499F0C452152CA32A96 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_0 = __this->get_input_6();
		NullCheck(L_0);
		bool L_1;
		L_1 = InputBuffer_NeedsInput_mF58F53107FC685B8D25F56BEA21616BC0967DB28(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Mapbox.IO.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_Inflate_m982C2E275B50C5E06AE7C4341742464558B08C1A (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileFormatReader_t88D5482CB4A0A56C7896ABE9D4B6231F742BCD72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t G_B10_0 = 0;
	{
		V_0 = 0;
	}

IL_0003:
	{
		OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * L_0 = __this->get_output_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = OutputWindow_CopyTo_m59DC739EE2C3CBD3F6181681FDD4F0F4FDACDC3A(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		bool L_7 = __this->get_hasFormatReader_10();
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_9 = __this->get_formatReader_27();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___bytes0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(2 /* System.Void Mapbox.IO.Compression.IFileFormatReader::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32) */, IFileFormatReader_t88D5482CB4A0A56C7896ABE9D4B6231F742BCD72_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
	}

IL_0037:
	{
		int32_t L_13 = ___offset1;
		int32_t L_14 = V_1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		int32_t L_17 = ___length2;
		int32_t L_18 = V_1;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18));
	}

IL_0046:
	{
		int32_t L_19 = ___length2;
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_006b;
	}

IL_0053:
	{
		bool L_21;
		L_21 = Inflater_Finished_m567445FF848582887054CB1268E97F1C6B869E79(__this, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0064;
		}
	}
	{
		bool L_22;
		L_22 = Inflater_Decode_mF890E39C3E7F019161CFDDCDE63A3A6AD35B9394(__this, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_22));
		goto IL_0065;
	}

IL_0064:
	{
		G_B10_0 = 0;
	}

IL_0065:
	{
		V_5 = (bool)G_B10_0;
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0003;
		}
	}

IL_006b:
	{
		int32_t L_24 = __this->get_state_9();
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)((int32_t)23)))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_009f;
		}
	}
	{
		OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * L_26 = __this->get_output_5();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = OutputWindow_get_AvailableBytes_mEAE98CBDFD2B860160884D6CA85916339BBE651C(L_26, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject* L_29 = __this->get_formatReader_27();
		NullCheck(L_29);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Mapbox.IO.Compression.IFileFormatReader::Validate() */, IFileFormatReader_t88D5482CB4A0A56C7896ABE9D4B6231F742BCD72_il2cpp_TypeInfo_var, L_29);
	}

IL_009e:
	{
	}

IL_009f:
	{
		int32_t L_30 = V_0;
		V_8 = L_30;
		goto IL_00a4;
	}

IL_00a4:
	{
		int32_t L_31 = V_8;
		return L_31;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::Decode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_Decode_mF890E39C3E7F019161CFDDCDE63A3A6AD35B9394 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileFormatReader_t88D5482CB4A0A56C7896ABE9D4B6231F742BCD72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B43_0 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		bool L_0;
		L_0 = Inflater_Finished_m567445FF848582887054CB1268E97F1C6B869E79(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0274;
	}

IL_0017:
	{
		bool L_2 = __this->get_hasFormatReader_10();
		V_4 = L_2;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_4 = __this->get_state_9();
		V_5 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_formatReader_27();
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_7 = __this->get_input_6();
		NullCheck(L_6);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * >::Invoke(0 /* System.Boolean Mapbox.IO.Compression.IFileFormatReader::ReadHeader(Mapbox.IO.Compression.InputBuffer) */, IFileFormatReader_t88D5482CB4A0A56C7896ABE9D4B6231F742BCD72_il2cpp_TypeInfo_var, L_6, L_7);
		V_6 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_0059:
	{
		__this->set_state_9(2);
		goto IL_00b1;
	}

IL_0063:
	{
		int32_t L_10 = __this->get_state_9();
		if ((((int32_t)L_10) == ((int32_t)((int32_t)21))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_11 = __this->get_state_9();
		G_B10_0 = ((((int32_t)L_11) == ((int32_t)((int32_t)22)))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B10_0 = 1;
	}

IL_007a:
	{
		V_7 = (bool)G_B10_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_13 = __this->get_formatReader_27();
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_14 = __this->get_input_6();
		NullCheck(L_13);
		bool L_15;
		L_15 = InterfaceFuncInvoker1< bool, InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * >::Invoke(1 /* System.Boolean Mapbox.IO.Compression.IFileFormatReader::ReadFooter(Mapbox.IO.Compression.InputBuffer) */, IFileFormatReader_t88D5482CB4A0A56C7896ABE9D4B6231F742BCD72_il2cpp_TypeInfo_var, L_13, L_14);
		V_8 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_00a2;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_00a2:
	{
		__this->set_state_9(((int32_t)23));
		V_3 = (bool)1;
		goto IL_0274;
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		int32_t L_17 = __this->get_state_9();
		V_9 = (bool)((((int32_t)L_17) == ((int32_t)2))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_00f8;
		}
	}
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_19 = __this->get_input_6();
		NullCheck(L_19);
		bool L_20;
		L_20 = InputBuffer_EnsureBitsAvailable_mBEC2D96C8A668A9439F2B326559D67156491EE55(L_19, 1, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_10;
		if (!L_21)
		{
			goto IL_00de;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_00de:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_22 = __this->get_input_6();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_22, 1, /*hidden argument*/NULL);
		__this->set_bfinal_11(L_23);
		__this->set_state_9(3);
	}

IL_00f8:
	{
		int32_t L_24 = __this->get_state_9();
		V_11 = (bool)((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		bool L_25 = V_11;
		if (!L_25)
		{
			goto IL_01b9;
		}
	}
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_26 = __this->get_input_6();
		NullCheck(L_26);
		bool L_27;
		L_27 = InputBuffer_EnsureBitsAvailable_mBEC2D96C8A668A9439F2B326559D67156491EE55(L_26, 2, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_012f;
		}
	}
	{
		__this->set_state_9(3);
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_012f:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_29 = __this->get_input_6();
		NullCheck(L_29);
		int32_t L_30;
		L_30 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_29, 2, /*hidden argument*/NULL);
		__this->set_blockType_12(L_30);
		int32_t L_31 = __this->get_blockType_12();
		V_13 = (bool)((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		bool L_32 = V_13;
		if (!L_32)
		{
			goto IL_015b;
		}
	}
	{
		__this->set_state_9(4);
		goto IL_01b8;
	}

IL_015b:
	{
		int32_t L_33 = __this->get_blockType_12();
		V_14 = (bool)((((int32_t)L_33) == ((int32_t)1))? 1 : 0);
		bool L_34 = V_14;
		if (!L_34)
		{
			goto IL_018c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_35;
		L_35 = HuffmanTree_get_StaticLiteralLengthTree_m6C84EC52071369FCDBEBDD74CEB2CC9EED4AAC8F(/*hidden argument*/NULL);
		__this->set_literalLengthTree_7(L_35);
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_36;
		L_36 = HuffmanTree_get_StaticDistanceTree_mB83DE4804C6B6594C070AF71690FBEEC816A2221(/*hidden argument*/NULL);
		__this->set_distanceTree_8(L_36);
		__this->set_state_9(((int32_t)10));
		goto IL_01b8;
	}

IL_018c:
	{
		int32_t L_37 = __this->get_blockType_12();
		V_15 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_15;
		if (!L_38)
		{
			goto IL_01a7;
		}
	}
	{
		__this->set_state_9(((int32_t)15));
		goto IL_01b8;
	}

IL_01a7:
	{
		String_t* L_39;
		L_39 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71941A6CD1B2B7C0B750E2D670E2625BB278E19B)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_40 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_Decode_mF890E39C3E7F019161CFDDCDE63A3A6AD35B9394_RuntimeMethod_var)));
	}

IL_01b8:
	{
	}

IL_01b9:
	{
		int32_t L_41 = __this->get_blockType_12();
		V_16 = (bool)((((int32_t)L_41) == ((int32_t)2))? 1 : 0);
		bool L_42 = V_16;
		if (!L_42)
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_43 = __this->get_state_9();
		V_17 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_44 = V_17;
		if (!L_44)
		{
			goto IL_01e4;
		}
	}
	{
		bool L_45;
		L_45 = Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F(__this, /*hidden argument*/NULL);
		V_1 = L_45;
		goto IL_01ef;
	}

IL_01e4:
	{
		bool L_46;
		L_46 = Inflater_DecodeBlock_m0623A8A98C73121D1DDB774EA840647DAEDADB93(__this, (bool*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_46;
	}

IL_01ef:
	{
		goto IL_023b;
	}

IL_01f2:
	{
		int32_t L_47 = __this->get_blockType_12();
		V_18 = (bool)((((int32_t)L_47) == ((int32_t)1))? 1 : 0);
		bool L_48 = V_18;
		if (!L_48)
		{
			goto IL_020e;
		}
	}
	{
		bool L_49;
		L_49 = Inflater_DecodeBlock_m0623A8A98C73121D1DDB774EA840647DAEDADB93(__this, (bool*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_49;
		goto IL_023b;
	}

IL_020e:
	{
		int32_t L_50 = __this->get_blockType_12();
		V_19 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_19;
		if (!L_51)
		{
			goto IL_022a;
		}
	}
	{
		bool L_52;
		L_52 = Inflater_DecodeUncompressedBlock_mC7C7C7FCC629BE7366DDD3231CB03EE6A001D4BA(__this, (bool*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_52;
		goto IL_023b;
	}

IL_022a:
	{
		String_t* L_53;
		L_53 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71941A6CD1B2B7C0B750E2D670E2625BB278E19B)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_54 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_54, L_53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_Decode_mF890E39C3E7F019161CFDDCDE63A3A6AD35B9394_RuntimeMethod_var)));
	}

IL_023b:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_0249;
		}
	}
	{
		int32_t L_56 = __this->get_bfinal_11();
		G_B43_0 = ((!(((uint32_t)L_56) <= ((uint32_t)0)))? 1 : 0);
		goto IL_024a;
	}

IL_0249:
	{
		G_B43_0 = 0;
	}

IL_024a:
	{
		V_20 = (bool)G_B43_0;
		bool L_57 = V_20;
		if (!L_57)
		{
			goto IL_0270;
		}
	}
	{
		bool L_58 = __this->get_hasFormatReader_10();
		V_21 = L_58;
		bool L_59 = V_21;
		if (!L_59)
		{
			goto IL_0267;
		}
	}
	{
		__this->set_state_9(((int32_t)21));
		goto IL_026f;
	}

IL_0267:
	{
		__this->set_state_9(((int32_t)24));
	}

IL_026f:
	{
	}

IL_0270:
	{
		bool L_60 = V_1;
		V_3 = L_60;
		goto IL_0274;
	}

IL_0274:
	{
		bool L_61 = V_3;
		return L_61;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeUncompressedBlock(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeUncompressedBlock_mC7C7C7FCC629BE7366DDD3231CB03EE6A001D4BA (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, bool* ___end_of_block0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		bool* L_0 = ___end_of_block0;
		*((int8_t*)L_0) = (int8_t)0;
		goto IL_0180;
	}

IL_0009:
	{
		int32_t L_1 = __this->get_state_9();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)15))))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_004d;
			}
			case 5:
			{
				goto IL_00ff;
			}
		}
	}
	{
		goto IL_0163;
	}

IL_0037:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_3 = __this->get_input_6();
		NullCheck(L_3);
		InputBuffer_SkipToByteBoundary_m880737E647E4EA4D56247710D221A162ECE137DE(L_3, /*hidden argument*/NULL);
		__this->set_state_9(((int32_t)16));
		goto IL_004d;
	}

IL_004d:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_4 = __this->get_input_6();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_4, 8, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0188;
	}

IL_006b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_blockLengthBuffer_13();
		int32_t L_9 = __this->get_state_9();
		int32_t L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)16)))), (uint8_t)((int32_t)((uint8_t)L_10)));
		int32_t L_11 = __this->get_state_9();
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)((int32_t)19)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00ec;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_blockLengthBuffer_13();
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_blockLengthBuffer_13();
		NullCheck(L_16);
		int32_t L_17 = 1;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->set_blockLength_14(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)((int32_t)256))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_blockLengthBuffer_13();
		NullCheck(L_19);
		int32_t L_20 = 2;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_blockLengthBuffer_13();
		NullCheck(L_22);
		int32_t L_23 = 3;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)((int32_t)256)))));
		int32_t L_25 = __this->get_blockLength_14();
		int32_t L_26 = V_6;
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((uint16_t)L_25))) == ((int32_t)((int32_t)((uint16_t)((~L_26))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00eb;
		}
	}
	{
		String_t* L_28;
		L_28 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABDBE2717F62037C4CA1A77B2864BC2457804361)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_29 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeUncompressedBlock_mC7C7C7FCC629BE7366DDD3231CB03EE6A001D4BA_RuntimeMethod_var)));
	}

IL_00eb:
	{
	}

IL_00ec:
	{
		int32_t L_30 = __this->get_state_9();
		__this->set_state_9(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		goto IL_017f;
	}

IL_00ff:
	{
		OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * L_31 = __this->get_output_5();
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_32 = __this->get_input_6();
		int32_t L_33 = __this->get_blockLength_14();
		NullCheck(L_31);
		int32_t L_34;
		L_34 = OutputWindow_CopyFrom_m4D13F6B53BC537901B80A64EC79B4E9A0409110F(L_31, L_32, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = __this->get_blockLength_14();
		int32_t L_36 = V_2;
		__this->set_blockLength_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)));
		int32_t L_37 = __this->get_blockLength_14();
		V_8 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_0144;
		}
	}
	{
		__this->set_state_9(2);
		bool* L_39 = ___end_of_block0;
		*((int8_t*)L_39) = (int8_t)1;
		V_4 = (bool)1;
		goto IL_0188;
	}

IL_0144:
	{
		OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * L_40 = __this->get_output_5();
		NullCheck(L_40);
		int32_t L_41;
		L_41 = OutputWindow_get_FreeBytes_m097178A25925767D52C0FFBD8AEB9F07658C7B75(L_40, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_015e;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0188;
	}

IL_015e:
	{
		V_4 = (bool)0;
		goto IL_0188;
	}

IL_0163:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DA490CA6A9F70C8AFCBE8CB3CB47F96773F1B9F)), /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_44 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_44, L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeUncompressedBlock_mC7C7C7FCC629BE7366DDD3231CB03EE6A001D4BA_RuntimeMethod_var)));
	}

IL_017f:
	{
	}

IL_0180:
	{
		V_10 = (bool)1;
		goto IL_0009;
	}

IL_0188:
	{
		bool L_45 = V_4;
		return L_45;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeBlock(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeBlock_m0623A8A98C73121D1DDB774EA840647DAEDADB93 (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, bool* ___end_of_block_code_seen0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FC50567C608356789F168FAB22BFF661DEE3513);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB646107306B4C954FBAB60DFA719BF11291B7988);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B27_0 = 0;
	{
		bool* L_0 = ___end_of_block_code_seen0;
		*((int8_t*)L_0) = (int8_t)0;
		OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * L_1 = __this->get_output_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = OutputWindow_get_FreeBytes_m097178A25925767D52C0FFBD8AEB9F07658C7B75(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_031a;
	}

IL_0015:
	{
		int32_t L_3 = __this->get_state_9();
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0142;
			}
			case 2:
			{
				goto IL_01d6;
			}
			case 3:
			{
				goto IL_025c;
			}
		}
	}
	{
		goto IL_02fd;
	}

IL_003b:
	{
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_5 = __this->get_literalLengthTree_7();
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_6 = __this->get_input_6();
		NullCheck(L_5);
		int32_t L_7;
		L_7 = HuffmanTree_GetNextSymbol_mE02D67A58296F556CE194530DA41109DC2D4441E(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_0060:
	{
		int32_t L_10 = V_1;
		V_6 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * L_12 = __this->get_output_5();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		OutputWindow_Write_m5AC193639E1A972D0DDBFB53F6E46B4ECFDF14BD(L_12, (uint8_t)((int32_t)((uint8_t)L_13)), /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		goto IL_013d;
	}

IL_0087:
	{
		int32_t L_15 = V_1;
		V_7 = (bool)((((int32_t)L_15) == ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00a8;
		}
	}
	{
		bool* L_17 = ___end_of_block_code_seen0;
		*((int8_t*)L_17) = (int8_t)1;
		__this->set_state_9(2);
		V_5 = (bool)1;
		goto IL_0330;
	}

IL_00a8:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)257)));
		int32_t L_19 = V_1;
		V_8 = (bool)((((int32_t)L_19) < ((int32_t)8))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)3));
		__this->set_extraBits_17(0);
		goto IL_0134;
	}

IL_00ca:
	{
		int32_t L_22 = V_1;
		V_9 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)28)))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		V_1 = ((int32_t)258);
		__this->set_extraBits_17(0);
		goto IL_0134;
	}

IL_00e6:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = ((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->get_extraLengthBits_0();
		NullCheck(L_26);
		G_B16_0 = ((((int32_t)((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B16_0 = 1;
	}

IL_00fb:
	{
		V_10 = (bool)G_B16_0;
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_28;
		L_28 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_29 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeBlock_m0623A8A98C73121D1DDB774EA840647DAEDADB93_RuntimeMethod_var)));
	}

IL_0112:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->get_extraLengthBits_0();
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		__this->set_extraBits_17(L_33);
		int32_t L_34 = __this->get_extraBits_17();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((!(((uint32_t)L_34) <= ((uint32_t)0)))? 1 : 0), _stringLiteralB646107306B4C954FBAB60DFA719BF11291B7988, /*hidden argument*/NULL);
	}

IL_0134:
	{
		int32_t L_35 = V_1;
		__this->set_length_15(L_35);
		goto IL_0142;
	}

IL_013d:
	{
		goto IL_0319;
	}

IL_0142:
	{
		int32_t L_36 = __this->get_extraBits_17();
		V_11 = (bool)((((int32_t)L_36) > ((int32_t)0))? 1 : 0);
		bool L_37 = V_11;
		if (!L_37)
		{
			goto IL_01cc;
		}
	}
	{
		__this->set_state_9(((int32_t)11));
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_38 = __this->get_input_6();
		int32_t L_39 = __this->get_extraBits_17();
		NullCheck(L_38);
		int32_t L_40;
		L_40 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_38, L_39, /*hidden argument*/NULL);
		V_12 = L_40;
		int32_t L_41 = V_12;
		V_13 = (bool)((((int32_t)L_41) < ((int32_t)0))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_0181;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_0181:
	{
		int32_t L_43 = __this->get_length_15();
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_44 = __this->get_length_15();
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = ((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->get_lengthBase_1();
		NullCheck(L_45);
		G_B27_0 = ((((int32_t)((((int32_t)L_44) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_019f;
	}

IL_019e:
	{
		G_B27_0 = 1;
	}

IL_019f:
	{
		V_14 = (bool)G_B27_0;
		bool L_46 = V_14;
		if (!L_46)
		{
			goto IL_01b6;
		}
	}
	{
		String_t* L_47;
		L_47 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_48 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_48, L_47, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeBlock_m0623A8A98C73121D1DDB774EA840647DAEDADB93_RuntimeMethod_var)));
	}

IL_01b6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = ((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->get_lengthBase_1();
		int32_t L_50 = __this->get_length_15();
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = V_12;
		__this->set_length_15(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)L_53)));
	}

IL_01cc:
	{
		__this->set_state_9(((int32_t)12));
		goto IL_01d6;
	}

IL_01d6:
	{
		int32_t L_54 = __this->get_blockType_12();
		V_15 = (bool)((((int32_t)L_54) == ((int32_t)2))? 1 : 0);
		bool L_55 = V_15;
		if (!L_55)
		{
			goto IL_0200;
		}
	}
	{
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_56 = __this->get_distanceTree_8();
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_57 = __this->get_input_6();
		NullCheck(L_56);
		int32_t L_58;
		L_58 = HuffmanTree_GetNextSymbol_mE02D67A58296F556CE194530DA41109DC2D4441E(L_56, L_57, /*hidden argument*/NULL);
		__this->set_distanceCode_16(L_58);
		goto IL_023a;
	}

IL_0200:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_59 = __this->get_input_6();
		NullCheck(L_59);
		int32_t L_60;
		L_60 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_59, 5, /*hidden argument*/NULL);
		__this->set_distanceCode_16(L_60);
		int32_t L_61 = __this->get_distanceCode_16();
		V_16 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_16;
		if (!L_62)
		{
			goto IL_0239;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = ((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->get_staticDistanceTreeTable_4();
		int32_t L_64 = __this->get_distanceCode_16();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		__this->set_distanceCode_16(L_66);
	}

IL_0239:
	{
	}

IL_023a:
	{
		int32_t L_67 = __this->get_distanceCode_16();
		V_17 = (bool)((((int32_t)L_67) < ((int32_t)0))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_0252;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_0252:
	{
		__this->set_state_9(((int32_t)13));
		goto IL_025c;
	}

IL_025c:
	{
		int32_t L_69 = __this->get_distanceCode_16();
		V_18 = (bool)((((int32_t)L_69) > ((int32_t)3))? 1 : 0);
		bool L_70 = V_18;
		if (!L_70)
		{
			goto IL_02b6;
		}
	}
	{
		int32_t L_71 = __this->get_distanceCode_16();
		__this->set_extraBits_17(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)2))>>(int32_t)1)));
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_72 = __this->get_input_6();
		int32_t L_73 = __this->get_extraBits_17();
		NullCheck(L_72);
		int32_t L_74;
		L_74 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_72, L_73, /*hidden argument*/NULL);
		V_19 = L_74;
		int32_t L_75 = V_19;
		V_20 = (bool)((((int32_t)L_75) < ((int32_t)0))? 1 : 0);
		bool L_76 = V_20;
		if (!L_76)
		{
			goto IL_02a3;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_02a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_77 = ((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->get_distanceBasePosition_2();
		int32_t L_78 = __this->get_distanceCode_16();
		NullCheck(L_77);
		int32_t L_79 = L_78;
		int32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_19;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_81));
		goto IL_02c1;
	}

IL_02b6:
	{
		int32_t L_82 = __this->get_distanceCode_16();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_02c1:
	{
		int32_t L_83 = V_0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_83) < ((int32_t)((int32_t)258)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral6FC50567C608356789F168FAB22BFF661DEE3513, /*hidden argument*/NULL);
		OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * L_84 = __this->get_output_5();
		int32_t L_85 = __this->get_length_15();
		int32_t L_86 = V_3;
		NullCheck(L_84);
		OutputWindow_WriteLengthDistance_mF24BD4E93684CF1FBE6F7A8137AEE3F2F0AA4C86(L_84, L_85, L_86, /*hidden argument*/NULL);
		int32_t L_87 = V_0;
		int32_t L_88 = __this->get_length_15();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_87, (int32_t)L_88));
		__this->set_state_9(((int32_t)10));
		goto IL_0319;
	}

IL_02fd:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DA490CA6A9F70C8AFCBE8CB3CB47F96773F1B9F)), /*hidden argument*/NULL);
		String_t* L_89;
		L_89 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_90 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_90, L_89, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeBlock_m0623A8A98C73121D1DDB774EA840647DAEDADB93_RuntimeMethod_var)));
	}

IL_0319:
	{
	}

IL_031a:
	{
		int32_t L_91 = V_0;
		V_21 = (bool)((((int32_t)L_91) > ((int32_t)((int32_t)258)))? 1 : 0);
		bool L_92 = V_21;
		if (L_92)
		{
			goto IL_0015;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_0330;
	}

IL_0330:
	{
		bool L_93 = V_5;
		return L_93;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeDynamicBlockHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F (Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	uint8_t V_19 = 0x0;
	bool V_20 = false;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	int32_t V_26 = 0;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	{
		int32_t L_0 = __this->get_state_9();
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)4)))
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_00b1;
			}
			case 3:
			{
				goto IL_00f9;
			}
			case 4:
			{
				goto IL_01be;
			}
			case 5:
			{
				goto IL_01be;
			}
		}
	}
	{
		goto IL_040a;
	}

IL_002d:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_2 = __this->get_input_6();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_2, 5, /*hidden argument*/NULL);
		__this->set_literalLengthCodeCount_19(L_3);
		int32_t L_4 = __this->get_literalLengthCodeCount_19();
		V_3 = (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_0055:
	{
		int32_t L_6 = __this->get_literalLengthCodeCount_19();
		__this->set_literalLengthCodeCount_19(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)257))));
		__this->set_state_9(5);
		goto IL_0070;
	}

IL_0070:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_7 = __this->get_input_6();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_7, 5, /*hidden argument*/NULL);
		__this->set_distanceCodeCount_20(L_8);
		int32_t L_9 = __this->get_distanceCodeCount_20();
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_009a;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_009a:
	{
		int32_t L_11 = __this->get_distanceCodeCount_20();
		__this->set_distanceCodeCount_20(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		__this->set_state_9(6);
		goto IL_00b1;
	}

IL_00b1:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_12 = __this->get_input_6();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_12, 4, /*hidden argument*/NULL);
		__this->set_codeLengthCodeCount_21(L_13);
		int32_t L_14 = __this->get_codeLengthCodeCount_21();
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00db;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_00db:
	{
		int32_t L_16 = __this->get_codeLengthCodeCount_21();
		__this->set_codeLengthCodeCount_21(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)4)));
		__this->set_loopCounter_18(0);
		__this->set_state_9(7);
		goto IL_00f9;
	}

IL_00f9:
	{
		goto IL_0143;
	}

IL_00fb:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_17 = __this->get_input_6();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_17, 3, /*hidden argument*/NULL);
		V_7 = L_18;
		int32_t L_19 = V_7;
		V_8 = (bool)((((int32_t)L_19) < ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_011e;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_011e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_codeLengthTreeCodeLength_25();
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->get_codeOrder_3();
		int32_t L_23 = __this->get_loopCounter_18();
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_7;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)((uint8_t)L_26)));
		int32_t L_27 = __this->get_loopCounter_18();
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
	}

IL_0143:
	{
		int32_t L_28 = __this->get_loopCounter_18();
		int32_t L_29 = __this->get_codeLengthCodeCount_21();
		V_9 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_9;
		if (L_30)
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_31 = __this->get_codeLengthCodeCount_21();
		V_10 = L_31;
		goto IL_0179;
	}

IL_0161:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = __this->get_codeLengthTreeCodeLength_25();
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = ((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->get_codeOrder_3();
		int32_t L_34 = V_10;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)0);
		int32_t L_37 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0179:
	{
		int32_t L_38 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = ((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->get_codeOrder_3();
		NullCheck(L_39);
		V_11 = (bool)((((int32_t)L_38) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0161;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = __this->get_codeLengthTreeCodeLength_25();
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_42 = (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B *)il2cpp_codegen_object_new(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m2BB6B8291AEB95E04C011EE9FD3FBFDCBFD7A07E(L_42, L_41, /*hidden argument*/NULL);
		__this->set_codeLengthTree_26(L_42);
		int32_t L_43 = __this->get_literalLengthCodeCount_19();
		int32_t L_44 = __this->get_distanceCodeCount_20();
		__this->set_codeArraySize_22(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)));
		__this->set_loopCounter_18(0);
		__this->set_state_9(8);
		goto IL_01be;
	}

IL_01be:
	{
		goto IL_03f1;
	}

IL_01c3:
	{
		int32_t L_45 = __this->get_state_9();
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)8))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_0203;
		}
	}
	{
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_47 = __this->get_codeLengthTree_26();
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_48 = __this->get_input_6();
		NullCheck(L_47);
		int32_t L_49;
		L_49 = HuffmanTree_GetNextSymbol_mE02D67A58296F556CE194530DA41109DC2D4441E(L_47, L_48, /*hidden argument*/NULL);
		int32_t L_50 = L_49;
		V_14 = L_50;
		__this->set_lengthCode_23(L_50);
		int32_t L_51 = V_14;
		V_13 = (bool)((((int32_t)L_51) < ((int32_t)0))? 1 : 0);
		bool L_52 = V_13;
		if (!L_52)
		{
			goto IL_0202;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_0202:
	{
	}

IL_0203:
	{
		int32_t L_53 = __this->get_lengthCode_23();
		V_15 = (bool)((((int32_t)((((int32_t)L_53) > ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_023f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_55 = __this->get_codeList_24();
		int32_t L_56 = __this->get_loopCounter_18();
		V_14 = L_56;
		int32_t L_57 = V_14;
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1)));
		int32_t L_58 = V_14;
		int32_t L_59 = __this->get_lengthCode_23();
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)((int32_t)((uint8_t)L_59)));
		goto IL_03e9;
	}

IL_023f:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_60 = __this->get_input_6();
		NullCheck(L_60);
		bool L_61;
		L_61 = InputBuffer_EnsureBitsAvailable_mBEC2D96C8A668A9439F2B326559D67156491EE55(L_60, 7, /*hidden argument*/NULL);
		V_17 = (bool)((((int32_t)L_61) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_17;
		if (!L_62)
		{
			goto IL_0266;
		}
	}
	{
		__this->set_state_9(((int32_t)9));
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_0266:
	{
		int32_t L_63 = __this->get_lengthCode_23();
		V_18 = (bool)((((int32_t)L_63) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_64 = V_18;
		if (!L_64)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_65 = __this->get_loopCounter_18();
		V_20 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_20;
		if (!L_66)
		{
			goto IL_0290;
		}
	}
	{
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_67 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m6B7CABF63CAAD191221D1D03A9B69A6465446AF8(L_67, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F_RuntimeMethod_var)));
	}

IL_0290:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68 = __this->get_codeList_24();
		int32_t L_69 = __this->get_loopCounter_18();
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_19 = L_71;
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_72 = __this->get_input_6();
		NullCheck(L_72);
		int32_t L_73;
		L_73 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_72, 2, /*hidden argument*/NULL);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)3));
		int32_t L_74 = __this->get_loopCounter_18();
		int32_t L_75 = V_16;
		int32_t L_76 = __this->get_codeArraySize_22();
		V_21 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_75))) > ((int32_t)L_76))? 1 : 0);
		bool L_77 = V_21;
		if (!L_77)
		{
			goto IL_02cf;
		}
	}
	{
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_78 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m6B7CABF63CAAD191221D1D03A9B69A6465446AF8(L_78, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F_RuntimeMethod_var)));
	}

IL_02cf:
	{
		V_22 = 0;
		goto IL_02f9;
	}

IL_02d4:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = __this->get_codeList_24();
		int32_t L_80 = __this->get_loopCounter_18();
		V_14 = L_80;
		int32_t L_81 = V_14;
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1)));
		int32_t L_82 = V_14;
		uint8_t L_83 = V_19;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint8_t)L_83);
		int32_t L_84 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_02f9:
	{
		int32_t L_85 = V_22;
		int32_t L_86 = V_16;
		V_23 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		bool L_87 = V_23;
		if (L_87)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_030b:
	{
		int32_t L_88 = __this->get_lengthCode_23();
		V_24 = (bool)((((int32_t)L_88) == ((int32_t)((int32_t)17)))? 1 : 0);
		bool L_89 = V_24;
		if (!L_89)
		{
			goto IL_0382;
		}
	}
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_90 = __this->get_input_6();
		NullCheck(L_90);
		int32_t L_91;
		L_91 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_90, 3, /*hidden argument*/NULL);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)3));
		int32_t L_92 = __this->get_loopCounter_18();
		int32_t L_93 = V_16;
		int32_t L_94 = __this->get_codeArraySize_22();
		V_25 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)L_93))) > ((int32_t)L_94))? 1 : 0);
		bool L_95 = V_25;
		if (!L_95)
		{
			goto IL_034a;
		}
	}
	{
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_96 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m6B7CABF63CAAD191221D1D03A9B69A6465446AF8(L_96, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_96, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F_RuntimeMethod_var)));
	}

IL_034a:
	{
		V_26 = 0;
		goto IL_0373;
	}

IL_034f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_97 = __this->get_codeList_24();
		int32_t L_98 = __this->get_loopCounter_18();
		V_14 = L_98;
		int32_t L_99 = V_14;
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1)));
		int32_t L_100 = V_14;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (uint8_t)0);
		int32_t L_101 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_0373:
	{
		int32_t L_102 = V_26;
		int32_t L_103 = V_16;
		V_27 = (bool)((((int32_t)L_102) < ((int32_t)L_103))? 1 : 0);
		bool L_104 = V_27;
		if (L_104)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0382:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_105 = __this->get_input_6();
		NullCheck(L_105);
		int32_t L_106;
		L_106 = InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB(L_105, 7, /*hidden argument*/NULL);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)((int32_t)11)));
		int32_t L_107 = __this->get_loopCounter_18();
		int32_t L_108 = V_16;
		int32_t L_109 = __this->get_codeArraySize_22();
		V_28 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)L_108))) > ((int32_t)L_109))? 1 : 0);
		bool L_110 = V_28;
		if (!L_110)
		{
			goto IL_03b2;
		}
	}
	{
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_111 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m6B7CABF63CAAD191221D1D03A9B69A6465446AF8(L_111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F_RuntimeMethod_var)));
	}

IL_03b2:
	{
		V_29 = 0;
		goto IL_03db;
	}

IL_03b7:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_112 = __this->get_codeList_24();
		int32_t L_113 = __this->get_loopCounter_18();
		V_14 = L_113;
		int32_t L_114 = V_14;
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1)));
		int32_t L_115 = V_14;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (uint8_t)0);
		int32_t L_116 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_03db:
	{
		int32_t L_117 = V_29;
		int32_t L_118 = V_16;
		V_30 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		bool L_119 = V_30;
		if (L_119)
		{
			goto IL_03b7;
		}
	}
	{
	}

IL_03e8:
	{
	}

IL_03e9:
	{
		__this->set_state_9(8);
	}

IL_03f1:
	{
		int32_t L_120 = __this->get_loopCounter_18();
		int32_t L_121 = __this->get_codeArraySize_22();
		V_31 = (bool)((((int32_t)L_120) < ((int32_t)L_121))? 1 : 0);
		bool L_122 = V_31;
		if (L_122)
		{
			goto IL_01c3;
		}
	}
	{
		goto IL_0426;
	}

IL_040a:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DA490CA6A9F70C8AFCBE8CB3CB47F96773F1B9F)), /*hidden argument*/NULL);
		String_t* L_123;
		L_123 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B)), /*hidden argument*/NULL);
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_124 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04(L_124, L_123, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_124, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F_RuntimeMethod_var)));
	}

IL_0426:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_125 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288));
		V_0 = L_125;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_126 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_126;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_127 = __this->get_codeList_24();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_128 = V_0;
		int32_t L_129 = __this->get_literalLengthCodeCount_19();
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_127, (RuntimeArray *)(RuntimeArray *)L_128, L_129, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_130 = __this->get_codeList_24();
		int32_t L_131 = __this->get_literalLengthCodeCount_19();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_132 = V_1;
		int32_t L_133 = __this->get_distanceCodeCount_20();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_130, L_131, (RuntimeArray *)(RuntimeArray *)L_132, 0, L_133, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_134 = V_0;
		NullCheck(L_134);
		int32_t L_135 = ((int32_t)256);
		uint8_t L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		V_32 = (bool)((((int32_t)L_136) == ((int32_t)0))? 1 : 0);
		bool L_137 = V_32;
		if (!L_137)
		{
			goto IL_047d;
		}
	}
	{
		InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * L_138 = (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m6B7CABF63CAAD191221D1D03A9B69A6465446AF8(L_138, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_138, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m8AC738BA9B2DBFFEECA6ACC9758FAAB5BE14552F_RuntimeMethod_var)));
	}

IL_047d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_139 = V_0;
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_140 = (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B *)il2cpp_codegen_object_new(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m2BB6B8291AEB95E04C011EE9FD3FBFDCBFD7A07E(L_140, L_139, /*hidden argument*/NULL);
		__this->set_literalLengthTree_7(L_140);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_141 = V_1;
		HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B * L_142 = (HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B *)il2cpp_codegen_object_new(HuffmanTree_t4AC6E076D14D9C4935992BF5AC0FAC1CF4BB3F2B_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m2BB6B8291AEB95E04C011EE9FD3FBFDCBFD7A07E(L_142, L_141, /*hidden argument*/NULL);
		__this->set_distanceTree_8(L_142);
		__this->set_state_9(((int32_t)10));
		V_4 = (bool)1;
		goto IL_04a2;
	}

IL_04a2:
	{
		bool L_143 = V_4;
		return L_143;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater__cctor_mED83AF80A267E22685439057773E5A94D0B016B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->set_extraLengthBits_0(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->set_lengthBase_1(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->set_distanceBasePosition_2(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->set_codeOrder_3(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = L_12;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAEDFDC5B6D6F8B6CEF5371EA7C8B15836E04F1E____794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_tDB315F0332559AF0B5B9CBFCFE5FC30BC8D2D108_il2cpp_TypeInfo_var))->set_staticDistanceTreeTable_4(L_13);
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
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_get_AvailableBits_m62A0FF1647B17687BDB8E8A2F0EFFD30A5D65A86 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bitsInBuffer_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_get_AvailableBytes_m6374A68C647F6DB6DC6ED55A7F00FF7EDB317974 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_end_2();
		int32_t L_1 = __this->get_start_1();
		int32_t L_2 = __this->get_bitsInBuffer_4();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)((int32_t)((int32_t)L_2/(int32_t)8))));
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Mapbox.IO.Compression.InputBuffer::EnsureBitsAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBuffer_EnsureBitsAvailable_mBEC2D96C8A668A9439F2B326559D67156491EE55 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___count0;
		if ((((int32_t)0) >= ((int32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___count0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B3_0, _stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bitsInBuffer_4();
		int32_t L_3 = ___count0;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00db;
		}
	}
	{
		bool L_5;
		L_5 = InputBuffer_NeedsInput_mF58F53107FC685B8D25F56BEA21616BC0967DB28(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00df;
	}

IL_003e:
	{
		uint32_t L_7 = __this->get_bitBuffer_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_buffer_0();
		int32_t L_9 = __this->get_start_1();
		V_3 = L_9;
		int32_t L_10 = V_3;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		int32_t L_11 = V_3;
		NullCheck(L_8);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)L_13<<(int32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)31))))))));
		int32_t L_15 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)8)));
		int32_t L_16 = __this->get_bitsInBuffer_4();
		int32_t L_17 = ___count0;
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00da;
		}
	}
	{
		bool L_19;
		L_19 = InputBuffer_NeedsInput_mF58F53107FC685B8D25F56BEA21616BC0967DB28(__this, /*hidden argument*/NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_009c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00df;
	}

IL_009c:
	{
		uint32_t L_21 = __this->get_bitBuffer_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_buffer_0();
		int32_t L_23 = __this->get_start_1();
		V_3 = L_23;
		int32_t L_24 = V_3;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		int32_t L_25 = V_3;
		NullCheck(L_22);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_21|(int32_t)((int32_t)((int32_t)L_27<<(int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)31))))))));
		int32_t L_29 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)8)));
	}

IL_00da:
	{
	}

IL_00db:
	{
		V_2 = (bool)1;
		goto IL_00df;
	}

IL_00df:
	{
		bool L_30 = V_2;
		return L_30;
	}
}
// System.UInt32 Mapbox.IO.Compression.InputBuffer::TryLoad16Bits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputBuffer_TryLoad16Bits_m608DB3021EF9AAB709662C735228F0C7320A39A3 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint32_t V_6 = 0;
	{
		int32_t L_0 = __this->get_bitsInBuffer_4();
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)8))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_2 = __this->get_start_1();
		int32_t L_3 = __this->get_end_2();
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		uint32_t L_5 = __this->get_bitBuffer_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buffer_0();
		int32_t L_7 = __this->get_start_1();
		V_2 = L_7;
		int32_t L_8 = V_2;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_2;
		NullCheck(L_6);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)31))))))));
		int32_t L_13 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)8)));
	}

IL_0063:
	{
		int32_t L_14 = __this->get_start_1();
		int32_t L_15 = __this->get_end_2();
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		uint32_t L_17 = __this->get_bitBuffer_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_buffer_0();
		int32_t L_19 = __this->get_start_1();
		V_2 = L_19;
		int32_t L_20 = V_2;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		int32_t L_21 = V_2;
		NullCheck(L_18);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_17|(int32_t)((int32_t)((int32_t)L_23<<(int32_t)((int32_t)((int32_t)L_24&(int32_t)((int32_t)31))))))));
		int32_t L_25 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)8)));
	}

IL_00b4:
	{
		goto IL_011c;
	}

IL_00b7:
	{
		int32_t L_26 = __this->get_bitsInBuffer_4();
		V_4 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_28 = __this->get_start_1();
		int32_t L_29 = __this->get_end_2();
		V_5 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_31 = __this->get_bitBuffer_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = __this->get_buffer_0();
		int32_t L_33 = __this->get_start_1();
		V_2 = L_33;
		int32_t L_34 = V_2;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)));
		int32_t L_35 = V_2;
		NullCheck(L_32);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_31|(int32_t)((int32_t)((int32_t)L_37<<(int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)31))))))));
		int32_t L_39 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)8)));
	}

IL_011b:
	{
	}

IL_011c:
	{
		uint32_t L_40 = __this->get_bitBuffer_3();
		V_6 = L_40;
		goto IL_0126;
	}

IL_0126:
	{
		uint32_t L_41 = V_6;
		return L_41;
	}
}
// System.UInt32 Mapbox.IO.Compression.InputBuffer::GetBitMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputBuffer_GetBitMask_mEECF40FA75E3261AF5D88714EC6F913B1D1335B8 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, int32_t ___count0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___count0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31))))), (int32_t)1));
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.InputBuffer::GetBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_GetBits_m4FFE382B57F89987C58D60F9FE4B0E0721A3AFFB (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___count0;
		if ((((int32_t)0) >= ((int32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___count0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)G_B3_0, _stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA, /*hidden argument*/NULL);
		int32_t L_2 = ___count0;
		bool L_3;
		L_3 = InputBuffer_EnsureBitsAvailable_mBEC2D96C8A668A9439F2B326559D67156491EE55(__this, L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		V_2 = (-1);
		goto IL_0060;
	}

IL_002e:
	{
		uint32_t L_5 = __this->get_bitBuffer_3();
		int32_t L_6 = ___count0;
		uint32_t L_7;
		L_7 = InputBuffer_GetBitMask_mEECF40FA75E3261AF5D88714EC6F913B1D1335B8(__this, L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_5&(int32_t)L_7));
		uint32_t L_8 = __this->get_bitBuffer_3();
		int32_t L_9 = ___count0;
		__this->set_bitBuffer_3(((int32_t)((uint32_t)L_8>>((int32_t)((int32_t)L_9&(int32_t)((int32_t)31))))));
		int32_t L_10 = __this->get_bitsInBuffer_4();
		int32_t L_11 = ___count0;
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)));
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_13 = V_2;
		return L_13;
	}
}
// System.Int32 Mapbox.IO.Compression.InputBuffer::CopyTo(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_CopyTo_m9460BDE5E050FA63AA978D2D70BA28599A1ADB70 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___output0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		int32_t L_1 = ___offset1;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		int32_t L_2 = ___length2;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___output0;
		NullCheck(L_4);
		int32_t L_5 = ___length2;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_bitsInBuffer_4();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((int32_t)((int32_t)L_6%(int32_t)8))) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_009a;
	}

IL_0064:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___output0;
		int32_t L_8 = ___offset1;
		int32_t L_9 = L_8;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		uint32_t L_10 = __this->get_bitBuffer_3();
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)((uint8_t)L_10)));
		uint32_t L_11 = __this->get_bitBuffer_3();
		__this->set_bitBuffer_3(((int32_t)((uint32_t)L_11>>8)));
		int32_t L_12 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)8)));
		int32_t L_13 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_009a:
	{
		int32_t L_15 = __this->get_bitsInBuffer_4();
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_16 = ___length2;
		G_B5_0 = ((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B5_0 = 0;
	}

IL_00aa:
	{
		V_2 = (bool)G_B5_0;
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_18 = ___length2;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_20 = V_0;
		V_4 = L_20;
		goto IL_0103;
	}

IL_00bc:
	{
		int32_t L_21 = __this->get_end_2();
		int32_t L_22 = __this->get_start_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22));
		int32_t L_23 = ___length2;
		int32_t L_24 = V_1;
		V_5 = (bool)((((int32_t)L_23) > ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_26 = V_1;
		___length2 = L_26;
	}

IL_00d9:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = __this->get_buffer_0();
		int32_t L_28 = __this->get_start_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = ___output0;
		int32_t L_30 = ___offset1;
		int32_t L_31 = ___length2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_27, L_28, (RuntimeArray *)(RuntimeArray *)L_29, L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_start_1();
		int32_t L_33 = ___length2;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)));
		int32_t L_34 = V_0;
		int32_t L_35 = ___length2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35));
		goto IL_0103;
	}

IL_0103:
	{
		int32_t L_36 = V_4;
		return L_36;
	}
}
// System.Boolean Mapbox.IO.Compression.InputBuffer::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBuffer_NeedsInput_mF58F53107FC685B8D25F56BEA21616BC0967DB28 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_start_1();
		int32_t L_1 = __this->get_end_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SetInput_mAFEA90F5041C2829FC6199A55A134CFCE7523461 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		int32_t L_1 = ___offset1;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		int32_t L_2 = ___length2;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___buffer0;
		NullCheck(L_4);
		int32_t L_5 = ___length2;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_start_1();
		int32_t L_7 = __this->get_end_2();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___buffer0;
		__this->set_buffer_0(L_8);
		int32_t L_9 = ___offset1;
		__this->set_start_1(L_9);
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___length2;
		__this->set_end_2(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)));
		return;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::SkipBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SkipBits_m2CFC5F47E99A2C4D06CAF57F57DF8DFBEAED66CE (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4451CD074D52851117B66787CD1C4ED164A359F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_bitsInBuffer_4();
		int32_t L_1 = ___n0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral4451CD074D52851117B66787CD1C4ED164A359F2, /*hidden argument*/NULL);
		uint32_t L_2 = __this->get_bitBuffer_3();
		int32_t L_3 = ___n0;
		__this->set_bitBuffer_3(((int32_t)((uint32_t)L_2>>((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))));
		int32_t L_4 = __this->get_bitsInBuffer_4();
		int32_t L_5 = ___n0;
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)));
		return;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::SkipToByteBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SkipToByteBoundary_m880737E647E4EA4D56247710D221A162ECE137DE (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_bitBuffer_3();
		int32_t L_1 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((uint32_t)L_0>>((int32_t)((int32_t)((int32_t)((int32_t)L_1%(int32_t)8))&(int32_t)((int32_t)31))))));
		int32_t L_2 = __this->get_bitsInBuffer_4();
		int32_t L_3 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)((int32_t)L_3%(int32_t)8)))));
		return;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer__ctor_m64BDA0D242DDCB103A6426FCEBCB12A97DEF1505 (InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * __this, const RuntimeMethod* method)
{
	{
		__this->set_bitBuffer_3(0);
		__this->set_bitsInBuffer_4(0);
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
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m6B7CABF63CAAD191221D1D03A9B69A6465446AF8 (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F(_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1, /*hidden argument*/NULL);
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_mEDA4C25CA53C3FB02100303FDD6EC38566D9AE04 (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_mBF490A0AACAD8F14FA3B8630A29C16BEA6295492 (InvalidDataException_t5208EE3CBECA6C67258DB6332F66A25635ADF6DF * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___context1;
		SystemException__ctor_m20F619D15EAA349C6CE181A65A47C336200EBD19(__this, L_0, L_1, /*hidden argument*/NULL);
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
// MatchState Mapbox.IO.Compression.Match::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_State_m407AB40EFEA751CE8BC696321AC15C44B8DFB972 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_State(MatchState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_State_m6AEF59FFDA04A71E10E139CD2C303C608BE436FB (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_state_0(L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.Match::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_Position_m391158F9894F9328F0FFA2D8930BBE63F3E21BDA (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Position_m91B7F5B73009A6FD8D012D35688CBE509F20D914 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_pos_1(L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.Match::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_Length_m589799882D83FEE591707948E0DDC2A3A5F60FD4 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_len_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Length_mF40EF86B8E87033FF2A6F941585E3AC43FECC044 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_len_2(L_0);
		return;
	}
}
// System.Byte Mapbox.IO.Compression.Match::get_Symbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Match_get_Symbol_m359D7D5DADDEBDA40056D4C727A82E77E76F6266 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_symbol_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_Symbol(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Symbol_m9D4CC885E80D5A6F4B440C4B5352C1021AF9A7BB (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_symbol_3(L_0);
		return;
	}
}
// System.Void Mapbox.IO.Compression.Match::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match__ctor_m37BC99AA370A79BBC1024D762A53CBE40D92A1E8 (Match_tAFB1BBE2BD35230D782125582F49FFE47A8AE6DF * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.IO.Compression.OutputBuffer::UpdateBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_UpdateBuffer_mF5E2EAEFEBAC0ABE8458C70CC744FFBCD7EFFDAF (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___output0;
		__this->set_byteBuffer_0(L_0);
		__this->set_pos_1(0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BytesWritten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_BytesWritten_mF8A815B61637FD151B9D4FF7FD87DDB801F55B21 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_FreeBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_FreeBytes_m4C01AB876EA197FDCD7B024E86E34C3FBA9A2A5E (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_byteBuffer_0();
		NullCheck(L_0);
		int32_t L_1 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)L_1));
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteUInt16(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteUInt16_m134C6B243A3939E77B50748521263CDA9835AEA1 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = OutputBuffer_get_FreeBytes_m4C01AB876EA197FDCD7B024E86E34C3FBA9A2A5E(__this, /*hidden argument*/NULL);
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_byteBuffer_0();
		int32_t L_2 = __this->get_pos_1();
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		uint16_t L_5 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)((uint8_t)L_5)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_byteBuffer_0();
		int32_t L_7 = __this->get_pos_1();
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_0;
		uint16_t L_10 = ___value0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10>>(int32_t)8)))));
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBits(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, int32_t ___n0, uint32_t ___bits1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF662EE1DF2B55F36C4CB700B246D3C4E4661AF3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___n0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralF662EE1DF2B55F36C4CB700B246D3C4E4661AF3E, /*hidden argument*/NULL);
		uint32_t L_1 = __this->get_bitBuf_2();
		uint32_t L_2 = ___bits1;
		int32_t L_3 = __this->get_bitCount_3();
		__this->set_bitBuf_2(((int32_t)((int32_t)L_1|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))));
		int32_t L_4 = __this->get_bitCount_3();
		int32_t L_5 = ___n0;
		__this->set_bitCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		int32_t L_6 = __this->get_bitCount_3();
		V_0 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ce;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_byteBuffer_0();
		NullCheck(L_8);
		int32_t L_9 = __this->get_pos_1();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)L_9))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_byteBuffer_0();
		int32_t L_11 = __this->get_pos_1();
		V_1 = L_11;
		int32_t L_12 = V_1;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		int32_t L_13 = V_1;
		uint32_t L_14 = __this->get_bitBuf_2();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)((uint8_t)L_14)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_byteBuffer_0();
		int32_t L_16 = __this->get_pos_1();
		V_1 = L_16;
		int32_t L_17 = V_1;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		int32_t L_18 = V_1;
		uint32_t L_19 = __this->get_bitBuf_2();
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_19>>8)))));
		int32_t L_20 = __this->get_bitCount_3();
		__this->set_bitCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)16))));
		uint32_t L_21 = __this->get_bitBuf_2();
		__this->set_bitBuf_2(((int32_t)((uint32_t)L_21>>((int32_t)16))));
	}

IL_00ce:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::FlushBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_FlushBits_m92110691FD37EE010EDF95FA03CB5A5320A60A77 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_0040;
	}

IL_0003:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_byteBuffer_0();
		int32_t L_1 = __this->get_pos_1();
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint32_t L_4 = __this->get_bitBuf_2();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)((uint8_t)L_4)));
		int32_t L_5 = __this->get_bitCount_3();
		__this->set_bitCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)8)));
		uint32_t L_6 = __this->get_bitBuf_2();
		__this->set_bitBuf_2(((int32_t)((uint32_t)L_6>>8)));
	}

IL_0040:
	{
		int32_t L_7 = __this->get_bitCount_3();
		V_1 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0003;
		}
	}
	{
		int32_t L_9 = __this->get_bitCount_3();
		V_2 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_008c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_byteBuffer_0();
		int32_t L_12 = __this->get_pos_1();
		V_0 = L_12;
		int32_t L_13 = V_0;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_0;
		uint32_t L_15 = __this->get_bitBuf_2();
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)((uint8_t)L_15)));
		__this->set_bitBuf_2(0);
		__this->set_bitCount_3(0);
	}

IL_008c:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBytes_mFB21CDF29333A5C98ADDD34BDCC3DF38BC8D27BE (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3351F4504223173C7A5AA816C29AD8A199461EAA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = OutputBuffer_get_FreeBytes_m4C01AB876EA197FDCD7B024E86E34C3FBA9A2A5E(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___count2;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral3351F4504223173C7A5AA816C29AD8A199461EAA, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bitCount_3();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___byteArray0;
		int32_t L_5 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_byteBuffer_0();
		int32_t L_7 = __this->get_pos_1();
		int32_t L_8 = ___count2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_4, L_5, (RuntimeArray *)(RuntimeArray *)L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_pos_1();
		int32_t L_10 = ___count2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)));
		goto IL_0058;
	}

IL_004c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___byteArray0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		OutputBuffer_WriteBytesUnaligned_m25E2FC160872690A7EE50198E714287CE7DC1FEB(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytesUnaligned(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBytesUnaligned_m25E2FC160872690A7EE50198E714287CE7DC1FEB (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0005:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___byteArray0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		uint8_t L_5 = V_1;
		OutputBuffer_WriteByteUnaligned_m845272B2382A70E341DCDBADD828D6F5572FCEF8(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___count2;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteByteUnaligned(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteByteUnaligned_m845272B2382A70E341DCDBADD828D6F5572FCEF8 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, uint8_t ___b0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___b0;
		OutputBuffer_WriteBits_mD5DDE2185E354CC207565D6D77598D2E6BF64CE9(__this, 8, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BitsInBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_BitsInBuffer_m07D4BBB2FB90289515496087B226A1CF15FB1A8C (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bitCount_3();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_0/(int32_t)8)), (int32_t)1));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Mapbox.IO.Compression.OutputBuffer/BufferState Mapbox.IO.Compression.OutputBuffer::DumpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  OutputBuffer_DumpState_m29CB78FF2DF72426DF0FF44DA6EEF961BC062F5A (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method)
{
	BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_pos_1();
		(&V_0)->set_pos_0(L_0);
		uint32_t L_1 = __this->get_bitBuf_2();
		(&V_0)->set_bitBuf_1(L_1);
		int32_t L_2 = __this->get_bitCount_3();
		(&V_0)->set_bitCount_2(L_2);
		BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  L_3 = V_0;
		V_1 = L_3;
		goto IL_002c;
	}

IL_002c:
	{
		BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  L_4 = V_1;
		return L_4;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::RestoreState(Mapbox.IO.Compression.OutputBuffer/BufferState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_RestoreState_mA73DFB36F7705D25D8C77632D0F1112661715B53 (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  ___state0, const RuntimeMethod* method)
{
	{
		BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  L_0 = ___state0;
		int32_t L_1 = L_0.get_pos_0();
		__this->set_pos_1(L_1);
		BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  L_2 = ___state0;
		uint32_t L_3 = L_2.get_bitBuf_1();
		__this->set_bitBuf_2(L_3);
		BufferState_tB08DEA79EBAF5BA849EB40ACDE4694BB2E1C7485  L_4 = ___state0;
		int32_t L_5 = L_4.get_bitCount_2();
		__this->set_bitCount_3(L_5);
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer__ctor_m9ADCADAAD6C128D3E09033101575D35588D1D54C (OutputBuffer_t4F224C02C68973DFEE6F9B6C397D089763038E58 * __this, const RuntimeMethod* method)
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
// System.Void Mapbox.IO.Compression.OutputWindow::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_Write_m5AC193639E1A972D0DDBFB53F6E46B4ECFDF14BD (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, uint8_t ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7C15A7AB70C5E950073A69AB67A6B7C48196F01);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bytesUsed_2();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)L_0) < ((int32_t)((int32_t)32768)))? 1 : 0), _stringLiteralC7C15A7AB70C5E950073A69AB67A6B7C48196F01, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_window_0();
		int32_t L_2 = __this->get_end_1();
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->set_end_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		uint8_t L_5 = ___b0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_5);
		int32_t L_6 = __this->get_end_1();
		__this->set_end_1(((int32_t)((int32_t)L_6&(int32_t)((int32_t)32767))));
		int32_t L_7 = __this->get_bytesUsed_2();
		__this->set_bytesUsed_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputWindow::WriteLengthDistance(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_WriteLengthDistance_mF24BD4E93684CF1FBE6F7A8137AEE3F2F0AA4C86 (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, int32_t ___length0, int32_t ___distance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ED4D712B21E2F101127EAF7B91F0D73AB41809F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_bytesUsed_2();
		int32_t L_1 = ___length0;
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) > ((int32_t)((int32_t)32768)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral0ED4D712B21E2F101127EAF7B91F0D73AB41809F, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bytesUsed_2();
		int32_t L_3 = ___length0;
		__this->set_bytesUsed_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		int32_t L_4 = __this->get_end_1();
		int32_t L_5 = ___distance1;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))&(int32_t)((int32_t)32767)));
		int32_t L_6 = ___length0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_6));
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9 = __this->get_end_1();
		int32_t L_10 = V_1;
		G_B3_0 = ((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B3_0 = 0;
	}

IL_0053:
	{
		V_2 = (bool)G_B3_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_12 = ___length0;
		int32_t L_13 = ___distance1;
		V_3 = (bool)((((int32_t)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_window_0();
		int32_t L_16 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_window_0();
		int32_t L_18 = __this->get_end_1();
		int32_t L_19 = ___length0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_15, L_16, (RuntimeArray *)(RuntimeArray *)L_17, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_end_1();
		int32_t L_21 = ___length0;
		__this->set_end_1(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)));
		goto IL_00cb;
	}

IL_008f:
	{
		goto IL_00bb;
	}

IL_0092:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_window_0();
		int32_t L_23 = __this->get_end_1();
		V_4 = L_23;
		int32_t L_24 = V_4;
		__this->set_end_1(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		int32_t L_25 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = __this->get_window_0();
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		NullCheck(L_26);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)L_30);
	}

IL_00bb:
	{
		int32_t L_31 = ___length0;
		int32_t L_32 = L_31;
		___length0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1));
		V_5 = (bool)((((int32_t)L_32) > ((int32_t)0))? 1 : 0);
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_0092;
		}
	}
	{
	}

IL_00cb:
	{
		goto IL_0124;
	}

IL_00ce:
	{
		goto IL_0114;
	}

IL_00d1:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = __this->get_window_0();
		int32_t L_35 = __this->get_end_1();
		V_4 = L_35;
		int32_t L_36 = V_4;
		__this->set_end_1(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		int32_t L_37 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = __this->get_window_0();
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		NullCheck(L_38);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)L_42);
		int32_t L_43 = __this->get_end_1();
		__this->set_end_1(((int32_t)((int32_t)L_43&(int32_t)((int32_t)32767))));
		int32_t L_44 = V_0;
		V_0 = ((int32_t)((int32_t)L_44&(int32_t)((int32_t)32767)));
	}

IL_0114:
	{
		int32_t L_45 = ___length0;
		int32_t L_46 = L_45;
		___length0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1));
		V_6 = (bool)((((int32_t)L_46) > ((int32_t)0))? 1 : 0);
		bool L_47 = V_6;
		if (L_47)
		{
			goto IL_00d1;
		}
	}
	{
	}

IL_0124:
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyFrom(Mapbox.IO.Compression.InputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyFrom_m4D13F6B53BC537901B80A64EC79B4E9A0409110F (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * ___input0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = __this->get_bytesUsed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_1)), /*hidden argument*/NULL);
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InputBuffer_get_AvailableBytes_m6374A68C647F6DB6DC6ED55A7F00FF7EDB317974(L_3, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_2, L_4, /*hidden argument*/NULL);
		___length1 = L_5;
		int32_t L_6 = __this->get_end_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_6));
		int32_t L_7 = ___length1;
		int32_t L_8 = V_1;
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_10 = ___input0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_window_0();
		int32_t L_12 = __this->get_end_1();
		int32_t L_13 = V_1;
		NullCheck(L_10);
		int32_t L_14;
		L_14 = InputBuffer_CopyTo_m9460BDE5E050FA63AA978D2D70BA28599A1ADB70(L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_18 = V_0;
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_19 = ___input0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_window_0();
		int32_t L_21 = ___length1;
		int32_t L_22 = V_1;
		NullCheck(L_19);
		int32_t L_23;
		L_23 = InputBuffer_CopyTo_m9460BDE5E050FA63AA978D2D70BA28599A1ADB70(L_19, L_20, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_23));
	}

IL_0067:
	{
		goto IL_0080;
	}

IL_006a:
	{
		InputBuffer_t8BF39A1102A4A48870EBC32951ECB663EBCC2D2A * L_24 = ___input0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_window_0();
		int32_t L_26 = __this->get_end_1();
		int32_t L_27 = ___length1;
		NullCheck(L_24);
		int32_t L_28;
		L_28 = InputBuffer_CopyTo_m9460BDE5E050FA63AA978D2D70BA28599A1ADB70(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
	}

IL_0080:
	{
		int32_t L_29 = __this->get_end_1();
		int32_t L_30 = V_0;
		__this->set_end_1(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30))&(int32_t)((int32_t)32767))));
		int32_t L_31 = __this->get_bytesUsed_2();
		int32_t L_32 = V_0;
		__this->set_bytesUsed_2(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32)));
		int32_t L_33 = V_0;
		V_4 = L_33;
		goto IL_00a7;
	}

IL_00a7:
	{
		int32_t L_34 = V_4;
		return L_34;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_FreeBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_get_FreeBytes_m097178A25925767D52C0FFBD8AEB9F07658C7B75 (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bytesUsed_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_0));
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_get_AvailableBytes_mEAE98CBDFD2B860160884D6CA85916339BBE651C (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bytesUsed_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyTo(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyTo_m59DC739EE2C3CBD3F6181681FDD4F0F4FDACDC3A (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral704FBA8309D79E032485BB8BA966C3FCD5614B4E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___length2;
		int32_t L_1 = __this->get_bytesUsed_2();
		V_3 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = __this->get_end_1();
		V_0 = L_3;
		int32_t L_4 = __this->get_bytesUsed_2();
		___length2 = L_4;
		goto IL_0039;
	}

IL_0021:
	{
		int32_t L_5 = __this->get_end_1();
		int32_t L_6 = __this->get_bytesUsed_2();
		int32_t L_7 = ___length2;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), (int32_t)L_7))&(int32_t)((int32_t)32767)));
	}

IL_0039:
	{
		int32_t L_8 = ___length2;
		V_1 = L_8;
		int32_t L_9 = ___length2;
		int32_t L_10 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10));
		int32_t L_11 = V_2;
		V_4 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_window_0();
		int32_t L_14 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___output0;
		int32_t L_16 = ___offset1;
		int32_t L_17 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_14)), (RuntimeArray *)(RuntimeArray *)L_15, L_16, L_17, /*hidden argument*/NULL);
		int32_t L_18 = ___offset1;
		int32_t L_19 = V_2;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19));
		int32_t L_20 = V_0;
		___length2 = L_20;
	}

IL_0069:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_window_0();
		int32_t L_22 = V_0;
		int32_t L_23 = ___length2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___output0;
		int32_t L_25 = ___offset1;
		int32_t L_26 = ___length2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), (RuntimeArray *)(RuntimeArray *)L_24, L_25, L_26, /*hidden argument*/NULL);
		int32_t L_27 = __this->get_bytesUsed_2();
		int32_t L_28 = V_1;
		__this->set_bytesUsed_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28)));
		int32_t L_29 = __this->get_bytesUsed_2();
		Debug_Assert_mF38F151A59545D7B88E70FDA929669CB15D9C97B((bool)((((int32_t)((((int32_t)L_29) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral704FBA8309D79E032485BB8BA966C3FCD5614B4E, /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		V_5 = L_30;
		goto IL_00a5;
	}

IL_00a5:
	{
		int32_t L_31 = V_5;
		return L_31;
	}
}
// System.Void Mapbox.IO.Compression.OutputWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow__ctor_mD07D9E7402B0F446ECC777F26E8A077622537560 (OutputWindow_t26664459F05B00BBDFF8FD3A38E72276212B5B49 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		__this->set_window_0(L_0);
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
// System.String Mapbox.IO.Compression.SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m60BDB7051C059CE47FA3AF8E455152B2903D1D3F (String_t* ___p0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___p0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2, static_cast<int32_t>(___isAsync3));

}
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate__ctor_m28DAF20677832C084D8D204E92A1FCF8242BF9DA (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate_Invoke_m7709F6D8F0D1CEBCAC77A6E8ED8316BF2958FB07 (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___array0, ___offset1, ___count2, ___isAsync3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___array0, ___offset1, ___count2, ___isAsync3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, bool >::Invoke(targetMethod, ___array0, ___offset1, ___count2, ___isAsync3);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, bool >::Invoke(targetMethod, ___array0, ___offset1, ___count2, ___isAsync3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___array0, ___offset1, ___count2, ___isAsync3);
					else
						VirtActionInvoker3< int32_t, int32_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___array0, ___offset1, ___count2, ___isAsync3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___array0, ___offset1, ___count2, ___isAsync3, targetMethod);
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
						GenericInterfaceActionInvoker4< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(targetMethod, targetThis, ___array0, ___offset1, ___count2, ___isAsync3);
					else
						GenericVirtActionInvoker4< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(targetMethod, targetThis, ___array0, ___offset1, ___count2, ___isAsync3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___array0, ___offset1, ___count2, ___isAsync3);
					else
						VirtActionInvoker4< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___array0, ___offset1, ___count2, ___isAsync3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___array0, ___offset1, ___count2, ___isAsync3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___array0, ___offset1, ___count2, ___isAsync3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncWriteDelegate_BeginInvoke_mA7DE2CB9736E3A2479BDB973F50DF3228EEACAF6 (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___count2);
	__d_args[3] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___isAsync3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate_EndInvoke_m6786DED730B0BCA270F5850A71979B1FCD3DB4D1 (AsyncWriteDelegate_t232BF55C9E560FB2774ADFEC7514D1836A331C4B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
