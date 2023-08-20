#include <iostream>
using namespace std;
char rot13(char c)
{
	if(c>='a' && c <='z') c= (((c-'a')+13)%26)+'a';
	if(c>='A' && c <='Z') c= (((c-'A')+13)%26)+'A';
	return c;	
}
string rot13(const string &s)
{
	string s1="";
	for(int i=0;i<s.length();i++) s1 +=rot13(s[i]);
	return s1;
}
int main() {
	cout << rot13("this is a test this is only aaaFFF") << endl;
	return 0;
}
