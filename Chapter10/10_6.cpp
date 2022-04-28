#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    vector<int> v;
    fill_n(back_inserter(v), 5, 0);
    for (auto const &e : v)
        cout << e;
    cout << endl;
}