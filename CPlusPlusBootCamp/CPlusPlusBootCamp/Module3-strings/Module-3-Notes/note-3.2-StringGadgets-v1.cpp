// string gadgets - dvb 2017
#include <iostream>
#include <string>
#include <cctype> // see lippman page 92
using namespace std;
int main()
{
	string s8 = "abcdefg";
	cout << s8.length() << endl;	
    s8.insert(3, "the cat");
    cout << s8 << endl;


	string s = "who's woods there are I think I know";
	s += " his house in in the village low.";
	cout << " s: " << s << endl;
	string s1;
	cout <<" please type in a whitespace seperated string" << endl;
	cin >> s1;
	cout << "s1[-1]" << "---" << s[-1] << "---"<< endl;
	cout << "static_cast<unsigned int>(s1[-100])" << "---" << static_cast<unsigned int>(s1[-100]) << "---"<< endl;
	cout << "(unsigned int)s1[-100]" << "---" << (unsigned int)s1[-100] << "---"<< endl;
	cout << s1 << endl;
	
	cout << "s.length(): " << s.length() << endl;
	cout << "s.size(): " << s.size() << endl;
	cout << "s.at(10): " << s.at(10) << endl;
	cout << "s[10]: " << s[10] << endl;
	cout << "s.substr(5): " << s.substr(5) << endl;
	cout << "s.insert(10,\"jhi there\")" << endl;
	s.insert(10,"hi there");
	cout << s << endl;	
	
	cout << "	s.replace(3, 2, \" ABCDEF\"): " << endl;
	s.replace(3, 2, "ABCDEF");
	cout << s << endl;
	s = "this there foo";
	int f = s.find("there");
	cout << "f======================  " <<f << endl;  //returns the position of the first character in s or -1

	cout << "find(\"these\")" << s.find("these")	<< endl;
	cout << "---------------------";

	s.erase(5, 6);
	cout << s << endl;
	for(auto c : s) cout << c;
	cout << endl;
	cout << s << endl;
	string s5="";
	for(auto c : s) s5 += toupper(c);
	cout << s5 << endl;
	s.clear();
	//int foo = s
	// compareto
	cout << "s.empty(): " << s.empty() << endl;
	string s6 = "abcde"; string s7 = "abdf";
	if(s6<s7) 
		cout << s6 << "--  is < --" << s7 << endl;
	else
		cout << s6 << "--  is !< --" << s7 << endl;
	return 0;

}

	

