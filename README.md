Repository used to reproduce a bug with flecs (https://github.com/SanderMertens/flecs) on master.

When building with the preset "x64 Debug (Clang)" on windows 10 (using clang 13), the code assert :

```
fatal: entity.c: 2027: assert: name_assigned == ecs_has_pair( world, result, ecs_id(EcsIdentifier), EcsName) INTERNAL_ERROR
```

But not on the other configuration, even "x64 Release (Clang)" works.

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
