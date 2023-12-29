#include <iostream>

using namespace std;

int main(){
    int arr[10] = { 1 };

    for (int i = 1; i < 10; i++){
        cout << arr[i] << endl;
        cout << arr[i - 1] << endl;
        cout << arr[i - 1] + 2 << endl;
        arr[i] = arr[i - 1] + 2;
        cout << "end" << endl;
    }
    
    for(int k : arr){
        cout << k << endl;
    }
    return 0;
}