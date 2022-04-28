#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    int i = 5;
    auto f = [i]() mutable -> bool
    {
        if (i > 0)
        {
            --i;
        }
        return i == 0;
    };
    for (int j = 0; j < 7; j++)
    {
        cout << f() << ":" << i << endl;
    }
}