# CMakeLists.txt : CMake project for unitTest
# include source and define project specific logic here
#

# override Global
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/unitTest)
message(STATUS "my_exe_OUTPUT_DIR:= ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

# Add source (*.cpp) to this project's executable
add_executable (qlLIBMain qlLIBMain.cpp)

# Linking the *.lib file
target_link_libraries(qlLIBMain PRIVATE utilityql.lib)

# Add a macro (preprocessor definition) (same as #define QL_DEBUG)
#target_compile_definitions(qlLIBMain PRIVATE QL_DEBUG)

# optimazition option
add_compile_options($<$<CONFIG:Release>:-O2>)

# C++20 standard
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET qlLIBMain PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

