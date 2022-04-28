#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    vector<double> vi{1.0, 2.9, 3.3, 4.3};
    int sum = accumulate(vi.cbegin(), vi.cend(), 0);
    cout << sum << endl;
    double sum2 = accumulate(vi.cbegin(), vi.cend(), 0.0);
    cout << sum2 << endl;
    return 0;
}