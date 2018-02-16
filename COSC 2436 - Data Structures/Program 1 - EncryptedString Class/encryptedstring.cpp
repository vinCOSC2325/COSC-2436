    // Programmer:      Vincent Howg
    // Project number:  1
    // Project Desc:    Program 1 - EncryptedString Class 
	// File:            encryptedstring.cpp	
    // Course:          COSC 2415 PF III Data Structures
    // Date:            1-17-2018

# include "encryptedstring.h"
//using namespace std;


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
//		temp.set(password);
		password = temp;
    }
	
    // mutator method called set
    // takes string as parameter - encrypts the string - store result    // in the object
    // discard any illegal characters
    void EncryptedString::set(const std::string thePassword)
	{
		password = "";
		std::string passtheword = "";
			for (int i=0; i<thePassword.length(); i++)
			{
				if (thePassword[i] ==  ' ')
					password = password + "";
				else if (thePassword[i] != ' ')			// the character is a legal character other than space
					passtheword = thePassword[i] + 1;
					password = password + passtheword;
				// else do nothing
//				password +=  (thePassword[i] + 1);
			}
	}
    // accessor method called get
    // returns the original (un-encrypted) string
    // decrypts the string stored in the object's data member
    std::string EncryptedString::getthePassword() const
    {
//    	std::string passtheword = "";
//    	for (int i = 0; i<password.length(); i++)
//    		passtheword = password[i] - 1;
//    		password = password + passtheword;
    		
    	
            return password;
    }
    // returns the string in encrypted format for debugging/testing purposes
    std::string EncryptedString::getEncrypted() const
	{
	};


        
  
        

