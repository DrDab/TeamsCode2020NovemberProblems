#include <cstdio>
#include <algorithm>

using namespace std;

const int MX = 1e2+10;
const int MXW = 1e4+10; // number of items (1e2) * max weight of item (1e2)

int N, W, v[MX], w[MX], dp[MX][MXW];
int main()
{
    scanf("%d%d", &N, &W);
    for (int i=1; i<=N; ++i)
        scanf("%d%d", v+i, w+i);    // scanf takes a pointer, so you can just pass it a shifted array index

    for (int i=1; i<=N; ++i)
        for (int j=W; j>=w[i]; --j)
            //dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
            dp[N][j] = max(dp[N][j], dp[N][j-w[i]]+v[i]);   // same thing, but with rolling array

    printf("%d\n", dp[N][W]);
}

