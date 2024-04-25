#include <iostream>
#include <fstream>
#include <string>

int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const std::string& str) {
    int count = 1;
    for (char c : str) {
        if (c == ' ') {
            count++;
        }
    }
    return count;
}
std::string reverseString(const std::string& str) {
    std::string reversed(str.rbegin(), str.rend());
    return reversed;
}

std::string capitalizeSecondLetter(const std::string& str) {
    std::string capitalized(str);
    for (size_t i = 0; i < capitalized.length(); i++) {
        if (i == 1) {
            capitalized[i] = toupper(capitalized[i]);
        }

    }
    return capitalized;
}
int main () {
    std::ifstream file("statement.txt");
    std::string fileData;
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            fileData += line + " ";
        }
        file.close();
    }
    int numVowels = countVowels (fileData);
    std::cout <<"Number of vowels: " << numVowels << std::endl;

    int numWords = countWords(fileData);
    std::cout <<"Number of words: " << numWords << std::endl;

    std::string reversed = reverseString(fileData);
    std::cout <<"Reversed: " <<reversed << std::endl;

    std::string capitalized = capitalizeSecondLetter(fileData);
    std::cout <<"Capitalized: " << capitalized << std::endl;

    return 0;
}