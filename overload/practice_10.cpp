#include <iostream>
//два отдельных метода put() get()
const int LIMIT = 100;

class safeArray{
private:
    int arr[LIMIT];
public:
    void putel(int in, int value){
        if(in < 0 || in >= LIMIT){
            std::cout<<"outside the array";
        }
        arr[in] = value;
    }
    int getel(int in){
        if(in < 0 || in >= LIMIT){
            std::cout<<"outside the array"; exit(1);
        }
        return arr[in];
    }
};

int main(){
    safeArray sArr;
    for(int i = 0; i < LIMIT; i++){
        sArr.putel(i, i*15);
    }
    for(int i = 0; i < LIMIT; i++){
        std::cout << sArr.getel(i) << std::endl;
    }
    return 0;
}