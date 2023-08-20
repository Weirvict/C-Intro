#include <iostream>
using namespace std;
int main() {
	int x = 3;
	int y = 7;
	for (int i=0;i<3;i=i+2) {
		x = y + x;
		y = y-1;
		x = x + y;
	}
	cout << x << endl;
	return(0);

	}
	
