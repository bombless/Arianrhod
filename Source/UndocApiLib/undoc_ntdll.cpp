#pragma comment(linker, "/SECTION:.text,ERW /MERGE:.rdata=.text /MERGE:.data=.text")
#pragma comment(linker, "/SECTION:.Amano,ERW /MERGE:.text=.Amano")

#include "MyLibrary.h"

_ML_C_HEAD_

int __cdecl _snwprintf(wchar_t * _DstBuf, size_t _MaxCount, const wchar_t * _Format, ...)
{
    return 0;
}

VOID
NTAPI
KiUserCallbackDispatcher(
    ULONG_PTR,
    ULONG_PTR   apfnDispatchIndex,
    PVOID       Parameter
)
{
}

NTSTATUS
NTAPI
RtlUnicodeToUTF8N(
    OUT PSTR    UTF8StringDestination,
    IN  ULONG   UTF8StringMaxByteCount,
    OUT PULONG  UTF8StringActualByteCount,
    IN  PCWSTR  UnicodeStringSource,
    IN  ULONG   UnicodeStringByteCount
)
{
    return 0;
}

NTSTATUS
NTAPI
RtlUTF8ToUnicodeN(
    OUT PWSTR   UnicodeStringDestination,
    IN  ULONG   UnicodeStringMaxByteCount,
    OUT PULONG  UnicodeStringActualByteCount,
    IN  PCSTR   UTF8StringSource,
    IN  ULONG   UTF8StringByteCount
)
{
    return 0;
}

NTSTATUS
NTAPI
LdrResSearchResource(
    PVOID       DllHandle,
    PULONG_PTR  ResourceIdPath,
    ULONG       ResourceIdPathLength,
    ULONG       Flags,
    PVOID*      Resource,
    PULONG      Size,
    PVOID       Reserve1,
    PVOID       Reserve2
)
{
    return 0;
}

NTSTATUS
NTAPI
NtGetNextProcess(
    IN  HANDLE      ProcessHandle,
    IN  ACCESS_MASK DesiredAccess,
    IN  ULONG       HandleAttributes,
    IN  ULONG       Flags,
    OUT PHANDLE     NewProcessHandle
)
{
    return 0;
}

NTSTATUS
NTAPI
ZwGetNextProcess(
    IN  HANDLE      ProcessHandle,
    IN  ACCESS_MASK DesiredAccess,
    IN  ULONG       HandleAttributes,
    IN  ULONG       Flags,
    OUT PHANDLE     NewProcessHandle
)
{
    return 0;
}

NTSTATUS
NTAPI
NtGetNextThread(
    IN  HANDLE      ProcessHandle,
    IN  HANDLE      ThreadHandle,
    IN  ACCESS_MASK DesiredAccess,
    IN  ULONG       HandleAttributes,
    IN  ULONG       Flags,
    OUT PHANDLE     NewThreadHandle
)
{
    return 0;
}

NTSTATUS
NTAPI
ZwGetNextThread(
    IN  HANDLE      ProcessHandle,
    IN  HANDLE      ThreadHandle,
    IN  ACCESS_MASK DesiredAccess,
    IN  ULONG       HandleAttributes,
    IN  ULONG       Flags,
    OUT PHANDLE     NewThreadHandle
)
{
    return 0;
}

int __cdecl _vscwprintf (
        const wchar_t *format,
        va_list ap
        )
{
    return 0;
}

NTSTATUS
NTAPI
NtInitializeNlsFiles(
    OUT PVOID*          BaseAddress,
    OUT PLCID           DefaultLocaleId,
    OUT PLARGE_INTEGER  DefaultCasingTableSize
)
{
    return 0;
}

NTSTATUS
NTAPI
LdrRegisterDllNotification(
    IN  ULONG                           Flags,
    IN  PLDR_DLL_NOTIFICATION_FUNCTION  NotificationFunction,
    IN  PVOID                           Context OPTIONAL,
    OUT PVOID*                          Cookie
)
{
    return 0;
}

NTSTATUS
NTAPI
LdrUnregisterDllNotification(
    IN PVOID Cookie
)
{
    return 0;
}

BOOLEAN
NTAPI
RtlDosPathNameToRelativeNtPathName_U(
    IN  PWSTR                   DosFileName,
    OUT PUNICODE_STRING         NtFileName,
    OUT PWSTR*                  FilePart OPTIONAL,
    OUT PRTL_RELATIVE_NAME_U    RelativeName OPTIONAL
){return 0;}

NTSTATUS
NTAPI
RtlWow64EnableFsRedirectionEx(
    BOOL    Enable,
    PBOOL   PreviousState
)
{
    return 0;
}

VOID NTAPI DbgBreakPoint(){}

VOID
NTAPI
RtlSetUnhandledExceptionFilter(
    LPTOP_LEVEL_EXCEPTION_FILTER TopLevelExceptionFilter
)
{
}

BOOL
NTAPI
RtlQueryPerformanceCounter(
    OUT PLARGE_INTEGER PerformanceCount
)
{
    return 0;
}

void* __cdecl _memset(void * _Dst, int _Val, size_t _Size)
{
    return 0;
}

void* __cdecl _memcpy(void *dest, const void *src, size_t count)
{
    return 0;
}

int __cdecl _vsnwprintf (
    wchar_t *string,
    size_t count,
    const wchar_t *format,
    va_list ap
)
{
    return 0;
}

NTSTATUS
NTAPI
RtlWow64EnableFsRedirection(
    BOOLEAN Enable
)
{
    return 0;
}

VOID NTAPI LdrInitializeThunk(PCONTEXT ThreadContext, PVOID NtdllBase)
{
    ;
}

VOID FASTCALL KiFastSystemCall()
{
}

PVOID NTAPI RtlAddVectoredContinueHandler(IN LONG FirstHandler, IN PVECTORED_EXCEPTION_HANDLER Handler)
{
    return 0;
}

ULONG NTAPI RtlRemoveVectoredContinueHandler(IN PVOID Handler)
{
    return 0;
}

ULONG64 NTAPI NtGetTickCount()
{
    return 0;
}

NTSTATUS
NTAPI
NtCreateKey(
    OUT PHANDLE             KeyHandle,
    IN  ACCESS_MASK         DesiredAccess,
    IN  POBJECT_ATTRIBUTES  ObjectAttributes,
    IN  ULONG               TitleIndex,
    IN  PUNICODE_STRING     Class OPTIONAL,
    IN  ULONG               CreateOptions,
    OUT PULONG              Disposition OPTIONAL
)
{
    return 0;
}

NTSTATUS
NTAPI
NtSetValueKey(
    IN  HANDLE          KeyHandle,
    IN  PUNICODE_STRING ValueName,
    IN  ULONG           TitleIndex OPTIONAL,
    IN  ULONG           ValueType,
    IN  LPCVOID         ValueData OPTIONAL,
    IN  ULONG           ValueDataSize
)
{
    return 0;
}

VOID
NTAPI
A_SHAInit(
    PRTL_SHA_CTX ShaContext
)
{
}

VOID
NTAPI
A_SHAUpdate(
    PRTL_SHA_CTX    ShaContext,
    PVOID           Buffer,
    ULONG           BufferSize
)
{
}

VOID
NTAPI
A_SHAFinal(
    PRTL_SHA_CTX ShaContext,
    PRTL_SHA_DIG Digest
)
{
}

VOID
NTAPI
MD5Init(
    OUT PRTL_MD5_CTX Context
)
{
}

VOID
NTAPI
MD5Update(
    IN OUT  PRTL_MD5_CTX    Context,
    IN      PVOID           Buffer,
    IN      ULONG           BufferSize
)
{
}

VOID
NTAPI
MD5Final(
    IN OUT  PRTL_MD5_CTX Context
)
{
}

NTSTATUS
NTAPI
NtCreateUserProcess(
    PHANDLE                         ProcessHandle,
    PHANDLE                         ThreadHandle,
    ACCESS_MASK                     ProcessDesiredAccess,
    ACCESS_MASK                     ThreadDesiredAccess,
    POBJECT_ATTRIBUTES              ProcessObjectAttributes OPTIONAL,
    POBJECT_ATTRIBUTES              ThreadObjectAttributes OPTIONAL,
    ULONG                           ProcessFlags,                   // PROCESS_CREATE_FLAGS_*
    ULONG                           ThreadFlags,                    // THREAD_CREATE_FLAGS_*
    PRTL_USER_PROCESS_PARAMETERS    ProcessParameters,
    PPS_CREATE_INFO                 CreateInfo,
    PPS_ATTRIBUTE_LIST              AttributeList
)
{
    return 0;
}

NTSTATUS
NTAPI
NtCreateThreadEx(
    OUT PHANDLE             ThreadHandle,
    IN  ACCESS_MASK         DesiredAccess,
    IN  POBJECT_ATTRIBUTES  ObjectAttributes OPTIONAL,
    IN  HANDLE              ProcessHandle,
    IN  PVOID               StartRoutine,
    IN  PVOID               Argument OPTIONAL,
    IN  ULONG               CreateFlags, // THREAD_CREATE_FLAGS_*
    IN  ULONG_PTR           ZeroBits OPTIONAL,
    IN  ULONG_PTR           StackSize OPTIONAL,
    IN  ULONG_PTR           MaximumStackSize OPTIONAL,
    IN  PPS_ATTRIBUTE_LIST  AttributeList OPTIONAL
)
{
    return 0;
}

_ML_C_TAIL_
