#include <iostream>
#include <utility>
#include<vector>
#include <algorithm>

using namespace std;


std::vector<std::pair<int, int>> twos_difference(std::vector<int> &vec);

int main(){

    vector<int> vec = {1, 3, 5, 6, 8, 10, 15, 32, 12, 14, 56};

    vector<std::pair<int, int>> somth = twos_difference(vec);

    for (int i = 0; i < somth.size(); i++) {
        cout << somth[i].first << " " << somth[i].second << endl; // выводим элементы массива
    }


    return 0;
}

std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) {
    vector <int> b = vec;
    for (int i = 0; i < int(b.size()); i++) {
        for (int j = 0; j < int(b.size()) - 1; j++) {
            if (b[j] > b[j + 1]) {
                int temp = b[j]; // создали дополнительную переменную
                b[j] = b[j + 1]; // меняем местами
                b[j + 1] = temp; // значения элементов
            }
        }
    }

    vector<std::pair<int, int>> new_sas;

    for (int i = 0; i < int(b.size()); i++) {
        for (int j = 0; j < int(b.size()) ; j++) {
            if ((b[i] - b[j]) == -2) {
                std::pair<int, int> n;
                n = make_pair(b[i], b[j]);
                new_sas.push_back(n);
            }
        }
    }
  return new_sas;
}

/*std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) {

    vector<int> temp = vec;

    vector<std::pair<int, int>> new_sas;

    for (int i = 0; i < int(temp.size()); i++) {
        for (int j = 0; j < int(temp.size()) ; j++) {
            if (((temp[i] - temp[j]) == -2) || ((temp[i] - temp[j]) == 2)) {
              
                std::pair<int, int> b;
                b = make_pair(temp[i], temp[j]);
                new_sas.push_back(b);
                if (temp.size() <= 2){
                  auto result1 = remove(temp.begin(), temp.end(), temp[i]);
                  temp.erase(result1, temp.end());

                  auto result2 = remove(temp.begin(), temp.end(), temp[j]);
                  temp.erase(result2, temp.end());
                }
                  
            }
        }
    }
  return new_sas;
}*/



