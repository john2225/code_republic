#include <iostream>
#include <climits>
void index_of_array(int arrSize) {
    int arr_big_index = 0;
    int arr_small_index = 0;
    int *number = new int[arrSize];
    int max_of_range = 0;
    int min_of_range = INT_MAX;
    int sum_of_elements;
    std::cout << "Please enter value of elements " << std::endl;
    for (int i = 0; i < arrSize; ++i) {
        std::cout << "Array " << i << " element value is: \n";
        std::cin >> number[i];
        if (max_of_range < number[i]) {
            max_of_range = number[i];
            arr_big_index = i;
        }
        if (min_of_range > number[i]) {
            min_of_range = number[i];
            arr_small_index = i;
        }
    }
    sum_of_elements = max_of_range + min_of_range;
    std::cout << "The biggest index of array is: "
    << arr_big_index << std::endl;
    std::cout << "The smallest index of array is: "
    << arr_small_index << std::endl;
    std::cout << "The sum of biggest and smallest element is: "
    << sum_of_elements << std::endl;
    delete [] number;
    }

int main() {
    int arrSize;
    std::cout << "Please enter number of array elements: ";
    std::cin >> arrSize;
    index_of_array(arrSize);
    return 0;
}
	
 
