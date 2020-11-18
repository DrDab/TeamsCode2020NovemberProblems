#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <set>
#define rand(l,h) (rand()%(h-l+1)+l)
using namespace std;

set<pair<int, int> > vis;

int N = 500;
int MX = 300;

int main()
{
    srand(time(0));
    printf("%d %d\n", N, rand(2*MX/5, 3*MX/5));
    for (int i=0; i<N; ++i)
    {
        int x, y;
        do { x = rand(1, MX); y = rand(1, MX); }
        while (vis.count(make_pair(x, y)));
        vis.insert(make_pair(x, y));
        printf("%d %d\n", x, y);
    }

    return 0;
}

