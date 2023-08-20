// C++ type sizes - dvb apr 17
// NOTE! may depend on the machine and compiler you are using
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	
	// print out the sizes of interesting data types
	// https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "size of bool : " << sizeof(bool) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of int* : " << sizeof(int*) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of unsigned int : " << sizeof(unsigned int) << endl;
   cout << "Size of unsigned short int : " << sizeof(unsigned short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of unsigned long int : " << sizeof(unsigned long int) << endl;
   cout << "Size of long int : " << sizeof(long long) << endl;
   cout << "Size of unsigned long int : " << sizeof(unsigned long long) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of long double : " << sizeof(long double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   cout << "Size of char* : " << sizeof(char*) << endl;
   cout << "Size of int* : " << sizeof(int*) << endl;
   cout << "Size of bool : " << sizeof(bool) << endl;
   cout << "Size of long long* : " << sizeof(long long*) << endl;
   
}
