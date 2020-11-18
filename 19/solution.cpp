#include <cstdio>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;
const int MX = 1e6;
int N, R, x[MX], y[MX];

double dist(int i, int j)
{
    return sqrt((double)(x[i]-x[j])*(x[i]-x[j]) + (double)(y[i]-y[j])*(y[i]-y[j]));
}
double area(int i, int j, int k)
{
    double a = dist(i, j);
    double b = dist(j, k);
    double c = dist(k, i);
    double s = (double)(a+b+c)/2;
    return sqrt(s * (s-a) * (s-b) * (s-c));
}

int main()
{
    scanf("%d%d", &N, &R);
    for (int i=0; i<N; ++i)
        scanf("%d%d", &x[i], &y[i]);
    for (int i=0; i<N; ++i) printf("%d: %d %d\n", i, x[i], y[i]);
    printf("%lf\n", area(0, 1, 2));
    priority_queue<pair<int, int>, deque<pair<int, int> >, greater<pair<int, int> > > pq; // state = < x, idx >

    set<pair<int, int> > active;    // state = < y, idx >
    queue<pair<int, set<pair<int, int> >::iterator > > rem; // state = < x, remove_iterator >

    for (int i=0; i<N; ++i) pq.push(make_pair(x[i], i));
    while (!pq.empty())
    {
        pair<int, int> cur = pq.top(); pq.pop();
        int x = cur.first, i = cur.second;
        printf("%d %d\n", x, i);
        // make sure second dimension doesn't exclude something
        while (rem.size() && x - rem.front().first > R)
        {
            printf("popping at %d\n", rem.front().first);
            active.erase(rem.front().second);
            rem.pop();
        }
        auto lower = lower_bound(active.begin(), active.end(), make_pair(y[i], -1));
        auto upper = upper_bound(active.begin(), active.end(), make_pair(y[i], N+1));
        for (auto it=lower; it!=upper; ++it)
            printf("    %d (%d, %d)\n", it->second, it->first, y[it->second]);
        set<pair<int, int> >::iterator g = active.insert(make_pair(y[i], i)).first;
        rem.push(make_pair(x, g));
    }
}
