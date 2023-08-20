#include <iostream>
using namespace std;
int zoo = 1;
int foo() {
	zoo = zoo+1;
	return zoo;
}
int main() {
	zoo = 42;
	for(int i=0;i<10;i++) 
		cout << foo() << endl;
	return 0;
}
