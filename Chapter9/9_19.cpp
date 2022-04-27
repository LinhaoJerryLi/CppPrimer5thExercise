#include <list>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string buffer;
    list<string> lst;
    while (cin >> buffer)
    {
        lst.push_back(buffer);
    }

    for (auto const &elem : lst)
    {
        cout << elem << endl;
    }
    return 0;
}