// C++ simple pointers - dvb apr 17

#include <iostream>
// pointer samplers including arrays - dvb apr 17
#include <ctime>
using namespace std;
int main()
{
	int beforen = 4;
	int n = 3;  //integer
	int *p = &n; // p is a pointer to n  &n is the address of n
	int **pp = &p; // pp is a pointer that contains the address of a pointer
	cout << "n:  " << n << endl;
	cout << " &n: " << &n << endl;
	cout << "p: "  << p << endl;
	cout << "&p: " << &p << endl;
	cout << "*p: " << *p << endl; // *p is the contents of the memory location whose address is in p
	cout << " pp: " << pp << endl; // the address contained in pp
	cout << " *pp: " << *pp << endl; // the address contained in the memory location whose address is in pp
	cout << " **pp: " << **pp << endl; //the contents of the mem loc whose addr is in the mem loc whose addr is in pp
	
	cout << "*(&n+4)): " << *(&n+4) << endl;
	 	
	const int sizeFoo = 5;
	int foo[sizeFoo] = {1, 2, 3, 4, 5};
	int *p4 = foo;
	int *fooBegin = begin(foo); // pointer to first element of foo
	int *fooEnd = end(foo); //pointer to last element of foo
	int *foo1 = foo+4;
	int last = *(foo+4);
	int goo = *foo+4; // foo[0]+4;
	cout << last << endl;
	
	for (auto b = fooBegin; b<= fooEnd; ++b) cout << *b << endl; // this is interesting!
	
 
}
