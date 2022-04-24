#include <vector>
#include <iostream>

using namespace std;
int main()
{
    vector<string> vs1{"abc", "abcd"};
    vector<string> vs2{"abc", "abcd"};
    vector<string> vs3{"abc", "abc"};
    cout << (vs1 == vs2) << endl;
    cout << (vs1 == vs3) << endl;
    return 0;
}