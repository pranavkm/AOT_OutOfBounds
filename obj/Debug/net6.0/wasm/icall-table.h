#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
138,
145,
146,
147,
148,
149,
150,
151,
152,
153,
156,
157,
204,
205,
207,
231,
232,
233,
243,
244,
245,
246,
247,
314,
316,
317,
320,
324,
352,
353,
355,
357,
359,
361,
366,
374,
375,
376,
377,
378,
379,
380,
381,
382,
383,
478,
479,
486,
489,
491,
496,
497,
499,
500,
504,
505,
506,
507,
509,
510,
511,
514,
516,
517,
518,
577,
578,
580,
588,
589,
590,
591,
592,
596,
597,
598,
599,
600,
601,
603,
604,
605,
607,
608,
609,
613,
795,
939,
940,
5152,
5153,
5155,
5156,
5157,
5158,
5159,
5161,
5163,
5165,
5173,
5175,
5179,
5180,
5182,
5184,
5186,
5198,
5208,
5209,
5211,
5212,
5213,
5214,
5215,
5217,
5219,
6142,
6146,
6148,
6149,
6150,
6151,
6194,
6195,
6196,
6211,
6212,
6213,
6215,
6244,
6292,
6302,
6303,
6304,
6513,
6517,
6518,
6548,
6549,
6550,
6563,
6568,
6575,
6589,
6607,
6610,
6673,
6678,
6686,
6687,
6688,
6689,
6690,
6693,
6711,
6712,
6720,
6722,
6728,
6729,
6732,
6736,
6742,
6743,
6750,
6752,
6762,
6765,
6766,
6767,
6777,
6787,
6793,
6794,
6795,
6797,
6798,
6807,
6823,
6838,
6839,
6858,
6880,
6881,
7198,
7199,
7330,
7498,
7499,
7502,
7505,
7553,
7702,
7703,
8621,
8640,
8647,
8648,
8650,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
int ves_icall_System_Array_GetValue_raw (int,int,int);
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
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
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
// token 138,
ves_icall_System_Array_InternalCreate,
// token 145,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 146,
ves_icall_System_Array_CanChangePrimitive,
// token 147,
ves_icall_System_Array_FastCopy_raw,
// token 148,
ves_icall_System_Array_GetLength_raw,
// token 149,
ves_icall_System_Array_GetLowerBound_raw,
// token 150,
ves_icall_System_Array_GetValue_raw,
// token 151,
ves_icall_System_Array_GetGenericValue_icall,
// token 152,
ves_icall_System_Array_GetValueImpl_raw,
// token 153,
ves_icall_System_Array_SetGenericValue_icall,
// token 156,
ves_icall_System_Array_SetValueImpl_raw,
// token 157,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 204,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 205,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 207,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 231,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 232,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 233,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 243,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 244,
ves_icall_System_Enum_ToObject_raw,
// token 245,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 246,
ves_icall_System_Enum_get_underlying_type_raw,
// token 247,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 314,
ves_icall_System_Environment_get_ProcessorCount,
// token 316,
ves_icall_System_Environment_get_TickCount,
// token 317,
ves_icall_System_Environment_get_TickCount64,
// token 320,
ves_icall_System_Environment_FailFast_raw,
// token 324,
ves_icall_System_Environment_GetEnvironmentVariable_native_raw,
// token 352,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 353,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 355,
ves_icall_System_GC_SuppressFinalize_raw,
// token 357,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 359,
ves_icall_System_GC_GetGCMemoryInfo,
// token 361,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 366,
ves_icall_System_Object_MemberwiseClone_raw,
// token 374,
ves_icall_System_Math_Abs_double,
// token 375,
ves_icall_System_Math_Ceiling,
// token 376,
ves_icall_System_Math_Cos,
// token 377,
ves_icall_System_Math_Floor,
// token 378,
ves_icall_System_Math_Log10,
// token 379,
ves_icall_System_Math_Pow,
// token 380,
ves_icall_System_Math_Sin,
// token 381,
ves_icall_System_Math_Sqrt,
// token 382,
ves_icall_System_Math_Tan,
// token 383,
ves_icall_System_Math_ModF,
// token 478,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 479,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 486,
ves_icall_RuntimeType_make_array_type_raw,
// token 489,
ves_icall_RuntimeType_make_byref_type_raw,
// token 491,
ves_icall_RuntimeType_MakePointerType_raw,
// token 496,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 497,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 499,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 500,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 504,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 505,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 506,
ves_icall_System_RuntimeType_getFullName_raw,
// token 507,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 509,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 510,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 511,
ves_icall_RuntimeType_GetFields_native_raw,
// token 514,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 516,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 517,
ves_icall_RuntimeType_get_Name_raw,
// token 518,
ves_icall_RuntimeType_get_Namespace_raw,
// token 577,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 578,
ves_icall_reflection_get_token_raw,
// token 580,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 588,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 589,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 590,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 591,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 592,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 596,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 597,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 598,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 599,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 600,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 601,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 603,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 604,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 605,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 607,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 608,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 609,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 613,
ves_icall_System_String_FastAllocateString_raw,
// token 795,
ves_icall_System_Type_internal_from_handle_raw,
// token 939,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 940,
ves_icall_System_ValueType_Equals_raw,
// token 5152,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5153,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5155,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5156,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5157,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5158,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5159,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5161,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5163,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5165,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5173,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5175,
mono_monitor_exit_icall_raw,
// token 5179,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5180,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5182,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5184,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5186,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5198,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5208,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5209,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5211,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5212,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5213,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5214,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5215,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5217,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5219,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6142,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6146,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6148,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6149,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6150,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6151,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6194,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6195,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6196,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6211,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastWin32Error,
// token 6212,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6213,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6215,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastWin32Error,
// token 6244,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6292,
mono_object_hash_icall_raw,
// token 6302,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6303,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6304,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6513,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6517,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6518,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6548,
mono_digest_get_public_token,
// token 6549,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6550,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6563,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6568,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6575,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6589,
ves_icall_System_Reflection_CustomAttributeData_ResolveArgumentsInternal_raw,
// token 6607,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6610,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6673,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 6678,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6686,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6687,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6688,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6689,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6690,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 6693,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6711,
ves_icall_reflection_get_token_raw,
// token 6712,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6720,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6722,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6728,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6729,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6732,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6736,
ves_icall_reflection_get_token_raw,
// token 6742,
ves_icall_get_method_info_raw,
// token 6743,
ves_icall_get_method_attributes,
// token 6750,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6752,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6762,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6765,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6766,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6767,
ves_icall_reflection_get_token_raw,
// token 6777,
ves_icall_InternalInvoke_raw,
// token 6787,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6793,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6794,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6795,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6797,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6798,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6807,
ves_icall_InternalInvoke_raw,
// token 6823,
ves_icall_reflection_get_token_raw,
// token 6838,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 6839,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6858,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6880,
ves_icall_reflection_get_token_raw,
// token 6881,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7198,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7199,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7330,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7498,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7499,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7502,
ves_icall_ModuleBuilder_getToken_raw,
// token 7505,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7553,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7702,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7703,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8621,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8640,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8647,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 8648,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8650,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
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
0,
0,
0,
0,
0,
};
