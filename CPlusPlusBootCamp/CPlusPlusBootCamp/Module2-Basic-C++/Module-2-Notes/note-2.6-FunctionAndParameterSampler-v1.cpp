// function and parameter sampler - dvb apr 17
#include <iostream>
using namespace std;
long sumIntegerRange(int n1, int n2);   // these are "prototypes
void swap( int &n1, int &n2);			// they allow a function to be defined after a call
int main()
{
	int i;
	// note do a reasonable job of testing to make sure function actually works
	cout << "the sum of the integers between 4 and 7 is: " << sumIntegerRange(3+1,7)<< endl;
	cout << "the sum of the integers between -1 and -7 is: " << sumIntegerRange(-1,-7) << endl;
	cout << "the sum of the integers between 0 and 0 is: " << sumIntegerRange(0,0) << endl;
	int a = 3,b=4;
	{
		int foo;
	}
	foo =1;
	//swap (3+1,b);
	cout << a << " " << b << endl;
	cout << endl << endl;

	return 0;
}
/***********************************
sumIntegerRange - dvb apr 17
this function returns the sum of all the integers between
two integers. It does not assume that n1 is less than n2.
Note the use of long for the return value. Since parameters
are not altered, they are PASSED BY VALUE. Any expression that can
be converted to int can be used as the corresponding argument.
*************************************/
long sumIntegerRange(int n1, int n2)
{
	long sum = 0;
	if (n1<n2)
		for(int i=n1;i<=n2;i=i+1)
			sum = sum +i;
	else
		for(int i=n2;i<=n1;i=i+1)
			sum = sum +i;
	return sum;
}
/*******************************************
swap - dvb feb 13 swaps the values in two integers 
n1 and n2. Since n1 and n2 need to be altered, they must
be PASS BY REFERENCE and the & is used, which ends up
passing the ADDRESS of n1 rather than n1's value.
A variable of identical type must be used as an argument.
********************************************/
void swap( int&n1, int &n2)
{
	int foo = n1;
	n1 = n2;
	n2 = foo;
}

