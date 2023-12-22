// упражнение 5 указатели лафоре

#include <iostream>

using namespace std;

void addarrays(float *mas1, float *mas2, float *res, float *mas_size);

int main()
{
    float mas_1[]{1, 2, 3, 4, 5};
    float mas_2[]{2, 3, 4, 5, 6};
    float mas_res[] = {};
    float mas_size[] = {};
    addarrays(mas_1, mas_2, mas_res, mas_size);
    for (size_t i = 0; i < 5; i++)
    {
        cout << mas_res[i] << endl;
    }
    cout << mas_size[0];
    return 0;
}
// sizeof(arr)/sizeof(arr[0])
// 1 определить, какой массив больше
// пройтись по ним, складывая и присваивая значение 3ему массиву
// в массив сайз поместить 2е итерирующие переменные
void addarrays(float* mas1, float* mas2, float* res, float* mas_size)
{   
    for (int i = 0; i < 5 ; i++)
    {
        *(res++) = *(mas1++) + *(mas2++);
        mas_size[0] = i+1;
    }
    
}