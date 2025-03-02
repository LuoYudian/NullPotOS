# NullPotOS Project

## Description

NullPotOS is an Unix-like operating system.

NullPotOS is use NullPotOS Kernel(NPKernel).

### Project Structure

* `Bootloader` NPBootloader

* `Core` NPKernel

## Build

### Build Tool

- Linux (Host System) Windows user use WSL2

- Clang (Compiler)

- CMake (Build System)

- Ninja (Build Tool)

- LLD (Linker)
  
- LLDB (Debugger)

- QEMU (Emulator)

### Start

``` Shell
chmod u+x ./Configure
./Confiure
```

### Than

``` Shell
cd Build
ninja # You can use -j options to speed up the build process
```

### Run

``` Shell
# In the Build dir
ninja run
```

## Thank

- ![Windsurf](https://codeium.com/logo/windsurf_teal_logo.svg)

- ![DeepSeek](https://github.com/deepseek-ai/DeepSeek-V2/raw/main/figures/logo.svg)

- ![LLVM](https://llvm.org/img/LLVMWyvernSmall.png)

- ![CMake](https://cmake.org/wp-content/uploads/2023/08/CMake-Logo.svg)

- ![Git](https://git-scm.com/images/logo@2x.png)