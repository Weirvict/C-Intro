// rand() v randFoo() - dvb apr 17
// code from randFoo off internet
#include <iostream>
#include <ctime>
#include <random>
#include <cmath>
using namespace std;
unsigned int randFoo() {
	static unsigned int z1 = 12345, z2 = 12345, z3 = 12345, z4 = 12345;
	unsigned int b;
	b = ((z1 << 6) ^ z1) >> 13;
	//4294967294U = 11111111111111111111111111111110
	z1 = ((z1 & 4294967294U) << 18) ^ b;
	b = ((z2 << 2) ^ z1) >> 27;
	//4294967288U = 11111111111111111111111111111000
	z2 = ((z2 & 4294967288U) << 2) ^ b;
	b = ((z3 << 13) ^ z3) >> 21;
	//4294967280U = 11111111111111111111111111110000
	z3 = ((z3 & 4294967280U) << 7) ^ b;
	b = ((z4 << 3) ^ z4) >> 12;
	//4294967168U = 11111111111111111111111110000000
	z4 = ((z4 & 4294967168U) << 13) ^ b;
	return (z1 ^z2 ^ z3 ^z4);
}
int main() {
	const long long repeat = 99U;
	long long i1, i2, foo=1;
	
	clock_t start = clock();
	for (i1=0;i1<repeat;i1++)
		for (i2=0;i2<repeat;i2++){
			foo+=rand();
			foo-=rand();
		}
	cout << (double) ( clock() - start)/CLOCKS_PER_SEC << endl;
	
	// alternate rand
	start = clock();
	for (i1=0;i1<repeat;i1++)
		for (i2=0;i2<repeat;i2++){
			foo+=randFoo();
			foo-=randFoo();
		}
	cout << (double) ( clock() - start)/CLOCKS_PER_SEC << endl;				
	
	default_random_engine e(43);
	for(int soo=0;soo<10;soo++) cout << "e(): " << e() << endl;
		
	return 0;
}
