#include <iostream>
int binary_search(int* arr, int size, int key) {
    int less = 0;
    int high = size - 1;
    while (less <= high) {
        int middle = (less + high) / 2;
        if (arr[middle] == key) {
            return middle;
        }
         if (arr[middle] < key) {
            less = middle + 1;
        }
        else {
            high = middle - 1;
        }
    }
    return -1;
}
void fill_array(int* arr, int size) {
    std::cout << "Enter array sorted elemnts: \n";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

int main() {
    int arrSize;
    std::cout <<"Enter array size: ";
    std::cin >> arrSize;
    int sorted_arr[arrSize];
    fill_array(sorted_arr, arrSize);
    int key;
    std::cout <<"Please enter a key: ";
    std::cin >> key;
    int size = sizeof(sorted_arr) / sizeof(sorted_arr[0]);
    int result = binary_search(sorted_arr, size, key);
    if(result == -1)
        std::cout<<"Key is not present in array \n";
    else
        std::cout<<"Key is present at index: "<< result
        <<std::endl;
    return 0;
}
