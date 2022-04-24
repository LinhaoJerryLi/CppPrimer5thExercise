#include <iostream>
#include <vector>
#include <list>

using namespace std;

void printv(const vector<double> &v)
{
    for (const auto &elem : v)
    {
        cout << elem << ' ';
    }
    cout << endl;
}
int main()
{
    vector<int> vi{1, 2};
    list<int> li{1, 2};
    vector<double> v1(vi.cbegin(), vi.cend());
    vector<double> v2(li.cbegin(), li.cend());
    printv(v1);
    printv(v2);
}
