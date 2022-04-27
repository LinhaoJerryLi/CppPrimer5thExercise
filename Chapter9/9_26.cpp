#include <vector>
#include <list>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vi(ia, end(ia));
    list<int> lst(vi.begin(), vi.end());

    for (auto it = vi.begin(); it != vi.end(); ++it)
    {
        if (!(*it & 0x1))
        {
            it = vi.erase(it);
            --it;
        }
    }

    for (auto it = lst.begin(); it != lst.end(); ++it)
    {
        if (*it & 0x1)
        {
            it = lst.erase(it);
            --it;
        }
    }

    for (auto &e : vi)
        cout << e;
    cout << endl;
    for (auto &e : lst)
        cout << e;
    cout << endl;

    return 0;
}