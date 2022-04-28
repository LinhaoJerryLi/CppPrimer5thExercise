#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
bool isShort(const string &lhs, const string &rhs)
{
    return lhs.size() < rhs.size();
}
void elimDups(vector<string> &v)
{
    stable_sort(v.begin(), v.end(), isShort);
    auto iter = unique(v.begin(), v.end());
    v.erase(iter, v.end());
}
int main()
{
    vector<string> vi{"a", "bc", "bb", "cccc", "ba"};
    elimDups(vi);
    for (auto const &e : vi)
        cout << e << " ";
    cout << endl;
}