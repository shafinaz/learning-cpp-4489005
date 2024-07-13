// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt; // -7
    unsgn = sgn; //32-bit version of 2s complement of 7
    //more about signed integer bit representation
    
    std::cout << std::endl << std::endl;
    std::cout << flt<< std::endl;
    std::cout << sgn << std::endl;
    std::cout << (int32_t)unsgn << std::endl;
    return (0);
}
