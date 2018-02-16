    // Programmer:      Vincent Howg
    // Project number:  1
    // Project Desc:    Program 1 - EncryptedString Class 
	// File:            encryptedstring.cpp	
    // Course:          COSC 2415 PF III Data Structures
    // Date:            1-17-2018

# include "encryptedstring.h"
using namespace std;


    // default constructor
    // stores an empty string in the data field
    // a default constructor must have parenthesis and brackets
    // the functions in the source code file shouldn't have semicolons after the brackets
    // member definitions in the class will have semicolons after
    EncryptedString::EncryptedString(){
    	password = "";
	}

    // parameterized constructor
    // stores the encrypted parameter in the data field
    EncryptedString::EncryptedString(const std::string thePassword){
		password = thePassword;
		std::string temp;
		// code to encrypt the characters in thePassword and put them in temp
		// since this parameterized constructor doesn't do any work I'll call the set method to encrypt the password
		set(temp);
		password = temp;
    }
	
    // mutator method called set
    // takes string as parameter - encrypts the string - store result    // in the object
    // discard any illegal characters
    void set(const std::string thePassword){
    	//password = thePassword;
//		int i;
//    	i = 0;
//		 password = "";            // start with an empty encrypted string
//			for (int i=0; i<thePassword.length(); i++)
//			{
//				if (thePassword[i] ==  ' ')
//							password = password + ' ';
//				//else if // the character is a legal character other than space
//							//password = password + (thePassword[i] + 1);
//				// else do nothing
//			}
		
	}
    // accessor method called get
    // returns the original (un-encrypted) string
    // decrypts the string stored in the object's data member
    std::string EncryptedString::getthePassword() const
    {
            return password;
    }
    // returns the string in encrypted format for debugging/testing purposes
    std::string EncryptedString::getEncrypted() const{
	};


        
  
        

