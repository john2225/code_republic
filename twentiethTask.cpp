#include <iostream>
void create_array(int *arrSize, int *result_mul, int *result_sum) {
    int arr[*arrSize];
    for (int i = 0; i < *arrSize; ++i) {
        std::cout << " element " << i << " is: ";
        std::cin >> arr[i];
        (*result_mul) *= arr[i];
        (*result_sum) += arr[i];
    }
}

int main() {
    int result_mul = 1;
    int result_sum = 0;
	int arrSize;
	std::cout << "Please enter size of arays: ";
	std::cin >> arrSize;
	std::cout << "Enter first array's elements" << std::endl;
    create_array(&arrSize, &result_mul, &result_sum);
    std::cout << "Enter second array's elements" << std::endl;
    create_array(&arrSize, &result_mul, &result_sum);
    std::cout << "The result of multiplication two arrays is: "
    <<  result_mul << std::endl;
    std::cout << "The result of summation two arrays is:  "
    << result_sum << std::endl;
    return 0;
}
		
