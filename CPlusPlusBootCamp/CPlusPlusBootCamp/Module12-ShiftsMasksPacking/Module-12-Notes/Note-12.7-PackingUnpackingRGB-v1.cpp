// packing and unpacking red, greeen 
#include <iostream>
using namespace std;
typedef struct RGB {  
	unsigned int s, b, g, r;  
}RGB;  
unsigned int packRGB(const RGB *rgb) {  
	return rgb->s << 24 | rgb->b << 16 | rgb->g << 8 | rgb->r;  
}  
RGB unpackRGB(unsigned int rgb) {  
	RGB unpacked = {rgb >> 24 & 0XFF, rgb >> 16 & 0XFF, rgb >> 8 & 0XFF, rgb & 0XFF};  
	return unpacked;  
	}  
int main() {  
	RGB rgb = {'a', 'b','c', 'd'};  
	unsigned int packed_rgb = packRGB(&rgb); 
	RGB unpacked_rgb = unpackRGB(packed_rgb);  
	printf("Packed RGB = %u\n", packed_rgb);  
	printf("Unpacked RGB = (%u, %u, %u, %u)", unpacked_rgb.r, unpacked_rgb.g, unpacked_rgb.b, unpacked_rgb.s);
	
	void *pVoid = &packed_rgb;
	char *a = static_cast<char*> (pVoid);
	cout << endl << endl;
	cout << "---" << a[0] << "---" << endl; // can access *a as an array
	cout << "---" << a[1] << "---" << endl;
	cout << "---" << a[2] << "---" << endl;
	cout << "---" << a[3] << "---" << endl;
	cout << endl;

	for(int i=0;i<4;i++) {    // can access *a with pointer arithmetic
		cout << *a << " ";
		a++;
	}
	cout << endl << endl; 
return 0;  
} 


