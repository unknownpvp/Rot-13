#include "substitution.h"
#include <cctype>
#include <string>
using namespace std;

Substitution::Substitution(string key) : _key{key}, _dekey{key}{}

string Substitution::encrypt(string unencrypted)
{
int i;
char eWord;
for(i=0;i<unencrypted.length();i++)
{
	eWord=unencrypted[i];
	if(isalpha(eWord))
	{
      		if(isupper(eWord))
		{
        		unencrypted[i] = toupper(_key[eWord-'A']);
		}
      		else
		{
        		unencrypted[i]=_key[eWord-'a'];
		}
	}
}
}

string Substitution::decrypt(string encrypted)
{
int j;
char dWord;
for(j=0;j<encrypted.length();j++)
{
        dWord=encrypted[j];
        if(isalpha(dWord))
        {
                if(isupper(dWord))
                {
                        encrypted[j] = toupper(_dekey[dWord-'A']);
                }
                else
                {
                        encrypted[j]=_dekey[dWord-'a'];
                }
        }
}
}

string Substitution::substitute(string original, string key)
{

}
