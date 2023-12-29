#include <iostream>

using namespace std;

void copy_str(char*, char*);

int main(){
    char* str1 = " danast228335 ";
    char str2[50];

    copy_str(str1, str2);

    cout<< str2;

    return 0;
}

void copy_str(char * source, char * copied)
{
    while (*source)
    {
        *copied++ = *source++;
    }
    *copied = '\0';
}
