/******************************************************************************
This code illustrates:
1) The power of recursion
2) How a better algorithm can drastically speed up things as they scale
3) unsigned long long

*******************************************************************************/

#include <iostream>
#include <chrono>

using namespace std;
unsigned long long product(unsigned long long x, unsigned long long y)
{
    if (y==0){
    return 0;
    }
    else
    {
        return x+product(x,y-1);
    }
    
    
}
unsigned long long power(unsigned long long x, unsigned long long y)
{
    if (y==0){
    return 1;
    }
    if (y==1)
    {
        return x;
    }
    else
    {
    
        return x*power(x,y-1);
    }
    
    
}

unsigned long long powerDivideConquer(unsigned long long base, unsigned long long exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    if (exponent == 1)
    {
        return base;
    }
    if (exponent == 2)
    {
        return base*base;
    }
    
    unsigned long long left;
    unsigned long long right;
    
    if (exponent % 2 == 0)
    {
        left = exponent /2;
        right = left;
    }
    else
    {
        left = exponent/2;
        right = exponent/2+1;
    }
    
    return powerDivideConquer(base, left) * powerDivideConquer(base, right);
    // two recursive calls for o(n)
    // one recursive call for log*n
    
    
}

unsigned long long powerDivideConquerLgN(unsigned long long base, unsigned long long exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    if (exponent == 1)
    {
        return base;
    }
    if (exponent == 2)
    {
        return base*base;
    }
    
    unsigned long long left; 
    unsigned long long right;
    
    unsigned long long temp = powerDivideConquerLgN(base, exponent/2);
    
    if(exponent % 2 == 0)
    {
        return temp * temp;
    }
    else
    {
        return temp * temp * base;
    }
    
    
}
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    cout<<power(5,16) << endl;
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Execution time: " << duration << " microseconds" << std::endl;



    start = std::chrono::high_resolution_clock::now();
    cout<<powerDivideConquer(5,16) << endl;
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Execution time: " << duration << " microseconds" << std::endl;
    
    
    start = std::chrono::high_resolution_clock::now();
    cout<<powerDivideConquerLgN(5,16) << endl;
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Execution time: " << duration << " microseconds" << std::endl;

    return 0;
}


