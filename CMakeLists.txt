

cmake_minimum_required(VERSION 3.11)

project(test-write-exif)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

FetchContent_Declare(
    cxx-image
    GIT_REPOSITORY "https://github.com/emmcb/cxx-image.git"
    GIT_TAG "21bfe410340b3601a055c563b373cce53073cae9"
)
FetchContent_MakeAvailable(cxx-image)

add_executable(test-write-exif main.cpp)
target_link_libraries(test-write-exif PRIVATE image io math model parser)