#
#   Copyright (C) NullPotOS Project.
#   All rights reserved.
#
#   Follow GNU-GPL 3.0
#

set(CMAKE_CXX_FLAGS "-O3 -nostdlib -fno-stack-protector -fshort-wchar -mno-red-zone")
add_executable(Bootloader.efi Bootloader.cpp)