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
    map<const string, size_t> word_count;
    map<const string, size_t>::const_iterator map_it = word_count.begin(); // *map_it is a reference to a pair<const string, size_t> object
    cout << map_it->first;                                                 // prints the key for this element
    cout << " " << map_it->second;                                         // prints the value of the element
}