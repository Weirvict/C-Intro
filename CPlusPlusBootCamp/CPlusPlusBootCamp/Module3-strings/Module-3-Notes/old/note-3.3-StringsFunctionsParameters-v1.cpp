// functions with string parameters and other string functions- dvb 2017

#include <iostream>
#include <string>
using namespace std;
string forceSingleSpaces1 (const string &s);
char makeCharUpper (char a);
string makeStrUpper(const string &a);
char makeCharLower(char a);
string makeStrLower(const string &a);
string cannonicalizeName (const string &name);
string forceSingleSpaces2 (const string &s);
void printLowerCase();
void printUpperCase();
int main()
{
	string s = "now is the    time for      all      good men ";
	cout << s.length() << endl;
	s = s + " to come to the    aid of    their country";
	cout << s.length() << " " << s.capacity() << " " << s.size() <<endl;
	cout << s << endl << endl;
	string s1 = "who's woods there are I think I know";
	s1 += " his house in in the city low.";
	cout << s1 << endl << endl;
	cout << s1.at(10) << endl;
	cout << s1.substr(10, 6);
	s1.insert(10,"hi there");
	cout << s1 << endl;
	s1.erase(5, 6);
	cout << s1 << endl;
	s1.clear();
	cout << s1 << endl;
	cout << s.empty() << endl;
	s1 = "1234567890";
	s1.replace(3, 2, "ABCDEF");
	cout << s1 << endl;
	cout << s.empty() << endl;
	string s2 = "fred F. Farfinkle";
	string s3 = "Sue S. Smith" ;
	cout << s2 << " " << s3 << " " << s2.compare(s3) << " " << s2.compare(5, 4, s3) << endl;
	cout << forceSingleSpaces1(s) << endl;
	cout << forceSingleSpaces2(s) << endl;
	printLowerCase();
	printUpperCase();

	string name = "freD f      farfINkle"; //add code to cannonicalize middle initial and last name as well
name = forceSingleSpaces2(name);
string firstName  = name.substr(0,name.find(" "));
cout <<firstName << "XX" << endl;
	cout << name << " " << cannonicalizeName(forceSingleSpaces2(name)) << endl;
	return 0;
}

//		makeCharUpper - private function to make a single character uppercase

	char makeCharUpper (char a)
	{
		if (a>='a' && a <='z')  a = a - ('a' - 'A');
		return a;
	}

//		makeStrUpper - private function to make an entire string upper case
// we pass the reference to a because as a string it may be VERY LARGE, but we
// make it a constant because it should not change.

	string makeStrUpper(string &a)
	{
		int stringLength = a.length() ;
		for (int i = 0;i <stringLength; i++) 
			a[i] = makeCharUpper(a[i]);
		return a;
	}

//		makeCharLower - private function to make a single character lowercase
	char makeCharLower(char a)	{
			if (a>='A' && a <='Z')  a = a + ('a' - 'A');
		return a;
	}

//		makeStrLower - private function to make a single character lowercase
		string makeStrLower(string &a)	{
		int stringLength = a.length() ;
		for (int i = 0;i <stringLength; i++) 
			a[i]= makeCharLower(a[i]);
		return a;
	}

//	canonicalizeName - 	private function to change name into a standarize form
string cannonicalizeName (const string &name)	{
			if (name.length() < 2) return name;
			name = name.trim();
			return makeCharUpper(  name[0]) + makeStrLower(name.substr(1));
		}

//	forceSingleSpaces1 - change all occurances of multiple spaces into single spaces
//		first version using double nested loops
string forceSingleSpaces1 (const string &s) {
	string r = "";
	int i = 0;
	while (i < static_cast <int> (s.length())){
		if (s.at(i) != ' ')	{
			r = r + s.at(i);
			i++;
		}
		else{
			r +=  ' ';
			while (i < static_cast <int> (s.length()) && s.at(i) == ' ')
				i++;
		}
	}
	return r;
	}
//	forceSingleSpaces2 - change all occurances of multiple spaces into single spaces
//		second version using single loop and flags
	string forceSingleSpaces2 (const string &s)	{
		string r = "";
		bool previousCharIsSpace = false;
		for (int i = 0;i <static_cast <int> (s.length()); i++)
			if (s.at(i) != ' ')	{
				previousCharIsSpace = false;
				r += s.at(i);
			}
			else if (!previousCharIsSpace)	{
				r += ' ';
				previousCharIsSpace = true;
			}
		return r;
		}

 // printLowerCase
void printLowerCase()	{
		for(char c = 'a'; c <='z';c++) cout << c;
		cout << endl;
		}

// printUpperCase
void printUpperCase()	{
		for(char c = 'a'; c <='z';c++) cout << c;
		cout << endl;
	}
	

