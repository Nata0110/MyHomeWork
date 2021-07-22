#include <iostream>
#include <string>

void print()
{
    std::cout <<"Hello! Who are you? "<<std::endl;
}

void answer()
{
    std::string question;
    int age;
    print ();
    std::cin >> question;
    std::cout <<"How old are you?"<< std::endl;
    std::cin >> age;
    std::cout << "Hello " << question <<", " << age << " is the best age!!!"<< std::endl;
    std::cout << "When do you learn C++" << std::endl;
    std::cin >> question;
}

int main()
{
    answer();
}
