#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    ifstream ifs("temp.txt");
    vector<string> vstr;
    string buffer;
    istringstream iss;
    while (getline(ifs, buffer))
    {
        vstr.push_back(buffer);
    }

    for (const auto &v : vstr)
    {
        istringstream iss(v);
        string word;
        while (iss >> word)
        {
            cout << word << endl;
        }
    }
    return 0;
}