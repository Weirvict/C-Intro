#include <iostream>
using namespace std;
// function that returns an array
unsigned int *goo() {
	unsigned int *foo = new unsigned int[10];
	foo[0]=3;
	return foo;
}
int main() {
	unsigned int *too=goo();
	cout << too[0] << endl;
	cout << *too << endl;
	delete too;
	return 0;
}
