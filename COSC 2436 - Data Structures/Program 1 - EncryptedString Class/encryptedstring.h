    // Programmer:      Vincent Howg
    // Project number:  1
    // Project Desc:    Program 1 - EncryptedString Class
    // File:            encryptedstring.h	
    // Course:          COSC 2415 PF III Data Structures
    // Date:            1-17-2018
	
#include <string>
using namespace std;

class EncryptedString
{
private:
    // Data field
    // data member 
    // store a string in encrypted format
    std::string password;
public:
    // Default constructor
    // stores an empty string
    EncryptedString();
    // Parameterized constructor
    // takes string as parameter
    // stores encrypted version of the parameter in the data field
    // calls set method to encrypt and store the string
    EncryptedString( const std::string thePassword );
    // Method takes string as parameter - encrypts string parameter - stores result in object
    // discards illegal characters in the string parameter
	// this should set the parameter thePassword to member variable EncryptedString1
    void set( const std::string thePassword );
    // Method returns original (un-encrypted) string
    // decrypts the string that is stored in the object's data member 
	// this should return a member variable that was set in the public set method
    std::string getthePassword()const;
    // returns the string in encrypted format for debugging/testing purposes
    std::string getEncrypted() const;

    
};
