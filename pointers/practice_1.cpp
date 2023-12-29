#include <iostream>
using namespace std;

class toolBoth{
    private:
        unsigned int number_of_cars;
        double capital;
    public:
        toolBoth():number_of_cars(0), capital(0)
        {};
        void normal_driver(){
            number_of_cars++;
            capital+=0.5;
            cout << "добросовестный водитель " << endl;
        }
        void unscrupulous_driver(){
            number_of_cars++;
            cout << "нарушитель "<< endl;
        }
        void  display_indicators()const{
            cout <<"количество проехавших машин : " << number_of_cars << endl;
            cout <<"количество денег : " << capital << endl;
        }
};

struct alph
{
    char n_d = 'n';
    char u_d = 'u';
    char exit = 'e';
    char qwerty;
};


int main(){
    alph a;
    toolBoth tb;
    while (true){
        cout << "введите букву : "; cin >> a.qwerty;
        switch (a.qwerty)
        {
        case ('n'):
            tb.normal_driver();
            break;
        case ('u'):
            tb.unscrupulous_driver();
            break;
        default:
            break;
        }
        if (a.qwerty == 'e'){
            tb.display_indicators();
            break;
        }
        
    }
    return 0;
}