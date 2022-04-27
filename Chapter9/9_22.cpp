#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    vector<int> iv{1, 2, 3, 4, 5, 6, 7};
    int some_val = 3;
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
    while (iter != mid)
    {
        if (*iter == some_val)
        {
            iter = iv.insert(iter, 2 * some_val);
            iter += 2;
            mid = iv.begin() + iv.size() / 2;
        }
        else
        {
            ++iter;
        }
    }
    for (auto &v : iv)
        cout << v << endl;
    return 0;
}