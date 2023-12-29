#include <iostream>

using namespace std;

const int N = 10;

void binary_sort(int*, int);
void order(int* num1, int* num2);

int main()
{

    int arrOfInts[N] = {12, 567, 34, 67, 33, 88, 65, 0, 45, 91};
    
    binary_sort(arrOfInts, N);

    int* ptrArrOfInts = arrOfInts; 

    for(int i = 0; i < N; i++){
        cout << *(ptrArrOfInts++) << endl;
    }

    return 0;
}

void binary_sort(int * arr, int number)
{
    //int i, j;
    for(int i = 0; i < number - 1; i++){
        for(int j = i + 1; j < number; j++){
            order(arr + i, arr + j);
        }
    }
}


void order(int* num1, int* num2){
    if(*num1 > *num2){
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}