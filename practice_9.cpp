#include <iostream>

using namespace std;

int main(){
    int array[5] = {44, 55, 66, 77, 88};
    int* ptrint;
    ptrint = array;
    for (int i = 0; i < 5; i ++){
        cout << *(ptrint++) << endl;
    }
    return 0;
}