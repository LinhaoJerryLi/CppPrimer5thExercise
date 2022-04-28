#include <iostream>
#include <string>
#include <vector>
using namespace std;

string pre_and_suffix(string name, string const &pre, string const &su)
{
    name.insert(0, pre, 0, pre.size());
    name.insert(name.size(), su, 0, su.size());
    return name;
}

int main()
{
    string name = "linhao";
    string full_name = pre_and_suffix(name, "Mr.", " li");
    cout << full_name << endl;
}