// Note 1.3 - Loop Sampler - dvb apr 17
// sample for and while loops

#include <iostream>
using namespace std;
int main()
{
	// counter controlled loop
	//counting loop: displays numbers 1 through 10
	int i = 1;
	int userValue = -1;
	int sum = 0; // essential to initialize sum variable !!
	while (i <=10)
	{
		cout << i << " ";
		i = i+1;
	}  //note ";" not needed, but can include given 0-length statement
	cout << "\n";

	// summing loop
	i = 10; 
	while (i >=0)   //what is the difference between >= and > ???
	{
			sum = sum + i;
			i=i-1;
	}
	cout << "sum = " << sum << endl;  //what will the result be?

	// sentinel controlled loop
	// sum positive inputs until value negative number
	// note use of while loop requires repeating the 
// cout and cin statements
	sum = 0;
	cout << "please enter a positive number - -1 to end \n";
	cin >> userValue;  // what happens if first value is -1?
	while (userValue >=0)
	{
		sum = sum + userValue;
		cout << "please enter a positive number - -1 to end \n";
		cin >> userValue;
	}
	 cout << "sum = " << sum << endl;
	 
	//for loop example
	sum = 0;
	for (i = 0; i <= 10; i++) 
	{
		sum += i;
	}
	cout << sum << endl;

	// nested for loops that display a square

	for (int row = 0; row <=10 ; row++)
	{
		for (int col = 0; col <= 10; col++) 
		{
			cout << "X";
		}
		cout << endl;
	}

	 // use double nested for loops to display ascii character
	 // values between 0 - 255
	 // use correct cast as defined by book
	 for(int r = 0;r<24;r++) 
	 {
	 	for(int c = 0;c<10;c++)
	 	{
	 		char foo = r*10+c;
	 		cout << foo << " ";
	    }
	 	cout << endl;
     }

	return(0);
}

