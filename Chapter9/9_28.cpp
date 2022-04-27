#include <forward_list>
#include <iostream>
#include <string>
using namespace std;

void find_and_insert(forward_list<string> &flst, string &target, string &str)
{
    auto prev = flst.before_begin();
    for (auto curr = flst.begin(); curr != flst.end(); ++prev, ++curr)
    {
        if (*curr == target)
        {
            curr = flst.insert_after(curr, str);
            return;
        }
    }
    flst.insert_after(prev, str);
    return;
}

int main()
{
    forward_list<string> flst{"hey wasup", "ei"};
    string target = "ayo";
    string str = "yo";
    find_and_insert(flst, target, str);

    for (auto &e : flst)
    {
        cout << e << ' ';
    }
    cout << endl;

    return 0;
}