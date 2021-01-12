#include <iostream>
int max (int arrSize1, int arrSize2) {
    if (arrSize1 > arrSize2) {
        return arrSize1;
    } else {
        return arrSize2;
    }
}

int min(int arrSize1, int arrSize2) {
    if (arrSize1 < arrSize2) {
        return arrSize1;
    } else {
        return arrSize2;
    }
}

int* multiplied_array(int *arr1, int arrSize1, int* arr2, int arrSize2) {
    int min_size = min(arrSize1, arrSize2);
    int max_size = max(arrSize1, arrSize2);
    int* mul_result = new int[max_size];
    for(int i = 0; i < min_size; ++i) {
        mul_result[i] = arr1[i] * arr2[i];
    }
    for(int i = min_size; i < max_size; ++i) {
        mul_result[i] = 0;
    }
    return mul_result;
}

int* amounted_array(int *arr1, int arrSize1, int* arr2, int arrSize2){
    int min_size = min(arrSize1, arrSize2);
    int max_size = max(arrSize1, arrSize2);
    int* sum_result = new int[max_size];
    for(int i = 0; i < min_size; ++i) {
        sum_result[i] = arr1[i] + arr2[i];
    }
    for(int i = min_size; i < max_size; ++i) {
        sum_result[i] = 0;
    }
    return sum_result;
}

void print_array(int *result, int arrSize) {
    std::cout << "The result array is: "
     <<std::endl;
    for (int i = 0; i < arrSize; ++i) {
       std::cout << result[i] << " ";
    }
    std::cout << std::endl;
}

int* create_array(int arrSize) {
    std::cout << "Please enter aray elements: ";
    int* arr = new int[arrSize];
    for (int i = 0; i < arrSize; ++i) {
        std::cout << " element " << i << " is: ";
        std::cin >> arr[i];
    }
    return arr;
}

int main() {
    int arrSize1;
    int arrSize2;
	std::cout << "Please enter size of aray 1: ";
	std::cin >> arrSize1;
    std::cout << "Please enter size of array 2: ";
    std::cin >> arrSize2;
	std::cout << "Enter first array's elements" << std::endl;
    int* arr1 = create_array(arrSize1);
    int* arr2 = create_array(arrSize2);
    int* mul_result = multiplied_array(arr1, arrSize1, arr2, arrSize2);
    int* sum_result = amounted_array(arr1, arrSize1, arr2, arrSize2);
    int max_size = max(arrSize1, arrSize2);
    print_array(mul_result, max_size);
    print_array(sum_result, max_size);
    delete [] arr1;
    delete [] arr2;
    delete [] mul_result;
    delete [] sum_result;
    return 0;
}
		
