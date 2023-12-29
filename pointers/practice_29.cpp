// упражнение 3 указатели лафоре (отсортировал массив строк в алфавитном порядке)
#include <iostream>

using namespace std;

void bsort(char** mas, int d);
void order(char** day1, char** day2);

int main()
{
    int days = 7;
    char* mas[7]{"monday", "tuesday", "wensday", "thursday", "friday", "saturday", "sunday"};
    
    cout << "non sorted" << endl;
    for (int i = 0; i < days; i++)
    {
        cout << mas[i]<<endl;
    }

    cout << "sorting........." << endl;

    bsort(mas, days);

    for(int j = 0; j < days; j++)
    {
        cout << mas[j]<<endl;
    }
    return 0;
}

void bsort(char** mas, int d)
{
    for (int i = 0; i < d - 1; i++)
    {
        for(int j = i + 1; j < d; j++)
        {
            order(mas+i, mas+j);
        }
    }
}
//здесь присутствует массив указателей, как я понимаю, 1ый указатель указывает на саму строку в массиве, а строка(2ой указатель) хранит указатель на свой первый символ 
void order(char** day1, char** day2)
{
    if(**(day1) > **(day2))
    {
        char* tempday = *day1;
        //cout << **(day1);
        *day1 = *day2;
        *day2 = tempday;
    }
}