#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    istream_iterator<string> in(cin), eof;
    ostream_iterator<string> out(cout, " ");
    vector<string> vs(in, eof);
    list<string> ls{};
    sort(vs.begin(), vs.end());
    unique_copy(vs.begin(), vs.end(), back_inserter(ls));
    copy(ls.cbegin(), ls.cend(), out);
}