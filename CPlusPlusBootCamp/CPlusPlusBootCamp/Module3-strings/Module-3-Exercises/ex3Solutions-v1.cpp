#include <iostream>
#include <cmath>
using namespace std;
int hexStrToDec(string s);
int hexDigitToDec(char h);
int main() {
	cout << hexStrToDec("FFFF") << endl;

	return 0;
}
// hex to decimal 0 accepts string with hex. returns -1
// if errors - else returns dec equiv. dvb sep17
int hexStrToDec(string s) {
	int sum=0;
	int place=0;
	char hexDigit;
	int decOfHexDigit;
	while(s.length() >0) {
		hexDigit=s[s.length()-1];
		decOfHexDigit = hexDigitToDec(hexDigit);
		if(decOfHexDigit ==-1) return -1;
		s=s.substr(0,s.length()-1);
		sum += pow(16,place)*decOfHexDigit;
		place++;
	}

	return sum;
}
// hex digit to dec -1 if errors, else equiv dec
int hexDigitToDec(char h) {
	if(h>='0' && h<='9') 
		return h-'0';
	else if  (h>='A' && h<='F')
		return 10+(h-'A');
	else
		return -1;
}
