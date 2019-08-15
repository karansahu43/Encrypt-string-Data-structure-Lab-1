// Author:  Karan Sahu
// Assignment Number: Lab 1
// File Name: KaranSahuLab1.cpp
// Course/Section: data struct
// Due Date:  
// Instructor: Bernard Ku

#include <iostream>
#include <string>
#include <cctype>
#include "EncryptedString.cpp"
using namespace std;



int main()
{
	EncryptedString str1;
	string String, String2;             
	
	cout << "Empty string not encrypted: " << str1.get() << endl;
	cout << "Empty string     encrypted: " << str1.getEncrypted() << endl << endl;
	
	cout << "Note: special characters are illegal and is removed" << endl << endl;
	
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

/*   sample output
Empty string not encrypted:
Empty string     encrypted:

Note: special characters are illegal and is removed

Please enter string 1 name: Karan Sahu
Karan Sahu not encrypted: Karan Sahu
Karan Sahu    encrypted: Lbsbo Tbiv

Please enter string 2 name: bob!tran
bob!tran not encrypted: bobtran
bob!tran    encrypted: cpcusbo

*/
