#include <iostream>
#include <cmath>
using namespace std;
const int fooRows = 3;
const int fooCols = 4;
//#4
int sum2DIntArray(int foo[][fooCols] ) {
	int sum=0;
	for(int r=0;r<fooRows;r++)
		for(int c = 0;c<fooCols;c++)
			sum +=foo[r][c];
	return sum;
}
//#1 reverse array of integers
void reverseIntArray(int *foo, int fooSize) {
	int zoo;
	for(int i=0;i<fooSize/2;i++){
		zoo = foo[i];
		foo[i]=foo[fooSize-(i+1)];
		foo[fooSize-(i+1)] = zoo;
	}
}
//#2 minIndex
int minIndex(int *foo, int fooSize) {
	if (fooSize<=0) return -1;
	int minI = foo[0];
	for(int i=1;i<fooSize;i++)
		if(foo[i]>foo[minI]) 
			minI = i;
	return minI;
}
int main() {
//Test #1
	const int booSize = 5;
	int boo[booSize];
	for(int i=0;i<booSize;i++) boo[i]=rand()%10;
	cout <<"boo contains: ";
	for(int i=0;i<booSize;i++) cout << boo[i] << " ";
	cout << endl;
	reverseIntArray(boo, booSize);
	cout <<"boo contains: ";
	for(int i=0;i<booSize;i++) cout << boo[i] << " ";
	cout << endl;
	cout << endl << "index of minimal value in boo is: " << minIndex(boo,booSize) << endl;	

//Test #4
	int foo[fooRows][fooCols];
	for(int r=0;r<fooRows;r++)
		for(int c = 0;c<fooCols;c++)
			foo[r][c] = rand()%100;
	cout << sum2DIntArray(foo) << endl;
	
	return 0;
}
