#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
// members are public by default; see § 7.2 (p. 268)
struct PersonInfo
{
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;         // will hold a line and word from input, respectively
    vector<PersonInfo> people; // will hold all the records from the input
    // read the input a line at a time until cin hits end-of-file (or another error)
    istringstream record; // bind record to the line we just read
    while (getline(cin, line))
    {
        PersonInfo info; // create an object to hold this record's data
        record.clear();
        record.str(line);
        record >> info.name;             // read the name
        while (record >> word)           // read the phone numbers
            info.phones.push_back(word); // and store them
        cout << info.name << endl;
        for (const auto &phone : info.phones)
        {
            cout << phone << endl;
        }
        people.push_back(info); // append this record to people
    }
}
