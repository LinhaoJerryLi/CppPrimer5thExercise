#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    vector<int> vi {1, 2, 3, 2, 5};
    cout << count(vi.cbegin(), vi.cend(), 2) << endl;
}