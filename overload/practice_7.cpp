#include <iostream>

//сравнение объектов класса Distance

using namespace std;

class Distance{
private:
    int feet;
    float inches;
public:
    Distance():feet(0), inches(0){}
    Distance(int f, float i): feet(f), inches(i) {}
    void showDist(){
        cout << feet << '\'' << inches << endl;
    }
    void getDist(){
       cin >> feet;
       cin >> inches;
    }
    bool operator<(Distance) const;
};

bool Distance::operator<(Distance d2) const{
    float bf1 = feet + inches /12; //деление только 1 раз (хотя нужен норм цикл)
    float bf2 = d2.feet + d2.inches / 12;
    return ( bf1 < bf2 ) ? true : false;
}

int main ( )
{
    Distance dist1; // определяем переменную
    dist1.getDist(); // получаем длину от пользователя
    Distance dist2 ( 6, 2.5 ); // определяем и инициализируем переменную
    // показываем длины
    cout << "\ndistl - "; dist1.showDist ( );
    cout << "\ndist2 - "; dist2.showDist ( );
    // используем наш оператор
    if ( dist1 < dist2 ){
        cout << "\ndist1 меньше чем dist2";
    }
    else{
        cout << "\ndist1 больше или равeн чем dist2";
        cout << endl;
    }

    return 0;
}