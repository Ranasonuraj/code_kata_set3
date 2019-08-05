#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()

{
    vector<int>v;
    int temp, len;
    cin >> len;
    while (v.size() < len)
    {
       cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    if (v.size() % 2 == 0)
       cout << (v[v.size()/2 - 1] + v[v.size()/2]) / 2;

    else
        cout << v[v.size()/2];

}
