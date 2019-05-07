#include <stdlib.h>
#include <stdio.h>
int foo(const void *x, const void *y)
{
    return *(int *)x - *(int *)y;
}
int main()
{
    int a[] = {12, 53, 34, 13, 60, 25, 47, 56};
    const int n = sizeof(a) / sizeof(a[0]);
    qsort(a, n, sizeof(a[0]), foo);
    printf("%d %d\n", a[n - 1], a[n - 2]);
}


// o/p 60 56