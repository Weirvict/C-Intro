// 2D array sampler - dvb apr 17

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
;
int main()
{
	const int zooRowSize = 4;
	const int zooColSize = 3;
	int zoo[zooRowSize][zooColSize];
	for(int r = 0; r<zooRowSize; r++)
		for(int c = 0; c<zooColSize;c++) {
			zoo[r][c] = r*10+c+300;
			if (c == 0) cout << endl;
			cout <<zoo[r][c] << " ";
		}
cout <<endl << endl;

    const unsigned int M = 2;
    const unsigned int N = 2;
    // allocate (no initialization - constants)
    auto array = new double[M][N];

    // pollute the memory
    array[0][0] = 2;
    array[1][0] = 3;
    array[0][1] = 4;
    array[1][1] = 5;

	// may need alternate methods for really big 2D arrays
		const unsigned long long size= 10;
	// 	methods for creating dynamic 2D arrays on the heap
	// 1D array mapped to 2D using r*NumRows+col
	unsigned long long *boo = new unsigned long long [size*size];
	for(int r = 0; r<size; r++)
		for(int c = 0; c<size;c++) {
			boo[r*size+c] = r*10+c+500;
			if (c == 0) cout << endl;
			cout <<boo[r*size+c] << " ";
		}
		cout << endl << endl;
	delete boo;	
	
	// 2D array of pointers to arrays
   unsigned long long **foo = new unsigned long long* [size];
	for(int i=0;i<size;i++) foo[i]=new unsigned long long [size];
		for(int r = 0; r<size; r++)
		for(int c = 0; c<size;c++) {
			foo[r][c] = r*10+c+100;
			if (c == 0) cout << endl;
			cout <<foo[r][c] << " ";
		}
		for(int i=0;i<size;i++) delete foo[i];
	delete foo;	
	delete array;
	return 0;
}

