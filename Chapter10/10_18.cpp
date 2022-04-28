#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

void elimdups(std::vector<std::string> &vs)
{
    std::sort(vs.begin(), vs.end());
    auto new_end = std::unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

void biggies(vector<string> &words)
{
    string::size_type sz = 3;
    elimdups(words);
    stable_sort(words.begin(), words.end(), [](const string &lhs, const string &rhs)
                { return lhs.size() < rhs.size(); });
    auto wc = partition(words.begin(), words.end(), [sz](const string &word)
                        { return word.size() < sz; });

    for_each(wc, words.end(), [](const string &word)
             { cout << word << ' '; });
    cout << endl;
}
int main()
{
    vector<string> words{"1234", "1234", "1234", "hi~", "alan", "alan", "cp"};
    biggies(words);
}