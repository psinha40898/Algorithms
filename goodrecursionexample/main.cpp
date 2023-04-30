/******************************************************************************


*******************************************************************************/

#include <iostream>

using namespace std;
int product(int x, int y)
{
    if (y==0){
    return 0;
    }
    else
    {
        return x+product(x,y-1);
    }
    
    
}
int power(int x, int y)
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
        cout<<"Recursive call y = power("<<y-1<<")" <<endl;
        return x*power(x,y-1);
    }
    
    
}

int powerDivideConquer(int base, int exponent)
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
    
    int left;
    int right;
    
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

int powerDivideConquerLgN(int base, int exponent)
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
    
    int left; 
    int right;
    
    int temp = powerDivideConquerLgN(base, exponent/2);
    
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

    cout<<power(5,4);

    return 0;
}


