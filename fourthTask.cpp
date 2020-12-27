#include <iostream>
int multiply_numbers(int number) {
    int sum_mul = 1;
    while(number != 0) {
        sum_mul *= number % 10;
        number /= 10;
    }
    return sum_mul;
}
int main() {
    int number;
    std::cout << "Please enter whole number: ";
    std::cin >> number;
    std::cout << "The multiply of number's indexes is: ";
    std::cout << multiply_numbers(number) << std::endl;
    return 0;
}
    
    
