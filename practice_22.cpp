#include <iostream>

using namespace std;

class Dist{
private:
    int feet;
    int inches;
public:
    void setDist(){
        cout << "дюймы";cin >> inches;
        cout << "футы";cin >> feet;
    }
    void getDist(){
        cout << feet << "-" << inches;
    }
};

int main(){
    

    Dist& dst = *(new Dist); // не понятно - зачем мы здесь ставим ссыслку (на stackoverflow сказали, что так не происходит лишнего копирования)
    //выражение new Dist выделяет память и дает адрем, а тут *(new Dist) мы присваиваем разыменованную ссылку, т.е. сам объект (можно вспомнить питон a = A())
    //а & в данном случае означает, что мы создаем объект по ссылке, т.е. ссылаемся мы на Dist
     /*
        int& a = *(new int);
        a = 100;
        cout << a;
     */
    
    /*
    Создается объект в памяти, затем он используется для инициализации с помощью копирующего конструктора.
    Да, еще — в примере со ссылкой (&) деструктор точно вызываться не будет :)
    */
    dst.setDist();
    dst.getDist();
    return 0;
}