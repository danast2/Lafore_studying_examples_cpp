#include <iostream>

//арифметические операции

using namespace std;

class Distance{
private:
    int feet;
    float inches;
public:
    Distance():feet(0), inches(0) {}
    Distance(int f, float in): feet(f), inches(in) {}
    void enterDist(){
        cout << "enter feet: ";
        cin >> feet;
        cout << "enter inches: ";
        cin >> inches;
    }
    void showDist(){
        cout << feet << "\'" << inches << endl;
    }
    Distance operator+(Distance d2) const;
};

Distance Distance::operator+(Distance d2) const{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if(i >= 12){
        while (i >= 12){
            i-=12;
            ++f;
        }
    }
    return Distance (f, i); //возвращается объект без имени
}

int main(){
    Distance d1, d3;
    Distance d2(10, 37);
    d1.enterDist();
    d1.showDist();
    d2.showDist();
    d3 = d1 + d2; // существует правило: объект, стоящий с левой стороны, вызывает функцию оператора,
                  // объект стоящий с правой стороны должен быть передан в функцию в качестве аргумента

    d3.showDist();
    return 0;
}
