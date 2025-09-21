#include "include_cheat.h"
#include "misc/MinHook.h"

extern "C" _PIFV* __xi_a;
extern "C" _PIFV* __xi_z;
extern "C" _PVFV* __xc_a;
extern "C" _PVFV* __xc_z;

LONG WINAPI ExceptionHandler(_EXCEPTION_POINTERS* ExceptionInfo) {
    if (ExceptionInfo->ExceptionRecord->ExceptionCode == STATUS_INVALID_DISPOSITION)
        return EXCEPTION_CONTINUE_SEARCH;

    if (ExceptionInfo->ExceptionRecord->ExceptionCode == STATUS_BREAKPOINT)
        return EXCEPTION_CONTINUE_SEARCH;

    if (ExceptionInfo->ExceptionRecord->ExceptionCode >= STATUS_GUARD_PAGE_VIOLATION) {
        std::string exception;
        MEMORY_BASIC_INFORMATION mem;

        char file[MAX_PATH] = { 0 };
        std::string fileStr;

        if (VirtualQuery(ExceptionInfo->ExceptionRecord->ExceptionAddress, &mem, sizeof(mem))) {
            GetModuleFileNameA((HMODULE)mem.AllocationBase, file, MAX_PATH);

            file[MAX_PATH - 1] = '\0';
            fileStr = std::string(file);

            exception += std::format("Image: {}\nImage base: 0x{:X}\n\n", file, (uint64_t)mem.AllocationBase);
        }

        if (fileStr.find("msvcp140.dll") != std::string::npos or fileStr.find("MSVCP140.dll") != std::string::npos) {
            MessageBoxA(nullptr, "Issue found with msvcp140.dll!\nPlease make sure you have installed it correctly.", "Error", MB_TOPMOST | MB_ICONERROR | MB_OK);
            TerminateProcess(reinterpret_cast<HANDLE>(-1), 0);
        }

        if (fileStr.find("vcruntime140.dll") != std::string::npos or fileStr.find("VCRUNTIME140.dll") != std::string::npos) {
            MessageBoxA(nullptr, "Issue found with vcruntime140.dll!\nPlease make sure you have installed it correctly.", "Error", MB_TOPMOST | MB_ICONERROR | MB_OK);
            TerminateProcess(reinterpret_cast<HANDLE>(-1), 0);
        }

        exception += std::format("EAX: 0x{:X}\nEBX: 0x{:X}\nECX: 0x{:X}\nEDX: 0x{:X}\nESP: 0x{:X}\nEBP: 0x{:X}\nESI: 0x{:X}\nEDI: 0x{:X}\n\nException code: 0x{:X}\nException address: 0x{:X}", ExceptionInfo->ContextRecord->Eax, ExceptionInfo->ContextRecord->Ebx, ExceptionInfo->ContextRecord->Ecx, ExceptionInfo->ContextRecord->Edx, ExceptionInfo->ContextRecord->Esp, ExceptionInfo->ContextRecord->Ebp, ExceptionInfo->ContextRecord->Esi, ExceptionInfo->ContextRecord->Edi, ExceptionInfo->ExceptionRecord->ExceptionCode, (uint64_t)ExceptionInfo->ExceptionRecord->ExceptionAddress);
        MessageBoxA(nullptr, exception.c_str(), ("Error"), MB_TOPMOST | MB_ICONERROR | MB_OK);

        TerminateProcess(reinterpret_cast<HANDLE>(-1), 0);
    }
    else
        return EXCEPTION_CONTINUE_SEARCH;
    return EXCEPTION_CONTINUE_EXECUTION;
}

void __stdcall main() { init::on_startup(); }
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReason, LPVOID lpReserved) {
    switch (ulReason) {
    case DLL_PROCESS_ATTACH:
        AllocConsole();
        freopen_s(reinterpret_cast<FILE**>(stdin), "CONIN$", "r", stdin);
        freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);



        AddVectoredExceptionHandler(false, ExceptionHandler);
        CreateThread(0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(main), hModule, 0, 0);
    }
    return TRUE;
}