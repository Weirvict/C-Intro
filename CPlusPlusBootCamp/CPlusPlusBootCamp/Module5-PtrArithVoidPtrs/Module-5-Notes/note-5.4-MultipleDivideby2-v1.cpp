// shifts to multiple and divide by 2 - dvb apr 17
#include <iostream>
using namespace std;
int main()
{
	unsigned x = 1;
	for (int i=0;i<30;i++) 	{
		cout << x  << " ";
		x = x << 1;
	}
	cout << endl;

	x = 4096;
	for (int i=0;i<10;i++) 	{
		cout << x  << " ";
		x = x >> 1;
	}
	cout << endl;

	return 0;
}
