#include <iostream>
int main() {
    int space, size;
    std:: cout << "Enter size of pyramid: ";
    std:: cin >> size ;
    int k = 0;
    for(int i = 1; i <= size; ++i, k = 0) {
        for( space = 1; space <= size - i; ++space) {
            std:: cout << "  ";
        }
        while(k != 2 * (i -1)) {
            std:: cout << "* ";
            ++k;
        }
    std:: cout << "\n";
    }
    return 0;
}
