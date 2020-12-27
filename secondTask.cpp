#include <iostream>
void reverse_number(long number) {
    while( number != 0 ) {
        std::cout << number % 10 << " ";
        number /= 10;
    }
    std::cout << std::endl;
}
int main() {
    long sum;
    long number;
    std::cout << "Please enter whole number: ";
    std::cin >> number;
    reverse_number(number);
    return 0;
}
