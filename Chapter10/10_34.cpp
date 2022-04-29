#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    ostream_iterator<int> osi(cout, " ");
    vector<int> vi{1, 2, 3, 4, 5, 6};
    copy(vi.rbegin(), vi.rend(), osi);
    cout << endl;
}