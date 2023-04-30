#include <stdio.h>
#include <iostream>
using namespace std;
/*
Pyush Sinha
CS413
Dr. Zahra Derakhshandeh
9-19-2021

sortedDuplicate O(n)
takes array of sorted integers, takes size of array, returns duplicates

unsortedDuplicate O(n*n)
takes array of integers, takes size of array, returns duplicates
**/ 

int sortedDuplicate(int arr[], int n)
{
int duplicates = 0;
    for (int i = 0; i< n; i++)
    {
        if (arr[i] == arr[i+1] && i+1<n) // i+1<n -> handle undefined behavior
        {
           duplicates ++;
        }
    }
    return duplicates;
}

int unsortedDuplicate(int arr[], int n)
{
int duplicates = 0;
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



int main()
{
    int sorted[] = {1,1,1,2,2,3,3,4,5,6}; 
    int unsorted[] = {1,12,1,4,5,12,6,1,1,1};
    
    
    //So you don't have to edit the function call.
    int listSize_sorted = *(&sorted + 1) - sorted;
    int listSize_unsorted = *(&unsorted+1) - unsorted;
    
    
    
    std::cout<<"The sorted list has " <<sortedDuplicate(sorted, listSize_sorted)<<" duplicates"<<std::endl;
    std::cout<<"The unsorted list has " <<unsortedDuplicate(unsorted, listSize_unsorted)<<" duplicates"<<std::endl;
    

int previouspreviousNumber, previousNumber = 0, currentNumber = 1, sum = 0;

        while(currentNumber <= 4000000) {

            previouspreviousNumber = previousNumber; 

            previousNumber = currentNumber; 

            currentNumber = previouspreviousNumber + previousNumber; 
            if (currentNumber % 2 == 0)
            {
                sum = sum + currentNumber;
            }

        }
        std::cout<<sum;

return 0;
   
}






