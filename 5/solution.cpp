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

int n;

int main() {
    while (scanf("%d", &n) == 1) {
        int ans = 0;
        while (n > 0) {
            ans += n % 10;
            n /= 100;
        }
        printf("%d\n", ans);
    }
}


