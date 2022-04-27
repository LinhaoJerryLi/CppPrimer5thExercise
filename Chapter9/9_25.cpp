#include <list>
#include <iostream>
using namespace std;

int main()
{
    list<int> lst{1, 2, 3, 4, 5, 6, 7, 8};
    // auto elem1 = next(lst.begin(), 4);
    auto elem1 = lst.end();
    // auto elem2 = prev(lst.end(), 4);
    auto elem2 = lst.end();
    cout << *elem1 << endl;
    cout << *elem2 << endl;
    elem1 = lst.erase(elem1, elem2);
    cout << *elem1 << endl;
    for (auto &e : lst)
        cout << e;
    cout << endl;
    return 0;
}