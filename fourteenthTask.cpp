#include <iostream>
char arr[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void deci_hexo (int number, int system) {
	if(number > 0) {
		int tmp = number / system;
		deci_hexo(tmp, system);
		std::cout << arr[number % system];
	}
}
int main() {
	int number, system;
	std::cout << "Enter the number to conver: ";
	std::cin >> number;
    std::cout << "Enter system (heximal or binary) : ";
	std::cin >> system;
	deci_hexo(number, system);
	std::cout << std::endl;
	return 0;
} 
