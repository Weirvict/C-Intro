// packing with shoft and bit wise |
#include <iostream>
#include <string>
#include <cstdlib>
#include <bitset>
using namespace std; 
unsigned int pack4CharsIntoInt(char c1, char c2, char c3, char c4) { 
	//unsigned int packed = 
	return c1 << 24 | c2 << 16 | c3 << 8 | c4; 
}
void unpack4CharFromShort(unsigned short foo, char &c1, char &c2, char &c3, char &c4) {
	c1 =  foo >> 12;
	c2 = foo >> 8 & 0x000F;
} 
int main() {
	char c1 = 1;
	char c2 = 2;
	char c3 = 3;
	char c4 = 4;
	unsigned int foo = pack4Chars(c1,c2,c3,c4);
	bitset<32> bitset1(foo);
	cout << "foo bits are: " << bitset1 << endl << endl;
	c1=0;c2=0;c3=0;c4=0;
//	unpack4Char(foo,c1,c2,c3,c4);
//	cout << "c2 is : " << (int) c2 << endl;
	return 0; 
} 


 
/*
unsigned int packRGB(const RGB *rgb) {  
	return rgb->s << 24 | rgb->b << 16 | rgb->g << 8 | rgb->r;  
}  
RGB unpackRGB(unsigned int rgb) {  
	RGB unpacked = {rgb >> 24 & 0XFF, rgb >> 16 & 0XFF, rgb >> 8 & 0XFF, rgb & 0XFF};  
	return unpacked;  
	}  */



