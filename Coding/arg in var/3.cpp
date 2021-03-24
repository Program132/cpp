#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{
    std::string str = "PRC, my programming langage";
  
    size_t found = str.find("PRC");

    if (found != string::npos)
        cout << "Found" << endl;
  
    return 0;
}