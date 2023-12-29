// указатели на объекты

#include <iostream>

using namespace std;

class Dist{
private:
    int feet;
    int inches;
public:
    void set_len(){
        cout << "введите число футов ";cin >> feet ;
        cout << "введите число дюймов ";cin >> inches ;
    }
    void get_len(){
        cout << "кол-во футов " << feet << endl;
        cout << "кол-во дюймов " << inches<< endl; 
    }
};

int main(){
    //Dist d1;
    //d1.set_len();
    //d1.get_len();

    Dist* distptr = new Dist;
    distptr->set_len(); // так как это не переменная, а указатель, то нельзя делать distprt.set_len(), можно делать (*distptr).set_len() (разыменование указателя)
    distptr->get_len(); // 
    return 0;
}