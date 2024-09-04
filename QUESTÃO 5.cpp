#include <iostream>
#include <string>

int main() {

    std::string str;
    
    std::cout << "Digite uma string para inverter: ";
    std::getline(std::cin, str);

     
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    std::cout << "String invertida: " << str << std::endl;

    return 0;
}