/******************************************************************************



*******************************************************************************/
#include <stdio.h>
#include <iostream>
int temp,sum;
int reverse(int num)
{
    if(num>0)
   {
    temp = num%10;
    sum = sum*10 + temp;
    reverse(num/10);
   } 
  
  return sum;
 
}
bool isPalindrome(int num)
{
    if (num<0)
    {
        num = num * -1;
    }
    if (reverse(num) == num) {return true;}
    else {return false;}
}
int main()
{
    
    int test = -456;

    
    if(isPalindrome(test))
    {
        std::cout<<"yes";
    }
    else
    {
        std::cout<<"no";
    }

    return 0;
}


