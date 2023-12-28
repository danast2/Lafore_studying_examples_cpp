//однсвязный список
//нужно до конца разобраться, как он работает
//8 задача Лафоре
#include <iostream>

using namespace std;

struct link{
    int data_variable;
    link* next_ptr;

    link(int d): data_variable(d), next_ptr(nullptr){}
};

class Linklist{
private:
    link* first; // указатель на начало списка
    link* last;
public:
    Linklist():first(nullptr), last(nullptr){} // nullptr - константа нулевого указателя, имеет тип std::nullptr_t
    //~Linklist();
    bool is_empty();
    void add_item(int d); // добавление данных
    void display(); // показ данных
};

// нормальная очистка памяти
/*Linklist::~Linklist() // деструктор
{
    link* current = first;
    while (current!=NULL)  //т.е. пока не дойдем до конца списка (ласт элемент содержит ссылку на NULL)
    {
        link* temp = current; // сохранить указатель на элемент
        current = current->next_ptr; // получить следующую ссылку
        delete temp; // удалить эту ссылку
    }

}*/

bool Linklist::is_empty(){
    return first == nullptr;
}

void Linklist::add_item(int d) {
    link* newlink = new link(d);
    if(is_empty()){
        first = newlink;
        last = newlink;
        return;
    }
    last->next_ptr = newlink;
    last = newlink;
}

void Linklist::display()
{
    if(is_empty()) return;
    link* newlink = first;
    while(newlink){
        cout << newlink->data_variable << " ";
        newlink = newlink->next_ptr;
    }
    cout << endl;
}


int main(){
    Linklist list1;
    list1.add_item(12);
    list1.add_item(124);
    list1.add_item(126);
    list1.add_item(4);
    list1.add_item(2);

    list1.display();
    return 0;
}