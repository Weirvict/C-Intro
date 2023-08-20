//Binary IO sampler file - db apr17
// see section 8.2 pag 316 Lippman
//Writes from a particular point in memory (mapped as a char array) for a 
//specified number of bytes into a file. Then reads back into a point in
// memory for a specified number of bytes, mapped as a char array. This 
#include <iostream>
#include <fstream>
using namespace std;

// readUnSignedLongLongFromBinaryFile reads an unsigned long long array
//of length ySize from a binary file. does no error checking.
unsigned long long* readUsLongLongFromBinary(string fileName) {

	long size;
	ifstream cbf(fileName, ios::binary | ios::in);
	cbf.seekg(0, ios::end); // very old - goes back to reading 1600bpi tapes
	size = cbf.tellg();
	cbf.seekg(0, ios::beg);
	cbf.close();

	ifstream binaryIo1;
	unsigned long long *y = new unsigned long long[size/sizeof(unsigned long long)];
	binaryIo1.open("data.bin", ios::in | ios::binary);
	binaryIo1.seekg(0);
	binaryIo1.read((char*)y, size);
	binaryIo1.close();
	return y;
}
int main() {
	int xSize = 12;
	unsigned long long *x = new unsigned long long[xSize];
	unsigned long long *y;
	string fileName = "data.bin";

	for (int i = 0; i < xSize; i++) x[i] = i + 97;
	for (int i = 0; i < xSize; i++) cout << x[i] << " ";
	cout << endl << endl;

	// write unsigned int array into binary file
	ofstream binaryIo;
	binaryIo.open(fileName, ios::out | ios::binary | ios::trunc);
	binaryIo.seekp(0);
	binaryIo.write((char*)x, xSize * sizeof(x[0]));
	binaryIo.close();
	
	y = readUsLongLongFromBinary(fileName);

	for (int i = 0; i<xSize; i++) cout << y[i] << " ";
	cout << endl << endl;

	delete x;
	delete y;

}

