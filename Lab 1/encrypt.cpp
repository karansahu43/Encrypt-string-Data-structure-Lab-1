#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//--------------------------------------------------------------------------


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

//------------------------------------------------------------------------

EncryptedString::EncryptedString():myString(string())
{	
}

EncryptedString::EncryptedString(string aString)
{
	set(aString);
}

// Method set - encrypt the string and store in the object
void EncryptedString::set(string aString)
{
	myString = "";
	// encrypt each character and add myString
	for(int i=0; i<aString.length(); i++)
	{
		char ch = aString[i];
		
		if (ch == 'Z')
		{
			ch = 'A';
			myString += ch;
		}
		else if (ch == 'z')
		{
			ch = 'a';
			myString += ch;
		}
		else if (isalpha(ch))
		{
			ch++;
			myString += ch;
		}
		else if (ch == ' ')
		{
			myString += ch;
		}
		// else remove the character
	}
}

// Method get - decrypt the string before returning
string EncryptedString::get() const
{
	string resultString = "";
	// encrypt each character and add myString
	for(int i=0; i<myString.length(); i++)
	{
		char ch = myString[i];
		
		if (ch == 'A')
		{
			ch = 'Z';
			resultString += ch;
		}
		else if (ch == 'a')
		{
			ch = 'z';
			resultString += ch;
		}
		else if (isalpha(ch))
		{
			ch--;
			resultString += ch;
		}
		else if (ch == ' ')
		{
			resultString += ch;
		}
	}
	return resultString;
}

// Methid getEncrypted - return a copy of the encrypted string
string EncryptedString::getEncrypted() const
{
	return myString;
}

//----------------------------------------------------------------------------------

int main()
{
	EncryptedString str1;
	string String, String2;             
	
	cout << "Empty string not encrypted: " << str1.get() << endl;
	cout << "Empty string     encrypted: " << str1.getEncrypted() << endl << endl;
	
	cout << "Note: '!' is illegal and is removed" << endl << endl;
	
	cout << "Please enter string 1 name: ";
	getline (cin, String);
	
	str1.set(String);
	cout << String << " not encrypted: " << str1.get() << endl;
	cout << String << "    encrypted: " << str1.getEncrypted() << endl << endl;
	
	cout << "Please enter string 2 name: ";
	getline (cin, String2);
	EncryptedString str2(String2);
	cout << String2 <<  " not encrypted: " << str2.get() << endl;
	cout << String2 << "    encrypted: " << str2.getEncrypted() << endl;

		 
	return 0;
}
