#include <iostream>
//перегрузка унарных операций

using namespace std;

class Count{
private:
    int num;
public:
    Count():num(0) {}
    int get_count(){
        return num;
    }
    void operator++(){
        ++num;
    }
};

int main(){
    Count c;
    ++c;
    ++c;
    ++c;
    ++c;
    cout << c.get_count();
    return 0;
}