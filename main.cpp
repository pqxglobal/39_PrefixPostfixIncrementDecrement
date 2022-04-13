#include <iostream>

int main(){
    
    int value {5};

    // increment by one
    value = value + 1; // 6
    std::cout << "The value is: " << value << std::endl; // 6

    value = 5; // reset value to 5

    // decrement by one
    value = value - 1; // 4
    std::cout << "The value is: " << value << std::endl; // 4

    //=============================================================

    return 0;
}