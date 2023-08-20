//textFileSampler - dvb apr 17 - see page 753
//	sample code for text input and output to and from files 
// see section 8.2 page 316 Lippman
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename1 = "hermanTheMouseMaze-1.txt";

	ifstream input(filename1);  
	if (input.fail()) 
	{
		cout << "failed to open- exit program" << endl;
		return 0;
	};

	int rows, cols;
	input >> rows; 
	input >> cols;
	char *maze = new char[rows*cols];
	for(int r=0;r<rows;r++)
	{
		int foo = input.get();
		for(int c=0;c<cols;c++) 
			maze[r*cols+c] = input.get();

	}
	cout << rows << endl;
	cout << cols << endl;
	for(int r=0;r<rows;r++)
	{
		for(int c=0;c<cols;c++) cout << maze[r*cols+c];
		cout  << endl;
	}
	delete maze;
	input.close();
/*

	string s1= "";
	string s2;
	ifstream input1("frost.txt");
	while (!input1.eof())
	{
		input1 >> s2;
		s1 += s2; 
	}
	cout << s1 << endl; // note no white spaces - why not?
	input1.close();

	string s1 = "";
	string s2 = "";
	ifstream input2("frost.txt");
	while (!input2.eof())
	{;
		s1 += input2.get(); 
	}
	cout << s1 << endl; // note no white spaces
	input2.close();

	cout << "done" << endl;*/
	return 0;
}

