#include <iostream>
#include <string>
#include <cctype>

#ifndef EncryptedString_H
#define EncryptedString_H



using namespace std;

class EncryptedString
{
public:
	EncryptedString();
	EncryptedString(string aString);
	void set(string s);
	string get() const;
	string getEncrypted() const;
private:
	string myString;
};

#endif
