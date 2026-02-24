
#ifndef __bad_input_test_
#define	__bad_input_test_

#include "errorhandling/BadInput.h"
#include "common/GlobalOutputs.h"

//#define QL_DEBUG
#include "common/QLDebug.h"

void checkMacro() { // CMake: target_compile_definitions
#ifdef QL_DEBUG
	topeqx::xout << "QL_DEBUG on\n";
#else
	topeqx::xout << "QL_DEBUG off\n";
#endif // !QL_DEBUG
}

void test_BadInput() {
	topeqx::BadInput bi("Functon test()");
	bi.append2Log(topeqx::xout);

	checkMacro();

	int x{ 5 };
	topeqx::debugInfo("x", x);
}

#endif // !__bad_input_test_
