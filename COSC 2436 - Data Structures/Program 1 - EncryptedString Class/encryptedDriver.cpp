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
    EncryptedString encrypt1;		// class name followed by object name 
    								// i believe this calls the default constructor?
	string word;		// create string variable to test different ways the data will be accepted
	
//	test #1 tests a good string to verify it will return the encrypted string
	word = "beans";
//	should return 5 characters encrypted
//	calls the set method with word as parameter 
//	format is object.set method
	encrypt1.set(word);
//	EncryptedString encrypt1(word);	// encrypt1 is an object of EncryptedString
									// it will call the constructor when created in this format 
									// no need to use this format for constructor encrypt1.EncryptedString(parameter)
//	prints out the encrypted password
	cout << "The encrypted password is" << encrypt1.getthePassword() << endl;
	
//	test if it will encrypt with spaces
	word = "under the sink";
//	should return 14 characters encrypted
	encrypt1.set(word);						
	cout << "The encrypted password is" << encrypt1.getthePassword() << endl;	// its returning an extra character for each space 
	
	return 0;
}

