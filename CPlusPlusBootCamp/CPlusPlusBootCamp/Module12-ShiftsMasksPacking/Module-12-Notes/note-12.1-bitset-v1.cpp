// bitset - dvb apr 17
#include <iostream>
#include <string>
#include <cstdlib>
#include <bitset>
using namespace std;
int main() {
	unsigned int x4 = 97; // 8 bytes
	unsigned int x5 = 87;
	cout << "long long: " << sizeof(x4) << endl; 
	bitset<32> bitset1(x4);  //constructor from integer
	cout << "bitset 1: " << bitset1 << endl;
	x4 = x4 << 24;
	x5=x5<<16;
	bitset<32> bitset2(x4);
	cout << "bitset 2: " << bitset2 << endl;
	bitset<32> bitset3(x5);
	cout << "bitset 3: " << bitset3 << endl;
	bitset<32> bitset4(x4|x5);
	cout << "bitset 4: " << bitset4 << endl;
	//bitset<8> bitset3(string("11110000")); // constructor from string
	///bitset<64> bitset4(x4);
	//cout << "x4 = 2: " << bitset4 << endl;
	
	//bitset<64> bitset5(x5);
	//cout << "x5 = -2: " << bitset5 << endl;
	return 0;
}

