
#include "BadinputTest.h"

#include "errorhandling/QLExcept.h"

#include <iostream>

using namespace std;
using namespace topeqx;

int main( int argc, char *argv[] ) 
{  try {
	cout << argv[0] << " started ...\n";

	test_BadInput();
	
	cout << argv[0] << " finished successfully!\n\n";
} 
catch ( QLExcept  & qlx ) {
	qlx.append2Log(xout);
}
catch (exception & std_x) {
    xout << std_x.what() << endl;
}
catch (...) {
    xout << "BAD: unknown exception!" << endl;
}

return 0;
}

