#ifndef CYPHER_H
#define CYPHER_H
#include <string>
using namespace std;

class Cypher
{

private:
	int _chars;

public:
	Cypher();
	virtual string encrypt(string unencrypted) = 0;
	virtual string decrypt(string encrypted) = 0;
	int chars_processed();

protected:
	int chars_processed(int num);
};
#endif
