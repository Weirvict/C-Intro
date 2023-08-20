// packing with shoft and bit wise |
#include <iostream>
#include <string>
#include <cstdlib>
#include <bitset>
using namespace std; 
int main() {
	unsigned int foo = 3;
	cout << foo << endl;
	printf( "%x \n \n",foo);
	foo = foo <<2;
	bitset<32> bitset1(foo); 
	cout << bitset1 << endl;
	cout << foo << endl;



	return 0; 
}  



