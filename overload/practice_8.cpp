#include <iostream>
#include <string.h>

//сравнение строк
//перегрузка операции ==
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
    void get_str(){
        cin.get(str, SZ);
    }
    bool operator==(String ss) const{
        return (strcmp(str, ss.str) == 0) ?  true: false;
    }
};

int main ( )
{
    String s1 = "да";
    String s2 = "нет";
    String s3;
    cout << "\nВведите 'да' или 'нет': ";
    s3.get_str( ); // получаем строку от пользователя
    if ( s3 == s1 ){
        // сравниваем со строкой 'да'
        cout << "Вы ввели 'да'\n";
    }
    else{
        if ( s3 == s2 ) // сравниваем со строкой 'нет'
            cout << "Вы ввели 'нет'\n";
        else
            cout << "Следуйте инструкциям!\n";
    }

    return 0;
}