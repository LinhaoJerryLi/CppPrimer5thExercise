#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int main()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word)
    {
        auto ret = word_count.insert({word, 1});
        if (!ret.second)
        {
            ret.first->second += 1;
        }
    }
}