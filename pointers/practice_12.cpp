#include <iostream>

using namespace std;

void order(int*, int*);

int main(){
    int x = 50;
    int y = 66;
    order(&y, &x);

    cout << x << endl;
    cout << y << endl;
    return 0;
}

void order(int* num1, int* num2){
    if(*num1 > *num2){
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}