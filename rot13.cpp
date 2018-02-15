#include "rot13.h"
#include <string>
using namespace std;
Rot13::Rot13()
{

}

string Rot13::encrypt(string unencrypted)
{
string ePhrase;
for(int i=0;i<unencrypted.length();i++)
{
        if((tolower(unencrypted[i])-'a')<14)
        {
                ePhrase.append(1,unencrypted[i]+13);
        }
        else
        {
               ePhrase.append(1,unencrypted[i]-13);
        }
}
return ePhrase;
}

string Rot13::decrypt(string encrypted)
{
string dPhrase;
for(int i=0;i<encrypted.length();i++)
{
        if((tolower(encrypted[i])-'a')<14)
        {
                dPhrase.append(1,encrypted[i]+13);
        }
        else
        {
                dPhrase.append(1,encrypted[i]-13);
        }
}
return dPhrase;
}
