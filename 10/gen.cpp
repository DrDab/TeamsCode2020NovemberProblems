#include <ctime>
#include <cstdio>
#include <cstdlib>
#define rand(l,h) (rand()%(h-l+1)+l)

int N = 100000;
int M = 100;

int main()
{
    srand(time(0));

    for (int i=1; i<=N; ++i)
    {
        int b = rand(2, 10);
        printf("%d ", b);
        for (int i=1; i<=rand(1, M); ++i) printf("%d", rand(0, b-1));
        printf("\n");
    }

    return 0;
}

