#include <string>
#include <iostream>


bool isPalindrome(std::string test)
{
    
    int n = test.size();
    if (n == 0 || n == 1)
    {
    return true;
    }
    
    if (test.at(0) == test.at(n-1))
    {
     return isPalindrome(test.substr(1, n-2));
    }
   
    return false;
    
}

int count_digit(int number) {
   int count = 0;
   while(number != 0) {
      number = number / 10;
      count++;
   }
   return count;
}

// int isPalindromen(int test)
// {
    
//     int n = count_digit(test);
//     if (n == 0 || n == 1)
//     {
//     return true;
//     }
    
//     if (firstDigit(test) == lastDigit(test))
//     {
//      return isPalindrome(test.substr(1, n-2));
//     }
   
//     return false;}
    
int firstDigit(int n)
{
    // Remove last digit from number
    // till only one digit is left
    while (n >= 10)
        n /= 10;
     
    // return the first digit
    return n;
}
 
// Find the last digit
int lastDigit(int n)
{
    // return the last digit
    return (n % 10);
}
int main()
{
    std::string run = "7676";
    
    
    std::cout<<count_digit(15);
    if(isPalindrome(run))
    {
        std::cout<<"true";
    }
    else
    {
        std::cout<<"false";
    }

    return 0;
}


