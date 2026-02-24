# Global definitions available in project CMakeLists.txt via [include]

## global variables [QL_CPP_DIR]
set(QL_CPP_DIR D:/qlWork/myDev/C++/)
set(QL_R64_LDIR ${QL_CPP_DIR}qlLib/Rls64/)
set(QL_UTILITY_DIR ${QL_CPP_DIR}utility/)

## global include-dirs
include_directories( ${QL_UTILITY_DIR} )
message(STATUS "Common include_DIR:= ${QL_UTILITY_DIR}")

## library search path
link_directories(${QL_R64_LDIR})
message(STATUS "Common library_DIR:= ${QL_R64_LDIR}")

## dir for compiled static/shared LIB
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${QL_R64_LDIR})
message(STATUS "Common lib_OUTPUT_DIR:= ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${QL_R64_LDIR})

## dir for compiled EXE
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY D:/qlWork/myDev/qlApp)
message(STATUS "Common exe_OUTPUT_DIR:= ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

## EOF