//ex4 Vesta Malykhina
//CS 2275 T/TR
//fun times with arrays

#include <iostream> //io of information now available
#include <string>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <cmath>       /* sqrt */

using namespace std; //import functionality

/*
-REMEMBER TO DESTROY AN ARRAY
-arrays will be randomised so that inputs are 

CREATE CONSTANTS TO POP INTO THE 2D DEFINITION
*/

//prototypes
int * getAnAry(int size);
int findMin(const int[] ary, int size);
int findMax(const int[] ary, int size);

void retreive2D(int cols);
//4.0
const int aCols = 10;
const int aRows = 10;
bool checkForB(const int[aRows][aCols] a, int a, int b);
//4.1.
//int countB(const int[][] ary, int a, int b);

int frequencyCount(const int[] ary, int size, int target);
float findMean(const int[] ary, int size);
//6.1.
void getAnAry(const int size);

unsigned int *numeralFreqCount(const string &s);
double standardDev(int[] ary, int size);

//call all methods
int main()
{
	//1.
	cout<<"Let's reverse an array of ints. What length do you want it? \n"<<endl;
	int testLth;
	cin>>testLth; //accepts all input on whitespace	
	int[] testAry = new int[testLth];
	testAry = getTestAry(testLth);
	
	cout<<"Our array is: \n"<<endl; //give user an idea of what the ary is like below	
	for (int i = 0; i < testLth; i++)
	{
		cout<<testAry[i]<<", "<<endl;
	}
/*
	//now, output the reverses ary.
	cout<<"Reversed: "<<reverseAry(testAry, testLth)<<"\n";

	
	cout<<"Now, let's find the min/max value's index.\n"<<endl; //premise for 2 and 3

	//2.	
	cout<< "The minimum is at: "<<findMin(testAry, testLth)<<"\n"<<endl;
	
	//3.
	cout<<"Now, the maximum's index is: "<<findMax(testAry, testLth)<<"\n"<<endl;
	
	//4.
	cout<<"Is a value present in every row of a 2D array? Enter a value to check.\n"<<endl;
	//now, get in the 2D ary. and check.
	
	
	cout<<"What value to check?: \n"<<endl;
	int check;
	cin>>check;
	if(checkForB(retreive2D(aCols), aCols, check))
	{
		cout<<"Your value is in every row of ary.\n"<<endl;
	}
	else
	{
		cout<<"Your value is NOT present in every row.\n"<<endl;
	}
	
	//5.
	cout<<"Let's count how often a value appears in a 1D test array. Enter one to check: \n"<<endl;
	int target;
	cin>> target;
	cout<<target<<" appears in the array "<<frequencyCount(testAry, testLth, target)<<" times.\n"<<endl;
	
	//6.
	double mean = findMean(testAry, testLth);
	cout<<"The mean of the values in our 1D array is "<< mean <<".\n"<<endl;
	
	//7.
	cout<<"Time for strings/addresses!\n"<<endl;
	cout<<"Enter a numeral string. Numerals will be counted:\n"<<endl;
	string nums;
	cin>>nums;
	cout<<*numeralFreqCount(nums)<<" \n"<<endl;
	
	//8.
	cout<<"The standard deviation in our test array's variables is "<<standardDev(testAry, testLth)<<".\n"<<endl;
	
	delete testAry;//now that everything has been executed, erase unnecessary data.
	*/
	return 0;
}
/*
//1. Put all the values in ary backwards
void reverseAry(int[] ary, int size)
{
	int[] reversed = new int[size];
	//loop to move position in different directions
	for(int i = size - 1; i>=0; i--)
	{
		for(int j = 0; j < size; j++)
		{
			reversed[j] = ary[i]; //last of ary = first of rev, etc.
		}
	}
	
	return reversed;
	delete reversed;
	//give output before erasing
}

//2. Return index of the minimum value
int findMin(int[] ary, int size)
{
	int miIdx;
	int min = ary[0]; //pick a place. any place.
	
	for(int i = 0; i < size; i++)
	{
		if(ary[i] < min)
		{
			min = ary[i];
			miIdx = i;
		}
	}
	
	return mIdx;
}

//3. Return index of maximum value
int findMax(int ary[], int size)
{
	int maIdx;
	int max = ary[0];
	
	for(int i = 0; i < size; i++)
	{
		if(ary[i] > max)
		{
			max = ary[i];
			maIdx = i;
		}
	}
	
	return maIdx;
}

//4.0 Help build a 2D array
void retreive2D(int cols)
{	 	
	srand (time(NULL)); //cred to cplusplus.com
		
	int [][] ary = new int[rows][cols]; //new 2d array; undetermined lth?
	
		for(int i = 0; i < rows; i++)
		{
			for(int j; j < cols; j++)
			{
					ary[i][j] = rand() % 1000; //vals <1000
			}
		}	
	
	return ary;
}

//4. True iff b is in EACH row of a
bool checkForB(const int[aRows][aCols] a, int a, int b)
{
	int countB;
	bool hasB = false;
	
	for(int i = 0; i < aRows; i++) //outer loop of rows
		{
			for(int j = 0; j < aCols ; j++) //inner loop of cols to check in these rows
			{
				if(a[i][j] == b)
				{
					hasB = true; //happens once per row
				}
			}
			//if any column in the row contains b, count++. done ONCE per row.
			if(hasB)
			{
				countB++; //increment
			}
			
		} 
		//T if b is in all As
	
	if(countB == aRows) //B found once every row
	{
		return true;
	}
	else
	{
		return false;
	}
	
	delete a; //get rid of unnecessary data;
}

//4.1. 


//5. Counts iterations of a variable in array
int frequencyCount(int[] ary, int size, int target)
{
	int freq;
	
	for(int i = 0; i < size; i++)
	{
		if(ary[i] == target)
		{
			freq++;
		}
	}
	
	return freq;
}

//6. Find mean of values in array
double findMean(int[] ary, int size)
{
	double mean;
	int sum;
	
	for(int i = 0; i < size; i++)
	{
		sum += ary[i];
	}
	mean = sum / size; //if size = 20, there will be 21 variables (0 to 20)
	
	return mean;
}
*/
//6.1 Supplement check for #6; determine size based on input
int * getAnAry(int size)
{
	int[] ary = new int[size];
	
	//rando stuff to fill ary with
	srand (time(NULL)); //cred to cplusplus.com
	  	
	for(int i = 0; i < size; i++)
	{
		ary[i] = rand() % 1000; //vals 0 to 999
	}
	
	return ary;	
}
/*
//7.returns a pointer to an array of length 10 containing the frequency count of the
//numerals contained in the string. Dynamically allocated. Returns a pointer.
unsigned int *numeralFreqCount(const string &s)
{
	string str = *s;//values that are in s
	unsigned int *ary = new unsigned int[10]; //pointer ary of values
	int freq;
	
//	for(char c = '0'; c <= '9'; c++) //check each c for match
//	{
//		for(int i = 0; i < str.length();i++) //goes through str
//		{
//			if(str[i] == c)
//			{
//				freq++; //add 1 every time c matches
//			}
//		}
//		ary[i] = freq; //put in how many matches per character
//		//each outer loop jumps a position to put another freq in array
//	}
	
	char c = '0';
	while(c <='9') //check str for all numerals
	{
		for(int i = 0; i < str.length(); i++) //check every value in str before checking next char
		{
			if(str[i] == c)
			{
				freq++; //should catch one OR many values matching c
			}
		}
		int idx = static_cast<int>(c); //which numeral's turn it is
		ary[idx] = freq;
		c++;
	}
	
	int ptr = *ary; //values of ary
	return ptr;
	delete ary;
//return array of unsigned integers
//look at the example
}

//8. Sum the square of the difference of each value in the array and that mean. 
//The standard deviation is the square root of that
//sum divided by the number of elements in the array.
double standardDev(int[] ary, int size)
{
	double deviation;
	double mean = findMean(ary, size);
	double diff = 0;
	double squaredNet = 0;

	for (int i = 0; i < size; i++)
	{
		diff = ary[i] - mean;
		squaredNet += (diff * diff);
	}
	
	deviation = sqrt(squaredNet/size);
	return deviation;
}*/






