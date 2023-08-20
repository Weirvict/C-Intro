// quiz code module 2
#include <iostream>
using namespace std;
char getCharFromAsciiValue (int n) {
	return (static_cast<int> (n));
}
int main () {
	int r = 3;
	//cout << (r=5+r) << endl;
	//cout << (3==1) << endl; // true is 1 or !zero -- false is 0
	int w = ((r=1) == 1);
	cout << "r + w is: " << r+w << endl;
	
	int t = 3;
	t = ++ t + t++ - --t - t--;
	cout << "t is: " << t << endl;

    int p = 0;
    if(p=0)
       cout << p << endl;
   else
      cout << 42 << endl;
      cout << "foo" << getCharFromAsciiValue(97) << endl;
    int foo = 3;
    while(foo < 45) foo *=2;
	foo-=6;
	cout << "foo is: " << foo << endl;
	
	return 0;
}
