#ifndef SUBSTITUTION_H
#define SUBSTITUTION_H
#include <string>
using namespace std;

class Substitution : public Cypher
{

private:
	string _key;
	string _dekey;

public:
	Substitution(string key);
	string encrypt(string unencrypted);
	string decrypt(string encrypted);
	string substitute(string original, string key);
};
#endif
