// fun with pointers - dvb apr 17
#include <iostream>
using namespace std;
int *zoo( int a[], int size) {
	int *b = new int[size];
	for(int i=0;i<size;i++) b[i]=a[i]+1;
	return b;
}
int main()
{
	int a = 3;
	int *b = &a;
	cout << *b << endl;
	int **c = &b;
	cout << **c << endl;

	int *d = new int[a][a];
	d[0]=7;
	d[1]=8;
	d[2]=9;
	int *foo = d;
	for(int i=0;i<3;i++){
		cout << foo[0];
		foo++;
	}
	cout << "---" << endl;
	
	int *goo = zoo(d, a);
	for(int i=0;i<a;i++) cout << goo[i] << " ";
	cout << endl;
	delete goo;
	return 0;
}

