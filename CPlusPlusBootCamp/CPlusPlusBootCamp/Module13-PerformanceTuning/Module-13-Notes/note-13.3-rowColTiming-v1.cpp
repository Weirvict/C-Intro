// row v col 2D array traversal - dvb apr 17
// timing exercise
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	unsigned long long size= 50000;
	unsigned int r,c;
	
	//alternate 2D array allocation - 
   //auto soo = new double[size][size];
	
	// 1D array mapped to 2D using r*NumRows+col
	unsigned long long *boo = new unsigned long long [size*size];
	
	// 2D array of pointers to arrays
  // unsigned long long **foo = new unsigned long long* [size];
//	for(int i=0;i<size;i++) foo[i]=new unsigned long long [size];
	
	
	// this loads things into cache - not sure it will make a difference.
//	for(r=0;r<size;r++)
//		for(c=0;c<size;c++)
//			foo[r][c] = r+c;
	
//	cout << "row major -- array of pointers to arrays" << endl;
	clock_t start = clock();
//	for(r=1;r<size;r++)
//		for(c=1;c<size;c++)
//			foo[r][c] = foo[r][c-1];
			
//	cout << (double) ( clock() - start)/CLOCKS_PER_SEC << endl;
	
//	cout << "col major -- array of pointers to arrays" << endl;
//	start = clock();
//	for(c=1;c<size;c++)
//		for(r=1;r<size;r++)
//			foo[r][c] = foo[r][c-1];
//	cout << (double) ( clock() - start)/CLOCKS_PER_SEC << endl;
	
	
	// this loads things into cache - not sure it will make a difference.
	for(r=0;r<size;r++)
		for(c=0;c<size;c++)
			boo[r*size+c] = r+c;
	
	cout << "row major -- C type array" << endl;
	start = clock();
	for(r=1;r<size;r++)
		for(c=1;c<size;c++)
			boo[r*size+c] = boo[r*size+(c-1)];
			
	cout << (double) ( clock() - start)/CLOCKS_PER_SEC << endl;
	
	cout << "col major -- c type array" << endl;
	start = clock();
	for(c=1;c<size;c++)
		for(r=1;r<size;r++)
			boo[c*size+r] = boo[c*size+(r-1)];
			
	cout << (double) ( clock() - start)/CLOCKS_PER_SEC << endl;
	
	// add the code here to time your soo array
	
//	for(r=0;r<size;r++)
//		for(c=0;c<size;c++)
//			soo[r][c] = r+c;
	
//	cout << "auto soo array" << endl;
//	start = clock();
//	for(r=1;r<size;r++)
//		for(c=1;c<size;c++)
//			soo[r][c] = soo[r][c-1];
			
	cout << (double) ( clock() - start)/CLOCKS_PER_SEC << endl;

//	for(int i=0;i<size;i++) delete foo[i];	
//	delete foo;
	delete boo;
	//delete soo;

	return 0;
}
