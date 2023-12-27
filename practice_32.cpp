#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    string name;
    float salary;
public:
    void set_name(){
        cin >> name;
    }
    void get_name(){
        cout << name << endl;
    }
    void set_salary(){
        cin >> salary;
    }
    void get_salary(){
        cout << salary << endl;;
    }
    float return_salary(){
        return salary;
    }
    string return_name(){
        return name;
    }
};

void salsort(Person** pp, int n);
void order(Person** pp1, Person** pp2);

int main(){
    Person* ptrPersons[50];
    char choice;
    int n;
    do {
        ptrPersons[n] = new Person;
        ptrPersons[n]->set_name();
        cout << endl;
        ptrPersons[n]->set_salary();
        cout << endl;
        n++;
        cout << "you want to enter (y/n) ?: "; cin >> choice;
    } while (choice == 'y');

    cout << "unsorted output" << endl;
    for (int i = 0; i < n; i++){
        ptrPersons[i]->get_salary();
    }
    salsort(ptrPersons, n);
    cout << "sorted output" << endl;
    for (int i = 0; i < n; i++){
        ptrPersons[i]->get_salary();
    }
    return 0;
}

void salsort(Person** pp, int n) {
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            order(pp + i, pp + j);
        }

    }

}

void order(Person** pp1, Person** pp2) {
    if (((*pp1)->return_salary()) < ((*pp2)->return_salary())) { // pp1/pp2 - указатель на указаетель, мы хотим получить содержимое переменной, тогда
        Person* tempptr = *pp1; // *(pp1) звездочка - разыменование указателя на указатль, ... -> стрелочка -  разыменование 2-ого указателя
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}