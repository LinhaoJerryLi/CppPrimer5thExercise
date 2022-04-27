#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string buffer;
    deque<string> dq;
    while (cin >> buffer)
    {
        dq.push_back(buffer);
    }

    for (auto const &elem : dq)
    {
        cout << elem << endl;
    }
    return 0;
}