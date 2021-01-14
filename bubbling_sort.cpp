#include <iostream>

struct Student {
	std::string name;
	int age;
	int avg;
};

void swap(Student* arr1, Student* arr2) {
	Student tmp  = *arr1;
	*arr1 = *arr2;
	*arr2 = tmp;
}

void bubble_sort (Student* arr, int arrSize) {
bool swapped;
for (int i = 0; i < arrSize - 1; ++i) {
        swapped = false;
        for (int j = 0; j < arrSize - 1 - i; ++j) {
            if(arr[j].avg > arr[j + 1].avg) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
    if (swapped == false) {
        break;
    }
    }
}

void print_str (Student* arr, int arrSize) {
	for (int i = 0; i < arrSize; ++i) {
        std::cout << arr[i].name << " "
                  << arr[i].age  << " "
                  << arr[i].avg  << ", ";
	}
	std::cout << std::endl;
}

int main() {
	int student_size;
	std::cout << "Enter number of students: ";
	std::cin >> student_size;
	Student str[student_size];
    for (int i = 0; i < student_size; ++i) {
        std::cout << "Enter Student name: ";
        std::cin >> str[i].name;
        std::cout << "Enter Student age: ";
        std::cin >> str[i].age;
        std::cout << "Enter Student average: ";
        std::cin >> str[i].avg;
	}
    bubble_sort(str, student_size);
    print_str(str, student_size);
	return 0;
}
	



