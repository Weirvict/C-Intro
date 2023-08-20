#include <iostream>
using namespace std;
int sizeOfArray(int *x) {
	return sizeof(x);
}
int main() {
	int *foo = new int[100];
	cout << "length of foo is: " << sizeOfArray(foo) << endl;
		return 0;
}
