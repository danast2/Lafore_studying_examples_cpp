#include <iostream>
#include <cstring>
//#include "cctype.h"

using namespace std;

class String{
    private:
        char* str;

    public:
        String(char* s){
            int length = strlen(s);
            str = new char [length + 1];
            strcpy(str, s);
        };
        ~String(){
            cout << "очистка памяти";
            delete[] str;
        }
        void display(){
            cout << str << endl;
        }


};

int main(){
    String strss("DanAst228335");
    strss.display();


    return 0;
}