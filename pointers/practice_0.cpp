#include <iostream>
using namespace std;

/*class foo
{
    private:
        static int count;

    public:
    foo()
        { count++; }
    int show_count()
        {return count;}
};*/
//int foo::count = 0;

/*class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance(): feet(0), inches(0.0)
        {}
        Distance(int ft, float in): feet(ft), inches(in)
        {}
        void get_dist(){
            cout << "введите число футов :"; cin>> feet;
            cout << "введите число дюймов :"; cin>> inches;
        }
        void show_dist()const{
            cout << feet << "\'-" << inches << '\"';
        }
        Distance add_dist(const Distance&) const; // сложение

};

//сложение данного объета с d2 and возврат суммы

Distance Distance::add_dist(const Distance& d2)const
{
    Distance temp; //временная переменная
    // feet = 0 - ошибка, нельзя изменять поле
    // d2.feet = 0 - ошибка, нельзя изменять d2
    temp.inches = inches + d2.inches; // сложение дюймов
    if (temp.inches >= 12){
        temp.inches -=12;
        temp.feet = 1;
    }
    temp.feet += feet + d2.feet; // сложение футов
    return temp;
}*/

class Data{
    private:
        int data_integer;
        int data_fractional;
    public:
        Data():data_integer(0), data_fractional(0)
        {};
        Data(int d_i,int d_f):data_integer(d_i), data_fractional(d_f)
        {};
        void get_data(){
            cout << "введите целую часть: "; cin >> data_integer;
            cout << "введите дробную часть: "; cin >> data_fractional;
        }
        void show_data()const{
            cout << data_integer << ',' << data_fractional << endl;
        }
        Data add_data(Data d_n)const;    
};

Data Data::add_data(Data d_n)const{
    Data temporary;
    temporary.data_integer = data_integer + d_n.data_integer;
    temporary.data_fractional = data_fractional + d_n.data_fractional;
    if ((temporary.data_fractional / 10) >= 1){
        temporary.data_integer += temporary.data_fractional / 10;
        temporary.data_fractional-=10;
    }
    return temporary;
}

int main(){
   Data d3;
   Data d1(15, 5);
   Data d2;
   d2.get_data();
   d3 = d1.add_data(d2);
   d3.show_data();
}