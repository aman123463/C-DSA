
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str = "zxyhskkdh";
    vector<int> v(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        v[str[i] - 'a']++;
    }
    string ans;
    for (int i = 0; i < v.size(); i++)
    {
        char ch = 'a' + i;
        while (v[i] != '\0')
        {
            ans += ch;
            v[i]--;
        }
    }
    cout << "sorted string is ->" << ans << endl;
    return 0;
}