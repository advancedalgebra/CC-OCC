cmake_minimum_required(VERSION 3.16)
project(cc_occ)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES cc_occ.cpp data_occ.cpp)

add_executable(cc_occ main.cpp ${SOURCE_FILES} ${SOURCES})