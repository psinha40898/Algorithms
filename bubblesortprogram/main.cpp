/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int sortedDuplicate(int arr[], int n)
{
    int duplicates = 0;
    
    for (int i = 0; i< n; i++)
    {
        if (arr[i] == arr[i+1])
        {
           duplicates ++;
           
          
        }
       
    }
    return duplicates;
}

int unsortedDuplicate(int arr[], int n)
{
    int duplicates;
    for (int i =0; i<n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicates++;
              
                break;
            }
        }
    }
    return duplicates;
}

void bubbleSort(int arr[], int n)
{
    
    for (int i =0; i<n-1; i++)
    {
        for (int j = 0; j<n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int list[] = {16,14,5,6,8};
    int list1[] = {1,1,2,2,2,3,4,5,6,6,6,6,6,6,6};
    int list2[] = {6,6,6,6,6,6,6,1,1,2,2,2,3,4,5};
    

 std::cout<< unsortedDuplicate(list1, 15) <<std::endl;
 std::cout<<sortedDuplicate(list1, 15) << std::endl;
 std::cout <<unsortedDuplicate(list2, 15) << std::endl;

    return 0;
}




