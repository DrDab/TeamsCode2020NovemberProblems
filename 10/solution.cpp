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

int n, b;//original number n in base b
int b10;//number in base 10

int main() {
    scanf("%d%d", &n, &b);
    int pw = 1;
    while (n > 0) {
        b10 += pw * (n % 10);
        pw *= b;
        n /= 10;
    }
    pw = 1;
    while (pw <= b10) pw *= 2;
    pw /= 2;
    while (pw > 0) {
        if (b10 >= pw) {
            printf("1");
            b10 -= pw;
        }
        else printf("0");
        pw /= 2;
    }
}

