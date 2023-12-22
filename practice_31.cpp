// упражнение 6 указатели лафоре
#include <iostream>

using namespace std;

// сделать фу-цию считающую кол-во символов в строке
//  задать указатель на строку

int compstr(char* str1, char* str2);

int main()
{
    char *line1 = new char;
    line1 = "abc";
    for (int i = 0; i < 3; i++)
    {
        cout << *(line1++);
    }
    cout << endl;
    return 0;
}

int compstr(char *str1, char *str2)
{
    
}
