#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << "Address of str:     " << &str << std::endl;
    std::cout << "Address of strPTR:  " << strPTR << std::endl;
    std::cout << "Address of strREF:  " << &strREF << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "Value of str:                " << str << std::endl;
    std::cout << "Value pointed to by strPTR:  " << *strPTR << std::endl;
    std::cout << "Value of strREF:             " << strREF << std::endl;
    return (0);
}
