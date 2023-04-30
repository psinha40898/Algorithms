/******************************************************************************
CS 301
Pyush Sinha
4-12-21
Prof. David Yang
Program that tests ByID, ByName, with STL sort
and modified SelectionSort from Dale text

*******************************************************************************/
#include <stdio.h>
#include <string>
#include "student.h"
#include "SelectionSort.h"
#include <iostream>
#include <algorithm>
#include <vector>

bool byID(Student &a, Student &b)
{
    if (a.getId() < b.getId())
    {
        return true;
    }
    return false;
}

bool byName (Student &a, Student &b)
{
    if (a.getLast() != b.getLast())
    {
        if (a.getLast() < b.getLast())
            {
                 return true;
            }
        return false;
    }
    
    else 
    {
        if (a.getFirst() < b.getFirst())
        {
            return true;
        }
        return false;
    }
}
int main()
{
   
    Student test ("Rae", "Lopes", "mm3333");
    Student test2 ("Mina", "Kim", "rs2288");
    Student test3 ("Steve", "Kim", "jk1234");

// initialize a vector of Student who should be ordered differently when sorted by id or by name.
    std::vector<Student> testVector; 
    testVector.push_back(test);
    testVector.push_back(test2);
    testVector.push_back(test3);
// Print original order

std::cout<<"Original List:" << std::endl;
for (int i =0; i<testVector.size(); i++)
{
        std::cout <<testVector[i].getId()<< " ";
        std::cout <<testVector[i].getFirst() << " ";
        std::cout <<testVector[i].getLast() << " ";
       
        std::cout<<std::endl;

}
// Sort BY ID & Print
std::cout<<"By ID:" << std::endl;

std::sort(testVector.begin(), testVector.end(), byID);
for (int i =0; i<testVector.size(); i++)
{
        std::cout <<testVector[i].getId()<< " ";
        std::cout <<testVector[i].getFirst() << " ";
        std::cout <<testVector[i].getLast() << " ";
       
        std::cout<<std::endl;

}
// Sort BY NAME & Print
std::cout<<"By Name:" << std::endl;
std::sort(testVector.begin(), testVector.end(), byName);
for (int i =0; i<testVector.size(); i++)
{
        std::cout <<testVector[i].getId()<< " ";
        std::cout <<testVector[i].getFirst() << " ";
        std::cout <<testVector[i].getLast() << " ";
       
        std::cout<<std::endl;

}

// initialize an array of Student 
    Student testArray[3];
    testArray[0] = test;
    testArray[1] = test2;
    testArray[2] = test3;
// Modified SelectionSort    by ID  
std::cout<<"Using modified SelectionSort, By ID" << std::endl;
        
SelectionSort(testArray, 3, byID);
        
for (int i =0; i<3; i++)
{
     std::cout<<testArray[i].getId() << " ";
     std::cout<<testArray[i].getFirst() << " ";
     std::cout<<testArray[i].getLast() << " ";
     std::cout<<std::endl;
            
}
// Modified SelectionSort by NAME
std::cout<<"Using modified SelectionSort, By Name" << std::endl;
SelectionSort(testArray, 3, byName);

for (int i =0; i<3; i++)
{
     std::cout<<testArray[i].getId() << " ";
     std::cout<<testArray[i].getFirst() << " ";
     std::cout<<testArray[i].getLast() << " ";
     std::cout<<std::endl;
            
}

    
    
    
    return 0;
}
