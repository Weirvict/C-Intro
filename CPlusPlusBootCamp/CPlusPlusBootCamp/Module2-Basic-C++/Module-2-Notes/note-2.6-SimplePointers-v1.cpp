// C++ simple pointers - dvb apr 17

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int beforen = 4;
	int n = 3;  //integer
	int *p = &n; // p is a pointer to n  &n is the address of n
	int **pp = &p; // pp is a pointer that contains the address of a pointer that contains the address of what we want
	cout << "n:  " << n << endl;
	cout << " &n: " << &n << endl;
	cout << "p: "  << p << endl;
	cout << "&p: " << &p << endl;
	cout << "*p: " << *p << endl; // *p is the contents of the memory location whose address is in p
	cout << " pp: " << pp << endl; // the address contained in pp
	cout << " *pp: " << *pp << endl; // the address contained in the memory location whose address is in pp
	cout << " **pp: " << **pp << endl; //the contents of the mem loc whose addr is in the mem loc whose addr is in pp
	
	cout << "*(&n+4)): " << *(&n+4) << endl;
 
}
