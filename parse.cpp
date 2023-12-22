//программа разбора арифметических выражений
#include <iostream>
#include <cstring>

//using namespase std;

const int LEN = 80; // максимальная длина выражения
const int MAX = 40;

class Stack{
private:
    char st[MAX]; // массив данных 
    int top; // кол-во сохраненных данных
public:
    Stack(){
        top = 0;
    }
    void push(char var){ // поместить в стек
        st[++top] = var;
    }
    char pop(){ // взять из стека
        return st[top--];
    }
    int get_top(){ // узнать кол-во элементов
        return top;
    }
};

class Express{
private:
    Stack s; //стек данных
    char* pStr; // строка для ввода 
    int len; // длина строки
public:
    Express(char* ptr){
        pStr = ptr; // запоминаем указатель на строку
        len = strlen(pStr); // устанавливаем длину
    }
    void parse(); // разбор выражения
    int solve(); // получение результата
};

void Express::parse() // добавляем данные в стек
{
    char ch; // символ из строки 
    char lastVal; // последнее значение 
    char lastTop; // последний оператор

    for (int i = 0; i < len; i++) // для всех символов в строке
    {
        ch = pStr[i];

        if (ch >= '0' && ch <= '9') // если это цифра
        {
            s.push(ch - '0'); // то сохраняем её значение (проверить, зачем нужен 0)
        }else
        {
            if (ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                if(s.get_top() == 1){ //если это первый оператов
                    s.push(ch); // помещаем его в стек
                }else{
                    lastVal = s.pop(); //получаем предыдущее число
                    lastTop = s.pop(); // получаем предыдущий оператор
                    // если это * или /, а предыдущий был + или -, то
                    if ((ch == '*' || ch == '/') && (lastTop == '+' || lastTop == '-'))
                    {
                        s.push(lastTop); // отменяем последние 2ва взятия из стека
                        s.push(lastVal);
                    }else{
                        // помещаем в стек результат операции
                        switch (lastTop)
                        {
                        case '+':
                            s.push(s.pop() + lastVal);
                            break;
                        case '-':
                            s.push(s.pop() - lastVal);
                            break;
                        case '*':
                            s.push(s.pop() * lastVal);
                            break;
                        case '/':
                            s.push(s.pop() / lastVal);
                            break;
                        default:
                            std::cout << "Использовался неизвестный оператор";
                            exit(1);
                        }
                    }
                    s.push(ch); // помещаем в стек текущий оператор
                } 
            }else
            { // какая-то фигня
                std::cout << "\n Неизвестный символ(((................";
                exit(1);
            }
        }
    }
};

int Express::solve() // убираем данные из стека
{
    char lastVal; // предыдущее значение 
    while(s.get_top() > 1){
        lastVal = s.pop(); // получаем предыдущее значение
        switch (s.pop()) // получаем предыдущий оператор
        {
        case '+':
            s.push(s.pop() + lastVal);
            break;
        case '-':
            s.push(s.pop() - lastVal);
            break;
        case '*':
            s.push(s.pop() * lastVal);
            break;
        case '/':
            s.push(s.pop() / lastVal);
            break;
        default:
            std::cout << "Неизвестный опрератор";
            exit(1);
        }
    }
    return int (s.pop()); // последний опрератор в стеке - это результат
}

int main()
{
    char ans; // y or n
    char line[LEN]; // строка для разбора 
    std::cout << "\nВведите арифметическое выражение в виде 2+3*4/3-2"
            "\nЧисла должны быть из одной цифры"
            "\nНе используйте пробелы и скобки";
    do
    {
        std::cout << "выражение: ";
        std::cin >> line;
        Express* eptr = new Express(line);
        eptr->parse();
        std::cout << "результат: "
             << eptr->solve() << std::endl;
        delete eptr;
        std::cout << "Еще одно выражение y/n: ";
        std::cin >> ans;
    } while (ans == 'y');
    
    return 0;
}