#ifndef ROT_13
#define ROT_13
#include <string>

class Rot13
{

public:
	void Rot13();
	string encrypt(string unencrypted);
	string decrypt(string encrypted);
};

#endif
