/*
 * This file autogenerated by genErrorStrings. Do not edit. 
 */

#include <Security/Security.h>

typedef struct {
	CSSM_RETURN errCode;
	const char *errStr;
} ErrString;

static const ErrString errStrings[] = {
	{ CSSM_OK,"CSSM_OK"},
	/* Error codes from cssmerr.h */
	{ CSSMERR_CSSM_INVALID_ADDIN_HANDLE,"CSSMERR_CSSM_INVALID_ADDIN_HANDLE"},
	{ CSSMERR_CSSM_NOT_INITIALIZED,"CSSMERR_CSSM_NOT_INITIALIZED"},
	{ CSSMERR_CSSM_INVALID_HANDLE_USAGE,"CSSMERR_CSSM_INVALID_HANDLE_USAGE"},
	{ CSSMERR_CSSM_PVC_REFERENT_NOT_FOUND,"CSSMERR_CSSM_PVC_REFERENT_NOT_FOUND"},
	{ CSSMERR_CSSM_FUNCTION_INTEGRITY_FAIL,"CSSMERR_CSSM_FUNCTION_INTEGRITY_FAIL"},
	{ CSSMERR_CSSM_INTERNAL_ERROR,"CSSMERR_CSSM_INTERNAL_ERROR"},
	{ CSSMERR_CSSM_MEMORY_ERROR,"CSSMERR_CSSM_MEMORY_ERROR"},
	{ CSSMERR_CSSM_MDS_ERROR,"CSSMERR_CSSM_MDS_ERROR"},
	{ CSSMERR_CSSM_INVALID_POINTER,"CSSMERR_CSSM_INVALID_POINTER"},
	{ CSSMERR_CSSM_INVALID_INPUT_POINTER,"CSSMERR_CSSM_INVALID_INPUT_POINTER"},
	{ CSSMERR_CSSM_INVALID_OUTPUT_POINTER,"CSSMERR_CSSM_INVALID_OUTPUT_POINTER"},
	{ CSSMERR_CSSM_FUNCTION_NOT_IMPLEMENTED,"CSSMERR_CSSM_FUNCTION_NOT_IMPLEMENTED"},
	{ CSSMERR_CSSM_SELF_CHECK_FAILED,"CSSMERR_CSSM_SELF_CHECK_FAILED"},
	{ CSSMERR_CSSM_OS_ACCESS_DENIED,"CSSMERR_CSSM_OS_ACCESS_DENIED"},
	{ CSSMERR_CSSM_FUNCTION_FAILED,"CSSMERR_CSSM_FUNCTION_FAILED"},
	{ CSSMERR_CSSM_MODULE_MANIFEST_VERIFY_FAILED,"CSSMERR_CSSM_MODULE_MANIFEST_VERIFY_FAILED"},
	{ CSSMERR_CSSM_INVALID_GUID,"CSSMERR_CSSM_INVALID_GUID"},
	{ CSSMERR_CSSM_INVALID_CONTEXT_HANDLE,"CSSMERR_CSSM_INVALID_CONTEXT_HANDLE"},
	{ CSSMERR_CSSM_INCOMPATIBLE_VERSION,"CSSMERR_CSSM_INCOMPATIBLE_VERSION"},
	{ CSSMERR_CSSM_PRIVILEGE_NOT_GRANTED,"CSSMERR_CSSM_PRIVILEGE_NOT_GRANTED"},
	{ CSSMERR_CSSM_SCOPE_NOT_SUPPORTED,"CSSMERR_CSSM_SCOPE_NOT_SUPPORTED"},
	{ CSSMERR_CSSM_PVC_ALREADY_CONFIGURED,"CSSMERR_CSSM_PVC_ALREADY_CONFIGURED"},
	{ CSSMERR_CSSM_INVALID_PVC,"CSSMERR_CSSM_INVALID_PVC"},
	{ CSSMERR_CSSM_EMM_LOAD_FAILED,"CSSMERR_CSSM_EMM_LOAD_FAILED"},
	{ CSSMERR_CSSM_EMM_UNLOAD_FAILED,"CSSMERR_CSSM_EMM_UNLOAD_FAILED"},
	{ CSSMERR_CSSM_ADDIN_LOAD_FAILED,"CSSMERR_CSSM_ADDIN_LOAD_FAILED"},
	{ CSSMERR_CSSM_INVALID_KEY_HIERARCHY,"CSSMERR_CSSM_INVALID_KEY_HIERARCHY"},
	{ CSSMERR_CSSM_ADDIN_UNLOAD_FAILED,"CSSMERR_CSSM_ADDIN_UNLOAD_FAILED"},
	{ CSSMERR_CSSM_LIB_REF_NOT_FOUND,"CSSMERR_CSSM_LIB_REF_NOT_FOUND"},
	{ CSSMERR_CSSM_INVALID_ADDIN_FUNCTION_TABLE,"CSSMERR_CSSM_INVALID_ADDIN_FUNCTION_TABLE"},
	{ CSSMERR_CSSM_EMM_AUTHENTICATE_FAILED,"CSSMERR_CSSM_EMM_AUTHENTICATE_FAILED"},
	{ CSSMERR_CSSM_ADDIN_AUTHENTICATE_FAILED,"CSSMERR_CSSM_ADDIN_AUTHENTICATE_FAILED"},
	{ CSSMERR_CSSM_INVALID_SERVICE_MASK,"CSSMERR_CSSM_INVALID_SERVICE_MASK"},
	{ CSSMERR_CSSM_MODULE_NOT_LOADED,"CSSMERR_CSSM_MODULE_NOT_LOADED"},
	{ CSSMERR_CSSM_INVALID_SUBSERVICEID,"CSSMERR_CSSM_INVALID_SUBSERVICEID"},
	{ CSSMERR_CSSM_BUFFER_TOO_SMALL,"CSSMERR_CSSM_BUFFER_TOO_SMALL"},
	{ CSSMERR_CSSM_INVALID_ATTRIBUTE,"CSSMERR_CSSM_INVALID_ATTRIBUTE"},
	{ CSSMERR_CSSM_ATTRIBUTE_NOT_IN_CONTEXT,"CSSMERR_CSSM_ATTRIBUTE_NOT_IN_CONTEXT"},
	{ CSSMERR_CSSM_MODULE_MANAGER_INITIALIZE_FAIL,"CSSMERR_CSSM_MODULE_MANAGER_INITIALIZE_FAIL"},
	{ CSSMERR_CSSM_MODULE_MANAGER_NOT_FOUND,"CSSMERR_CSSM_MODULE_MANAGER_NOT_FOUND"},
	{ CSSMERR_CSSM_EVENT_NOTIFICATION_CALLBACK_NOT_FOUND,"CSSMERR_CSSM_EVENT_NOTIFICATION_CALLBACK_NOT_FOUND"},
	{ CSSMERR_CSP_INTERNAL_ERROR,"CSSMERR_CSP_INTERNAL_ERROR"},
	{ CSSMERR_CSP_MEMORY_ERROR,"CSSMERR_CSP_MEMORY_ERROR"},
	{ CSSMERR_CSP_MDS_ERROR,"CSSMERR_CSP_MDS_ERROR"},
	{ CSSMERR_CSP_INVALID_POINTER,"CSSMERR_CSP_INVALID_POINTER"},
	{ CSSMERR_CSP_INVALID_INPUT_POINTER,"CSSMERR_CSP_INVALID_INPUT_POINTER"},
	{ CSSMERR_CSP_INVALID_OUTPUT_POINTER,"CSSMERR_CSP_INVALID_OUTPUT_POINTER"},
	{ CSSMERR_CSP_FUNCTION_NOT_IMPLEMENTED,"CSSMERR_CSP_FUNCTION_NOT_IMPLEMENTED"},
	{ CSSMERR_CSP_SELF_CHECK_FAILED,"CSSMERR_CSP_SELF_CHECK_FAILED"},
	{ CSSMERR_CSP_OS_ACCESS_DENIED,"CSSMERR_CSP_OS_ACCESS_DENIED"},
	{ CSSMERR_CSP_FUNCTION_FAILED,"CSSMERR_CSP_FUNCTION_FAILED"},
	{ CSSMERR_CSP_OPERATION_AUTH_DENIED,"CSSMERR_CSP_OPERATION_AUTH_DENIED"},
	{ CSSMERR_CSP_OBJECT_USE_AUTH_DENIED,"CSSMERR_CSP_OBJECT_USE_AUTH_DENIED"},
	{ CSSMERR_CSP_OBJECT_MANIP_AUTH_DENIED,"CSSMERR_CSP_OBJECT_MANIP_AUTH_DENIED"},
	{ CSSMERR_CSP_OBJECT_ACL_NOT_SUPPORTED,"CSSMERR_CSP_OBJECT_ACL_NOT_SUPPORTED"},
	{ CSSMERR_CSP_OBJECT_ACL_REQUIRED,"CSSMERR_CSP_OBJECT_ACL_REQUIRED"},
	{ CSSMERR_CSP_INVALID_ACCESS_CREDENTIALS,"CSSMERR_CSP_INVALID_ACCESS_CREDENTIALS"},
	{ CSSMERR_CSP_INVALID_ACL_BASE_CERTS,"CSSMERR_CSP_INVALID_ACL_BASE_CERTS"},
	{ CSSMERR_CSP_ACL_BASE_CERTS_NOT_SUPPORTED,"CSSMERR_CSP_ACL_BASE_CERTS_NOT_SUPPORTED"},
	{ CSSMERR_CSP_INVALID_SAMPLE_VALUE,"CSSMERR_CSP_INVALID_SAMPLE_VALUE"},
	{ CSSMERR_CSP_SAMPLE_VALUE_NOT_SUPPORTED,"CSSMERR_CSP_SAMPLE_VALUE_NOT_SUPPORTED"},
	{ CSSMERR_CSP_INVALID_ACL_SUBJECT_VALUE,"CSSMERR_CSP_INVALID_ACL_SUBJECT_VALUE"},
	{ CSSMERR_CSP_ACL_SUBJECT_TYPE_NOT_SUPPORTED,"CSSMERR_CSP_ACL_SUBJECT_TYPE_NOT_SUPPORTED"},
	{ CSSMERR_CSP_INVALID_ACL_CHALLENGE_CALLBACK,"CSSMERR_CSP_INVALID_ACL_CHALLENGE_CALLBACK"},
	{ CSSMERR_CSP_ACL_CHALLENGE_CALLBACK_FAILED,"CSSMERR_CSP_ACL_CHALLENGE_CALLBACK_FAILED"},
	{ CSSMERR_CSP_INVALID_ACL_ENTRY_TAG,"CSSMERR_CSP_INVALID_ACL_ENTRY_TAG"},
	{ CSSMERR_CSP_ACL_ENTRY_TAG_NOT_FOUND,"CSSMERR_CSP_ACL_ENTRY_TAG_NOT_FOUND"},
	{ CSSMERR_CSP_INVALID_ACL_EDIT_MODE,"CSSMERR_CSP_INVALID_ACL_EDIT_MODE"},
	{ CSSMERR_CSP_ACL_CHANGE_FAILED,"CSSMERR_CSP_ACL_CHANGE_FAILED"},
	{ CSSMERR_CSP_INVALID_NEW_ACL_ENTRY,"CSSMERR_CSP_INVALID_NEW_ACL_ENTRY"},
	{ CSSMERR_CSP_INVALID_NEW_ACL_OWNER,"CSSMERR_CSP_INVALID_NEW_ACL_OWNER"},
	{ CSSMERR_CSP_ACL_DELETE_FAILED,"CSSMERR_CSP_ACL_DELETE_FAILED"},
	{ CSSMERR_CSP_ACL_REPLACE_FAILED,"CSSMERR_CSP_ACL_REPLACE_FAILED"},
	{ CSSMERR_CSP_ACL_ADD_FAILED,"CSSMERR_CSP_ACL_ADD_FAILED"},
	{ CSSMERR_CSP_INVALID_CONTEXT_HANDLE,"CSSMERR_CSP_INVALID_CONTEXT_HANDLE"},
	{ CSSMERR_CSP_PRIVILEGE_NOT_GRANTED,"CSSMERR_CSP_PRIVILEGE_NOT_GRANTED"},
	{ CSSMERR_CSP_INVALID_DATA,"CSSMERR_CSP_INVALID_DATA"},
	{ CSSMERR_CSP_INVALID_PASSTHROUGH_ID,"CSSMERR_CSP_INVALID_PASSTHROUGH_ID"},
	{ CSSMERR_CSP_INVALID_CRYPTO_DATA,"CSSMERR_CSP_INVALID_CRYPTO_DATA"},
	{ CSSMERR_CSP_INPUT_LENGTH_ERROR,"CSSMERR_CSP_INPUT_LENGTH_ERROR"},
	{ CSSMERR_CSP_OUTPUT_LENGTH_ERROR,"CSSMERR_CSP_OUTPUT_LENGTH_ERROR"},
	{ CSSMERR_CSP_PRIVILEGE_NOT_SUPPORTED,"CSSMERR_CSP_PRIVILEGE_NOT_SUPPORTED"},
	{ CSSMERR_CSP_DEVICE_ERROR,"CSSMERR_CSP_DEVICE_ERROR"},
	{ CSSMERR_CSP_DEVICE_MEMORY_ERROR,"CSSMERR_CSP_DEVICE_MEMORY_ERROR"},
	{ CSSMERR_CSP_ATTACH_HANDLE_BUSY,"CSSMERR_CSP_ATTACH_HANDLE_BUSY"},
	{ CSSMERR_CSP_NOT_LOGGED_IN,"CSSMERR_CSP_NOT_LOGGED_IN"},
	{ CSSMERR_CSP_INVALID_KEY,"CSSMERR_CSP_INVALID_KEY"},
	{ CSSMERR_CSP_INVALID_KEY_REFERENCE,"CSSMERR_CSP_INVALID_KEY_REFERENCE"},
	{ CSSMERR_CSP_INVALID_KEY_CLASS,"CSSMERR_CSP_INVALID_KEY_CLASS"},
	{ CSSMERR_CSP_ALGID_MISMATCH,"CSSMERR_CSP_ALGID_MISMATCH"},
	{ CSSMERR_CSP_KEY_USAGE_INCORRECT,"CSSMERR_CSP_KEY_USAGE_INCORRECT"},
	{ CSSMERR_CSP_KEY_BLOB_TYPE_INCORRECT,"CSSMERR_CSP_KEY_BLOB_TYPE_INCORRECT"},
	{ CSSMERR_CSP_KEY_HEADER_INCONSISTENT,"CSSMERR_CSP_KEY_HEADER_INCONSISTENT"},
	{ CSSMERR_CSP_UNSUPPORTED_KEY_FORMAT,"CSSMERR_CSP_UNSUPPORTED_KEY_FORMAT"},
	{ CSSMERR_CSP_UNSUPPORTED_KEY_SIZE,"CSSMERR_CSP_UNSUPPORTED_KEY_SIZE"},
	{ CSSMERR_CSP_INVALID_KEY_POINTER,"CSSMERR_CSP_INVALID_KEY_POINTER"},
	{ CSSMERR_CSP_INVALID_KEYUSAGE_MASK,"CSSMERR_CSP_INVALID_KEYUSAGE_MASK"},
	{ CSSMERR_CSP_UNSUPPORTED_KEYUSAGE_MASK,"CSSMERR_CSP_UNSUPPORTED_KEYUSAGE_MASK"},
	{ CSSMERR_CSP_INVALID_KEYATTR_MASK,"CSSMERR_CSP_INVALID_KEYATTR_MASK"},
	{ CSSMERR_CSP_UNSUPPORTED_KEYATTR_MASK,"CSSMERR_CSP_UNSUPPORTED_KEYATTR_MASK"},
	{ CSSMERR_CSP_INVALID_KEY_LABEL,"CSSMERR_CSP_INVALID_KEY_LABEL"},
	{ CSSMERR_CSP_UNSUPPORTED_KEY_LABEL,"CSSMERR_CSP_UNSUPPORTED_KEY_LABEL"},
	{ CSSMERR_CSP_INVALID_KEY_FORMAT,"CSSMERR_CSP_INVALID_KEY_FORMAT"},
	{ CSSMERR_CSP_INVALID_DATA_COUNT,"CSSMERR_CSP_INVALID_DATA_COUNT"},
	{ CSSMERR_CSP_VECTOR_OF_BUFS_UNSUPPORTED,"CSSMERR_CSP_VECTOR_OF_BUFS_UNSUPPORTED"},
	{ CSSMERR_CSP_INVALID_INPUT_VECTOR,"CSSMERR_CSP_INVALID_INPUT_VECTOR"},
	{ CSSMERR_CSP_INVALID_OUTPUT_VECTOR,"CSSMERR_CSP_INVALID_OUTPUT_VECTOR"},
	{ CSSMERR_CSP_INVALID_CONTEXT,"CSSMERR_CSP_INVALID_CONTEXT"},
	{ CSSMERR_CSP_INVALID_ALGORITHM,"CSSMERR_CSP_INVALID_ALGORITHM"},
	{ CSSMERR_CSP_INVALID_ATTR_KEY,"CSSMERR_CSP_INVALID_ATTR_KEY"},
	{ CSSMERR_CSP_MISSING_ATTR_KEY,"CSSMERR_CSP_MISSING_ATTR_KEY"},
	{ CSSMERR_CSP_INVALID_ATTR_INIT_VECTOR,"CSSMERR_CSP_INVALID_ATTR_INIT_VECTOR"},
	{ CSSMERR_CSP_MISSING_ATTR_INIT_VECTOR,"CSSMERR_CSP_MISSING_ATTR_INIT_VECTOR"},
	{ CSSMERR_CSP_INVALID_ATTR_SALT,"CSSMERR_CSP_INVALID_ATTR_SALT"},
	{ CSSMERR_CSP_MISSING_ATTR_SALT,"CSSMERR_CSP_MISSING_ATTR_SALT"},
	{ CSSMERR_CSP_INVALID_ATTR_PADDING,"CSSMERR_CSP_INVALID_ATTR_PADDING"},
	{ CSSMERR_CSP_MISSING_ATTR_PADDING,"CSSMERR_CSP_MISSING_ATTR_PADDING"},
	{ CSSMERR_CSP_INVALID_ATTR_RANDOM,"CSSMERR_CSP_INVALID_ATTR_RANDOM"},
	{ CSSMERR_CSP_MISSING_ATTR_RANDOM,"CSSMERR_CSP_MISSING_ATTR_RANDOM"},
	{ CSSMERR_CSP_INVALID_ATTR_SEED,"CSSMERR_CSP_INVALID_ATTR_SEED"},
	{ CSSMERR_CSP_MISSING_ATTR_SEED,"CSSMERR_CSP_MISSING_ATTR_SEED"},
	{ CSSMERR_CSP_INVALID_ATTR_PASSPHRASE,"CSSMERR_CSP_INVALID_ATTR_PASSPHRASE"},
	{ CSSMERR_CSP_MISSING_ATTR_PASSPHRASE,"CSSMERR_CSP_MISSING_ATTR_PASSPHRASE"},
	{ CSSMERR_CSP_INVALID_ATTR_KEY_LENGTH,"CSSMERR_CSP_INVALID_ATTR_KEY_LENGTH"},
	{ CSSMERR_CSP_MISSING_ATTR_KEY_LENGTH,"CSSMERR_CSP_MISSING_ATTR_KEY_LENGTH"},
	{ CSSMERR_CSP_INVALID_ATTR_BLOCK_SIZE,"CSSMERR_CSP_INVALID_ATTR_BLOCK_SIZE"},
	{ CSSMERR_CSP_MISSING_ATTR_BLOCK_SIZE,"CSSMERR_CSP_MISSING_ATTR_BLOCK_SIZE"},
	{ CSSMERR_CSP_INVALID_ATTR_OUTPUT_SIZE,"CSSMERR_CSP_INVALID_ATTR_OUTPUT_SIZE"},
	{ CSSMERR_CSP_MISSING_ATTR_OUTPUT_SIZE,"CSSMERR_CSP_MISSING_ATTR_OUTPUT_SIZE"},
	{ CSSMERR_CSP_INVALID_ATTR_ROUNDS,"CSSMERR_CSP_INVALID_ATTR_ROUNDS"},
	{ CSSMERR_CSP_MISSING_ATTR_ROUNDS,"CSSMERR_CSP_MISSING_ATTR_ROUNDS"},
	{ CSSMERR_CSP_INVALID_ATTR_ALG_PARAMS,"CSSMERR_CSP_INVALID_ATTR_ALG_PARAMS"},
	{ CSSMERR_CSP_MISSING_ATTR_ALG_PARAMS,"CSSMERR_CSP_MISSING_ATTR_ALG_PARAMS"},
	{ CSSMERR_CSP_INVALID_ATTR_LABEL,"CSSMERR_CSP_INVALID_ATTR_LABEL"},
	{ CSSMERR_CSP_MISSING_ATTR_LABEL,"CSSMERR_CSP_MISSING_ATTR_LABEL"},
	{ CSSMERR_CSP_INVALID_ATTR_KEY_TYPE,"CSSMERR_CSP_INVALID_ATTR_KEY_TYPE"},
	{ CSSMERR_CSP_MISSING_ATTR_KEY_TYPE,"CSSMERR_CSP_MISSING_ATTR_KEY_TYPE"},
	{ CSSMERR_CSP_INVALID_ATTR_MODE,"CSSMERR_CSP_INVALID_ATTR_MODE"},
	{ CSSMERR_CSP_MISSING_ATTR_MODE,"CSSMERR_CSP_MISSING_ATTR_MODE"},
	{ CSSMERR_CSP_INVALID_ATTR_EFFECTIVE_BITS,"CSSMERR_CSP_INVALID_ATTR_EFFECTIVE_BITS"},
	{ CSSMERR_CSP_MISSING_ATTR_EFFECTIVE_BITS,"CSSMERR_CSP_MISSING_ATTR_EFFECTIVE_BITS"},
	{ CSSMERR_CSP_INVALID_ATTR_START_DATE,"CSSMERR_CSP_INVALID_ATTR_START_DATE"},
	{ CSSMERR_CSP_MISSING_ATTR_START_DATE,"CSSMERR_CSP_MISSING_ATTR_START_DATE"},
	{ CSSMERR_CSP_INVALID_ATTR_END_DATE,"CSSMERR_CSP_INVALID_ATTR_END_DATE"},
	{ CSSMERR_CSP_MISSING_ATTR_END_DATE,"CSSMERR_CSP_MISSING_ATTR_END_DATE"},
	{ CSSMERR_CSP_INVALID_ATTR_VERSION,"CSSMERR_CSP_INVALID_ATTR_VERSION"},
	{ CSSMERR_CSP_MISSING_ATTR_VERSION,"CSSMERR_CSP_MISSING_ATTR_VERSION"},
	{ CSSMERR_CSP_INVALID_ATTR_PRIME,"CSSMERR_CSP_INVALID_ATTR_PRIME"},
	{ CSSMERR_CSP_MISSING_ATTR_PRIME,"CSSMERR_CSP_MISSING_ATTR_PRIME"},
	{ CSSMERR_CSP_INVALID_ATTR_BASE,"CSSMERR_CSP_INVALID_ATTR_BASE"},
	{ CSSMERR_CSP_MISSING_ATTR_BASE,"CSSMERR_CSP_MISSING_ATTR_BASE"},
	{ CSSMERR_CSP_INVALID_ATTR_SUBPRIME,"CSSMERR_CSP_INVALID_ATTR_SUBPRIME"},
	{ CSSMERR_CSP_MISSING_ATTR_SUBPRIME,"CSSMERR_CSP_MISSING_ATTR_SUBPRIME"},
	{ CSSMERR_CSP_INVALID_ATTR_ITERATION_COUNT,"CSSMERR_CSP_INVALID_ATTR_ITERATION_COUNT"},
	{ CSSMERR_CSP_MISSING_ATTR_ITERATION_COUNT,"CSSMERR_CSP_MISSING_ATTR_ITERATION_COUNT"},
	{ CSSMERR_CSP_INVALID_ATTR_DL_DB_HANDLE,"CSSMERR_CSP_INVALID_ATTR_DL_DB_HANDLE"},
	{ CSSMERR_CSP_MISSING_ATTR_DL_DB_HANDLE,"CSSMERR_CSP_MISSING_ATTR_DL_DB_HANDLE"},
	{ CSSMERR_CSP_INVALID_ATTR_ACCESS_CREDENTIALS,"CSSMERR_CSP_INVALID_ATTR_ACCESS_CREDENTIALS"},
	{ CSSMERR_CSP_MISSING_ATTR_ACCESS_CREDENTIALS,"CSSMERR_CSP_MISSING_ATTR_ACCESS_CREDENTIALS"},
	{ CSSMERR_CSP_INVALID_ATTR_PUBLIC_KEY_FORMAT,"CSSMERR_CSP_INVALID_ATTR_PUBLIC_KEY_FORMAT"},
	{ CSSMERR_CSP_MISSING_ATTR_PUBLIC_KEY_FORMAT,"CSSMERR_CSP_MISSING_ATTR_PUBLIC_KEY_FORMAT"},
	{ CSSMERR_CSP_INVALID_ATTR_PRIVATE_KEY_FORMAT,"CSSMERR_CSP_INVALID_ATTR_PRIVATE_KEY_FORMAT"},
	{ CSSMERR_CSP_MISSING_ATTR_PRIVATE_KEY_FORMAT,"CSSMERR_CSP_MISSING_ATTR_PRIVATE_KEY_FORMAT"},
	{ CSSMERR_CSP_INVALID_ATTR_SYMMETRIC_KEY_FORMAT,"CSSMERR_CSP_INVALID_ATTR_SYMMETRIC_KEY_FORMAT"},
	{ CSSMERR_CSP_MISSING_ATTR_SYMMETRIC_KEY_FORMAT,"CSSMERR_CSP_MISSING_ATTR_SYMMETRIC_KEY_FORMAT"},
	{ CSSMERR_CSP_INVALID_ATTR_WRAPPED_KEY_FORMAT,"CSSMERR_CSP_INVALID_ATTR_WRAPPED_KEY_FORMAT"},
	{ CSSMERR_CSP_MISSING_ATTR_WRAPPED_KEY_FORMAT,"CSSMERR_CSP_MISSING_ATTR_WRAPPED_KEY_FORMAT"},
	{ CSSMERR_CSP_STAGED_OPERATION_IN_PROGRESS,"CSSMERR_CSP_STAGED_OPERATION_IN_PROGRESS"},
	{ CSSMERR_CSP_STAGED_OPERATION_NOT_STARTED,"CSSMERR_CSP_STAGED_OPERATION_NOT_STARTED"},
	{ CSSMERR_CSP_VERIFY_FAILED,"CSSMERR_CSP_VERIFY_FAILED"},
	{ CSSMERR_CSP_INVALID_SIGNATURE,"CSSMERR_CSP_INVALID_SIGNATURE"},
	{ CSSMERR_CSP_QUERY_SIZE_UNKNOWN,"CSSMERR_CSP_QUERY_SIZE_UNKNOWN"},
	{ CSSMERR_CSP_BLOCK_SIZE_MISMATCH,"CSSMERR_CSP_BLOCK_SIZE_MISMATCH"},
	{ CSSMERR_CSP_PRIVATE_KEY_NOT_FOUND,"CSSMERR_CSP_PRIVATE_KEY_NOT_FOUND"},
	{ CSSMERR_CSP_PUBLIC_KEY_INCONSISTENT,"CSSMERR_CSP_PUBLIC_KEY_INCONSISTENT"},
	{ CSSMERR_CSP_DEVICE_VERIFY_FAILED,"CSSMERR_CSP_DEVICE_VERIFY_FAILED"},
	{ CSSMERR_CSP_INVALID_LOGIN_NAME,"CSSMERR_CSP_INVALID_LOGIN_NAME"},
	{ CSSMERR_CSP_ALREADY_LOGGED_IN,"CSSMERR_CSP_ALREADY_LOGGED_IN"},
	{ CSSMERR_CSP_PRIVATE_KEY_ALREADY_EXISTS,"CSSMERR_CSP_PRIVATE_KEY_ALREADY_EXISTS"},
	{ CSSMERR_CSP_KEY_LABEL_ALREADY_EXISTS,"CSSMERR_CSP_KEY_LABEL_ALREADY_EXISTS"},
	{ CSSMERR_CSP_INVALID_DIGEST_ALGORITHM,"CSSMERR_CSP_INVALID_DIGEST_ALGORITHM"},
	{ CSSMERR_CSP_CRYPTO_DATA_CALLBACK_FAILED,"CSSMERR_CSP_CRYPTO_DATA_CALLBACK_FAILED"},
	{ CSSMERR_TP_INTERNAL_ERROR,"CSSMERR_TP_INTERNAL_ERROR"},
	{ CSSMERR_TP_MEMORY_ERROR,"CSSMERR_TP_MEMORY_ERROR"},
	{ CSSMERR_TP_MDS_ERROR,"CSSMERR_TP_MDS_ERROR"},
	{ CSSMERR_TP_INVALID_POINTER,"CSSMERR_TP_INVALID_POINTER"},
	{ CSSMERR_TP_INVALID_INPUT_POINTER,"CSSMERR_TP_INVALID_INPUT_POINTER"},
	{ CSSMERR_TP_INVALID_OUTPUT_POINTER,"CSSMERR_TP_INVALID_OUTPUT_POINTER"},
	{ CSSMERR_TP_FUNCTION_NOT_IMPLEMENTED,"CSSMERR_TP_FUNCTION_NOT_IMPLEMENTED"},
	{ CSSMERR_TP_SELF_CHECK_FAILED,"CSSMERR_TP_SELF_CHECK_FAILED"},
	{ CSSMERR_TP_OS_ACCESS_DENIED,"CSSMERR_TP_OS_ACCESS_DENIED"},
	{ CSSMERR_TP_FUNCTION_FAILED,"CSSMERR_TP_FUNCTION_FAILED"},
	{ CSSMERR_TP_INVALID_CONTEXT_HANDLE,"CSSMERR_TP_INVALID_CONTEXT_HANDLE"},
	{ CSSMERR_TP_INVALID_DATA,"CSSMERR_TP_INVALID_DATA"},
	{ CSSMERR_TP_INVALID_DB_LIST,"CSSMERR_TP_INVALID_DB_LIST"},
	{ CSSMERR_TP_INVALID_CERTGROUP_POINTER,"CSSMERR_TP_INVALID_CERTGROUP_POINTER"},
	{ CSSMERR_TP_INVALID_CERT_POINTER,"CSSMERR_TP_INVALID_CERT_POINTER"},
	{ CSSMERR_TP_INVALID_CRL_POINTER,"CSSMERR_TP_INVALID_CRL_POINTER"},
	{ CSSMERR_TP_INVALID_FIELD_POINTER,"CSSMERR_TP_INVALID_FIELD_POINTER"},
	{ CSSMERR_TP_INVALID_NETWORK_ADDR,"CSSMERR_TP_INVALID_NETWORK_ADDR"},
	{ CSSMERR_TP_CRL_ALREADY_SIGNED,"CSSMERR_TP_CRL_ALREADY_SIGNED"},
	{ CSSMERR_TP_INVALID_NUMBER_OF_FIELDS,"CSSMERR_TP_INVALID_NUMBER_OF_FIELDS"},
	{ CSSMERR_TP_VERIFICATION_FAILURE,"CSSMERR_TP_VERIFICATION_FAILURE"},
	{ CSSMERR_TP_INVALID_DB_HANDLE,"CSSMERR_TP_INVALID_DB_HANDLE"},
	{ CSSMERR_TP_UNKNOWN_FORMAT,"CSSMERR_TP_UNKNOWN_FORMAT"},
	{ CSSMERR_TP_UNKNOWN_TAG,"CSSMERR_TP_UNKNOWN_TAG"},
	{ CSSMERR_TP_INVALID_PASSTHROUGH_ID,"CSSMERR_TP_INVALID_PASSTHROUGH_ID"},
	{ CSSMERR_TP_INVALID_CSP_HANDLE,"CSSMERR_TP_INVALID_CSP_HANDLE"},
	{ CSSMERR_TP_INVALID_DL_HANDLE,"CSSMERR_TP_INVALID_DL_HANDLE"},
	{ CSSMERR_TP_INVALID_CL_HANDLE,"CSSMERR_TP_INVALID_CL_HANDLE"},
	{ CSSMERR_TP_INVALID_DB_LIST_POINTER,"CSSMERR_TP_INVALID_DB_LIST_POINTER"},
	{ CSSMERR_TP_INVALID_CALLERAUTH_CONTEXT_POINTER,"CSSMERR_TP_INVALID_CALLERAUTH_CONTEXT_POINTER"},
	{ CSSMERR_TP_INVALID_IDENTIFIER_POINTER,"CSSMERR_TP_INVALID_IDENTIFIER_POINTER"},
	{ CSSMERR_TP_INVALID_KEYCACHE_HANDLE,"CSSMERR_TP_INVALID_KEYCACHE_HANDLE"},
	{ CSSMERR_TP_INVALID_CERTGROUP,"CSSMERR_TP_INVALID_CERTGROUP"},
	{ CSSMERR_TP_INVALID_CRLGROUP,"CSSMERR_TP_INVALID_CRLGROUP"},
	{ CSSMERR_TP_INVALID_CRLGROUP_POINTER,"CSSMERR_TP_INVALID_CRLGROUP_POINTER"},
	{ CSSMERR_TP_AUTHENTICATION_FAILED,"CSSMERR_TP_AUTHENTICATION_FAILED"},
	{ CSSMERR_TP_CERTGROUP_INCOMPLETE,"CSSMERR_TP_CERTGROUP_INCOMPLETE"},
	{ CSSMERR_TP_CERTIFICATE_CANT_OPERATE,"CSSMERR_TP_CERTIFICATE_CANT_OPERATE"},
	{ CSSMERR_TP_CERT_EXPIRED,"CSSMERR_TP_CERT_EXPIRED"},
	{ CSSMERR_TP_CERT_NOT_VALID_YET,"CSSMERR_TP_CERT_NOT_VALID_YET"},
	{ CSSMERR_TP_CERT_REVOKED,"CSSMERR_TP_CERT_REVOKED"},
	{ CSSMERR_TP_CERT_SUSPENDED,"CSSMERR_TP_CERT_SUSPENDED"},
	{ CSSMERR_TP_INSUFFICIENT_CREDENTIALS,"CSSMERR_TP_INSUFFICIENT_CREDENTIALS"},
	{ CSSMERR_TP_INVALID_ACTION,"CSSMERR_TP_INVALID_ACTION"},
	{ CSSMERR_TP_INVALID_ACTION_DATA,"CSSMERR_TP_INVALID_ACTION_DATA"},
	{ CSSMERR_TP_INVALID_ANCHOR_CERT,"CSSMERR_TP_INVALID_ANCHOR_CERT"},
	{ CSSMERR_TP_INVALID_AUTHORITY,"CSSMERR_TP_INVALID_AUTHORITY"},
	{ CSSMERR_TP_VERIFY_ACTION_FAILED,"CSSMERR_TP_VERIFY_ACTION_FAILED"},
	{ CSSMERR_TP_INVALID_CERTIFICATE,"CSSMERR_TP_INVALID_CERTIFICATE"},
	{ CSSMERR_TP_INVALID_CERT_AUTHORITY,"CSSMERR_TP_INVALID_CERT_AUTHORITY"},
	{ CSSMERR_TP_INVALID_CRL_AUTHORITY,"CSSMERR_TP_INVALID_CRL_AUTHORITY"},
	{ CSSMERR_TP_INVALID_CRL_ENCODING,"CSSMERR_TP_INVALID_CRL_ENCODING"},
	{ CSSMERR_TP_INVALID_CRL_TYPE,"CSSMERR_TP_INVALID_CRL_TYPE"},
	{ CSSMERR_TP_INVALID_CRL,"CSSMERR_TP_INVALID_CRL"},
	{ CSSMERR_TP_INVALID_FORM_TYPE,"CSSMERR_TP_INVALID_FORM_TYPE"},
	{ CSSMERR_TP_INVALID_ID,"CSSMERR_TP_INVALID_ID"},
	{ CSSMERR_TP_INVALID_IDENTIFIER,"CSSMERR_TP_INVALID_IDENTIFIER"},
	{ CSSMERR_TP_INVALID_INDEX,"CSSMERR_TP_INVALID_INDEX"},
	{ CSSMERR_TP_INVALID_NAME,"CSSMERR_TP_INVALID_NAME"},
	{ CSSMERR_TP_INVALID_POLICY_IDENTIFIERS,"CSSMERR_TP_INVALID_POLICY_IDENTIFIERS"},
	{ CSSMERR_TP_INVALID_TIMESTRING,"CSSMERR_TP_INVALID_TIMESTRING"},
	{ CSSMERR_TP_INVALID_REASON,"CSSMERR_TP_INVALID_REASON"},
	{ CSSMERR_TP_INVALID_REQUEST_INPUTS,"CSSMERR_TP_INVALID_REQUEST_INPUTS"},
	{ CSSMERR_TP_INVALID_RESPONSE_VECTOR,"CSSMERR_TP_INVALID_RESPONSE_VECTOR"},
	{ CSSMERR_TP_INVALID_SIGNATURE,"CSSMERR_TP_INVALID_SIGNATURE"},
	{ CSSMERR_TP_INVALID_STOP_ON_POLICY,"CSSMERR_TP_INVALID_STOP_ON_POLICY"},
	{ CSSMERR_TP_INVALID_CALLBACK,"CSSMERR_TP_INVALID_CALLBACK"},
	{ CSSMERR_TP_INVALID_TUPLE,"CSSMERR_TP_INVALID_TUPLE"},
	{ CSSMERR_TP_NOT_SIGNER,"CSSMERR_TP_NOT_SIGNER"},
	{ CSSMERR_TP_NOT_TRUSTED,"CSSMERR_TP_NOT_TRUSTED"},
	{ CSSMERR_TP_NO_DEFAULT_AUTHORITY,"CSSMERR_TP_NO_DEFAULT_AUTHORITY"},
	{ CSSMERR_TP_REJECTED_FORM,"CSSMERR_TP_REJECTED_FORM"},
	{ CSSMERR_TP_REQUEST_LOST,"CSSMERR_TP_REQUEST_LOST"},
	{ CSSMERR_TP_REQUEST_REJECTED,"CSSMERR_TP_REQUEST_REJECTED"},
	{ CSSMERR_TP_UNSUPPORTED_ADDR_TYPE,"CSSMERR_TP_UNSUPPORTED_ADDR_TYPE"},
	{ CSSMERR_TP_UNSUPPORTED_SERVICE,"CSSMERR_TP_UNSUPPORTED_SERVICE"},
	{ CSSMERR_TP_INVALID_TUPLEGROUP_POINTER,"CSSMERR_TP_INVALID_TUPLEGROUP_POINTER"},
	{ CSSMERR_TP_INVALID_TUPLEGROUP,"CSSMERR_TP_INVALID_TUPLEGROUP"},
	{ CSSMERR_AC_INTERNAL_ERROR,"CSSMERR_AC_INTERNAL_ERROR"},
	{ CSSMERR_AC_MEMORY_ERROR,"CSSMERR_AC_MEMORY_ERROR"},
	{ CSSMERR_AC_MDS_ERROR,"CSSMERR_AC_MDS_ERROR"},
	{ CSSMERR_AC_INVALID_POINTER,"CSSMERR_AC_INVALID_POINTER"},
	{ CSSMERR_AC_INVALID_INPUT_POINTER,"CSSMERR_AC_INVALID_INPUT_POINTER"},
	{ CSSMERR_AC_INVALID_OUTPUT_POINTER,"CSSMERR_AC_INVALID_OUTPUT_POINTER"},
	{ CSSMERR_AC_FUNCTION_NOT_IMPLEMENTED,"CSSMERR_AC_FUNCTION_NOT_IMPLEMENTED"},
	{ CSSMERR_AC_SELF_CHECK_FAILED,"CSSMERR_AC_SELF_CHECK_FAILED"},
	{ CSSMERR_AC_OS_ACCESS_DENIED,"CSSMERR_AC_OS_ACCESS_DENIED"},
	{ CSSMERR_AC_FUNCTION_FAILED,"CSSMERR_AC_FUNCTION_FAILED"},
	{ CSSMERR_AC_INVALID_CONTEXT_HANDLE,"CSSMERR_AC_INVALID_CONTEXT_HANDLE"},
	{ CSSMERR_AC_INVALID_DATA,"CSSMERR_AC_INVALID_DATA"},
	{ CSSMERR_AC_INVALID_DB_LIST,"CSSMERR_AC_INVALID_DB_LIST"},
	{ CSSMERR_AC_INVALID_PASSTHROUGH_ID,"CSSMERR_AC_INVALID_PASSTHROUGH_ID"},
	{ CSSMERR_AC_INVALID_DL_HANDLE,"CSSMERR_AC_INVALID_DL_HANDLE"},
	{ CSSMERR_AC_INVALID_CL_HANDLE,"CSSMERR_AC_INVALID_CL_HANDLE"},
	{ CSSMERR_AC_INVALID_TP_HANDLE,"CSSMERR_AC_INVALID_TP_HANDLE"},
	{ CSSMERR_AC_INVALID_DB_HANDLE,"CSSMERR_AC_INVALID_DB_HANDLE"},
	{ CSSMERR_AC_INVALID_DB_LIST_POINTER,"CSSMERR_AC_INVALID_DB_LIST_POINTER"},
	{ CSSMERR_AC_INVALID_BASE_ACLS,"CSSMERR_AC_INVALID_BASE_ACLS"},
	{ CSSMERR_AC_INVALID_TUPLE_CREDENTIALS,"CSSMERR_AC_INVALID_TUPLE_CREDENTIALS"},
	{ CSSMERR_AC_INVALID_ENCODING,"CSSMERR_AC_INVALID_ENCODING"},
	{ CSSMERR_AC_INVALID_VALIDITY_PERIOD,"CSSMERR_AC_INVALID_VALIDITY_PERIOD"},
	{ CSSMERR_AC_INVALID_REQUESTOR,"CSSMERR_AC_INVALID_REQUESTOR"},
	{ CSSMERR_AC_INVALID_REQUEST_DESCRIPTOR,"CSSMERR_AC_INVALID_REQUEST_DESCRIPTOR"},
	{ CSSMERR_CL_INTERNAL_ERROR,"CSSMERR_CL_INTERNAL_ERROR"},
	{ CSSMERR_CL_MEMORY_ERROR,"CSSMERR_CL_MEMORY_ERROR"},
	{ CSSMERR_CL_MDS_ERROR,"CSSMERR_CL_MDS_ERROR"},
	{ CSSMERR_CL_INVALID_POINTER,"CSSMERR_CL_INVALID_POINTER"},
	{ CSSMERR_CL_INVALID_INPUT_POINTER,"CSSMERR_CL_INVALID_INPUT_POINTER"},
	{ CSSMERR_CL_INVALID_OUTPUT_POINTER,"CSSMERR_CL_INVALID_OUTPUT_POINTER"},
	{ CSSMERR_CL_FUNCTION_NOT_IMPLEMENTED,"CSSMERR_CL_FUNCTION_NOT_IMPLEMENTED"},
	{ CSSMERR_CL_SELF_CHECK_FAILED,"CSSMERR_CL_SELF_CHECK_FAILED"},
	{ CSSMERR_CL_OS_ACCESS_DENIED,"CSSMERR_CL_OS_ACCESS_DENIED"},
	{ CSSMERR_CL_FUNCTION_FAILED,"CSSMERR_CL_FUNCTION_FAILED"},
	{ CSSMERR_CL_INVALID_CONTEXT_HANDLE,"CSSMERR_CL_INVALID_CONTEXT_HANDLE"},
	{ CSSMERR_CL_INVALID_CERTGROUP_POINTER,"CSSMERR_CL_INVALID_CERTGROUP_POINTER"},
	{ CSSMERR_CL_INVALID_CERT_POINTER,"CSSMERR_CL_INVALID_CERT_POINTER"},
	{ CSSMERR_CL_INVALID_CRL_POINTER,"CSSMERR_CL_INVALID_CRL_POINTER"},
	{ CSSMERR_CL_INVALID_FIELD_POINTER,"CSSMERR_CL_INVALID_FIELD_POINTER"},
	{ CSSMERR_CL_INVALID_DATA,"CSSMERR_CL_INVALID_DATA"},
	{ CSSMERR_CL_CRL_ALREADY_SIGNED,"CSSMERR_CL_CRL_ALREADY_SIGNED"},
	{ CSSMERR_CL_INVALID_NUMBER_OF_FIELDS,"CSSMERR_CL_INVALID_NUMBER_OF_FIELDS"},
	{ CSSMERR_CL_VERIFICATION_FAILURE,"CSSMERR_CL_VERIFICATION_FAILURE"},
	{ CSSMERR_CL_UNKNOWN_FORMAT,"CSSMERR_CL_UNKNOWN_FORMAT"},
	{ CSSMERR_CL_UNKNOWN_TAG,"CSSMERR_CL_UNKNOWN_TAG"},
	{ CSSMERR_CL_INVALID_PASSTHROUGH_ID,"CSSMERR_CL_INVALID_PASSTHROUGH_ID"},
	{ CSSMERR_CL_INVALID_BUNDLE_POINTER,"CSSMERR_CL_INVALID_BUNDLE_POINTER"},
	{ CSSMERR_CL_INVALID_CACHE_HANDLE,"CSSMERR_CL_INVALID_CACHE_HANDLE"},
	{ CSSMERR_CL_INVALID_RESULTS_HANDLE,"CSSMERR_CL_INVALID_RESULTS_HANDLE"},
	{ CSSMERR_CL_INVALID_BUNDLE_INFO,"CSSMERR_CL_INVALID_BUNDLE_INFO"},
	{ CSSMERR_CL_INVALID_CRL_INDEX,"CSSMERR_CL_INVALID_CRL_INDEX"},
	{ CSSMERR_CL_INVALID_SCOPE,"CSSMERR_CL_INVALID_SCOPE"},
	{ CSSMERR_CL_NO_FIELD_VALUES,"CSSMERR_CL_NO_FIELD_VALUES"},
	{ CSSMERR_CL_SCOPE_NOT_SUPPORTED,"CSSMERR_CL_SCOPE_NOT_SUPPORTED"},
	{ CSSMERR_DL_INTERNAL_ERROR,"CSSMERR_DL_INTERNAL_ERROR"},
	{ CSSMERR_DL_MEMORY_ERROR,"CSSMERR_DL_MEMORY_ERROR"},
	{ CSSMERR_DL_MDS_ERROR,"CSSMERR_DL_MDS_ERROR"},
	{ CSSMERR_DL_INVALID_POINTER,"CSSMERR_DL_INVALID_POINTER"},
	{ CSSMERR_DL_INVALID_INPUT_POINTER,"CSSMERR_DL_INVALID_INPUT_POINTER"},
	{ CSSMERR_DL_INVALID_OUTPUT_POINTER,"CSSMERR_DL_INVALID_OUTPUT_POINTER"},
	{ CSSMERR_DL_FUNCTION_NOT_IMPLEMENTED,"CSSMERR_DL_FUNCTION_NOT_IMPLEMENTED"},
	{ CSSMERR_DL_SELF_CHECK_FAILED,"CSSMERR_DL_SELF_CHECK_FAILED"},
	{ CSSMERR_DL_OS_ACCESS_DENIED,"CSSMERR_DL_OS_ACCESS_DENIED"},
	{ CSSMERR_DL_FUNCTION_FAILED,"CSSMERR_DL_FUNCTION_FAILED"},
	{ CSSMERR_DL_INVALID_CSP_HANDLE,"CSSMERR_DL_INVALID_CSP_HANDLE"},
	{ CSSMERR_DL_INVALID_DL_HANDLE,"CSSMERR_DL_INVALID_DL_HANDLE"},
	{ CSSMERR_DL_INVALID_CL_HANDLE,"CSSMERR_DL_INVALID_CL_HANDLE"},
	{ CSSMERR_DL_INVALID_DB_LIST_POINTER,"CSSMERR_DL_INVALID_DB_LIST_POINTER"},
	{ CSSMERR_DL_OPERATION_AUTH_DENIED,"CSSMERR_DL_OPERATION_AUTH_DENIED"},
	{ CSSMERR_DL_OBJECT_USE_AUTH_DENIED,"CSSMERR_DL_OBJECT_USE_AUTH_DENIED"},
	{ CSSMERR_DL_OBJECT_MANIP_AUTH_DENIED,"CSSMERR_DL_OBJECT_MANIP_AUTH_DENIED"},
	{ CSSMERR_DL_OBJECT_ACL_NOT_SUPPORTED,"CSSMERR_DL_OBJECT_ACL_NOT_SUPPORTED"},
	{ CSSMERR_DL_OBJECT_ACL_REQUIRED,"CSSMERR_DL_OBJECT_ACL_REQUIRED"},
	{ CSSMERR_DL_INVALID_ACCESS_CREDENTIALS,"CSSMERR_DL_INVALID_ACCESS_CREDENTIALS"},
	{ CSSMERR_DL_INVALID_ACL_BASE_CERTS,"CSSMERR_DL_INVALID_ACL_BASE_CERTS"},
	{ CSSMERR_DL_ACL_BASE_CERTS_NOT_SUPPORTED,"CSSMERR_DL_ACL_BASE_CERTS_NOT_SUPPORTED"},
	{ CSSMERR_DL_INVALID_SAMPLE_VALUE,"CSSMERR_DL_INVALID_SAMPLE_VALUE"},
	{ CSSMERR_DL_SAMPLE_VALUE_NOT_SUPPORTED,"CSSMERR_DL_SAMPLE_VALUE_NOT_SUPPORTED"},
	{ CSSMERR_DL_INVALID_ACL_SUBJECT_VALUE,"CSSMERR_DL_INVALID_ACL_SUBJECT_VALUE"},
	{ CSSMERR_DL_ACL_SUBJECT_TYPE_NOT_SUPPORTED,"CSSMERR_DL_ACL_SUBJECT_TYPE_NOT_SUPPORTED"},
	{ CSSMERR_DL_INVALID_ACL_CHALLENGE_CALLBACK,"CSSMERR_DL_INVALID_ACL_CHALLENGE_CALLBACK"},
	{ CSSMERR_DL_ACL_CHALLENGE_CALLBACK_FAILED,"CSSMERR_DL_ACL_CHALLENGE_CALLBACK_FAILED"},
	{ CSSMERR_DL_INVALID_ACL_ENTRY_TAG,"CSSMERR_DL_INVALID_ACL_ENTRY_TAG"},
	{ CSSMERR_DL_ACL_ENTRY_TAG_NOT_FOUND,"CSSMERR_DL_ACL_ENTRY_TAG_NOT_FOUND"},
	{ CSSMERR_DL_INVALID_ACL_EDIT_MODE,"CSSMERR_DL_INVALID_ACL_EDIT_MODE"},
	{ CSSMERR_DL_ACL_CHANGE_FAILED,"CSSMERR_DL_ACL_CHANGE_FAILED"},
	{ CSSMERR_DL_INVALID_NEW_ACL_ENTRY,"CSSMERR_DL_INVALID_NEW_ACL_ENTRY"},
	{ CSSMERR_DL_INVALID_NEW_ACL_OWNER,"CSSMERR_DL_INVALID_NEW_ACL_OWNER"},
	{ CSSMERR_DL_ACL_DELETE_FAILED,"CSSMERR_DL_ACL_DELETE_FAILED"},
	{ CSSMERR_DL_ACL_REPLACE_FAILED,"CSSMERR_DL_ACL_REPLACE_FAILED"},
	{ CSSMERR_DL_ACL_ADD_FAILED,"CSSMERR_DL_ACL_ADD_FAILED"},
	{ CSSMERR_DL_INVALID_DB_HANDLE,"CSSMERR_DL_INVALID_DB_HANDLE"},
	{ CSSMERR_DL_INVALID_PASSTHROUGH_ID,"CSSMERR_DL_INVALID_PASSTHROUGH_ID"},
	{ CSSMERR_DL_INVALID_NETWORK_ADDR,"CSSMERR_DL_INVALID_NETWORK_ADDR"},
	{ CSSMERR_DL_DATABASE_CORRUPT,"CSSMERR_DL_DATABASE_CORRUPT"},
	{ CSSMERR_DL_INVALID_RECORD_INDEX,"CSSMERR_DL_INVALID_RECORD_INDEX"},
	{ CSSMERR_DL_INVALID_RECORDTYPE,"CSSMERR_DL_INVALID_RECORDTYPE"},
	{ CSSMERR_DL_INVALID_FIELD_NAME,"CSSMERR_DL_INVALID_FIELD_NAME"},
	{ CSSMERR_DL_UNSUPPORTED_FIELD_FORMAT,"CSSMERR_DL_UNSUPPORTED_FIELD_FORMAT"},
	{ CSSMERR_DL_UNSUPPORTED_INDEX_INFO,"CSSMERR_DL_UNSUPPORTED_INDEX_INFO"},
	{ CSSMERR_DL_UNSUPPORTED_LOCALITY,"CSSMERR_DL_UNSUPPORTED_LOCALITY"},
	{ CSSMERR_DL_UNSUPPORTED_NUM_ATTRIBUTES,"CSSMERR_DL_UNSUPPORTED_NUM_ATTRIBUTES"},
	{ CSSMERR_DL_UNSUPPORTED_NUM_INDEXES,"CSSMERR_DL_UNSUPPORTED_NUM_INDEXES"},
	{ CSSMERR_DL_UNSUPPORTED_NUM_RECORDTYPES,"CSSMERR_DL_UNSUPPORTED_NUM_RECORDTYPES"},
	{ CSSMERR_DL_UNSUPPORTED_RECORDTYPE,"CSSMERR_DL_UNSUPPORTED_RECORDTYPE"},
	{ CSSMERR_DL_FIELD_SPECIFIED_MULTIPLE,"CSSMERR_DL_FIELD_SPECIFIED_MULTIPLE"},
	{ CSSMERR_DL_INCOMPATIBLE_FIELD_FORMAT,"CSSMERR_DL_INCOMPATIBLE_FIELD_FORMAT"},
	{ CSSMERR_DL_INVALID_PARSING_MODULE,"CSSMERR_DL_INVALID_PARSING_MODULE"},
	{ CSSMERR_DL_INVALID_DB_NAME,"CSSMERR_DL_INVALID_DB_NAME"},
	{ CSSMERR_DL_DATASTORE_DOESNOT_EXIST,"CSSMERR_DL_DATASTORE_DOESNOT_EXIST"},
	{ CSSMERR_DL_DATASTORE_ALREADY_EXISTS,"CSSMERR_DL_DATASTORE_ALREADY_EXISTS"},
	{ CSSMERR_DL_DB_LOCKED,"CSSMERR_DL_DB_LOCKED"},
	{ CSSMERR_DL_DATASTORE_IS_OPEN,"CSSMERR_DL_DATASTORE_IS_OPEN"},
	{ CSSMERR_DL_RECORD_NOT_FOUND,"CSSMERR_DL_RECORD_NOT_FOUND"},
	{ CSSMERR_DL_MISSING_VALUE,"CSSMERR_DL_MISSING_VALUE"},
	{ CSSMERR_DL_UNSUPPORTED_QUERY,"CSSMERR_DL_UNSUPPORTED_QUERY"},
	{ CSSMERR_DL_UNSUPPORTED_QUERY_LIMITS,"CSSMERR_DL_UNSUPPORTED_QUERY_LIMITS"},
	{ CSSMERR_DL_UNSUPPORTED_NUM_SELECTION_PREDS,"CSSMERR_DL_UNSUPPORTED_NUM_SELECTION_PREDS"},
	{ CSSMERR_DL_UNSUPPORTED_OPERATOR,"CSSMERR_DL_UNSUPPORTED_OPERATOR"},
	{ CSSMERR_DL_INVALID_RESULTS_HANDLE,"CSSMERR_DL_INVALID_RESULTS_HANDLE"},
	{ CSSMERR_DL_INVALID_DB_LOCATION,"CSSMERR_DL_INVALID_DB_LOCATION"},
	{ CSSMERR_DL_INVALID_ACCESS_REQUEST,"CSSMERR_DL_INVALID_ACCESS_REQUEST"},
	{ CSSMERR_DL_INVALID_INDEX_INFO,"CSSMERR_DL_INVALID_INDEX_INFO"},
	{ CSSMERR_DL_INVALID_SELECTION_TAG,"CSSMERR_DL_INVALID_SELECTION_TAG"},
	{ CSSMERR_DL_INVALID_NEW_OWNER,"CSSMERR_DL_INVALID_NEW_OWNER"},
	{ CSSMERR_DL_INVALID_RECORD_UID,"CSSMERR_DL_INVALID_RECORD_UID"},
	{ CSSMERR_DL_INVALID_UNIQUE_INDEX_DATA,"CSSMERR_DL_INVALID_UNIQUE_INDEX_DATA"},
	{ CSSMERR_DL_INVALID_MODIFY_MODE,"CSSMERR_DL_INVALID_MODIFY_MODE"},
	{ CSSMERR_DL_INVALID_OPEN_PARAMETERS,"CSSMERR_DL_INVALID_OPEN_PARAMETERS"},
	{ CSSMERR_DL_RECORD_MODIFIED,"CSSMERR_DL_RECORD_MODIFIED"},
	{ CSSMERR_DL_ENDOFDATA,"CSSMERR_DL_ENDOFDATA"},
	{ CSSMERR_DL_INVALID_QUERY,"CSSMERR_DL_INVALID_QUERY"},
	{ CSSMERR_DL_INVALID_VALUE,"CSSMERR_DL_INVALID_VALUE"},
	{ CSSMERR_DL_MULTIPLE_VALUES_UNSUPPORTED,"CSSMERR_DL_MULTIPLE_VALUES_UNSUPPORTED"},
	{ CSSMERR_DL_STALE_UNIQUE_RECORD,"CSSMERR_DL_STALE_UNIQUE_RECORD"},
	/* Error codes from cssmapple.h */
	{ CSSMERR_CSSM_NO_USER_INTERACTION,"CSSMERR_CSSM_NO_USER_INTERACTION"},
	{ CSSMERR_AC_NO_USER_INTERACTION,"CSSMERR_AC_NO_USER_INTERACTION"},
	{ CSSMERR_CSP_NO_USER_INTERACTION,"CSSMERR_CSP_NO_USER_INTERACTION"},
	{ CSSMERR_CL_NO_USER_INTERACTION,"CSSMERR_CL_NO_USER_INTERACTION"},
	{ CSSMERR_DL_NO_USER_INTERACTION,"CSSMERR_DL_NO_USER_INTERACTION"},
	{ CSSMERR_TP_NO_USER_INTERACTION,"CSSMERR_TP_NO_USER_INTERACTION"},
	{ CSSMERR_CSSM_USER_CANCELED,"CSSMERR_CSSM_USER_CANCELED"},
	{ CSSMERR_AC_USER_CANCELED,"CSSMERR_AC_USER_CANCELED"},
	{ CSSMERR_CSP_USER_CANCELED,"CSSMERR_CSP_USER_CANCELED"},
	{ CSSMERR_CL_USER_CANCELED,"CSSMERR_CL_USER_CANCELED"},
	{ CSSMERR_DL_USER_CANCELED,"CSSMERR_DL_USER_CANCELED"},
	{ CSSMERR_TP_USER_CANCELED,"CSSMERR_TP_USER_CANCELED"},
	{ CSSMERR_CSSM_SERVICE_NOT_AVAILABLE,"CSSMERR_CSSM_SERVICE_NOT_AVAILABLE"},
	{ CSSMERR_AC_SERVICE_NOT_AVAILABLE,"CSSMERR_AC_SERVICE_NOT_AVAILABLE"},
	{ CSSMERR_CSP_SERVICE_NOT_AVAILABLE,"CSSMERR_CSP_SERVICE_NOT_AVAILABLE"},
	{ CSSMERR_CL_SERVICE_NOT_AVAILABLE,"CSSMERR_CL_SERVICE_NOT_AVAILABLE"},
	{ CSSMERR_DL_SERVICE_NOT_AVAILABLE,"CSSMERR_DL_SERVICE_NOT_AVAILABLE"},
	{ CSSMERR_TP_SERVICE_NOT_AVAILABLE,"CSSMERR_TP_SERVICE_NOT_AVAILABLE"},
	{ CSSMERR_CSSM_INSUFFICIENT_CLIENT_IDENTIFICATION,"CSSMERR_CSSM_INSUFFICIENT_CLIENT_IDENTIFICATION"},
	{ CSSMERR_AC_INSUFFICIENT_CLIENT_IDENTIFICATION,"CSSMERR_AC_INSUFFICIENT_CLIENT_IDENTIFICATION"},
	{ CSSMERR_CSP_INSUFFICIENT_CLIENT_IDENTIFICATION,"CSSMERR_CSP_INSUFFICIENT_CLIENT_IDENTIFICATION"},
	{ CSSMERR_CL_INSUFFICIENT_CLIENT_IDENTIFICATION,"CSSMERR_CL_INSUFFICIENT_CLIENT_IDENTIFICATION"},
	{ CSSMERR_DL_INSUFFICIENT_CLIENT_IDENTIFICATION,"CSSMERR_DL_INSUFFICIENT_CLIENT_IDENTIFICATION"},
	{ CSSMERR_TP_INSUFFICIENT_CLIENT_IDENTIFICATION,"CSSMERR_TP_INSUFFICIENT_CLIENT_IDENTIFICATION"},
	{ CSSMERR_CSSM_DEVICE_RESET,"CSSMERR_CSSM_DEVICE_RESET"},
	{ CSSMERR_AC_DEVICE_RESET,"CSSMERR_AC_DEVICE_RESET"},
	{ CSSMERR_CSP_DEVICE_RESET,"CSSMERR_CSP_DEVICE_RESET"},
	{ CSSMERR_CL_DEVICE_RESET,"CSSMERR_CL_DEVICE_RESET"},
	{ CSSMERR_DL_DEVICE_RESET,"CSSMERR_DL_DEVICE_RESET"},
	{ CSSMERR_TP_DEVICE_RESET,"CSSMERR_TP_DEVICE_RESET"},
	{ CSSMERR_CSSM_DEVICE_FAILED,"CSSMERR_CSSM_DEVICE_FAILED"},
	{ CSSMERR_AC_DEVICE_FAILED,"CSSMERR_AC_DEVICE_FAILED"},
	{ CSSMERR_CSP_DEVICE_FAILED,"CSSMERR_CSP_DEVICE_FAILED"},
	{ CSSMERR_CL_DEVICE_FAILED,"CSSMERR_CL_DEVICE_FAILED"},
	{ CSSMERR_DL_DEVICE_FAILED,"CSSMERR_DL_DEVICE_FAILED"},
	{ CSSMERR_TP_DEVICE_FAILED,"CSSMERR_TP_DEVICE_FAILED"},
	{ CSSMERR_CSP_APPLE_ADD_APPLICATION_ACL_SUBJECT,"CSSMERR_CSP_APPLE_ADD_APPLICATION_ACL_SUBJECT"},
	{ CSSMERR_CSP_APPLE_PUBLIC_KEY_INCOMPLETE,"CSSMERR_CSP_APPLE_PUBLIC_KEY_INCOMPLETE"},
	{ CSSMERR_CSP_APPLE_SIGNATURE_MISMATCH,"CSSMERR_CSP_APPLE_SIGNATURE_MISMATCH"},
	{ CSSMERR_CSP_APPLE_INVALID_KEY_START_DATE,"CSSMERR_CSP_APPLE_INVALID_KEY_START_DATE"},
	{ CSSMERR_CSP_APPLE_INVALID_KEY_END_DATE,"CSSMERR_CSP_APPLE_INVALID_KEY_END_DATE"},
	{ CSSMERR_CSPDL_APPLE_DL_CONVERSION_ERROR,"CSSMERR_CSPDL_APPLE_DL_CONVERSION_ERROR"},
	{ CSSMERR_CSP_APPLE_SSLv2_ROLLBACK,"CSSMERR_CSP_APPLE_SSLv2_ROLLBACK"},
	{ CSSMERR_APPLEDL_INVALID_OPEN_PARAMETERS,"CSSMERR_APPLEDL_INVALID_OPEN_PARAMETERS"},
	{ CSSMERR_APPLEDL_DISK_FULL,"CSSMERR_APPLEDL_DISK_FULL"},
	{ CSSMERR_APPLEDL_QUOTA_EXCEEDED,"CSSMERR_APPLEDL_QUOTA_EXCEEDED"},
	{ CSSMERR_APPLEDL_FILE_TOO_BIG,"CSSMERR_APPLEDL_FILE_TOO_BIG"},
	{ CSSMERR_APPLEDL_INVALID_DATABASE_BLOB,"CSSMERR_APPLEDL_INVALID_DATABASE_BLOB"},
	{ CSSMERR_APPLEDL_INVALID_KEY_BLOB,"CSSMERR_APPLEDL_INVALID_KEY_BLOB"},
	{ CSSMERR_APPLEDL_INCOMPATIBLE_DATABASE_BLOB,"CSSMERR_APPLEDL_INCOMPATIBLE_DATABASE_BLOB"},
	{ CSSMERR_APPLEDL_INCOMPATIBLE_KEY_BLOB,"CSSMERR_APPLEDL_INCOMPATIBLE_KEY_BLOB"},
	{ CSSMERR_APPLETP_HOSTNAME_MISMATCH,"CSSMERR_APPLETP_HOSTNAME_MISMATCH"},
	{ CSSMERR_APPLETP_UNKNOWN_CRITICAL_EXTEN,"CSSMERR_APPLETP_UNKNOWN_CRITICAL_EXTEN"},
	{ CSSMERR_APPLETP_NO_BASIC_CONSTRAINTS,"CSSMERR_APPLETP_NO_BASIC_CONSTRAINTS"},
	{ CSSMERR_APPLETP_INVALID_CA,"CSSMERR_APPLETP_INVALID_CA"},
	{ CSSMERR_APPLETP_INVALID_AUTHORITY_ID,"CSSMERR_APPLETP_INVALID_AUTHORITY_ID"},
	{ CSSMERR_APPLETP_INVALID_SUBJECT_ID,"CSSMERR_APPLETP_INVALID_SUBJECT_ID"},
	{ CSSMERR_APPLETP_INVALID_KEY_USAGE,"CSSMERR_APPLETP_INVALID_KEY_USAGE"},
	{ CSSMERR_APPLETP_INVALID_EXTENDED_KEY_USAGE,"CSSMERR_APPLETP_INVALID_EXTENDED_KEY_USAGE"},
	{ CSSMERR_APPLETP_INVALID_ID_LINKAGE,"CSSMERR_APPLETP_INVALID_ID_LINKAGE"},
	{ CSSMERR_APPLETP_PATH_LEN_CONSTRAINT,"CSSMERR_APPLETP_PATH_LEN_CONSTRAINT"},
	{ CSSMERR_APPLETP_INVALID_ROOT,"CSSMERR_APPLETP_INVALID_ROOT"},
	{ CSSMERR_APPLETP_CRL_EXPIRED,"CSSMERR_APPLETP_CRL_EXPIRED"},
	{ CSSMERR_APPLETP_CRL_NOT_VALID_YET,"CSSMERR_APPLETP_CRL_NOT_VALID_YET"},
	{ CSSMERR_APPLETP_CRL_NOT_FOUND,"CSSMERR_APPLETP_CRL_NOT_FOUND"},
	{ CSSMERR_APPLETP_CRL_SERVER_DOWN,"CSSMERR_APPLETP_CRL_SERVER_DOWN"},
	{ CSSMERR_APPLETP_CRL_BAD_URI,"CSSMERR_APPLETP_CRL_BAD_URI"},
	{ CSSMERR_APPLETP_UNKNOWN_CERT_EXTEN,"CSSMERR_APPLETP_UNKNOWN_CERT_EXTEN"},
	{ CSSMERR_APPLETP_UNKNOWN_CRL_EXTEN,"CSSMERR_APPLETP_UNKNOWN_CRL_EXTEN"},
	{ CSSMERR_APPLETP_CRL_NOT_TRUSTED,"CSSMERR_APPLETP_CRL_NOT_TRUSTED"},
	{ CSSMERR_APPLETP_CRL_INVALID_ANCHOR_CERT,"CSSMERR_APPLETP_CRL_INVALID_ANCHOR_CERT"},
	{ CSSMERR_APPLETP_CRL_POLICY_FAIL,"CSSMERR_APPLETP_CRL_POLICY_FAIL"},
	{ CSSMERR_APPLETP_IDP_FAIL,"CSSMERR_APPLETP_IDP_FAIL"},
	{ CSSMERR_APPLETP_CERT_NOT_FOUND_FROM_ISSUER,"CSSMERR_APPLETP_CERT_NOT_FOUND_FROM_ISSUER"},
	{ CSSMERR_APPLETP_BAD_CERT_FROM_ISSUER,"CSSMERR_APPLETP_BAD_CERT_FROM_ISSUER"},
	{ CSSMERR_APPLETP_SMIME_EMAIL_ADDRS_NOT_FOUND,"CSSMERR_APPLETP_SMIME_EMAIL_ADDRS_NOT_FOUND"},
	{ CSSMERR_APPLETP_SMIME_BAD_EXT_KEY_USE,"CSSMERR_APPLETP_SMIME_BAD_EXT_KEY_USE"},
	{ CSSMERR_APPLETP_SMIME_BAD_KEY_USE,"CSSMERR_APPLETP_SMIME_BAD_KEY_USE"},
	{ CSSMERR_APPLETP_SMIME_KEYUSAGE_NOT_CRITICAL,"CSSMERR_APPLETP_SMIME_KEYUSAGE_NOT_CRITICAL"},
	{ CSSMERR_APPLETP_SMIME_NO_EMAIL_ADDRS,"CSSMERR_APPLETP_SMIME_NO_EMAIL_ADDRS"},
	{ CSSMERR_APPLETP_SMIME_SUBJ_ALT_NAME_NOT_CRIT,"CSSMERR_APPLETP_SMIME_SUBJ_ALT_NAME_NOT_CRIT"},
	{ CSSMERR_APPLETP_SSL_BAD_EXT_KEY_USE,"CSSMERR_APPLETP_SSL_BAD_EXT_KEY_USE"},
	{ CSSMERR_APPLETP_OCSP_BAD_RESPONSE,"CSSMERR_APPLETP_OCSP_BAD_RESPONSE"},
	{ CSSMERR_APPLETP_OCSP_BAD_REQUEST,"CSSMERR_APPLETP_OCSP_BAD_REQUEST"},
	{ CSSMERR_APPLETP_OCSP_UNAVAILABLE,"CSSMERR_APPLETP_OCSP_UNAVAILABLE"},
	{ CSSMERR_APPLETP_OCSP_STATUS_UNRECOGNIZED,"CSSMERR_APPLETP_OCSP_STATUS_UNRECOGNIZED"},
	{ CSSMERR_APPLETP_INCOMPLETE_REVOCATION_CHECK,"CSSMERR_APPLETP_INCOMPLETE_REVOCATION_CHECK"},
	{ CSSMERR_APPLETP_NETWORK_FAILURE,"CSSMERR_APPLETP_NETWORK_FAILURE"},
	{ CSSMERR_APPLETP_OCSP_NOT_TRUSTED,"CSSMERR_APPLETP_OCSP_NOT_TRUSTED"},
	{ CSSMERR_APPLETP_OCSP_INVALID_ANCHOR_CERT,"CSSMERR_APPLETP_OCSP_INVALID_ANCHOR_CERT"},
	{ CSSMERR_APPLETP_OCSP_SIG_ERROR,"CSSMERR_APPLETP_OCSP_SIG_ERROR"},
	{ CSSMERR_APPLETP_OCSP_NO_SIGNER,"CSSMERR_APPLETP_OCSP_NO_SIGNER"},
	{ CSSMERR_APPLETP_OCSP_RESP_MALFORMED_REQ,"CSSMERR_APPLETP_OCSP_RESP_MALFORMED_REQ"},
	{ CSSMERR_APPLETP_OCSP_RESP_INTERNAL_ERR,"CSSMERR_APPLETP_OCSP_RESP_INTERNAL_ERR"},
	{ CSSMERR_APPLETP_OCSP_RESP_TRY_LATER,"CSSMERR_APPLETP_OCSP_RESP_TRY_LATER"},
	{ CSSMERR_APPLETP_OCSP_RESP_SIG_REQUIRED,"CSSMERR_APPLETP_OCSP_RESP_SIG_REQUIRED"},
	{ CSSMERR_APPLETP_OCSP_RESP_UNAUTHORIZED,"CSSMERR_APPLETP_OCSP_RESP_UNAUTHORIZED"},
	{ CSSMERR_APPLETP_OCSP_NONCE_MISMATCH,"CSSMERR_APPLETP_OCSP_NONCE_MISMATCH"},
	{ CSSMERR_APPLETP_CS_BAD_CERT_CHAIN_LENGTH,"CSSMERR_APPLETP_CS_BAD_CERT_CHAIN_LENGTH"},
	{ CSSMERR_APPLETP_CS_NO_BASIC_CONSTRAINTS,"CSSMERR_APPLETP_CS_NO_BASIC_CONSTRAINTS"},
	{ CSSMERR_APPLETP_CS_BAD_PATH_LENGTH,"CSSMERR_APPLETP_CS_BAD_PATH_LENGTH"},
	{ CSSMERR_APPLETP_CS_NO_EXTENDED_KEY_USAGE,"CSSMERR_APPLETP_CS_NO_EXTENDED_KEY_USAGE"},
	{ CSSMERR_APPLETP_CODE_SIGN_DEVELOPMENT,"CSSMERR_APPLETP_CODE_SIGN_DEVELOPMENT"},
	{ CSSMERR_APPLETP_RS_BAD_CERT_CHAIN_LENGTH,"CSSMERR_APPLETP_RS_BAD_CERT_CHAIN_LENGTH"},
	{ CSSMERR_APPLETP_RS_BAD_EXTENDED_KEY_USAGE,"CSSMERR_APPLETP_RS_BAD_EXTENDED_KEY_USAGE"},
	{ CSSMERR_APPLETP_TRUST_SETTING_DENY,"CSSMERR_APPLETP_TRUST_SETTING_DENY"},
	{ CSSMERR_APPLETP_INVALID_EMPTY_SUBJECT,"CSSMERR_APPLETP_INVALID_EMPTY_SUBJECT"},
	{ CSSMERR_APPLETP_UNKNOWN_QUAL_CERT_STATEMENT,"CSSMERR_APPLETP_UNKNOWN_QUAL_CERT_STATEMENT"},
	{ CSSMERR_APPLE_DOTMAC_REQ_QUEUED,"CSSMERR_APPLE_DOTMAC_REQ_QUEUED"},
	{ CSSMERR_APPLE_DOTMAC_REQ_REDIRECT,"CSSMERR_APPLE_DOTMAC_REQ_REDIRECT"},
	{ CSSMERR_APPLE_DOTMAC_REQ_SERVER_ERR,"CSSMERR_APPLE_DOTMAC_REQ_SERVER_ERR"},
	{ CSSMERR_APPLE_DOTMAC_REQ_SERVER_PARAM,"CSSMERR_APPLE_DOTMAC_REQ_SERVER_PARAM"},
	{ CSSMERR_APPLE_DOTMAC_REQ_SERVER_AUTH,"CSSMERR_APPLE_DOTMAC_REQ_SERVER_AUTH"},
	{ CSSMERR_APPLE_DOTMAC_REQ_SERVER_UNIMPL,"CSSMERR_APPLE_DOTMAC_REQ_SERVER_UNIMPL"},
	{ CSSMERR_APPLE_DOTMAC_REQ_SERVER_NOT_AVAIL,"CSSMERR_APPLE_DOTMAC_REQ_SERVER_NOT_AVAIL"},
	{ CSSMERR_APPLE_DOTMAC_REQ_SERVER_ALREADY_EXIST,"CSSMERR_APPLE_DOTMAC_REQ_SERVER_ALREADY_EXIST"},
	{ CSSMERR_APPLE_DOTMAC_REQ_SERVER_SERVICE_ERROR,"CSSMERR_APPLE_DOTMAC_REQ_SERVER_SERVICE_ERROR"},
	{ CSSMERR_APPLE_DOTMAC_REQ_IS_PENDING,"CSSMERR_APPLE_DOTMAC_REQ_IS_PENDING"},
	{ CSSMERR_APPLE_DOTMAC_NO_REQ_PENDING,"CSSMERR_APPLE_DOTMAC_NO_REQ_PENDING"},
	{0, NULL}
};
