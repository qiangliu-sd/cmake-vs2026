# CMakeLists.txt : CMake project for libutility
# include source and define project specific logic here.
#

# source (*.cpp) files under QL_UTILITY_DIR
set(QL_UTILITY_SRC
	date/DateHelper.cpp
	date/DBDate.cpp
	date/QLDate.cpp
	errorhandling/BadInput.cpp
	file/FileReader.cpp
	financial/ImpliedVolatility.cpp
	financial/Maturity.cpp
	matrixfunctions/Conversions.cpp
	matrixfunctions/LUPartialPivot.cpp
	numerics/SingularValDecomp.cpp
	utils/dllmain.cpp
	utils/ParameterBase.cpp
	utils/ParamFinder.cpp
)

# Add full path to source (*.cpp) files
foreach(FILE ${QL_UTILITY_SRC})
  set(LIB_SRC ${LIB_SRC} ${QL_UTILITY_DIR}${FILE})
endforeach()
message(STATUS "LIB_SRC:= ${LIB_SRC}")

# build static lib
add_library(MyLib_static STATIC ${LIB_SRC})
set_target_properties(MyLib_static PROPERTIES OUTPUT_NAME utilityql)

# C++20 standard
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET MyLib_static PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.


