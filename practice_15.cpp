#include <iostream>

using namespace std;

void display_pointer_string(char* );

int main(){
    char message [] = "danast = hacker";

    display_pointer_string(message);

    return 0;
}

void display_pointer_string(char * ps_str)
{
    while(*ps_str){
        cout << *ps_str++; // это выражение возвращает следующий знак строки
        // крутим, пока не встретим '\0' - это имеет значение false, цикл прекращается
    }
}
