// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Please input your name: " << std::endl;
    std::string str;
    std::cin >> str;
    std::cout << "Oh, hello " << str << "!";

    std::cout << std::endl << std::endl;
    return (0);
}
