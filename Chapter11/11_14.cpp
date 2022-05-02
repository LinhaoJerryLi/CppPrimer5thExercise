#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
using namespace std;
using fam = map<string, vector<pair<string, string>>>;
void addFam(fam &families, string last_name, string first_name, string birthday)
{
    if (families.find(last_name) != families.end())
    {
        auto &children = families[last_name];
        if (find_if(children.cbegin(), children.cend(), [&first_name](pair<string, string> p)
                    { return p.first == first_name; }) != children.end())
        {
            return;
        }
    }
    families[last_name].push_back({first_name, birthday});
    return;
}
int main()
{
    fam families;
    addFam(families, "Kardashian", "Kourtney", "time1");
    addFam(families, "Kardashian", "Kim", "time2");
    addFam(families, "Kardashian", "Robert", "time3");
    addFam(families, "West", "Kanye", "time4");
    for (auto const &p : families)
    {
        for (auto const &name : p.second)
        {
            cout << name.first << " " << p.first << " " << name.second << endl;
        }
    }
}