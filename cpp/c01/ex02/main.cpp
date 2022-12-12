#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout<< "L'adresse de string en memoire   : " <<  &str << std::endl;
   // std::cout<< &str << std::endl;
    std::cout<< "L'adresse stockee dans stringPTR : " << stringPTR << std::endl;
    std::cout<< "L'adresse stockee dans stringREF : " << &stringREF << std::endl;
    std::cout<< "La valeur du string :             " << str << std::endl;
    std::cout<< "La valeur pointee par stringPTR  : " << *stringPTR << std::endl;
    std::cout<< "La valeur pointee par stringREF : " << stringREF << std::endl;
}
