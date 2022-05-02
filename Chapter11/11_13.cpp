#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int main()
{
    string buffer_s;
    int buffer_i;
    vector<pair<string, int>> v;
    while (cin >> buffer_s)
    {
        cin >> buffer_i;
        v.push_back(make_pair(buffer_s, buffer_i));
        v.push_back({buffer_s, buffer_i});
        pair<string, int> p(buffer_s, buffer_i);
        v.push_back(p);
    }
    for (auto const &e : v)
    {
        cout << e.first << " " << e.second << endl;
    }
}