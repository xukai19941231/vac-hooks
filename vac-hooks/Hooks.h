#pragma once

#include <Windows.h>
#define SECURITY_WIN32
#include <security.h>

HMODULE  WINAPI     Hooks_LoadLibraryExW(LPCWSTR, HANDLE, DWORD);
FARPROC  WINAPI     Hooks_GetProcAddress(HMODULE, LPCSTR);
HANDLE   WINAPI     Hooks_OpenProcess(DWORD, BOOL, DWORD);
DWORD    WINAPI     Hooks_GetProcessImageFileNameA(HANDLE, LPSTR, DWORD);
DWORD    WINAPI     Hooks_GetProcessImageFileNameW(HANDLE, LPWSTR, DWORD);
int      WINAPI     Hooks_GetWindowTextW(HWND, LPWSTR, int);
BOOL     WINAPI     Hooks_QueryFullProcessImageNameW(HANDLE, DWORD, LPWSTR, PDWORD);
DWORD    WINAPI     Hooks_GetModuleBaseNameA(HANDLE, HMODULE, LPSTR, DWORD);
DWORD    WINAPI     Hooks_GetModuleBaseNameW(HANDLE, HMODULE, LPWSTR, DWORD);
DWORD    WINAPI     Hooks_GetModuleFileNameA(HMODULE, LPSTR, DWORD);
DWORD    WINAPI     Hooks_GetModuleFileNameExA(HANDLE, HMODULE, LPSTR, DWORD);
DWORD    WINAPI     Hooks_GetModuleFileNameExW(HANDLE, HMODULE, LPWSTR, DWORD);
BOOL     WINAPI     Hooks_GetComputerNameExW(COMPUTER_NAME_FORMAT, LPWSTR, LPDWORD);
HANDLE   WINAPI     Hooks_CreateRemoteThread(HANDLE, LPSECURITY_ATTRIBUTES, SIZE_T, LPTHREAD_START_ROUTINE, LPVOID, DWORD, LPDWORD);
NTSTATUS NTAPI      Hooks_NtOpenProcess(PHANDLE, ACCESS_MASK, PVOID, PVOID);
BOOL     WINAPI     Hooks_ReadProcessMemory(HANDLE, LPCVOID, LPVOID, SIZE_T, SIZE_T*);
BOOL     WINAPI     Hooks_WriteProcessMemory(HANDLE, LPVOID, LPCVOID, SIZE_T, SIZE_T*);
int      WINAPI     Hooks_MultiByteToWideChar(UINT, DWORD, LPCCH, int, LPWSTR, int);
BOOLEAN  SEC_ENTRY  Hooks_GetUserNameExW(EXTENDED_NAME_FORMAT, LPWSTR, PULONG);
UINT     WINAPI     Hooks_GetDriveTypeW(LPCWSTR);
LSTATUS  APIENTRY   Hooks_RegEnumKeyExA(HKEY, DWORD, LPSTR, LPDWORD, LPDWORD, LPSTR, LPDWORD, PFILETIME);
LSTATUS  APIENTRY   Hooks_RegOpenKeyExA(HKEY, LPCSTR, DWORD, REGSAM, PHKEY);
LSTATUS  APIENTRY   Hooks_RegCloseKey(HKEY);
LSTATUS  APIENTRY   Hooks_RegQueryInfoKeyA(HKEY, LPSTR, LPDWORD, LPDWORD, LPDWORD, LPDWORD, LPDWORD, LPDWORD, LPDWORD, LPDWORD, LPDWORD, PFILETIME);
LSTATUS  APIENTRY   Hooks_RegQueryValueExA(HKEY, LPCSTR, LPDWORD, LPDWORD, LPBYTE, LPDWORD);
VOID     WINAPI     Hooks_OutputDebugStringA(LPCSTR);
BOOL     APIENTRY   Hooks_GetFileVersionInfoA(LPCSTR, DWORD, DWORD, LPVOID);
BOOL     APIENTRY   Hooks_GetFileVersionInfoW(LPCWSTR, DWORD, DWORD, LPVOID);
DWORD    APIENTRY   Hooks_GetFileVersionInfoSizeA(LPCSTR, LPDWORD);
DWORD    APIENTRY   Hooks_GetFileVersionInfoSizeW(LPCWSTR, LPDWORD);
DWORD    WINAPI     Hooks_GetFileSize(HANDLE, LPDWORD);
BOOL     WINAPI     Hooks_GetFileSizeEx(HANDLE, PLARGE_INTEGER);
BOOL     WINAPI     Hooks_GetWindowInfo(HWND, PWINDOWINFO);
UINT     WINAPI     Hooks_GetWindowsDirectoryA(LPSTR, UINT);
UINT     WINAPI     Hooks_GetWindowsDirectoryW(LPWSTR, UINT);
HMODULE  WINAPI     Hooks_GetModuleHandleA(LPCSTR);
PVOID    WINAPI     Hooks_AddVectoredExceptionHandler(ULONG, PVECTORED_EXCEPTION_HANDLER);
BOOL     WINAPI     Hooks_AdjustTokenPrivileges(HANDLE, BOOL, PTOKEN_PRIVILEGES, DWORD, PTOKEN_PRIVILEGES, PDWORD);
DWORD    WINAPI     Hooks_CertGetNameStringW(PCCERT_CONTEXT, DWORD, DWORD, void*, LPWSTR, DWORD);
HANDLE   WINAPI     Hooks_CreateFileA(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
HANDLE   WINAPI     Hooks_CreateFileW(LPCWSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
HANDLE   WINAPI     Hooks_GetCurrentProcess(VOID);
DWORD    WINAPI     Hooks_GetCurrentProcessId(VOID);
HANDLE   WINAPI     Hooks_GetCurrentThread(VOID);
DWORD    WINAPI     Hooks_GetCurrentThreadId(VOID);
HANDLE   WINAPI     Hooks_CreateToolhelp32Snapshot(DWORD, DWORD);
BOOL     WINAPI     Hooks_EnumChildWindows(HWND, WNDENUMPROC, LPARAM);
BOOL     WINAPI     Hooks_EnumProcesses(DWORD*, DWORD, LPDWORD);
BOOL     WINAPI     Hooks_EnumWindows(WNDENUMPROC, LPARAM);
BOOL     WINAPI     Hooks_GetProcessTimes(HANDLE, LPFILETIME, LPFILETIME, LPFILETIME, LPFILETIME);
DWORD    WINAPI     Hooks_WaitForSingleObject(HANDLE, DWORD);
LPVOID   WINAPI     Hooks_VirtualAlloc(LPVOID, SIZE_T, DWORD, DWORD);
LPVOID   WINAPI     Hooks_VirtualAllocEx(HANDLE, LPVOID, SIZE_T, DWORD, DWORD);
BOOL     WINAPI     Hooks_VirtualFree(LPVOID, SIZE_T, DWORD);
BOOL     WINAPI     Hooks_VirtualFreeEx(HANDLE, LPVOID, SIZE_T, DWORD);
BOOL     WINAPI     Hooks_VirtualProtect(LPVOID, SIZE_T, DWORD, PDWORD);
SIZE_T   WINAPI     Hooks_VirtualQuery(LPCVOID, PMEMORY_BASIC_INFORMATION, SIZE_T);
SIZE_T   WINAPI     Hooks_VirtualQueryEx(HANDLE, LPCVOID, PMEMORY_BASIC_INFORMATION, SIZE_T);
DWORD    WINAPI     Hooks_SuspendThread(HANDLE);
BOOL     WINAPI     Hooks_SwitchToThread(VOID);
