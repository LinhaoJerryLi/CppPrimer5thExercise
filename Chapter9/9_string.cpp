#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s{"abcdefghijklmnopq"};
    const char *c{"abcdefghijklmnopq"};

    // constructor
    string sc1(c + 1, 5);
    cout << sc1 << endl;

    string sc2(s, 3);
    cout << sc2 << endl;

    string sc3(s, 3, 5);
    cout << sc3 << endl;

    // assign
    sc1.assign(sc2);
    cout << sc1 << endl;

    sc1.assign(sc2, 2);
    cout << sc1 << endl;

    double db = 3.1415;
    cout << to_string(db) << endl;
}