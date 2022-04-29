#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    vector<string> vs;
    ifstream ifs("/Users/linhaoli/Dev/cpp/CppPrimer5thExercise/Chapter10/file.txt");
    if (!ifs)
    {
        return -1;
    }
    istream_iterator<string> in(ifs), eof;
    ostream_iterator<string> out(cout, " ");

    while (in != eof)
    {
        vs.push_back(*in++);
    }
    copy(vs.cbegin(), vs.cend(), out);
}