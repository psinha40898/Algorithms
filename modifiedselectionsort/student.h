#include <string>
class Student
{
private:
    std::string id;
    std::string firstName;
    std::string lastName;

public:
Student()
{
 
    firstName = "";
    lastName = "";
    id = ""; 
}
Student(std::string _firstName, std::string _lastName, std::string _id)
{
    id = _id;
    firstName = _firstName;
    lastName = _lastName;
}

std::string getId()
{
    return id;
}
std::string getFirst()
{
    return firstName;
}

std::string getLast()
{
    return lastName;
}
};