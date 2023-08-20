#include <iostream>
using namespace std;
typedef struct RGB {  
	unsigned short s, b, g, r;  
}RGB;  
unsigned long long packRGB(const RGB *rgb) {  
	return rgb->s << 48 | rgb->b << 33 | rgb->g << 16 | rgb->r;  
}  
RGB unpackRGB(unsigned long long rgb) {  
	RGB unpacked = {rgb >> 48 & 0XFFFF, rgb >> 33 & 0XFFFF, rgb >> 16 & 0XFFFF, rgb & 0XFFFF};  
	return unpacked;  
	}
int main () {
	//RGB foo={97,98,99,100};
	RGB foo = {300, 301,302, 303};  
	unsigned long long packed_rgb = packRGB(&foo); 
	RGB unpacked_rgb = unpackRGB(packed_rgb);  
	cout << unpacked_rgb.s << endl; 
	cout << unpacked_rgb.b << endl; 
	cout << unpacked_rgb.g << endl; 
	cout << unpacked_rgb.r << endl; 
	return 0;
}
