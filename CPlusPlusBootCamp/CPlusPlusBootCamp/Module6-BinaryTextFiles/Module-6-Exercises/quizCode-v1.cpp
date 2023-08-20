#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	ofstream output2("foo.txt");
	string s = "this is a test.";
// pay very close attention to the details in the following line
	for (unsigned int i = 0; i<s.length();i=i+2)  output2.put(s.at(i));
	output2.close();

	return 0;
}
