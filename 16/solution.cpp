#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <string.h>
#include <utility>
#include <map>
#include <list>
#include <queue>
using namespace std;
typedef pair <int, int> pii;
typedef long long ll;
#define f first
#define s second

int n;
double med;
priority_queue <int, vector <int>, less <int> > lo;
priority_queue <int, vector <int>, greater <int> > hi;

void med_ins(int x) {
    if (med < x) {
        if (hi.size() > lo.size()) {
            lo.push(hi.top());
            hi.pop();
            hi.push(x);
            med = ((double)lo.top() + hi.top()) / 2;
        }
        else {
            hi.push(x);
            if (hi.size() > lo.size()) med = hi.top();
            else med = ((double)lo.top() + hi.top()) / 2;
        }
    }
    else {
        if (lo.size() > hi.size()) {
            hi.push(lo.top());
            lo.pop();
            lo.push(x);
            med = ((double)lo.top() + hi.top()) / 2;
        }
        else {
            lo.push(x);
            if (lo.size() > hi.size()) med = lo.top();
            else med = ((double)lo.top() + hi.top()) / 2;
        }
    }
}

int get_mode()
{
    return 0;
}

int main() {
    scanf("%d", &n);
    ll prev=0, mn=0, mx=0, sum=0;
    for (int i = 0; i < n; ++i) {
        int x; scanf("%d", &x);
        med_ins(x);
        if (!i) mn = mx = x;
        sum += x;
        printf("%lld %lld %.0lf %.0lf %d", mn, mx, (double)sum / (i+1), med, get_mode());
        /*if (op == 3) //mean
        if (op == 4) //min
        if (op == 5) //max
        if (op == 6) //standard deviation
        if (op == 7) //mode*/
    }
}

