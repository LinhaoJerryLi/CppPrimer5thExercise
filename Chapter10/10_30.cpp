#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    istream_iterator<string> in(cin), eof;
    ostream_iterator<string> out(cout, " ");
    vector<string> vs(in, eof);
    sort(vs.begin(), vs.end());
    copy(vs.cbegin(), vs.cend(), out);
}