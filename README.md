Repository used to reproduce a bug with [flecs](https://github.com/SanderMertens/flecs) on master.

When building on windows 10 (using clang 13), the code assert :

```
fatal: entity.c: 2027: assert: name_assigned == ecs_has_pair( world, result, ecs_id(EcsIdentifier), EcsName) INTERNAL_ERROR
```


## Building 

```
git clone https://github.com/TBlauwe/TestBench.git
cd TestBench/
mkdir build
cd build/
cmake ../
cmake --build .
./TestBench
```

##cmake output

```
1> Ligne de commande : "C:\WINDOWS\system32\cmd.exe" /c "%SYSTEMROOT%\System32\chcp.com 65001 >NUL && "C:\PROGRAM FILES\MICROSOFT VISUAL STUDIO\2022\COMMUNITY\COMMON7\IDE\COMMONEXTENSIONS\MICROSOFT\CMAKE\CMake\bin\cmake.exe"  -G "Ninja"  -DCMAKE_C_COMPILER:STRING="clang-cl.exe" -DCMAKE_CXX_COMPILER:STRING="clang-cl.exe" -DCMAKE_BUILD_TYPE:STRING="Debug" -DCMAKE_INSTALL_PREFIX:PATH="D:/dev/cpp/TestBench/out/install/x64-debug"  -DCMAKE_MAKE_PROGRAM="C:\PROGRAM FILES\MICROSOFT VISUAL STUDIO\2022\COMMUNITY\COMMON7\IDE\COMMONEXTENSIONS\MICROSOFT\CMAKE\Ninja\ninja.exe" "D:\dev\cpp\TestBench" 2>&1"
1> Répertoire de travail : D:/dev/cpp/TestBench/out/build/x64-debug
1> [CMake] -- The C compiler identification is Clang 13.0.0 with MSVC-like command-line
1> [CMake] -- The CXX compiler identification is Clang 13.0.0 with MSVC-like command-line
1> [CMake] -- Detecting C compiler ABI info
1> [CMake] -- Detecting C compiler ABI info - done
1> [CMake] -- Check for working C compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/Llvm/x64/bin/clang-cl.exe - skipped
1> [CMake] -- Detecting C compile features
1> [CMake] -- Detecting C compile features - done
1> [CMake] -- Detecting CXX compiler ABI info
1> [CMake] -- Detecting CXX compiler ABI info - done
1> [CMake] -- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/Llvm/x64/bin/clang-cl.exe - skipped
1> [CMake] -- Detecting CXX compile features
1> [CMake] -- Detecting CXX compile features - done
1> [CMake] -- Looking for pthread.h
1> [CMake] -- Looking for pthread.h - not found
1> [CMake] -- Found Threads: TRUE  
1> [CMake] -- Configuring done
1> [CMake] -- Generating done
1> [CMake] -- Build files have been written to: D:/dev/cpp/TestBench/out/build/x64-debug
1> Variables CMake extraites.
1> Fichiers sources et en-têtes extraits.
1> Modèle de code extrait.
1> Extraction effectuée des configurations de chaîne d'outils.
1> Chemins include extraits.
1> Fin de la génération de CMake.
```
