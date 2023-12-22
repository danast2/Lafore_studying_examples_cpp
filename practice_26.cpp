//указатели на указатели

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName()
    {
        cout << "enter name: "; cin >> name;
        cout << "\n";
    }
    void getName()
    {
        cout << name << endl;
    }
    string returnName()
    {
        return name;
    }
};

void bsort(Person**, int);
void order(Person**, Person**);

int main() {
    
    Person* ptrPersons[50];
    int n = 0;
    char choice;
    do
    {
        ptrPersons[n] = new Person;
        ptrPersons[n]->setName();
        n++;
        cout << "continue entering?(y/n): ";
        cin >> choice;
    } while (choice == 'y');


    cout << "unsorted output" << endl;

    for (int i = 0; i < n; i++)
    {
        ptrPersons[i]->getName();
    }

    bsort(ptrPersons, n); // сортируем

    cout << "sorted output" << endl;
    for (int i = 0; i < n; i++)
    {
        ptrPersons[i]->getName();
    }

    return 0;
}


//тут он сортирует по алфавиту!!!

void bsort(Person** pp, int n) {
    

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            order(pp + i, pp + j);
        }

    }

}

void order(Person** pp1, Person** pp2) {
    if (((*pp1)->returnName()) > ((*pp2)->returnName())) { // pp1/pp2 - указатель на указаетель, мы хотим получить содержимое переменной, тогда
        Person* tempptr = *pp1; // *(pp1) звездочка - разыменование указателя на указатль, ... -> стрелочка -  разыменование 2-ого указателя
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}