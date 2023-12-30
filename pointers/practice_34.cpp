#include <iostream>

using namespace std;

struct link{
    int data_variable;
    link* next_ptr;

    link(int d, link* l): data_variable(d), next_ptr(l){}
};

link some_link(10, new link(1, nullptr));

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
    int sumTheTreeValues(link *root);
};

bool Linklist::is_empty(){
    return first == nullptr;
}

void Linklist::add_item(int d) {
    link* newlink = new link(d, nullptr);
    if(is_empty()){
        first = newlink;
        last = newlink;
        return;
    }
    last->next_ptr = newlink;
    last = newlink;
}


int Linklist::sumTheTreeValues(link *root) {
    cout << endl;
    if (root == nullptr)
        return 0;
    else
        return root->data_variable + sumTheTreeValues(root->next_ptr);
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

    cout << list1.sumTheTreeValues(&some_link);
    return 0;
}