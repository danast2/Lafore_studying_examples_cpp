#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;

int main(){
    vector<int> mas = {1, 3, 4, 5, 6, 7};
    string some_str = "";
    for (int i:mas){
        char c = static_cast<char>(i) 
        some_str.push_back(mas[i]);
    }
    //cout << "dsas";
    cout<<some_str;
    
    return 0;
}