#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <string.h>
#include <utility>
#include <map>
#include <list>
using namespace std;
typedef pair <int, int> pii;
typedef long long ll;
#define f first
#define s second

const int maxn = 1e6 + 100;

int n, k, m;
int a[maxn], sum[maxn];

int main() {
    scanf("%d%d%d", &n, &k, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int sm = 0;
    for (int i = 0; i < k - 1; ++i) {
        sm += a[i];
    }
    for (int i = k - 1; i < n; ++i) {
        sm += a[i];
        sum[i - k + 1] = sm;
        sm -= a[i - k + 1];
    }
    for (int i = 0; i < m; ++i) {
        int x;
        scanf("%d", &x);
        printf("%d\n", sum[x - 1]);
    }
}

