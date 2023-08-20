// oldSchool time delays - dvb apr 17
#include <ctime>
#include <iostream>
using namespace std;
void displaySquare(int n, char c);
void delayASecond();
void clearConsole();
int main()
{
for( int i=0;i<10;i++)
{
	displaySquare(5, 'X');
	cout << endl;
	delayASecond();
	clearConsole();
}

}
void displaySquare(int n, char out)
{
	for(int r=0;r<n;r++)
	{
		for (int c = 0;c<n;c++)
			cout << out;
		cout << endl;
	}
}
void delayASecond()
{
		float secs=1;
	clock_t delay = secs* CLOCKS_PER_SEC;
	clock_t start = clock();
		while ((clock() - start) < delay)   ; 
}
void clearConsole()
{
	int n = 30;
	for(int i=0;i<n;i++) cout << endl;
}

