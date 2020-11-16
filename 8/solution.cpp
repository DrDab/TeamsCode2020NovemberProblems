#include <bits/stdc++.h>
using namespace std;
string s;
string ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> s;
    string c;
    for (int i = 0; i < s.size(); i++)
    {
        c += s[i];
        if (c.size() == 3)
        {
            if (c == "LLL")
            {
                ans += "A";
            }
            else if (c == "SSL")
            {
                ans += "T";
            }
            else if (c == "SLL")
            {
                ans += "G";
            }
            else if (c == "SLS")
            {
                ans += "C";
            }
            c.clear();
        }
    }
    cout << ans << endl;
    return 0;
}
