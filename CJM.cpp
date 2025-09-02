#include <iostream>
#include<>
using namespace std;

bool mijinisPretty(int x) {
	return (x + 1) * (x + 1) == (x * x) + 2 * x + 1;
}

void main(void) {
	cout << mijinisPretty(486) << endl;
}