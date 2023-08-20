//textFileSampler - dvb apr 17 - see page 753
//	sample code for text input and output to and from files 
// see section 8.2 page 316 Lippman
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//----------------first sample code for output to text file
	string filename1 = "frost.txt";
//create an instance of ofstream class named "output"
	// 'of' stands for "output file"
//	ofstream output; 

	////create file by executing open method/function of "output instance" of the ofstream class
	// note this file uses a relative path name so the file will be created in project's textfilesampler folder

	//output.open(filename1); 
//	cout << output.fail() << endl;
 	//what happens with output when \n encountered?
	string s = "I'm going out to fetch the little calf that's standing by the mother.";
/*	output << s << endl;
	output << "It's so young, it totters when she licks it with her tongue \n I shan't be gone long" << endl;
	output.close(); //fire the close method/function of the "output" instance of the ofstream class
*/
	//----------------second sample code for output to text file
	//ofstream output1;
	//output1.open("c:\\frost.txt");  // create another file using an absolute file path name starting at c:
	//output1 << "You come too. " << endl;
	//output1.close(); 
/*
	// -- put() for writing a single character. See page 761
	//note also table 17.19: get, put, putback, unget, peek
	// note "forst.txt has been opened for append
	ofstream output2("frost.txt", ios::app);
	s = "Robert Frost. \n is a really good poet";
	for (unsigned int i = 0; i<s.length();i++)  output2.put(s.at(i));
	output2.close();


	//-Fourth sample code for input to text file 
	ifstream input("frost.txt");  ///note provide file name to constructor so don't need to fire open
	if (input.fail()) 
	{
		cout << "failed to open 'scores.txt'  - exit program" << endl;
		return 0;
	};

	string s1;
	input >> s1; // note that using >> only obtains data delimited by whitespace (include space) so only obtain I'm
	cout << s1 << endl;
	input.close();

	//---------------second sample code for input to text file 
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
*/
	//----------------third sample code for input to text file using 'get' 
	// see page 761
	string s1 = "";
	string s2 = "";
	ifstream input2("frost.txt");
	while (!input2.eof())
	{;
		s1 += input2.get(); 
	}
	cout << s1 << endl; // note no white spaces
	input2.close();

	cout << "done" << endl;
	return 0;
}

