#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    vector<int> iv{};
    // cout << iv.at(0) << " ";
    cout << iv[0] << " ";
    cout << *(iv.begin()) << " ";
    cout << iv.front() << endl;

    return 0;
}