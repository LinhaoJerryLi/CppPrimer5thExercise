#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
using namespace std;
using fam = map<string, vector<string>>;
void addFam(fam &families, string last_name, string first_name)
{
    if (families.find(last_name) != families.end())
    {
        auto &children = families[last_name];
        if (find(children.cbegin(), children.cend(), first_name) != children.end())
        {
            return;
        }
    }
    families[last_name].push_back(first_name);
    return;
}
int main()
{
    fam families;
    addFam(families, "Kardashian", "Kourtney");
    addFam(families, "Kardashian", "Kim");
    addFam(families, "Kardashian", "Robert");
    addFam(families, "West", "Kanye");
    for (auto const &p : families)
    {
        for (auto const &name : p.second)
        {
            cout << name << " " << p.first << endl;
        }
    }
}