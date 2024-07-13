// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result = 0.0; 
    int length = (sizeof(nums)/sizeof(int));

    // Write your code here
    
    for(int i = 0; i < length; i++)
    {
        result += nums[i];
    }

    std::cout << "The average is " << (result/5) << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
