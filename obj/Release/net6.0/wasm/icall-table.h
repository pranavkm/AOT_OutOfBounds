#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
140,
151,
152,
153,
154,
155,
156,
157,
158,
159,
160,
161,
164,
165,
257,
258,
260,
289,
290,
291,
311,
312,
313,
314,
315,
388,
390,
391,
394,
398,
432,
433,
435,
437,
439,
440,
442,
447,
455,
456,
457,
458,
459,
460,
461,
462,
463,
464,
571,
572,
579,
582,
584,
589,
590,
592,
593,
597,
598,
599,
600,
602,
603,
604,
607,
609,
610,
611,
671,
672,
674,
682,
683,
684,
685,
686,
690,
691,
692,
693,
694,
695,
697,
698,
699,
701,
702,
703,
709,
710,
711,
972,
1139,
1140,
5545,
5546,
5548,
5549,
5550,
5551,
5552,
5554,
5556,
5558,
5566,
5568,
5572,
5573,
5575,
5577,
5579,
5591,
5601,
5602,
5604,
5605,
5606,
5607,
5608,
5610,
5612,
6450,
6454,
6456,
6457,
6458,
6459,
6503,
6504,
6505,
6520,
6521,
6522,
6524,
6552,
6600,
6603,
6611,
6612,
6613,
6806,
6810,
6811,
6842,
6843,
6844,
6858,
6863,
6870,
6884,
6902,
6905,
6971,
6976,
6984,
6985,
6986,
6987,
6988,
6991,
7009,
7010,
7018,
7020,
7026,
7027,
7030,
7032,
7036,
7042,
7043,
7050,
7052,
7062,
7065,
7066,
7067,
7077,
7087,
7093,
7094,
7095,
7097,
7098,
7107,
7123,
7138,
7139,
7158,
7186,
7187,
7562,
7563,
7700,
7928,
7929,
7936,
7937,
7938,
7943,
8003,
8155,
8156,
9196,
9215,
9222,
9223,
9225,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
int ves_icall_System_Array_GetValue_raw (int,int,int);
void ves_icall_System_Array_SetValue_raw (int,int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_Environment_GetEnvironmentVariable_native_raw (int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
int64_t ves_icall_System_GC_GetTotalMemory (int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastWin32Error ();
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastWin32Error (int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
void ves_icall_System_Reflection_CustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 140,
ves_icall_System_Array_InternalCreate,
// token 151,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 152,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 153,
ves_icall_System_Array_CanChangePrimitive,
// token 154,
ves_icall_System_Array_FastCopy_raw,
// token 155,
ves_icall_System_Array_GetLength_raw,
// token 156,
ves_icall_System_Array_GetLowerBound_raw,
// token 157,
ves_icall_System_Array_GetValue_raw,
// token 158,
ves_icall_System_Array_SetValue_raw,
// token 159,
ves_icall_System_Array_GetGenericValue_icall,
// token 160,
ves_icall_System_Array_GetValueImpl_raw,
// token 161,
ves_icall_System_Array_SetGenericValue_icall,
// token 164,
ves_icall_System_Array_SetValueImpl_raw,
// token 165,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 257,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 258,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 260,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 289,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 290,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 291,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 311,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 312,
ves_icall_System_Enum_ToObject_raw,
// token 313,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 314,
ves_icall_System_Enum_get_underlying_type_raw,
// token 315,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 388,
ves_icall_System_Environment_get_ProcessorCount,
// token 390,
ves_icall_System_Environment_get_TickCount,
// token 391,
ves_icall_System_Environment_get_TickCount64,
// token 394,
ves_icall_System_Environment_FailFast_raw,
// token 398,
ves_icall_System_Environment_GetEnvironmentVariable_native_raw,
// token 432,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 433,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 435,
ves_icall_System_GC_SuppressFinalize_raw,
// token 437,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 439,
ves_icall_System_GC_GetTotalMemory,
// token 440,
ves_icall_System_GC_GetGCMemoryInfo,
// token 442,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 447,
ves_icall_System_Object_MemberwiseClone_raw,
// token 455,
ves_icall_System_Math_Abs_double,
// token 456,
ves_icall_System_Math_Ceiling,
// token 457,
ves_icall_System_Math_Cos,
// token 458,
ves_icall_System_Math_Floor,
// token 459,
ves_icall_System_Math_Log10,
// token 460,
ves_icall_System_Math_Pow,
// token 461,
ves_icall_System_Math_Sin,
// token 462,
ves_icall_System_Math_Sqrt,
// token 463,
ves_icall_System_Math_Tan,
// token 464,
ves_icall_System_Math_ModF,
// token 571,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 572,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 579,
ves_icall_RuntimeType_make_array_type_raw,
// token 582,
ves_icall_RuntimeType_make_byref_type_raw,
// token 584,
ves_icall_RuntimeType_MakePointerType_raw,
// token 589,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 590,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 592,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 593,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 597,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 598,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 599,
ves_icall_System_RuntimeType_getFullName_raw,
// token 600,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 602,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 603,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 604,
ves_icall_RuntimeType_GetFields_native_raw,
// token 607,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 609,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 610,
ves_icall_RuntimeType_get_Name_raw,
// token 611,
ves_icall_RuntimeType_get_Namespace_raw,
// token 671,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 672,
ves_icall_reflection_get_token_raw,
// token 674,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 682,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 683,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 684,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 685,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 686,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 690,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 691,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 692,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 693,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 694,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 695,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 697,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 698,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 699,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 701,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 702,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 703,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 709,
ves_icall_System_String_FastAllocateString_raw,
// token 710,
ves_icall_System_String_InternalIsInterned_raw,
// token 711,
ves_icall_System_String_InternalIntern_raw,
// token 972,
ves_icall_System_Type_internal_from_handle_raw,
// token 1139,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1140,
ves_icall_System_ValueType_Equals_raw,
// token 5545,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5546,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5548,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5549,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5550,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5551,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5552,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5554,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5556,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5558,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5566,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5568,
mono_monitor_exit_icall_raw,
// token 5572,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5573,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5575,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5577,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5579,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5591,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5601,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5602,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5604,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5605,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5606,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5607,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5608,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5610,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5612,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6450,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6454,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6456,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6457,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6458,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6459,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6503,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6504,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6505,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6520,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastWin32Error,
// token 6521,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6522,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6524,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastWin32Error,
// token 6552,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6600,
mono_object_hash_icall_raw,
// token 6603,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 6611,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6612,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6613,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6806,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6810,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6811,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6842,
mono_digest_get_public_token,
// token 6843,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6844,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6858,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6863,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6870,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6884,
ves_icall_System_Reflection_CustomAttributeData_ResolveArgumentsInternal_raw,
// token 6902,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6905,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6971,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 6976,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6984,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6985,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6986,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6987,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6988,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 6991,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7009,
ves_icall_reflection_get_token_raw,
// token 7010,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7018,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7020,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7026,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7027,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7030,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7032,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7036,
ves_icall_reflection_get_token_raw,
// token 7042,
ves_icall_get_method_info_raw,
// token 7043,
ves_icall_get_method_attributes,
// token 7050,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7052,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7062,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7065,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7066,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7067,
ves_icall_reflection_get_token_raw,
// token 7077,
ves_icall_InternalInvoke_raw,
// token 7087,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7093,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7094,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7095,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7097,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7098,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7107,
ves_icall_InternalInvoke_raw,
// token 7123,
ves_icall_reflection_get_token_raw,
// token 7138,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 7139,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7158,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7186,
ves_icall_reflection_get_token_raw,
// token 7187,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7562,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7563,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7700,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7928,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7929,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7936,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 7937,
ves_icall_ModuleBuilder_getToken_raw,
// token 7938,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 7943,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8003,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8155,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8156,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9196,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9215,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9222,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 9223,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9225,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
