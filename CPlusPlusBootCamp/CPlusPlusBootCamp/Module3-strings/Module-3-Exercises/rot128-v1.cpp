#include <iostream>
using namespace std;

char rot128(char c){
	return (c+128)%256;
}
string rot128(const string &s) {
	string s1=s;
	for(int i=0;i<s.length();i++) s1[i]=rot128(s1[i]);
	return s1;
}
int main() {
	cout <<	rot128(rot128('A')) << endl;
	string s = "this is a test";
	cout << rot128(s)<< endl;
	cout << s << endl;
	return 0;
}
