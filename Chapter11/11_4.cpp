#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include <cctype>
#include <unordered_map>
using namespace std;
int main()
{
    set<string> exclude = {"The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a"};
    map<string, int> word_count;
    for (string buffer; cin >> buffer;)
    {
        transform(buffer.begin(), buffer.end(), buffer.begin(), ::tolower);
        buffer.erase(remove_if(buffer.begin(), buffer.end(), ::ispunct), buffer.end());

        if (exclude.find(buffer) == exclude.end())
        {
            ++word_count[buffer];
        }
    }
    for (auto const &e : word_count)
        cout << e.first << endl;
}