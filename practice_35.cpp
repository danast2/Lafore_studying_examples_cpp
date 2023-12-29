#include <iostream>

const int NUMARRAYS = 10;
const int MAXSIZE = 10;

int main() {
    int **ptrList = new int*[NUMARRAYS];
    for (int i = 0; i < NUMARRAYS; i++) {
        *(ptrList + i) = new int [MAXSIZE];
    }

    int num = 1;
    for (int i = 0; i < NUMARRAYS; ++i) {
        for (int j = 0; j < MAXSIZE; ++j) {
            ptrList[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < NUMARRAYS; ++i) {
        for (int j = 0; j < MAXSIZE; ++j) {
            std::cout << ptrList[i][j] << '\t';
        }
        std::cout << std::endl;
    }
    return 0;
}