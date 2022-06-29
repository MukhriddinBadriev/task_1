#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFile ("in.txt");

	int size1=0;
	inputFile >> size1;
	
	int* mas1 = new int [size1];
	for (int i = 0; i < size1; i++)
	{
		inputFile >> mas1[i];
	}

	int size2 = 0;
	inputFile >> size2;	

	int* mas2 = new int[size2];
	for (int i = 0; i < size2; i++)
	{
		inputFile >> mas2[i];
	}

	ofstream outputFile("out.txt");
	outputFile << size2<<endl;
	outputFile << mas2[size2-1];
	for (int i = 0; i < size2-1; i++)
	{
		outputFile <<" " << mas2[i];
	}
	outputFile << endl;
	outputFile << size1 << endl;
	for (int i = 1; i < size1; i++)
	{
		outputFile << mas1[i] << " ";
	}
	outputFile << mas1[0];
	delete[]mas1;
	delete[]mas2;
	return 0;
}