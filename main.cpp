#include <iostream>

int main(){
    
    // declare variable value and initialize it to 5
    int value {5};

    // increment by one by addition
    value = value + 1; // 6
    std::cout << "The value is (incrementing with addition): " << value << std::endl; // 6

    value = 5; // reset value to 5

    // decrement by one by subtraction
    value = value - 1; // 4
    std::cout << "The value is (incrementing with subtraction): " << value << std::endl; // 4

    std::cout << "============Postfix increment and decrement===============" << std::endl;
    
    // reset value to 5
    value = 5;

    // increment value++ with postfix
    std::cout << "The value is (incrementing with postfix): " << value++ << std::endl; // 5
    std::cout << "The value is: " << value << std::endl; // 6

    std::cout << std::endl;

    // reset value to 5
    value = 5;

    // decrement value-- with postfix
    std::cout << "The value is (decrementing with postfix): " << value-- << std::endl; // 5
    std::cout << "The value is: " << value << std::endl; // 4

    std::cout << "============Prefix increment and decrement===============" << std::endl;
    
    // reset value to 5
    value = 5;
    
    // incement ++value with prefix
    std::cout << "The value is: " << value << std::endl; // 5
    std::cout << "The value is (incrementing with prefix): " << ++value << std::endl; // 6
    
    std::cout << std::endl;

    // reset value to 5
    value = 5;
    
    // decrement --value with prefix
    std::cout << "The value is: " << value << std::endl; // 5
    std::cout << "The value is (decrementing with prefix): " << --value << std::endl; // 4    

    return 0;
}