#include <iostream>
#include <string>
#include <vector>

using namespace std;

void find_replace_string(string &s, const string &oldVal, const string &newVal)
{
    string::size_type index = s.find(oldVal);
    if (index != string::npos)
    {
        s.replace(index, oldVal.size(), newVal);
    }
}

int main()
{
    string s = "To drive straight thru is a foolish, tho courageous act.";
    find_replace_string(s, "tho", "though");
    cout << s << endl;
    return 0;
}