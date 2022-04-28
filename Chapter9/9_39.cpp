#include <iostream>
#include <vector>
#include <stdint.h>
using namespace std;

void growPushBack(vector<string> &vec, uint16_t size)
{
    for (int i = 0; i < 200; i++)
    {
        string s;
        for (auto j = 0; j < i * 100; ++j)
        {
            s.push_back('*');
        }
        vec.push_back(s);
        if (size != vec.capacity())
        {
            size = vec.capacity();
            cout << "Capacity changed: " << size << "s:" << i << endl;
        }
    }
}
int main()
{
    uint16_t sz = 0;
    vector<string> vecIntA;
    sz = vecIntA.capacity();
    //声明vector后未使用reserve，直接进行push_back操作
    cout << "Making vecIntA growing:" << endl;
    growPushBack(vecIntA, sz);

    cout << "\n========separator========\n"
         << endl;

    vector<string> vecIntB;
    sz = vecIntB.capacity();
    //声明vecIntB后用reserve来执行其容量为100
    vecIntB.reserve(100);
    cout << "Making vecIntB growing: " << endl;
    growPushBack(vecIntB, sz);

    return 0;
}
