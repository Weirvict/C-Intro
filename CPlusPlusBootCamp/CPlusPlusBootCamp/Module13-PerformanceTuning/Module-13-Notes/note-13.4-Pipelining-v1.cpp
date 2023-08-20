// pipelining timing may17
// timing exercise
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	const unsigned long long size= 20000000;//2000000000;
	unsigned long long i;
	unsigned long long *foo = new unsigned long long [size];
	foo[0]=2;foo[1]=3;foo[2]=6;
	for(i = 3;i<size;i++) foo[i]=foo[i-1]+foo[i-2]-foo[i-3];	
		
	foo[0]=3;foo[1]=3;foo[2]=6;
	clock_t start = clock();
	for(i = 3; i<size-4;i+=4) {	
		foo[i]=foo[i-1]+foo[i-2]-foo[i-3];
		foo[i+1]=foo[i]+foo[i-1]-foo[i-2];
		foo[i+2]=foo[i+1]+foo[i]-foo[i-1];
		foo[i+3]=foo[i+2]+foo[i-1]-foo[i];
	}
	cout << "pipedLined: " << (double) ( clock() - start)/CLOCKS_PER_SEC << endl;
	
	foo[0]=4;foo[1]=3;foo[2]=6;
	start = clock();
	for(i = 3; i<size;i++) foo[i]=foo[i-1]+foo[i-2]-foo[i-3];		
	cout << "not pipedLined: " <<(double) ( clock() - start)/CLOCKS_PER_SEC << endl;
	
	foo[0]=2;foo[1]=3;foo[2]=6;
	start = clock();
	for(i = 3; i<size-4;i+=4) {	
		foo[i]=foo[i-1]+foo[i-2]-foo[i-3];
		foo[i+1]=foo[i]+foo[i-1]-foo[i-2];
		foo[i+2]=foo[i+1]+foo[i]-foo[i-1];
		foo[i+3]=foo[i+2]+foo[i-1]-foo[i];
	}
	cout << "pipedLined: " <<(double) ( clock() - start)/CLOCKS_PER_SEC << endl;

	delete foo;
	return 0;
}
