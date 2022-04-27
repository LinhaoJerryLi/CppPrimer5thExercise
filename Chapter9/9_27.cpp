#include <vector>
#include <forward_list>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    forward_list<int> flst{1, 2, 4, 5, 6, 8, 0};
    auto prev = flst.before_begin();
    for (auto curr = flst.begin(); curr != flst.end(); ++prev, ++curr)
    {
        if (*curr & 0x1)
        {
            curr = flst.erase_after(prev);
        }
    }
    for (auto &e : flst)
    {
        cout << e << ' ';
    }
    cout << endl;

    return 0;
}