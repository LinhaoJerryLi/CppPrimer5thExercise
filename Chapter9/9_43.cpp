#include <iostream>
#include <string>
#include <vector>

using namespace std;

void find_replace_string(string &s, const string &oldVal, const string &newVal)
{
    for (auto cur = s.begin(); cur <= s.end() - oldVal.size();)
        if (oldVal == string{cur, cur + oldVal.size()})
            cur = s.erase(cur, cur + oldVal.size()),
            cur = s.insert(cur, newVal.begin(), newVal.end()),
            cur += newVal.size();
        else
            ++cur;
}

int main()
{
    string s = "To drive straight thru is a foolish, tho courageous act.";
    find_replace_string(s, "tho", "though");
    cout << s << endl;
    return 0;
}