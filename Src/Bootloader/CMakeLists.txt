#
#   Copyright (C) NullPotOS Project.
#   All rights reserved.
#
#   Follow GNU-GPL 3.0
#

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_ASM_FLAGS "-target x86_64-pc-win32-coff")
set(CMAKE_CXX_FLAGS "-target x86_64-pc-win32-coff -D__ELF__ -D__EDKII_GLUE__ -ffreestanding -fno-builtin -mno-mmx -mno-sse")

set(CMAKE_EXE_LINKER_FLAGS "-nostdlib -Wl,-entry:BootloaderMain -Wl,-subsystem:efi_application -fuse-ld=lld")

add_executable(BOOTX64.EFI Bootloader.cpp)

set_target_properties(BOOTX64.EFI PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/Image/EFI/BOOT"
)

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/Image/EFI/BOOT)