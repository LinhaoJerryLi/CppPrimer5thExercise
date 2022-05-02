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
    using compareType = bool (*)(const Sales_data &lhs, const Sales_data &rhs);
    std::multiset<Sales_data, compareType> bookstore(compareIsbn);
    std::multiset<Sales_data, compareType>::iterator c_it = bookstore.begin();
}