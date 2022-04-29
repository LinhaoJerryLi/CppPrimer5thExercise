#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    vector<int> vi{1, 2, 3, 4, 5};
    list<int> li{};
    sort(vi.begin(), vi.end());
    unique_copy(vi.begin(), vi.end(), inserter(li, li.begin()));
    for (auto const &e : li)
        cout << e << endl;
    return 0;
}