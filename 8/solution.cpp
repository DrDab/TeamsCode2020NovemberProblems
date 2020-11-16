#include <iostream>
#include <string>
#include <cstdio>
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
                printf("A");
            }
            else if (c == "SSL")
            {
                printf("T");
            }
            else if (c == "SLL")
            {
                printf("G");
            }
            else if (c == "SLS")
            {
                printf("C");
            }
            c.clear();
        }
    }
    cout << ans << endl;
    return 0;
}
