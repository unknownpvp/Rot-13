#ifndef CYPHER_H
#define CYPHER_H
#include <string>

class Cypher
{

private:
	int _chars;

public:
	void Cypher();
	string encrypt(string unencrypted);
	string decrypt(string encrypted);
	int chars_processed();

protected:
	chars_processed(int num);

#endif
