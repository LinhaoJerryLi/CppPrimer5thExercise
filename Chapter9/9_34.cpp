#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    vector<int> vi{1, 2, 3};
    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if (*iter % 2)
            iter = vi.insert(iter, *iter);
        ++iter;
        ++iter;
    }
    for (auto &e : vi)
        cout << e << ' ';
    cout << endl;
}