#include <iostream>
using namespace std;
int main() {
	unsigned int z1 = 3;
	unsigned int b = (z1 << 1) ^ z1;
	cout << b << endl;
	return 0;
}
