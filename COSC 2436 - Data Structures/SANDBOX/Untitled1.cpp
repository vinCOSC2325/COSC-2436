#include <iostream>
#include <iomanip>
using namespace std;

void writeBackward(std::string s)
{
int length = s.size(); // Length of string
if (length > 0)
{
// Write the last character
cout << s.substr(length - 1, 1) << endl;
// Write the rest of the string backward
writeBackward(s.substr(0, length – 1)); // Point A
} // end if
// length == 0 is the base case - do nothing
} // end writeBackward

int main(){
	

}

