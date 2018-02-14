#include <iostream>
#include "cypher.h"
#include "rot13.h"
#include "substitution.h"
#include <fstream>
#include <string>
using namespace std;

int main()
{
string ePhrase;
string dPhrase;
int option;
string fileName;
ifstream inFile;
ofstream oFile;
string encrypted;
string unencrypted;
Rot13 rot13;

cout << "----- Cryptography program -----\n\n";

	cout << "Encrypt (Enter 1)\n";
        cout << "Decrypt (Enter 2)\n";
        cout << "Exit (Enter 0)\n";
        cin >> option;

	if(option==1)
	{
		cout << "----- Encrypting -----" << endl;
		cout << "Enter input file name: ";
		cin >> fileName;
		oFile.open(string(fileName+".rot13").c_str());
		if(oFile.is_open())
		{
		cout << "Type a phrase to encrypt: ";
		cin.ignore();
		getline(cin,unencrypted);
		ePhrase = rot13.encrypt(unencrypted);
		oFile << ePhrase << endl;
		oFile.close();
		inFile >> ePhrase;
		cout << ePhrase << endl;
		inFile.close();
		}
	}
	else if(option==2)
	{
		cout << "----- Decrypting -----" << endl;
		cout << "Enter the encrypted phrase: ";
		oFile.open(string(fileName+".rot13").c_str());
		if(oFile.is_open())
		{
		cin.ignore();
		getline(cin,unencrypted);
		dPhrase = rot13.decrypt(unencrypted);
		oFile << dPhrase << endl;
		oFile.close();
		inFile >> dPhrase;
		cout << dPhrase << endl;
		inFile.close();
		}
	}

return 0;
}
