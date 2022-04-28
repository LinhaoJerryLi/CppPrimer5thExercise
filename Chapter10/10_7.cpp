#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

template <typename Sequence>
void print(Sequence const &seq)
{
    for (const auto &i : seq)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    list<int> lst;
    int i;
    while (cin >> i)
        lst.push_back(i);
    copy(lst.cbegin(), lst.cend(), back_inserter(v));
    print(v);

    vector<int> v2;
    v2.reserve(10);
    fill_n(back_inserter(v2), 10, 0);
    print(v2);
}