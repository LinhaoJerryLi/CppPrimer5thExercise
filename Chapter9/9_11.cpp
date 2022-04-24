#include <iostream>
#include <vector>

using namespace std;

void printv(const vector<int> &v)
{
    for (const auto &elem : v)
    {
        cout << elem << ' ';
    }
    cout << endl;
}
int main()
{
    vector<int> v1{1, 2};
    vector<int> v2 = {3, 4, 5};
    vector<int> v3 = v2;
    vector<int> v4(v1);
    vector<int> v5(v4.cbegin(), v4.cend());
    vector<int> v6(5, 1);
    vector<int> v7(5);
    printv(v1);
    printv(v2);
    printv(v3);
    printv(v4);
    printv(v5);
    printv(v6);
}
