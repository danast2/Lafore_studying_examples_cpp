//связный список

#include <iostream>

using namespace std;

struct link{
    int data_variable;
    link* next_ptr;
};

class Linklist{
private:
    link* first; // указатель на начало списка
public:
    Linklist()
    {first = NULL;} // задаем пустое значение (аналогично 0), элемент указатель которого имеет данное значение - последний элемент
    ~Linklist();
    void add_item(int d); // добавление данных
    void display(); // показ данных
};

// нормальная очистка памяти
Linklist::~Linklist() // деструктор
{
    link* current = first;
    while (current!=NULL)  //т.е. пока не дойдем до конца списка (ласт элемент содержит ссылку на NULL)
    {
        link* temp = current; // сохранить указатель на элемент
        current = current->next_ptr; // получить следующую ссылку
        delete temp; // удалить эту ссылку
    }
    
}

void Linklist::add_item(int d)
{
    link* newlink = new link;
    newlink->data_variable = d;
    newlink->next_ptr = first; // запоминаем значение first
    first = newlink; // first теперь указывает на новый элемент
}

void Linklist::display()
{
    link* current = first;
    while(current){
        cout << current->data_variable << endl;
        current = current->next_ptr;
    }
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