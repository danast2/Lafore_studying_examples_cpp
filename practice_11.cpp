#include <iostream>

using namespace std;

void centimize(float*);
const int MAX = 5;

int main(){    
    float arr[MAX] = {11, 12, 13, 14, 15};
    centimize(arr);
    for (int i = 0; i < MAX; i++){
        cout << arr[i] << endl;
    }

    return 0;
}

void centimize(float* array){
    for (int i = 0; i < MAX; i++){
        *array++ *= 2.58;
    }
}