#include "rot13.h"

Rot13::Rot13(){}

string Rot13::encrypt(string unencrypted string)
{
	if((ch>='A') && (ch<='Z'))
	{
		ch = (ch - 'A' + 13) % 26 + 'A';
	}
	return ch;
}

string Rot13::decrypt(string encrypted)
{
	if((ch>='A') && (ch<='Z'))
	{
		ch = (ch - 'a' + 13) % 26 + 'a';
	}
	return ch;
}
