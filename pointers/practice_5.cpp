#include <iostream>

using namespace std;

class Counter{
private:
    int count;

public:
    Counter():count(0){}
    int get_count(){
        return count;
    }
    void operator++(){
        count++;
    }
    

};


int main(){
    Counter c1;
    //int a = c1.get_count();
    //int a = c1.get_count();
    cout << c1.get_count();
    ++c1;
    cout << c1.get_count();
    return 0;
}