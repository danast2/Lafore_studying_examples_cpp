#include <iostream>
//постфиксные операции

using namespace std;

class Counter{
private:
    int num;
public:
    Counter():num(0) {}
    Counter(int n):num(n) {}
    int get_num() const{
        return num;
    }
    Counter operator++(){
        ++num;
        return Counter (num);
    }
    Counter operator++(int){ // int нужен для обозначения постфиксного ++
        return Counter(num++);
    }
};


int main ()
{
    Counter c1, c2; // определяем переменные
    cout << "\ncl = " << c1.get_num ( ); // выводим на экран
    cout << "\nc2 = " << c2.get_num ( );
    ++c1; // увеличиваем cl
    c2 = ++c1; // cl=2. c2=2
    cout << "\ncl = " << c1.get_num ( ); // снова показываем значения
    cout << "\nc2 = " << c2.get_num( );

    c2 = c1++; // сначала происходит операция присваивания, потом operator++(int)

    cout << "\nc1 = " << c1.get_num ( ); // и снова
    cout << "\nc2 = " << c2.get_num ( ) << endl;
    return 0;
}