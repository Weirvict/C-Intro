//Vesta Malykhina - 4.1
//CS 2275
//Fun with arrays

/*Notes:
-This version gets rid of 2dary creator and uses main
*/

//helpers
#include <iostream> //io of information now available
#include <string>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <cmath>       /* sqrt */
using namespace std; //import functionality

//globals
const int szAry = 16;

//protofunctions
int * getAnAry(int lth);
int * reverseAry(int * ary, int lth);
int findMin(const int *ary, int lth);
int findMax(const int *ary, int lth);
int frequencyCount(int * a, int lth, int b);
float findMean(const int *ary, int lth);
unsigned int * (numeralFreqCount(const string &s));
double standardDev(int *ary, int lth);

//2d shenans
const int rowN = 3;
const int colN = 5;
bool bInThisRow(int ary[][colN], int row, int b);
bool bPresentAllRows(int ary[][colN], int cols, int b);

//method calls come in here
int main()
{
	//1.
	cout<<"Let's reverse an array of ints. \n"<<endl;
	int * testAry;
	int szAry = 5;
	testAry = getAnAry(szAry);
	//give user an idea of what the ary is like below
	cout<<"Our array is: \n"<<endl; 	
	for (int i = 0; i < szAry; i++)
	{
		cout<<testAry[i]<<", ";
	}
	cout<<"...\n"<<endl;
/*	
//	//now, output the reversed ary.
//	int * reversed;
//	reversed = reverseAry(testAry, szAry);
//	cout<<"Reversed: \n"<<endl;
//	for (int i = 0; i < szAry; i++)
//	{
//		cout<<reversed[i]<<", ";
//	}
//	cout<<"...\n"<<endl;
//	
	cout<<"Now, let's find the min/max value's index.\n"<<endl; //premise for 2 and 3
	//2.	
	cout<< "The minimum is at: "<<findMin(testAry, szAry)<<"\n"<<endl;
	
	//3.
	cout<<"Meanwhile, the maximum's index is: "<<findMax(testAry, szAry)<<"\n"<<endl;
	
	//4.
	cout<<"Time for 2D arrays. Let's check whether a value is cotained within every row of one.\n"<<endl;
	int ary2D[rowN][colN];
	for(int i = 0; i < rowN; i++)
	{
		for(int j = 0; j < colN; j++)
		{
			ary2D[i][j] = rand() % 1000; //vals 0 to 999
			cout<<ary2D[i][j]<<", ";
		}
	}
	cout<<"...\nThis is our array. What value do you want to check? \n"<<endl;
	int check;
	cin>>check;
	if(bPresentAllRows(ary2D, colN, check))
	{
		cout<<check<<" is in each row of the array!\n"<<endl;
	}
	else
	{
		cout<<check<<"is not in every row.\n"<<endl;
	}

	//5.
	cout<<"Let's count how often a value appears in a 1D test array. Enter one to check: \n"<<endl;
	int target;
	cin>> target;
	cout<<target<<" appears in the array "<<frequencyCount(testAry, szAry, target)<<" times.\n"<<endl;
	
	//6.
	double mean = findMean(testAry, szAry);
	cout<<"The mean of the values in our 1D array is "<< mean <<".\n"<<endl;
	
	//7.
	cout<<"Time for strings/addresses!\n"<<endl;
	cout<<"Enter a string. Numerals will be counted:\n"<<endl;
	string nums;
	cin>>nums;
	cout<<*numeralFreqCount(nums)<<" \n"<<endl;
		
	//8.
	cout<<"The standard deviation in our test array's variables is "<<standardDev(testAry, szAry)<<".\n"<<endl;
	
	*/
	delete testAry;
	return 0;
}

//get random numbers to put into a test ary
int * getAnAry(int lth)
{
	int * ary = new int[lth];
	
		//rando stuff to fill ary with
	//srand (time(0)); //cred to cplusplus.com
	  	
	for(int i = 0; i < szAry; i++)
	{
		ary[i] = rand() % 1000; //vals 0 to 999
	}
		
	return ary;
}

////1. reverse what's in the test ary
//int * reverseAry(int * ary, int lth)
//{
//	int temp;
//	//loop to move position in different directions
//	for(int i = lth / 2; i>=0; i++)
//	{
//		temp = ary[i]; //set aside value
//		ary[i] = ary[lth-(i+1)]; //replace w/right side
//		ary[lth-(i+1)] = temp; //replace w/ left side held value
//		//made to stop swapping after reaching half point
//	}
//	
//	return ary;
//}
//

//2. Present the index of a min value in ary
int findMin(const int *ary, int lth)
{
	int idx = 0;
	
	for(int i = 0; i < lth; i++)
	{
		if(ary[i] < ary[idx])
		{
			idx = i;
		}
	}
	
	return idx;
}

//3. Present idx of max value in array
int findMax(const int *ary, int lth)
{
	int idx = 0;
	
	for(int i = 0; i < lth; i++)
	{
		if(ary[i] > ary[idx])
		{
			idx = i;
		}
	}
	
	return idx;	
}

//4. count instances of value in ary for rows using a second method
bool bPresentAllRows(int ary[][colN], int cols, int b)
{
	int rws = sizeof(ary)/cols; //cols would be sizeof(ary[0]); non-jagged
	int count;
	
	for(int i = 0; i < rws; i++)
	{
		if(bInThisRow(ary, i, b)) //pass specific row to check (subarray????)
		{
			count++;
		}
	}
	
	if(count == rws)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//4.1 check 1 ROW AT A TIME
bool bInThisRow(int ary[][colN], int row,int b)
{
	for(int i = 0; i < sizeof(ary[0]); i++) 
	{
		if(ary[row][i] == b) //checks only the specific passed on row
		{
			return true; //accounts for SINGLE INSTANCE in row.
		}
		else
		{
			return false;
		}
	}
}

//5. count appearances of number in 1d ary
int frequencyCount(int * a, int lth, int b)
{
	int sum = 0;
	for(int i = 0; i < lth; i++)
	{
		if(a[i] == b)
		{
			sum++;
		}
	}
	
	return sum;
}

//6. find mean of ary values
float findMean(const int *ary, int lth)
{
	double mean;
	int sum;
	
	for(int i = 0; i < szAry; i++)
	{
		sum += ary[i];
	}
	
	mean = sum / szAry; 
	
	return mean;
}

////7.returns a pointer to an array of length 10 containing the frequency count of the
////numerals contained in the string. Dynamically allocated. Returns a pointer.
//unsigned int * numeralFreqCount(const string &s)
//{
//	string str = s;//values that are in s
//	unsigned int *ary = new unsigned int[10]; //pointer ary of values
//	int freq;
//	
//	char c = '0';
//	while(c <='9') //check str for all numerals
//	{
//		for(int i = 0; i < str.length(); i++) //check every value in str before checking next char
//		{
//			if(str[i] == c)
//			{
//				freq++; //should catch one OR many values matching c
//			}
//		}
//		int idx = static_cast<int>(c); //which numeral's turn it is
//		ary[idx] = freq;
//		c++;
//	}
//	
//	return ary;
//}

//8. Sum the square of the difference of each value in the array and that mean. 
//The standard deviation is the square root of that
//sum divided by the number of elements in the array.
double standardDev(int *ary, int lth)
{
	double deviation;
	double mean = findMean(ary, lth);
	double diff = 0;
	double squaredNet = 0;

	for (int i = 0; i < lth; i++)
	{
		diff = ary[i] - mean;
		squaredNet += (diff * diff);
	}
	
	deviation = sqrt(squaredNet/lth);
	return deviation;
}












