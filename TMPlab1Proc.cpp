// TMPlab1_OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//#include <iostream>
//#include <fstream>
#include "Source.h"
using namespace std;
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	container c;

	string s1 = argv[1], s2 = argv[2];

	InCont(ifst, &c);
	ofst << "Filled container. " << endl;
	OutCont(ofst, &c);
	Clear(&c);
	ofst << "Empty container. " << endl;
	OutCont(ofst, &c);
	cout << "Stop" << endl;
	return 0;
}

