# Viper changes for Reflang

Current build config:
 - Clang/LLVM 13
 - Current Commit

## Building

On windows, make sure to run this within "x64 Native Tools" (with git-bash).
Compile clang and LLVM statically using the following (with Ninja, modify accordingly):
```sh
git clone --branch llvmorg-13.0.0 --single-branch https://github.com/llvm/llvm-project.git
cd llvm-project
cmake -G"Ninja Multi-Config" -Bbuild -Sllvm -DLIBCLANG_BUILD_STATIC=ON -DLLVM_ENABLE_PIC=OFF -DLLVM_BUILD_LLVM_DYLIB=OFF -DCMAKE_INSTALL_PREFIX=build/install -DLLVM_ENABLE_PROJECTS="llvm;clang" -DLLVM_TARGETS_TO_BUILD=X86
cmake --build build --target install --config Debug
cmake --build build --target install --config Release

```

Configure this project by:
```sh
cmake -Bbuild -DCLANG_ROOT=path/to/root
cmake --build build --config Release # build both exectuable and library.
```