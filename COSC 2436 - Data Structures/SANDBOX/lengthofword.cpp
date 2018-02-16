#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	int i;
	int b;
	string password;
	string newPassword;
	char ch;
	int length;
	int x;
	
	i = 0;
	b = 0;
	x = 0;
//	password = "Hello";
	ch = 0;
//	newPassword = "";
	length = password.size();
		password = "happy";
		newPassword = "";
		
//		int i;
//		int b;
//		b = 0;
//		i = 0;
		for (int i=0; i<password.length(); i++)
		{
//			ch = password[i] + 1;
//			ch += newPassword[b];
			newPassword = password + (password[i] + 1)
			cout << newPassword << endl;
			
		}
	
//	while(length > 0){
////		cout << length << endl;
////		cout << password << endl;
//		ch = password[i] + 1;
//		cout << ch << endl;
////		ch = ch;
////		cout << ch << endl;
//        for(x = 0; x < 1; x++){
//        	ch = newPassword[b];
//        	b++;
//		};
//		
//		i++;
////		b++;.
//		length--;
//		cout << newPassword << "ok" << endl;
	
//	cout << newPassword << endl;
//	cout << newPassword << "ok" << endl;
	return 0;
}
