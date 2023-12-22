#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char* str = "DanAst";
    int len_str = strlen(str);

    char* ptr = new char [len_str + 1]; // выделяет доп байт(т.к. char) под '\0';
    strcpy(ptr, str);

    cout << ptr << endl; // 
    
    cout << *ptr << endl; // указатель указывает на 1й элемент строки D
    cout << len_str;

    delete[] ptr; // очищаем выделенную память [] - означают, что освобождается массив
    return 0;
}