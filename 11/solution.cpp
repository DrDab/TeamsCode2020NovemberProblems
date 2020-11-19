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

int n, a[100100], m;
int psum[100100];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        psum[i] = a[i] + psum[i - 1];
    }
    for (int i = 0; i < m; ++i) {
        int x;
        scanf("%d", &x);
        printf("%d\n", psum[x]);
    }
}

