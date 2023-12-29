#include <iostream>

using namespace std;

//временные безымянные объекты

class Counter{
private:
    int num;
public:
    Counter(): num(0) {}
    Counter(int n): num(n) {}
    int get_num() const{
        return num;
    }
    Counter operator++(){
        ++num;
        return Counter (num); //создается объект типа Counter - без имени, т.к. оно нигде не не будет использоваться и передается значение num
    }
};

int main(){
    Counter c1, c2; // определяем переменные
    cout << "\nc1 = " << c1.get_num (); // выводим на экран
    cout << "\nc2 = " << c2.get_num ();
    ++c1; // увеличиваем c1
    ++c1; // увеличиваем c1
    ++c1; // увеличиваем c1
    c2 = ++c1; // c1=2. c2=2
    cout << "\ncl = " << c1.get_num(); // снова показываем значения
    cout << "\nс2 = " << c2.get_num() << endl;
    return 0;
}