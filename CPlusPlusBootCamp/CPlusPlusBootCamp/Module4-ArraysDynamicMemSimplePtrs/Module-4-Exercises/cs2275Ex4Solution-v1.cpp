// dvb 20sep17 - solutions for cs275 exercise #4 fall 17
#include <iostream>
#include <cmath>
using namespace std;
const int fooRows = 3;
const int fooCols = 3;
//#1 reverse array of integers, Much better to not create N extra array.
void reverseIntArray(int *foo, int fooSize) {
	int zoo;
	for(int i=0;i<fooSize/2;i++){ // note: only need to go 1/2 through array
		zoo = foo[i];
		foo[i]=foo[fooSize-(i+1)];
		foo[fooSize-(i+1)] = zoo;
	}
}
//#2 minIndex - returns the index of the minimum value
int minIndex(int *foo, int fooSize) {
	if (fooSize<=0) return -1;
	int minI = 0;
	for(int i=1;i<fooSize;i++)
		if(foo[i]<foo[minI]) 
			minI = i;
	return minI;
}
//#3 maxIndex-returns the index of the max value
int maxIndex(int *foo, int fooSize) {
	if (fooSize<=0) return -1;
	int maxI = 0;
	for(int i=1;i<fooSize;i++)
		if(foo[i]>foo[maxI]) 
			maxI = i;
	return maxI;
}
//#4a - is b in the rowth row of foo?
bool bInRowthRowof2DArray(int foo[][fooCols], int row, int b ) {
	for(int c=0;c<fooCols;c++)
		if(foo[row][c]==b) return true;
	return false;
}
// #4b - is b in every row of foo?
bool bInEachRow2DArray(int foo[][fooCols], int b ) {
	int r=0;
	while(r<fooRows && bInRowthRowof2DArray(foo, r,b) ) r++;
	if(r<fooRows) return false;
	return true;
}
//#5 freqCount-returns the # of occurance of target in foo
int freqCount(int foo[], int fooSize, int target) {
	int counter =0;
	for(int i=0;i<fooSize;i++)
		if (foo[i]==target) counter++;
	return counter;
}
// #6 mean
double arrayMean(int foo[], int fooSize) {
	int sum=0;
	for(int i=0;i<fooSize;i++) sum+=foo[i];
	return (double)sum/fooSize;
}
// #7 numeralFreqCount
int* numeralFreqCount(const string &s){
	int *numFreq = new int[10];
	for(int i=0;i<10;i++) numFreq[i]=0;
	for(int i=0;i<s.length();i++)
		if(s[i]>='0' && s[i]<='9') 
			numFreq[(s[i]-'0')]++;
	return numFreq;
}
//#8 standardDev
double arrayStd(int foo[], int fooSize) {
	double m=arrayMean(foo, fooSize);
	double sumSqDiff;
	for(int i=0;i<fooSize;i++) 
		sumSqDiff += (foo[i]-m)*(foo[i]-m);
	return pow(sumSqDiff, 0.5)/fooSize;
}
int main() {
//Test #1
	const int booSize = 20;
	int boo[booSize];
	for(int i=0;i<booSize;i++) boo[i]=rand()%20;
	cout <<"boo contains: ";
	for(int i=0;i<booSize;i++) cout << boo[i] << " ";
	cout << endl;
	reverseIntArray(boo, booSize);
	cout <<"boo contains: ";
	for(int i=0;i<booSize;i++) cout << boo[i] << " ";
	cout << endl;
// test #2
	cout << "index of min value in boo is: " << minIndex(boo,booSize) << endl;	
// test #3
	cout << "index of max value in boo is: " << maxIndex(boo,booSize) << endl;	
// test #5
	cout << "freq count of 2 is: " << freqCount(boo,booSize, 2) << endl;
	cout << "freq count of 4 is: " << freqCount(boo,booSize, 4) << endl;
	cout << "freq count of 42 is: " << freqCount(boo,booSize, 42) << endl;
// test #6
	cout << "the mean of boo is: " << arrayMean(boo,booSize) << endl;
//test #7
	string s= "AA2311225544999";
	int *numFreq = numeralFreqCount(s);
	cout <<"num freq count of " << s << " is ";
	for(int i=0;i<10;i++) cout << numFreq[i] << " ";
	cout << endl;
	delete numFreq;
// test #8
	cout << "the standard dev of boo is: " << arrayStd(boo,booSize) << endl;	
//Test #4
	int foo[fooRows][fooCols];
	for(int r=0;r<fooRows;r++)
		for(int c = 0;c<fooCols;c++)
			foo[r][c] = rand()%100;
	foo[0][0]=42; foo[1][1]=42;foo[2][2]=42;
	for(int r=0;r<fooRows;r++) {
		for(int c = 0;c<fooCols;c++)
			cout << foo[r][c] << " ";
		cout << endl;
	}
	cout << "test #4" << endl;
	cout << bInEachRow2DArray(foo, 42) << endl;
	
	return 0;
}
