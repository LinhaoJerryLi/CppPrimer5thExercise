#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
vector<int>::iterator findVal(vector<int>::iterator begin, vector<int>::iterator end, int val)
{
    while (begin != end)
    {
        if (*begin == val)
        {
            return begin;
        }
        ++begin;
    }
    return end;
}
