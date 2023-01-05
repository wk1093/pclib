
# all files in src/* are source files
# make an executable called pclibmain from all the source files

file(GLOB_RECURSE SRCS src/*.cpp)
add_executable(pclibmain ${SRCS})
include_directories(src/)