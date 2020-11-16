#include <cstdio>

int h1, m1, d;

int main()
{
    scanf("%d:%d%d", &h1, &m1, &d);
    printf("%02d:%02d\n", h1+(m1+d)/60, (m1+d)%60);
}

