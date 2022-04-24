#include <list>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
int main()
{
    list<const char *> lst{"abc", "def"};
    vector<string> v;
    v.assign(lst.cbegin(), lst.cend());
    return 0;
}
