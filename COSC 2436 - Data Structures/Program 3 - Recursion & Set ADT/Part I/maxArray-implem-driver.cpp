#include <iostream>
using namespace std;

int maxArray(int anArray[], int first, int last, int target)
{
	int index;	// this will be the base case
	if (first > last)	// if the first param is greater than the last param then return -1 to found
		index = -1;		// target not in original array
	else		
	{
		// if target is in array
		// anArray[first] <= target <= anArray[last]
		int mid = first + (last - first)/2;
		if (target == anArray[mid])
		{
			index = mid; // target found at anArray[mid]
		}
			// else if target is lower than the mid point of anArray
			else if (target < anArray[mid])
			{
				// point X
				// index becomes the outcome of maxArray with param set to lower half of anArray
				// it is searching the bottom half of anArray for the target
				index = maxArray(anArray, first, mid - 1, target);
			}
			// I had trouble with this command else that it wouldn't work without previous if
			// I had to add parenthesis to each if statement else if and else for it to work 
			else
			{
				// point Y
				// index becomes the outcome of maxArray with param set to upper half of anArray
				// it is searching the top half of anArray for the target
				index = maxArray(anArray, mid + 1, last, target);
			}

	}	//end if
		

	return index;
}	//end binary search

int main()
{
	int SIZE = 10;		// set size 
	int anArray[SIZE] = {1,4,5,7, 9, 12, 23, 29,32,45};		// initialize anArray -- only works if sequential 
	int found;		// create variable for what is found by maxArray
	int target = 45;		// create and initialize target that we're searching for
		// found equals the outcome of maxArray with parameters set to fisrt element 0 and last total SIZE - 1
		found = maxArray(anArray, 0, SIZE - 1, target);
			//	if not found then found will equal -1 and cout a message
	   		if (found == -1)
	      		cout << "Could not find " << target << " in the array" << endl;
	      	// else the target is found and will cout a different message
	   		else
	      		cout << "Found " << target << " at position " << found << endl;
	return 0;
}

