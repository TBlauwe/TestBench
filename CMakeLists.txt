# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

project ("TestBench")

# CMake libraries
# ===============
set(CPM_DOWNLOAD_VERSION 0.35.0)
include(cmake/FindCPM.cmake)

CPMAddPackage(
        NAME flecs
        GITHUB_REPOSITORY SanderMertens/flecs
        GIT_TAG master
        OPTIONS
        "FLECS_STATIC_LIBS ON"
        "FLECS_SHARED_LIBS OFF"
)

add_executable (TestBench "src/main.cpp")
target_link_libraries(TestBench flecs::flecs_static)

