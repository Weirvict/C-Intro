
#include <iostream>
#include <string>
using namespace std;
class Part {
	private: 
		string partName;
		int partNumber;
	public:
		Part(const string &pn, int pnum) {
			if(pn.length()>0 && pn[0]>='a' && pn[0]<='z')
				partName = (char)(pn[0]-('a'-'A'))+pn.substr(1);
			else
				partName = "";
			partNumber = pnum;
		}
    	string getPartName() { return partName;}
    	int getPartNumber() {return partNumber;}
  };
int main () {
	Part *p = new Part("widget", 42);
	cout << (p->getPartName()+" "+to_string(p->getPartNumber()))<< endl;
	return 0;
}
