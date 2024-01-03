#include <iostream>

const int LIMIT = 100;

class safeArray{
private:
    int arr[LIMIT];
public:
    int& access(int in){ //(int& )передаем по ссылке, чтобы можно было поменять значение с помощью присваивания
                         // / (нельзя (int), так как вернет просто число, иначе говоря будет <число(какой-то мусор)> = i) - ошибка
        if(in < 0 || in >= LIMIT){
            std::cout<<"outside the array";
        }
        return arr[in];
    }
};


int main(){
    safeArray sArr;
    for(int i = 0; i < LIMIT; i++){
        sArr.access(i) = i;
    }
    for(int i = 0; i < LIMIT; i++){
        int temp = sArr.access(i);
        std::cout << sArr.access(i) << '\t' << temp << std::endl;
    }
    return 0;
}