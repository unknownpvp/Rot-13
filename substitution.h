#ifndef SUBSTITUTION_H
#define SUBSTITUTION_H
#include <string>

class Substitution
{

private:
	string _key;
	string _dekey;

public:
	Substitution(string key);
	encrypt(string unencrypted);
	decrypt(string encrypted);
	string substitute(string original, string key);
};
#endif
