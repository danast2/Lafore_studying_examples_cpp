// упражнение 2 указатели лафоре (добавил функцию поднятия строки)
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


class String
{
private:
    char* str;
public:
    String(char* s)
    {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    ~String(){
        delete [] str;
        cout << "Произошла очистка памяти";
    }
    void showStr()
    {
        cout << str << endl;
    }
    void liftLine()
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = (char)toupper(str[i]);
        }
        cout << endl;
    }
};



int main()
{
    String s1("DanAst");
    //s1.showStr();
    s1.liftLine();
    s1.showStr();
    return 0;
}