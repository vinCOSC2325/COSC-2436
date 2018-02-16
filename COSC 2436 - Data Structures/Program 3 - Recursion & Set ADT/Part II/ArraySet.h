

#ifndef ARRAY_SET_
#define ARRAY_SET_

#include "SetInterface.h"

template<class ItemType>
class ArraySet : public SetInterface<ItemType>
{
private:
	static const int DEFAULT_CAPACITY = 6; // Small size to test for a full Set
	ItemType items[DEFAULT_CAPACITY];      // Array of Set items
   int itemCount;                         // Current count of Set items 
   int maxItems;                          // Max capacity of the Set
   
   // Returns either the index of the element in the array items that
   // contains the given target or -1, if the array does not contain 
   // the target.
   int getIndexOf(const ItemType& target) const;   

public:
	ArraySet();
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType& newEntry);
	bool remove(const ItemType& anEntry);
	void clear();
	bool contains(const ItemType& anEntry) const;
	int getFrequencyOf(const ItemType& anEntry) const;
   std::vector<ItemType> toVector() const;
}; // end ArraySet



#include <cstddef>

template<class ItemType>
ArraySet<ItemType>::ArraySet(): itemCount(0), maxItems(DEFAULT_CAPACITY)
{
}  // end default constructor

template<class ItemType>
int ArraySet<ItemType>::getCurrentSize() const
{
	return itemCount;
}  // end getCurrentSize

template<class ItemType>
bool ArraySet<ItemType>::isEmpty() const
{
	return itemCount == 0;
}  // end isEmpty

template<class ItemType>
bool ArraySet<ItemType>::add(const ItemType& newEntry)
{
	bool noduplicate = contains(newEntry); // makes noduplicate true if contains(newEntry)
	bool hasRoomToAdd = (itemCount < maxItems); // make hasRoomToAdd true while itemcount is less then maxitems
	if (!noduplicate)	// if newEntry does not exist in the current set then continue with adding 
	{
		if (hasRoomToAdd) // if there is RoomToAdd items proceed
		
			items[itemCount] = newEntry;	// adds the newEntry to the array of items for the current itemcount
			itemCount++;	// increment itemcount
		 // end if
	}
	return hasRoomToAdd;	// 
}  // end add


template<class ItemType>
bool ArraySet<ItemType>::remove(const ItemType& anEntry)
{
   int locatedIndex = getIndexOf(anEntry);
	bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
	if (canRemoveItem)
	{
		itemCount--;
		items[locatedIndex] = items[itemCount];
	}  // end if
    
	return canRemoveItem;
}  // end remove

template<class ItemType>
void ArraySet<ItemType>::clear()
{
	itemCount = 0;
}  // end clear

template<class ItemType>
int ArraySet<ItemType>::getFrequencyOf(const ItemType& anEntry) const
{
   int frequency = 0;
   int curIndex = 0;       // Current array index
   while (curIndex < itemCount)
   {
      if (items[curIndex] == anEntry)
      {
         frequency++;
      }  // end if
      
      curIndex++;          // Increment to next entry
   }  // end while
   
   return frequency;
}  // end getFrequencyOf

template<class ItemType>
bool ArraySet<ItemType>::contains(const ItemType& anEntry) const
{
	return getIndexOf(anEntry) > -1;
}  // end contains

template<class ItemType>
std::vector<ItemType> ArraySet<ItemType>::toVector() const
{
   std::vector<ItemType> arrayContents;
	for (int i = 0; i < itemCount; i++)
		arrayContents.push_back(items[i]);
      
   return arrayContents;
}  // end toVector

// private
template<class ItemType>
int ArraySet<ItemType>::getIndexOf(const ItemType& target) const
{
	bool found = false;
   int result = -1;
   int searchIndex = 0;
   
   // If the Set is empty, itemCount is zero, so loop is skipped
   while (!found && (searchIndex < itemCount))
   {
      if (items[searchIndex] == target)
      {
         found = true;
         result = searchIndex;
      } 
      else
      {
         searchIndex++;
      }  // end if
   }  // end while
   
   return result;
}  // end getIndexOf
#endif

