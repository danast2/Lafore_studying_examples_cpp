#include <iostream>
// массив указателей на объекты

using namespace std;

class Person{
private:
    char name [40];
public:
    void set_name(){
        cout << "enter name ";
        cin >> name;
    }
    void get_name(){
        cout << "your name is " << name << endl;
    }

};


int main()
{
    Person *ptrper[50]; // массив указателей
    int n = 0;          // кол-во элементов в массиве
    char choice;

    do
    {
        ptrper[n] = new Person;
        ptrper[n]->set_name();
        n++;
        cout << "Продолжить ? (y/n)";
        cin >> choice;
    } while (choice == 'y');
    for (int i = 0; i < n; i++)
    {
        cout << "information about number " << i << endl;
        ptrper[i]->get_name();
        cout << '\n';
    }
    return 0;
}