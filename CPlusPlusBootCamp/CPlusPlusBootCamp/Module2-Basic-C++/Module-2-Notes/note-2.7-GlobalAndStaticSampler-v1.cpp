// global and static sampler - dvb apr 17
#include <iostream>
using namespace std;
int countCalls();//this is a prototype
int globalCountCalls()
int foo=9; // this is a global variable - Virtually never used!
int main()
{
	for(int i=0;i<10;i++)
		cout << countCalls() << " ";
	cout << endl;
		for(int i=0;i<10;i++)
		cout << globalCountCalls() << " ";
	cout << endl;
	cout << "foo= " << foo << endl;
	return 0;
}
// static used to count the number of calls
// need powerpoint to show how g++ put stuff in it memory
// static variable NOT declared on the stack frames 
int countCalls()
{
	int nonStaticInt = -1;// different variable in stack frame reinitialized each call.
	static int counter = 0;// static initialized first call. Then same memory locatation used.
	nonStaticInt = nonStaticInt+1;
	counter = counter +1;
	return counter+nonStaticInt;
}
int globalCountCalls()
{
	foo++;
	return foo;
}

