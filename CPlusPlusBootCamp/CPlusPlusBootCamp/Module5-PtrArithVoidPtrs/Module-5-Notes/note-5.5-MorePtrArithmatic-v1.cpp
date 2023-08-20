// C++ - more pointer arithmatic- dvb apr 17
#include <iostream>
#include <ctime>
using namespace std;
int main()   {
	unsigned long long beforen = 42;
	unsigned long long n = 3;
	unsigned long long aftern=64; 
	unsigned long long *p = &n;
	void *vp = &n;
	cout << "&beforen: " << &beforen << endl; 
	cout << "&n: " << &n << endl;             
	cout << "&p: " << &p << endl;				
	cout << "&vp: " << &vp << endl << endl;			
	cout << "P: " << p << endl;
	cout << "vp: " << vp << endl;
	p++; 	vp++;
	cout << "p: " << p << endl;
	cout << "vp: " << vp << endl;
	cout << "*(&n-1): " <<(*&n)-1 << endl;
	p--; vp--;
	unsigned long long *foo = (unsigned long long*) (vp-8);
	cout << "*foo: " << *foo << endl;
	cout << *((unsigned long long*) (vp-8)) << endl;

	return 0;
}
