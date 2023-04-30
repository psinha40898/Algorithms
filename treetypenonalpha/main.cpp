/*Pyush Sinha
CS 301
Prof. David Yang
3-22-2021*/
#include "QueType.h"
#include "TreeType.h"
#include <iostream>
int main()
{
    TreeType testTree1;
    try
    {
    std::cout<<testTree1.MinItem();  /* Calling MinItem() on the empty tree */ 
    }
    
    catch(EmptyTree)
    {
             std::cerr << "No smallest item: tree is empty" << std::endl; 
    }

   testTree1.PutItem('M');
   testTree1.PutItem('V');
   std::cout<<"Smallest should be M, is: "<< testTree1.MinItem() << std::endl;
   testTree1.PutItem('E');
   std::cout<<"Smallest should be E, is: "<< testTree1.MinItem() <<std::endl;
   
   testTree1.PutItem('L');
   testTree1.PutItem('R');
   std::cout<<"In [V, Z] should be 1, is: "<<testTree1.CountInRange('V', 'Z') << std::endl;
   std::cout<<"In [R, Z] should be 2, is: "<<testTree1.CountInRange('R', 'Z') << std::endl;
   std::cout<<"In [B, T] should be 4, is: "<<testTree1.CountInRange('B', 'T') << std::endl;
   std::cout<<"In [G, K] should be 0, is: "<<testTree1.CountInRange('G', 'K') << std::endl;
   
   TreeType testTree2;
   
   std::cout<<"In [A, Z] for empty tree should be 0, is: "<<testTree2.CountInRange('A', 'Z') << std::endl;

   std::cout << std::boolalpha;
   std::cout<< "testTree1 should be false for non-alphas, is: "<<testTree1.HasNonAlpha() << std::endl;
   std::cout<< "testTree2 should be false for non-alphas, is: "<<testTree2.HasNonAlpha() << std::endl;
   
   testTree1.PutItem('|');
   std::cout<< "testTree1 should be true for non-alphas, is: "<<testTree1.HasNonAlpha() << std::endl;
   testTree1.DeleteItem('|');
   testTree1.PutItem('4');
   std::cout<< "testTree1 should be true for non-alphas, is: "<<testTree1.HasNonAlpha() << std::endl;
   testTree1.DeleteItem('4');
   testTree1.PutItem('[');
   std::cout<< "testTree1 should be true for non-alphas, is: "<<testTree1.HasNonAlpha() << std::endl;

   TreeType testTree3;
   testTree3.PutItem('4');
      testTree3.PutItem('4');

   testTree3.PutItem('4');
  



   

std::cout << testTree3.isFlush();






    return 0;
}