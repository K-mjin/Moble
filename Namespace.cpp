#include <iostream>
#include <string.h>
using namespace std;

namespace NameSpace1 {
	void function() {
		cout << "NameSpace1ÀÇ function" << endl;
	}
}
namespace NameSpace2 {
	void function() {
		cout << "NameSpace2ÀÇ function" << endl;
	}
}

int main() {
	NameSpace1::function();
	NameSpace2::function();

	return 0;
}