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

    std::cout << "============Postfix increment and decrement===============" << std::endl;
    // reset value to 5
    value = 5;

    std::cout << "The value is (incrementing): " << value++ << std::endl;
    std::cout << "The value is: " << value << std::endl;

    std::cout << std::endl;

    // decrement with postfix

    // reset value to 5
    value = 5;

    std::cout << "The value is (decrementing): " << value-- << std::endl;
    std::cout << "The value is: " << value << std::endl;

    return 0;
}