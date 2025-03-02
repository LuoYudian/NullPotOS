#
#   Copyright (C) NullPotOS Project.
#   All rights reserved.
#
#   Follow GNU-GPL 3.0
#

# Check the CMake version
cmake_minimum_required(VERSION 3.28)

# Set the project name
project(NullPotOS)

# Check the host system
if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
    message("Building on Linux")
else()
    message(FATAL_ERROR "OS is not Linux.")
    message(FATAL_ERROR "${PROJECT_NAME} build is need Linux OS.")
endif()

# Enable language
enable_language(C)
enable_language(CXX)
enable_language(ASM)

# Set the C and C++ compilers
set(CMAKE_C_COMPILER /usr/bin/clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

# Set the C/C++ standard
set(CMAKE_C_STANDARD 26)
set(CMAKE_CXX_STANDARD 26)

add_compile_options(-O3)
add_compile_options(-nostdlib)
set(CMAKE_CXX_FLAGS "-O3 -nostdlib")

# Set the include directories
include_directories(Src/Includes)
include_directories(Src/Includes/Firmware/Uefi)

# Add the source files
add_subdirectory(Src)

add_custom_target(
    run 

    COMMAND qemu-system-x86_64 -bios ../Assets/Firmware/Uefi.fd -m 2048    
)