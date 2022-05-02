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
    std::map<int, std::string> map;
    map[25] = "Alan";
    std::map<int, std::string>::iterator it = map.begin();
    it->second = "Wang";
}