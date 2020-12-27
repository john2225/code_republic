#include <iostream>
int main() {
    char math_op;
    float first_number;
    float second_number;
    std::cout << "Enter two numbers: " << std:: endl;
    std::cin >> first_number >> second_number;
    std::cout << "Enter arithmetic operation symbol: ";
    std::cin >> math_op;
    switch(math_op) {
        case '+':
            std::cout << "The result is: "
            << first_number + second_number << std:: endl;
            break;
        case '-':
            std::cout << "The result is: "
            << first_number - second_number << std:: endl;
            break;
        case '*':
            std::cout << "The result is: "
            << first_number * second_number << std:: endl;
            break;
        case '/':
            if( second_number != 0 ) {
                std:: cout << "THe result is: "
                <<  first_number / second_number  << std:: endl;
            } else {
                std:: cout << "Second number can not be 0 when dividing" << std:: endl;
            }
            break;
        default:
            std:: cout << "Operation symbol is not correct!";
            break;
    }
    return 0;
}
