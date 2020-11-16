#include <bits/stdc++.h>
using namespace std;
const int n = 10000;
const int m = 10000000;
int rand(int min, int max)
{
    return min + rand() % (max - min + 1);
}
int main()
{
    srand(time(0));
    cout << n << " " << m << endl;
    for (int i = 0; i < n; i++)
    {
        cout << rand(0, 100000) << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << rand(1, n) << endl;
    }
    return 0;
}
