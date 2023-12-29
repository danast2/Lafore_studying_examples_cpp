// упражнение 6 указатели лафоре
#include <iostream>

using namespace std;

// сделать фу-цию считающую кол-во символов в строке
//  задать указатель на строку

int compstr(char *line1,char *line2);

int main()
{
    char *line1 = "abc";
    char *line2 = "bfc";
    //cout << line1;
    cout << compstr(line1, line2);
    return 0;
}

int compstr(char *line1,char *line2)
{
    if ((line1) < (line2)){
        return 1;
    }
    if ((line1) > (line2)){
        return -1;
    }
    if ((line1) == (line2)){
        return 0;
    }
}


/*int order(char& str1, char& str2) {
    if ((&str1) > (&str2)){
        return 1;
    }
    if ((&str1) < (&str2)){
        return -1;
    }
    if ((&str1) == (&str2)){
        return 0;
    }
}*/
/*void bsort(Person** pp, int n) {


    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            order(pp + i, pp + j);
        }

    }

}*/

