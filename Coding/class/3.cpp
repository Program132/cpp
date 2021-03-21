#include <iostream>
#include <string>

struct Info
{
    std::string Name = ".";
    int Age = 0;
};

Info info;

class Cl
{
    private:
        void LogsName()
        {
            std::cout << "The name has been updated !" << std::endl;
        }
        void LogsAge()
        {
            std::cout << "The age has been updated !" << std::endl;
        }

    public:
        void setName(std::string newName)
        {
            std::string lastName = info.Name;
            info.Name = newName;

            LogsName();
        }

        void setAge(int newAge)
        {
            int lastAge = info.Age;
            info.Age = newAge;

            LogsAge();
        }
};

int main()
{
    Cl c;

    c.setName("Program");
    c.setAge(15);

    /* 
    c.LogsName(); 

    ERROR
    Function private, we can call only in the class! 
    */

    return 0;
}