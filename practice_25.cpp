#include <iostream>

using namespace std;
//классы содержащие сами себя

class SampleClass{
    SampleClass* sample_pointer_class; // внутри класса можно содеражать указатель на такой же класс
    //SampleClass sample_pointer_class; но нельзя создавать такой же класс внутри такого же класса (справедливо и для структур)
};

int main(){

    return 0;
}