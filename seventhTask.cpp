#include <iostream>
void deleteVowels (std::string &text) {
    std::string vowels = "aeuioAEUIO";
    for(int ix = 0; ix < text.size(); ++ix) {
        for(int jx = 0; jx < vowels.size(); ++jx) {
            if(text[ix] == vowels[jx]) {
                text.erase(ix, 1);
            }
        }
    }
}
int main() {
    std::string word;
    std::cout << "Please enter a word(s): ";
    getline(std::cin, word);
    deleteVowels(word);
    std::cout << word <<std::endl;
    return 0;
}




