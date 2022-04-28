#include <iostream>
#include <string>
#include <vector>
using namespace std;

void split_first_of(string s)
{
    string numbers = "1234567890";
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    transform(s.cbegin(), s.cend(), s.begin(), ::tolower);

    string num, str;
    string::size_type pos = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (i < s.find_first_of(alpha, pos))
        {
            num += s.at(i);
        }
        else
        {
            pos = i + 1;
            str += s.at(i);
        }
    }
    cout << str << endl;
    cout << num << endl;
    return;
}

void split_first_not_of(string s)
{
    string numbers = "1234567890";
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    transform(s.cbegin(), s.cend(), s.begin(), ::tolower);

    string num, str;
    string::size_type pos = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (i < s.find_first_not_of(numbers, pos))
        {
            num += s.at(i);
        }
        else
        {
            pos = i + 1;
            str += s.at(i);
        }
    }
    cout << str << endl;
    cout << num << endl;
    return;
}

int main()
{
    string s = "ab2c3d7R4E6";
    split_first_of(s);
    split_first_not_of(s);
}