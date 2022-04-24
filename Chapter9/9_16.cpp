#include <vector>
#include <iostream>
#include <list>

using namespace std;
int main()
{
    vector<int> vs1{1, 2};
    list<int> vs2{1, 2};
    vector<int> vs3;
    vs3.assign(vs2.cbegin(), vs2.cend());
    cout << (vs1 == vs3) << endl;
    return 0;
}