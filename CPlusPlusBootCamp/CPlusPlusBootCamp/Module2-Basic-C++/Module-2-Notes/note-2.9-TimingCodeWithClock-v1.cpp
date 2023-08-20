// timing code using clock() - dvb 1pr17
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	const int size = 9000000000;// 9000000000000000;
	long long i1,i2, j;
	for(j=0;j<4;j++) {
		cout << "attempt " << j << ":";
		
	clock_t start = clock();
	
	for(i2 = 0;i2<size;i2++) i1= ++i2 - --i2 - i2++;
	
		cout << (double) ( clock() - start)/CLOCKS_PER_SEC << endl;
	}
}

