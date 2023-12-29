#include <iostream>

using namespace std;
//с помощью временной переменной, теперь можно использовать оператор присваивания,
// т.к. ф-ция возвращает объект типа Count

class Counter{
private:
    int num;
public:
    Counter():num(0){}
    int get_num() const{
        return num;
    }
    Counter operator++(){
        ++num;
        Counter temp;
        temp.num = num;
        return temp;
    }
};

int main(){
    Counter c1, c2; // определяем переменные
    cout << "\nc1 = " << c1.get_num (); // выводим на экран
    cout << "\nc2 = " << c2.get_num ();
    ++c1; // увеличиваем cl
    c2 = ++c1; // c1=2. c2=2
    cout << "\ncl = " << c1.get_num(); // снова показываем значения
    cout << "\nс2 = " << c2.get_num() << endl;
    return 0;
}