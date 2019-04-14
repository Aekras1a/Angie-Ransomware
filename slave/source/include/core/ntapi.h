#ifndef __INCLUDE_CORE_NTAPI_H
#define __INCLUDE_CORE_NTAPI_H

#define NTAPISTUB     \
    DECLSPEC_NAKED    \
    DECLSPEC_NOINLINE \
    NTAPI

NTSTATUS
NTAPISTUB
NtAllocateVirtualMemory(
    IN HANDLE    ProcessHandle,
    IO PVOID    *BaseAddress,
    IN ULONG_PTR ZeroBits,
    IO PSIZE_T   RegionSize,
    IN ULONG     AllocationType,
    IN ULONG     Protect
    );

NTSTATUS
NTAPISTUB
NtFreeVirtualMemory(
    IN HANDLE   ProcessHandle,
    IN PVOID   *BaseAddress,
    IO PSIZE_T  RegionSize,
    IN ULONG    FreeType
    );

NTSTATUS
NTAPISTUB
NtCreateThreadEx(
    OUT     HANDLE      hThread,
    IN      ACCESS_MASK DesiredAccess,
    IN  OPT POBJECT_ATTRIBUTES ObjectAttributes,
    IN      HANDLE      ProcessHandle,
    IN      PVOID       StartAddress,
    IN  OPT PVOID       Arguments,
    IN      ULONG       CreateFlags,
    IN      ULONG       StackZeroBits,
    IN      ULONG       SizeOfStackCommit,
    IN      ULONG       SizeOfStackReserve,
    IN  OPT PPS_ATTRIBUTE_LIST AttributeList
    );

NTSTATUS
NTAPISTUB
NtCreateFile(
    OUT PHANDLE            FileHandle,
    IN  ACCESS_MASK        DesiredAccess,
    IN  POBJECT_ATTRIBUTES ObjectAttributes,
    OUT PIO_STATUS_BLOCK   IoStatusBlock,
    IN  PLARGE_INTEGER     AllocationSize,
    IN  ULONG              FileAttributes,
    IN  ULONG              ShareAccess,
    IN  ULONG              CreateDisposition,
    IN  ULONG              CreateOptions,
    IN  PVOID              EaBuffer,
    IN  ULONG              EaLength
    );

NTSTATUS
NTAPISTUB
NtClose(
    IN HANDLE Handle
    );

NTSTATUS
NTAPISTUB
NtCreateMutant(
    OUT     PHANDLE             MutantHandle,
    IN      ACCESS_MASK         DesiredAccess,
    IN  OPT POBJECT_ATTRIBUTES  ObjectAttributes,
    IN      BOOLEAN             InitialOwner
    );

NTSTATUS
NTAPISTUB
NtOpenMutant(
    OUT PHANDLE            MutantHandle,
    IN  ACCESS_MASK        DesiredAccess,
    IN  POBJECT_ATTRIBUTES ObjectAttributes
    );

NTSTATUS
NTAPISTUB
NtDelayExecution(
    IN BOOLEAN        Alertable,
    IN PLARGE_INTEGER DelayInterval
    );

NTSTATUS
NTAPISTUB
NtOpenKey(
    OUT PHANDLE            KeyHandle,
    IN  ACCESS_MASK        DesiredAccess,
    IN  POBJECT_ATTRIBUTES ObjectAttributes
    );

NTSTATUS
NTAPISTUB
NtQueryValueKey(
    IN  HANDLE                      KeyHandle,
    IN  PUNICODE_STRING             ValueName,
    IN  KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
    OUT PVOID                       KeyValueInformation,
    IN  ULONG                       Length,
    OUT PULONG                      ResultLength
    );

#include <winreg.h>

#endif