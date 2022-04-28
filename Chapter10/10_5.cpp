#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    const char a[3][2] = {"A", "B", "C"};
    const char b[3][2] = {"A", "B", "C"};

    std::vector<const char *> v1(std::begin(a), std::end(a));
    std::list<const char *> v2(std::begin(b), std::end(b));

    std::cout << std::boolalpha
              << std::equal(v1.cbegin(), v1.cend(), v2.cbegin()) << std::endl;
    return 0;
}