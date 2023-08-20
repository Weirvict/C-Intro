#include <iostream>  // includes system I/O software
using namespace std;  // eliminates the need for std::
int main()
{
	cout << "hello world" << endl;
	cout << "this line does not end with a linefeed or carriage return";
	std::cout << " another output line \n";
	cout << "and another output line" << static_cast<char>(10); // what does this do?
	cout << "a final line" << endl;
	cout << "--";
	cout << static_cast<unsigned int>('\n');  //hint
	cout << "--" << endl << endl;
	string s;
	cout << "please enter your name: "; // try with an without a space in the name
	cin >> s;
	cout << "hello " << s << endl;
		
	return(0);
}

