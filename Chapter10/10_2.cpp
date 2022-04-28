#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<string> vi{"abc", "def", "abc", "abc"};
    cout << count(vi.cbegin(), vi.cend(), "abc") << endl;
}