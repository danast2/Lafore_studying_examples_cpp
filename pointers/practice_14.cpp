#include <iostream>

using namespace std;

int main(){
    char str1 [] = "defenition from array";
    char* str2 = "defenition from pointer";

    //char str1++ - нельзя сделать
    str2++;
    std::cout<< "1 " << str2 << std::endl;
    str2--;
    std::cout<< "2 " << str2 << std::endl;
    str2--;
    std::cout << "3 -> " << str2 << std::endl;

    return 0;
}