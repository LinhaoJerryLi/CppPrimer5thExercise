#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
using namespace std::placeholders;

bool check_size(string const &str, size_t sz)
{
    return str.size() < sz;
}

int main()
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7};
    string const str("123456");
    auto result = find_if(vec.begin(), vec.end(), bind(check_size, str, _1));
    if (result != vec.end())
        cout << *result << endl;
    else
        cout << "Not found" << endl;
}