// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    float weight = 10.99;

    std::cout << weight << std::endl;
    std::cout << (int)weight << std::endl;
    std::cout << (int)(weight - (int)weight)*100 << std::endl;
    return (0);
}
