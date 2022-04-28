#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    vector<char> vc{'a', 'b', 'c', 'd'};
    string s(vc.begin(), vc.end());
    cout << s << endl;
}