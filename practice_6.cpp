#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float find_uniq(const std::vector<float> &v);

int main(){
    vector<float> example { 999.666,  999.666, 999.666, 999.666, 999.666, 999.666, 999.666, 999, 999.666 };
    //cout << find_uniq(example);

    //vector<int> v = { 1, 3, 2, 3, 4 };
    //cout << count(begin(v), end(v), 3) << endl;
    cout << find_uniq(example);
    return 0;
}



/*int find_uniq(const std::vector<float> &v)
{

    auto result{ std::find(begin(v), end(v), 999) };
    int id = result - begin(v);
    return v[id];
}*/

/*float find_uniq(const std::vector<float> &v)
{
    for (int i = 0; i < int(v.size()); i++){
        if((count(begin(v), end(v), v[i])) == 1){
            return v[i];
        }
    }
}*/

float find_uniq(const std::vector<float> &v)
{
    float a;
    for (int i = 0; i < int(v.size()); i++){
        (count(begin(v), end(v), v[i]) == 1) ? a = v[i]
        return a;
    }
}