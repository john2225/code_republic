#include <iostream>
    void reverse_str(std::string &name) {
        std::string reverse_name;
        for(int ix = name.size(); ix >= 0; --ix) {
            std::cout << name[ix];
        }
        std::cout << std::endl;
}
int main() {
    std::string str;
    std::cout << "Please enter your name: ";
    getline(std::cin, str);
    reverse_str(str);
    return 0;
}
