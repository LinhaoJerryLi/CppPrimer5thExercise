#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    list<int> li{1, 2, 3, 4, 0, 5, 6};
    auto it = find(li.begin(), li.end(), 0);
    cout << *it << endl;
}