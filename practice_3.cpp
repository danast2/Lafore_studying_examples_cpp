

#include <iostream>
using namespace std;

//массивы и строки лофоре (массивы структур стр 271)
/*const int SIZE = 3;

struct part{
    int modelnumber;
    int partnumber;
    float cost;
};

int main(){
    //int n;
    part apart[SIZE];

    for(int n = 0; n < SIZE; n++){
        cout << "введите номер модели: " ;
        cin >> apart[n].modelnumber;
        cout << "введите номер части: ";
        cin >> apart[n].partnumber;
        cout << "введите стоимость: ";
        cin >> apart[n].cost;
    }

    cout << endl;
    
    for(int n = 0;n < SIZE; n++){
        cout << "модель: " << apart[n].modelnumber << endl;
        cout << "часть: " << apart[n].partnumber << endl;;
        cout << "стоимость: " << apart[n].cost << endl;;
    }

    return 0;
}*/

class Stack{
    private:
        enum {MAX = 10};
        int st[MAX];
        int top;
    public:
        Stack( ): top(0) {};
        void push(int var){ // поместить в стек
        st[++top] = var;
        }
        int pop(){ // взять из стека
            return st[top--];
        }
};




int main(){
    Stack s1;

    s1.push(11);
    s1.push(22);
    cout << "1 :" << s1.pop() << endl;
    cout << "2 :" << s1.pop() << endl; 
    return 0;
}