// Intstack class - dvb apr17
// note class DOES NOT check array boundaries - will eventually blow up!!
#include <iostream>
using namespace std;
class IntStack {
	private: 
		int *stackArray;
		int stackTop = -1;
	public:
	    static int countClassInstances;
		IntStack(int n) { 
			stackArray = new int [n]; 
			countClassInstances++;
		}
		IntStack() { IntStack(100); }
		int length() {return stackTop+1;}
    	void push(int value){ stackArray[++stackTop]=value; }
    	int pop() { return stackArray[stackTop--]; }
    	int peek() { return stackArray[stackTop]; }
    	~IntStack() { delete stackArray; }
  };
int IntStack::countClassInstances = 0;  // initialize the static class vairable count outside main or the class
int main () {
	IntStack *s = new IntStack(10);
	cout << "IntStack::countClassInstances " << IntStack::countClassInstances << endl;
		IntStack *s1 = new IntStack(10);
	cout << "IntStack::countClassInstances " << IntStack::countClassInstances << endl;
	s->push(10);
	cout << "stack top: " << s->peek() << endl;
	s->push(20);
	cout << "stack length: " << s->length()  << endl;
	cout << "stack top: " << s->peek() << endl;
	cout << "stack pop: " << s->pop() << endl;
	cout << "stack pop: " << s->pop() << endl;
	delete s; delete s1;
	return 0;
}
