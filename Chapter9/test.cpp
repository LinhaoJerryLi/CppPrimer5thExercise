#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 2> arr{1, 2};
    arr = {3};
    array<int, 2> arr2{3, 4};
    arr2.assign(arr.cbegin(), arr.cend());
    cout << arr2[0] << endl;
    return 0;
}
