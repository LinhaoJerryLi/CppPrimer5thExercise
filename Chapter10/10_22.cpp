#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
using namespace std::placeholders;

bool less_equal_6(const string &s, string::size_type sz)
{
    return s.size() <= sz;
}

int main()
{
    std::vector<string> authors{"dlsakfjakldfjl", "asf", "afadfa", "d", "afdfadfa"};
    std::cout << count_if(authors.cbegin(), authors.cend(), bind(less_equal_6, _1, 6));
}