#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
bool findVal(vector<int>::iterator begin, vector<int>::iterator end, int val)
{
    bool is_found = false;
    while (begin != end)
    {
        if (*begin == val)
        {
            is_found = true;
            break;
        }
        ++begin;
    }
    return is_found;
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    assert(findVal(v.begin(), v.end(), 3));
    assert(!findVal(v.begin(), v.end(), 0));
    return 0;
}