#include "Textstring.h"

Textstring::Textstring()
{
    stream = NULL;
}
Textstring::Textstring(std::string a, std::stack<std::string> b)
{
    stream = &a;
    stack = b;
}

void Textstring:: append(std::string addition)
{
   *stream = *stream + addition;
    stack.push(*stream);
    std::cout<<std::endl;
    
}
void Textstring:: deletestr(int n)
{
    stream->erase((stream->size() - n ), stream->size()+1);
    stack.push(*stream);
    
}
void Textstring:: print(int n)
{
    std::cout<<stream->at(n-1);
    std::cout<<std::endl;

}
void Textstring:: printFull()
{
    std::cout<<*stream;
    std::cout<<std::endl;

}
void Textstring:: undo()
{
stack.pop();
*stream = stack.top();
}