#include <iostream>
#include <iomanip>
using namespace std;

int maxArray(int anArray[], int first, int last, int target)
{
	cout << "this is first " << first << endl;
	cout << "this is last " << last << endl;

//	cout << target << endl;
	int index;	// this will be the base case
	if (first > last)
		index = -1;		// target not in original array
	else		
	{
		// if target is in array
		// anArray[first] <= target <= anArray[last]
		int mid = first + (last - first)/2;
		cout << "this is mid " << mid << endl;
					int X = anArray[mid];
					cout << "this is anArray[mid] " << X << endl;
		cout << "this is mid " << mid << endl;
		cout << target << endl;
		if (target == anArray[mid])
		{
			cout <<  " ?? " << mid << endl;
			index = mid; // target found at anArray[mid]
			cout << index << " , " << mid << endl;
		}
			else if (target < anArray[mid])
			{
				// point X
				cout << "hi here I am "<< endl;
				index = maxArray(anArray, first, mid - 1, target);
//				cout << "hi here I am "<< endl;
			}
			else
			{
				// point Y
				cout << "hi im here " << endl;
				cout << anArray << endl;
				index = maxArray(anArray, mid + 1, last, target);
//				cout << "hi im here " << endl;
			}

	}	//end if
		

	return index;
}	//end binary search

int main()
{
	int SIZE = 10;
	int anArray[SIZE] = {1,4,5,7, 9, 12, 23, 29,32,45};
	int found;
	int target = 45;
	
		found = maxArray(anArray, 0, SIZE - 1, target);
	   		if (found == -1)
	      		cout << "Could not find " << target << " in the array" << endl;
	   		else
	      		cout << "Found " << target << " at position " << found << endl;
	return 0;
}

