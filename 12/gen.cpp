#include <ctime>
#include <cstdio>
#include <cstdlib>
#define rand(l,h) (rand()%(h-l+1)+l)

const int MXV = 1e2;

int main(int argc, char **argv)
{
    srand(time(0));

    int N = 0;

    if (argc > 1) N = atoi(argv[1]);
    else { printf("run with number of items as input\n"); return 0; }

    printf("%d %d\n", N, rand(1, N*MXV/2));
    while (N--)
        printf("%d %d\n", rand(0, MXV), rand(0, MXV));

    return 0;
}

