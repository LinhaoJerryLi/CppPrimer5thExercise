#include <iostream>
#include <string>
#include <vector>
using namespace std;

string pre_and_suffix(string name, string const &pre, string const &su)
{
    name.insert(name.begin(), pre.cbegin(), pre.cend());
    name.insert(name.end(), su.cbegin(), su.cend());
    return name;
}

int main()
{
    string name = "linhao";
    string full_name = pre_and_suffix(name, "Mr.", " li");
    cout << full_name << endl;
}