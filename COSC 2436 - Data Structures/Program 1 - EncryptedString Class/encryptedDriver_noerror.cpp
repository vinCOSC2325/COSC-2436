    // Programmer:      Vincent Howg
    // Project number:  1
    // Project Desc:    Program 1 - EncryptedString Class 
    // Course:          COSC 2415 PF III Data Structures
    // Date:            1-28-2018
#include <iostream>
#include <iomanip>
#include "encryptedstring.cpp"
using namespace std;



int main(){

	
	string word;
	word = "fun";	
	
	EncryptedString encrypt1(word);	// encrypt1 is an object of EncryptedString
	
	cout << encrypt1.getthePassword() << endl;
	
	return 0;
}

