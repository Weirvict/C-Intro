// unpacking with shifts, masking, and bitwise and ( & )
#include <iostream>
#include <string>
#include <cstdlib>
#include <bitset>
using namespace std;
// packs 2 chars into one 16 bit unsigned int
unsigned int pack2Chars(char c1, char c2) {  
	return (c1 << 8)  | c2;
} 
// unpacks a 16 bit unsigned int into 2 chars
void unpack2Char(unsigned int foo, char &c1, char &c2) {
	c1 =  foo >> 8;
	c2 = foo & 0xFF; //0XFF == 0000000011111111
}
int main() {
	// pack 2 char into unsigned short
	unsigned short foo3 = pack2Chars('a', 'b');
	printf("foo3 as hex is %x \n ", foo3);
	bitset<16> bitset1(foo3);
	cout << "foo3 bits are: " << bitset1 << endl;
	
	unsigned short foo1 = foo3 >> 8;
	bitset<16> bitset2(foo1);
	cout << "foo1 bits are: " << bitset2 << endl;
	char c1 = foo3 >> 8;
	
	unsigned short foo2 = 0xFF;  //0XFF == 0000000011111111
	bitset<16> bitset3(foo2);
	cout << "foo2 bits are: " << bitset3 << endl;
	unsigned short foo4 = foo2 & foo3;
	bitset<16> bitset4(foo4);
	cout << "foo4 bits are: " << bitset4 << endl;
	char c2 = foo3 & 0xFF; //0XFF == 0000000011111111
	
	cout << "c1 is: " << c1 << " and c2 is: " << c2 << endl << endl;
	
	//alternate unpacking that only works for 8 bit items
	char *p= (char*) &foo3;
	cout << "alternate unpacking that only works for 8 bit items \n";
	cout << "c1 is: " << p[0] << " and c2 is: " << p[1] << endl;
	
	char c3, c4;
	unpack2Char(pack2Chars('d', 'e'), c3, c4);
	cout << "c3 is: " << c3 << " and c4 is: " << c4 << endl;
	
	return 0; 
}  



