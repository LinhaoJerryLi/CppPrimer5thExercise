#include <forward_list>
#include <list>
#include <iostream>
#include <string>

using namespace std;
// silly loop to remove even-valued elements and insert a duplicate of oddvalued elements
int main()
{
    list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = lst.begin(); // call begin, not cbegin because we're changing lst
    while (iter != lst.end())
    {
        if (*iter % 2)
        {
            iter = lst.insert(iter, *iter); // duplicate the current element
            advance(iter, 2);               // advance past this element and the one inserted before it
        }
        else
            iter = lst.erase(iter); // remove even elements         // don't advance the iterator; iter denotes the element after the one we erased
    }

    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto f_prev = flst.before_begin(); // call begin, not cbegin because we're changing flst
    auto f_iter = flst.begin();        // call begin, not cbegin because we're changing flst
    while (f_iter != flst.end())
    {
        if (*f_iter % 2)
        {
            f_iter = flst.insert_after(f_prev, *f_iter); // duplicate the current element
            advance(f_iter, 2);
            advance(f_prev, 2);
        }
        else
            f_iter = flst.erase_after(f_prev); // remove even elements         // don't advance the iterator; iter denotes the element after the one we erased
    }
    for (auto i : lst)
        cout << i << " ";
    cout << endl;
    for (auto i : lst)
        cout << i << " ";
    cout << endl;
}
