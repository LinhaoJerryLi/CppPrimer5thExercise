#include <fstream>
#include <string>
#include <iostream>

using namespace std;
int main()
{
    bool disable = true;
    const string chapter = "11";
    const int exec = 42;

    if (!disable)
    {
        string path{"/Users/linhaoli/Dev/cpp/CppPrimer5thExercise/Chapter"};
        path += chapter + "/" + chapter + "_";
        for (int i = 1; i != exec; ++i)
        {
            string curr(path);
            curr += to_string(i);
            curr += ".cpp";
            ofstream ofs(curr);
            string headers = "#include <iostream>\n#include <vector>\n#include <string>\n#include <algorithm>\n#include <numeric>\nusing namespace std;\nint main(){}";
            ofs << headers;
            {
                cout << curr << endl;
            }
        }
    }

    return 0;
}