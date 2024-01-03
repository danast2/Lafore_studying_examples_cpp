#include <iostream>

const int LIMIT = 100;

class safeArray{
private:
    int arr[LIMIT];
public:
    safeArray() : arr(){} // не обязательно, просто, чтобы не ругался компилятор на то, что не инициализирован
    int& operator[](int in){ //переопределение []
        if(in < 0 || in >= LIMIT){
            std::cout<<"outside the array";
        }
        return arr[in];
    }
};

int main(){
    safeArray sArr;
    for(int i = 0; i < LIMIT; i++){
        sArr[i] = i;
    }
    for(int i = 0; i < LIMIT; i++){
        std::cout << sArr[i] << std::endl;
    }
    return 0;
}