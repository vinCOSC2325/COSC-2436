    // Programmer:      Vincent Howg
    // Project number:  1
    // Project Desc:    Program 1 - EncryptedString Class 
    // Course:          COSC 2415 PF III Data Structures
    // Date:            1-17-2018
#include <string>
# include "encryptedstring.h"
using namespace std;

    // default constructor
    // stores an empty string in the data field
    EncryptedString::EncryptedString()
//    {
//	    /* password = "SunShineBrite"; */
//    }

//    // destructor
//    // deletes the memory when completed to avoid memory leaks
//    EncryptedString::~EncryptedString(){
//	    del password;
//    };

    // parameterized constructor
    // stores the encrypted parameter in the data field
    EncryptedString::EncryptedString(std::string thePassword){
		std::string temp;
		// code to encrypt the characters in thePassword and put them in temp
		password = temp;
    }


    // mutator method called set
    // takes string as parameter - encrypts the string - store result    // in the object
    // discard any illegal characters
    void set(std::string thePassword){
           thePassword;
    }

    // accessor method called get
    // returns the original (un-encrypted) string
    // decrypts the string stored in the object's data member
        std::string EncryptedString::getEncrypted() const
    {
            return "";
    }
    
    // returns the string in encrypted format for debugging/testing purposes
    std::string getEncrypted();


        
  
        

