//указатели уражнение 1 лафоре
#include <iostream>
using namespace std;

void func(float* mas, float* s, float* aver, int &si);

int main()
{
    int size;
    cout << "enter size of mas ";cin >> size;
    float* mas = new float[size];
    int num = 0;
    do
    {
        cout << "mas["<<num<<"] = ";cin >> mas[num];
        num++;
    } while (num < size);
    
    /*float sum = 0;
    float* ptrSum = &sum;*/
    float* sum = new float;
    *sum = 0;

    /*float average = 0;
    float* ptrAver = &average;*/
    float* average = new float;
    *average = 0;

    func(mas, sum, average, size);
    cout <<'\n' << *average;
    return 0;
}

void func(float* mas, float* s, float* aver, int &si)
{   
    for (int i = 0; i < si; i++)
    {
        *s += mas[i];
    }
    *aver = *s / si;
}
