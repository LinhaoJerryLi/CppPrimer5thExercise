#include <string>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
    vector<string> vs = {"1.1", "2", "3"};
    // int sum{0};
    double sum{0};
    for (const auto &e : vs)
    {
        // sum += stoi(e, nullptr);
        sum += stod(e, nullptr);
    }
    cout << sum << endl;

    return 0;
}