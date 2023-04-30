// edited version of SelectionSort.h from ch12_2 folder of source code for Dale 
// added Swap() from sortDr.cpp and made it generic so this file can be used on its own

template <class ItemType>
void Swap(ItemType& item1, ItemType& item2)
// Post: Contents of item1 and item2 have been swapped.
{
    ItemType tempItem;

    tempItem = item1;
    item1 = item2;
    item2 = tempItem;
}

template<class ItemType, class Compare> // Modified
int MinIndex(ItemType values[], int startIndex, int endIndex, Compare cmp)
// Post: Returns the index of the smallest value in
//       values[startIndex]..values[endIndex].
{
  int indexOfMin = startIndex;
  for (int index = startIndex + 1; index <= endIndex; index++)
    if (cmp(values[index], values[indexOfMin])) // Modified
      indexOfMin = index;
  return indexOfMin;
}


template<class ItemType, class Compare> // Modified
void SelectionSort(ItemType values[], int numValues, Compare cmp)
// Post: The elements in the array values are sorted by key.
{
  int endIndex = numValues-1;
  for (int current = 0; current < endIndex; current++)
    Swap(values[current], 
         values[MinIndex(values, current, endIndex, cmp)]); // Modified
} 

