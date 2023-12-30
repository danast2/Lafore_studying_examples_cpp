#include <iostream>
#include <string.h>
#include <stdlib.h>

//объединение строк

using namespace std;

class String{
private:
    enum {SZ = 80};
    char str[SZ];
public:
    String(){
        strcpy(str, "");
    }
    String(char s []){
        strcpy(str, s);
    }
    void display(){
        cout << str;
    }
    String operator+(String ss) const{
        String temp;
        if ((strlen(str) + strlen(ss.str)) < SZ){
            strcpy(temp.str, str); // копируем содержимое
            strcat(temp.str, ss.str); // добавляем содержимое
        } else{
            cout << "overflow !";
            exit(1);
        }
        return temp;
    }
};

int main ( )
{
    String s1 = "\nC Рождеством! "; // используем конструктор с параметром
    String s2 = "\nС Новым годом!"; // используем конструктор с параметром
    String s3; // используем конструктор без параметров
// показываем строки
    s1.display ( );
    s2.display ( );
    s3.display ( );
    s3 = s1 + s2; // присваиваем строке s3 результат сложения строк s1 и s2
    s3.display (); // показываем результат
    cout << endl;
    return 0;
}