#include <iostream>
#include <string>
#include <algorithm> 
std::string reverseString(const std::string& str) {
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}
int main() {
    std::string input;
    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, input);
    std::string reversed = reverseString(input);
    std::cout << "Reversed string: " << reversed << std::endl;
    return 0;
}

