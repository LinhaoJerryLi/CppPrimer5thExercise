#include <deque>
#include <list>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    list<int> lst;
    deque<int> odd;
    deque<int> even;
    for (int buffer; cin >> buffer; lst.push_back(buffer))
        ;
    list<int>::iterator it = lst.begin();
    while (it != lst.end())
    {
        if (*it % 2)
        {
            odd.push_back(*it);
        }
        else
        {
            even.push_back(*it);
        }
        ++it;
    }

    for (int i : odd)
    {
        cout << i << endl;
    }
    for (int i : even)
    {
        cout << i << endl;
    }
}