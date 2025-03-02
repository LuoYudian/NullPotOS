/*
 *   Copyright (C) NullPotOS Project.
 *   All rights reserved.
 *
 *   Follow GNU-GPL 3.0
 */

#include <efi.h>
#include <efilib.h>

extern "C" EFI_STATUS EFIAPI BootloaderMain(IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE *SystemTable) {
    
    SystemTable->ConOut->ClearScreen(SystemTable->ConOut);
    SystemTable->ConOut->OutputString(SystemTable->ConOut, (CHAR16 *)L"NullPotOS Bootloader");

    SystemTable->BootServices->ExitBootServices(ImageHandle, 0);

    while (true) {
    }
}