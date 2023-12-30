#include <iostream>
// операции арифметического присваивания
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
    void operator+=(Distance);
};

void Distance::operator+=(Distance d2) {
    feet += d2.feet;
    inches += d2.inches;
    if (inches >= 12){
        while (inches >= 12){
            inches-=12;
            ++feet;
        }
    }
}

int main(){
    Distance dist1;
    dist1.getDist();
    cout << "dist1 = "; dist1.showDist();

    Distance dist2(11, 6.25);
    cout << "dist2 = "; dist2.showDist();

    dist1+=dist2;
    cout << "dist1 = "; dist1.showDist();
    return 0;
}