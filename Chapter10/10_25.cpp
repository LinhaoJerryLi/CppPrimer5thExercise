#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
using namespace std::placeholders;

void elimdups(std::vector<std::string> &vs)
{
    std::sort(vs.begin(), vs.end());
    auto new_end = std::unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

bool check_size(string const &str, size_t sz)
{
    return str.size() < sz;
}

void biggies(vector<string> &words)
{
    string::size_type sz = 3;
    elimdups(words);
    stable_sort(words.begin(), words.end(), [](const string &lhs, const string &rhs)
                { return lhs.size() < rhs.size(); });
    auto wc = find_if(words.begin(), words.end(), bind(check_size, _1, sz));
    for_each(wc, words.end(), [](const string &word)
             { cout << word << ' '; });
    cout << endl;
}
int main()
{
    vector<string> words{"1234", "1234", "1234", "hi~", "alan", "alan", "cp"};
    biggies(words);
}