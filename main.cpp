#include <iostream>
#include "cypher.h"
#include "rot13.h"
#include "substitution.h"
#include <fstream>
using namespace std;

int main()
{

int option;
char inFile;
char oFile;
cout << "--- Cryptography program ---\n";
do
{
	cout << "Encrypt (Enter 1)\n";
	cout << "Decrypt (Enter 2)\n";
	cout << "Exit (Enter 0)\n";
	cin >> option;
	if(option==1)
	{
		cout << "Enter input file name\n";
		cin >> inFile;
		cout << "Enter output file name\n";
		cin >> oFile;
		encrypt(inFile,oFile);
	}
	else
	{
		cout << "Enter input file name\n";
		cin >> inFile;
		cout << "Enter output file name\n";
		cin >> oFile;
		decrypt(inFile,oFile);
	}
while(option!=0);
}
