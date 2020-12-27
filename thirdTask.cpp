#include <iostream>
int sum(int number) {
    int each_sum = 0;
    while(number != 0) {
        each_sum += number % 10;
        number /= 10;
    }
    return each_sum;
}
int main() {
    int number;
    std::cout << "Please enter a whole number: ";
    std::cin >> number;
    std::cout << "The sum of each element of number is: ";
    std::cout << sum(number) << std::endl;
    return 0;
    
}
