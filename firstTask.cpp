#include <iostream>
int reverse(int number) {
    int reverseNumber = 0;
    while(number != 0) {
        reverseNumber = (reverseNumber * 10) +  number % 10;
        number /= 10;
    }
    return reverseNumber;
}
int main() {
    std:: cout << "Please type whole number(s): ";
    int count;
    int sum;
    std:: cin >> count;
    int digit = reverse(count);
    while (digit) {
        std:: cout << " ' " << digit % 10 << " ' \n";
        digit /= 10;
    }
    return 0;
    
}
