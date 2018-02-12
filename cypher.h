#ifndef CYPHER_H
#define CYPHER_H
#include <string>

class Cypher
{

private:
	int _chars;

public:
	void Cypher();
	virtual string encrypt(string unencrypted) = 0;
	virtual string decrypt(string encrypted) = 0;
	int chars_processed();

protected:
	chars_processed(int num);
};
#endif
