// packing with shoft and bit wise |
#include <iostream>
#include <string>
#include <cstdlib>
#include <bitset>
using namespace std; 
int main() {
	// 'a' in a char
	unsigned char c1 = 'a';
	unsigned char c2 = 'b';
	unsigned char c4 = 'c';
	unsigned char *c3 = &c2;
	c3--;
	cout << *c3 << endl << endl;
	
	cout << "c1 as char is: " << c1 << endl;
	cout << "c1 as dec is: " << (int)c1 << endl;
	printf ("c1 as hex is: %x \n", c1);
	cout << "unsigned char bytes are: " << sizeof(c1) << endl;
	bitset<8> bitset1(c1);
	cout << "c1 bits are: " << bitset1 << endl << endl;

	// 'a' in 16 bits
	unsigned short int foo1=c1; //foo1 = 0000000001100001
	cout << "unsigned short bytes are: " << sizeof(foo1) << endl;
	cout << "foo1 as dec is: " << foo1 << endl;
	printf ("foo1 as hex is: %x \n", foo1);
	bitset<16> bitset2(foo1);
	cout << "foo1 bits are: " << bitset2 << endl;
	
	// shift 'a' from byte 0 to byte 1
	foo1 = foo1 << 8; // f001 now == 0110000100000000
	printf ("foo1 shifted left by 8 as hex is: %x \n", foo1);
	bitset<16> bitset3(foo1);
	cout << "foo1 shifted left by 8 bits are: " << bitset3 << endl << endl;
	
	unsigned short foo2 = 'b';	
	printf("foo2 as hex is %x \n",foo2);
	bitset<16> bitset4(foo2);
	cout << "foo2 bits are: " << bitset4 << endl << endl;
	
	//bitwise or | foo 1 and foo2
	unsigned short foo3 = foo1 | foo2;
	printf ("foo3 hex is: %x \n \n", foo3);
	cout << "foo1 bits are: " << bitset2 << endl;
	cout << "foo2 bits are: " << bitset4 << endl;
	bitset<16> bitset5(foo3);
	cout << "foo3 bits are: " << bitset5 << endl << endl;

	return 0; 
}  



