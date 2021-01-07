#include <iostream>

void sign_of_number (int number) {
	int maximum;
	int minimum;
	minimum = number % 10;
	while(number != 0) {
		maximum = number % 10;
		number /= 10;
	}
    std::cout << "Minimum sign of number is: " << minimum <<
    std::endl;
    std::cout << "Maximum sign of number is: " << maximum <<
    std::endl;
}

int main() {
	int number;
	std::cout << "Enter number: ";
    std::cin >> number;
    sign_of_number(number);
	return 0;
}
