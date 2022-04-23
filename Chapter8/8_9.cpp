#include <iostream>
#include <sstream>
using namespace std;

istream &read_i_stream(istream &is)
{
    string str;
    while (is >> str)
    {
        cout << str << endl;
    }
    is.clear();
    return is;
};

int main()
{
    istringstream iss("Hello I'm iss.");
    istream &is = read_i_stream(iss);
    return 0;
}