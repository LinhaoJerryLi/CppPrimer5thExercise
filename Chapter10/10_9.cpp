#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
void elimDups(vector<int> &v)
{
    sort(v.begin(), v.end());
    auto iter = unique(v.begin(), v.end());
    v.erase(iter, v.end());
}
int main()
{
    vector<int> vi{3, 2, 1, 2, 1, 4, 5};
    elimDups(vi);
    for (auto const &e : vi)
        cout << e << " ";
    cout << endl;
}