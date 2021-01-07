#include <iostream>
#include <string>

const char arr[] = {
     '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
     'A', 'B', 'C', 'D', 'E', 'F'
};

void deci_invert (int number, int system) {
    if(system == 2 || system == 16) {
        if(number > 0) {
            int tmp = number / system;
            deci_invert(tmp, system);
            std::cout << arr[number % system];
        }
    }
    else {
        std::cout << "Unsupported system number";
    }
}

int main() {
	int number, system;
	std::cout << "Enter the number to convert: ";
	std::cin >> number;
    std::cout << "Enter system (heximal or binary) : ";
	std::cin >> system;
	deci_invert(number, system);
	std::cout << std::endl;
	return 0;
} 
