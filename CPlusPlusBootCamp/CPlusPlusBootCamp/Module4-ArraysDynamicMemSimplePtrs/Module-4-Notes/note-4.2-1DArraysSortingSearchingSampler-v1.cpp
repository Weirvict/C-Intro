// 1D array sampler w/ bubble sort, linear search, binary recursive search
// dvb apr 17 -- only using arrays declared on run-time stack. no use of new
// note use of rand() and optionally srand(time(0)) to initialize arrays
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int findTarget(const int a[], int aSize, int target);
int binarySearch(const int a[], int aSize, int target);
int bSearch(const int a[], int target, int start, int end);
void  bubbleSort(const int a[], int aSize);
int main()
{
	
	//a bit on char arrays
	char a1[] = {'b', 'g', '+'};
	char a3[]= "this is a test";
	//srand(time(0));
	const int aSize = 20;
	int a[aSize];
	for (int i=0;i <aSize;i++) a[i] = (rand() % 100);
	for (int i=0;i <aSize;i++) cout << a[i] << " ";
	cout <<endl;

	bubbleSort(a, aSize);  //C++ arrays do not know their own size. 
	cout << "sorted" << endl;
	for (int i=0;i <aSize;i++) cout << a[i] << " ";
	cout << endl << endl;
	cout << findTarget(a, aSize, 34) << endl;
	cout << "the location of 34 is: " << binarySearch(a, aSize, 34) << endl;
	cout << "the location of 91 is: " << binarySearch(a, aSize, 91) << endl;
	cout << "the location of 43 is: " << binarySearch(a, aSize, 43) << endl;
	return 0;
}
// bubble sort dvb - apr 17

// note we use const as a is a reference that will not be changed
// alternate void bubbleSort(const int *a, int aSize)
void bubbleSort(const int a[], int aSize)
{
	int temp;
	for(int i = 0; i <aSize; i++)
		for (int bubblePass = 0; bubblePass <aSize-1-i; bubblePass++)
			if(a[bubblePass] > a[bubblePass+1])
			{
				temp = a[bubblePass];
				a[bubblePass] = a[bubblePass+1];
				a[bubblePass+1] = temp;
			}
 }
// findTarget -dvb apr 17 - locate target's index in 1D integer array.
// returns -1 if target not in array. Note this only works because 
// righthand side of && does not fire if left side is false.
int findTarget(const int a[], int aSize, int target)
{
	int i = 0;
	while (i < aSize && a[i] !=target) 
		i++;
	if (i >=aSize)	return -1;
	return i;
}
// bSearch dvb - apr17 - recursive.
// locate target's index in 1D integer array. Returns -1 
// if target not in array. Note binarySearch assumes list is sorted.
// binarySearch is only a "wrapper" to the actual recursive call. used
// so the user does not have to pass in the array index.
int binarySearch(const int a[], int aSize, int target)
{
	return bSearch(a,  target, 0, aSize-1);
}
int (const int a[], int aSize) {
	if (aSize <=0) return 0;
	int min = a[0];
	for(int i=0;i<aSize)  
		if (a[i]<min) 
			min = a[i];
	return min;
}

int bSearch(const int a[], int target, int start, int end)
{
	if (start > end) return -1;		//means have searched complete list and target not found
	int mid = (start + end) /2;
	if (a[mid] == target) return mid; // means target is at index mid
	if (target < a[mid])
		return  bSearch(a, target, start, mid -1);
	else
		return bSearch(a, target, mid+1, end);
}


