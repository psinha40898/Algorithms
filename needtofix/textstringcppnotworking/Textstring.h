#include <stack>
#include <string>
#include <stdio.h>
#include <iostream>
class Textstring
{
    private:
    std::string *stream;
    std::stack<std::string> stack;
    
    
    public:
    Textstring();
    Textstring(std::string a, std::stack<std::string> b);
   
    
    
    void append(std::string addition);
    void deletestr(int n);
    void print(int n);
    void printFull();
    void undo();
    
};