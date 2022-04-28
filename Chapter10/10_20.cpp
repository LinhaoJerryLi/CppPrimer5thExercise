#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<string> vs{"abcdefg", "abc", "bajdalfkdaklfjla"};
    int count = count_if(vs.begin(), vs.end(), [](string &s)
                         { return s.size() > 6; });

    cout << count << endl;
}