#include <iostream>

using namespace std;

int main()
{
    int var1 = 33;
    int var2 = 44;

    int *ptr;

    ptr = &var1;
    cout << ptr << endl;
    ptr = &var2;
    cout << ptr << endl;

    return 0;
}