#include <iostream>
int main() {
    int size;
    std:: cout << "Enter size of triangle: ";
    std:: cin >> size;
    for(int i = 1; i <= size; ++i) {
        for(int k = 1; k <= i; ++k) {
            std:: cout << " * ";
        }
        std:: cout << "\n";
    }
return 0;
}
    
