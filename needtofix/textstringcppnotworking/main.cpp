/******************************************************************************

Not sure why I can't make my class hold a pointer to a stack of strings.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
#include "Textstring.h"

int main()
{
    
    std::string stream = "abcde";
  
    std::stack<std::string> stack1;
    Textstring root =  Textstring(stream, stack1);
    
    root.append("fg");
    root.printFull();
    root.print(6);
    root.deletestr(5);
    root.printFull();
    root.undo();
    root.printFull();





  
    return 0;
}
