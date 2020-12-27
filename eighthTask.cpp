#include <iostream>
#include <cstring>
void toUpperCase(std::string &upper_word) {
    for(int ix = 0; ix <= upper_word.size(); ++ix){
        putchar(toupper(upper_word[ix]);
    }
}
int main() {
    std::string word;
    std::cout << "Please enter a word(s): ";
    getline(std::cin, word);
    toUpperCase(word);
    std::cout << word <<std::endl;
    return 0;
}
