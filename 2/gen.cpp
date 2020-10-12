#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <string>
#define rand(l,h) (rand()%(h-l+1)+l)

const int MXV = 1e3;

int main(int argc, char **argv)
{
    srand(time(0));

    if (argc > 1) MXN = atoi(argv[1]);
    else { printf("run this executable with the requested N.\n"); return 0; }

    printf("%d\n", MXN);
    for (int i=0; i<MXN; ++i)
        printf("%d\n", rand(1, MXV));

    return 0;
}

