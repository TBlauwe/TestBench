# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)

project ("TestBench")

# CMake libraries
# ===============
include(FetchContent)
find_package(Threads REQUIRED)

set(FLECS_STATIC_LIBS ON)
set(FLECS_SHARED_LIBS OFF)
FetchContent_Declare(
    flecs 
    GIT_REPOSITORY "https://github.com/SanderMertens/flecs"
    GIT_TAG master
)
FetchContent_MakeAvailable(flecs)

add_executable (TestBench "main.cpp")
target_link_libraries(TestBench flecs::flecs_static Threads::Threads)

