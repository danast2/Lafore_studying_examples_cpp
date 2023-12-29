#include <iostream>

using namespace std;

void centimize(double& );
void centimize_by_pointer(double*);

int main(){
    double var = 10;
    cout << var << endl;

    double var_new = 15;
    cout << var_new << endl;


    centimize(var);
    cout << var << endl;

    centimize_by_pointer(&var_new);
    cout << var_new << endl;
    return 0;
}

void centimize(double& v)
{
    v *= 2.54;
}

void centimize_by_pointer(double* variable)
{
    *variable *= 2.54;
}