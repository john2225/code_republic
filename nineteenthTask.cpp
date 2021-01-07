#include <iostream>
#include <string>

void rev_elements(std::string arr) {
	for(int i = arr.size() -1; i >= 0; --i) {
		std::cout << arr[i];
	}
	std::cout << std:: endl;
}

int main() {
	std::cout << "Enter elements of an array: ";
	std::string word;
	getline(std::cin, word);
	rev_elements(word);
	return 0;
}
