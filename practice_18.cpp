#include <iostream>
#include <string>

using namespace std;

const int DAYS = 7;

int main(){
    char* arrptrs[DAYS] = {"MONDAY", "TUESDAY", "WENSDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};

    for (int i = 0; i < DAYS; i++){
        cout << arrptrs[i] << endl;
    }

    /*for (std::string el: arrptrs){
        cout << el << endl;
    }*/


    //почему-то не работает
    /*while (*arrptrs)
    {
        //cout << *arrptrs++; 
    } */
    


    return 0;
}