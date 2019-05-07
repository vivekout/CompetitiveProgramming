#include <stdio.h>
int *increment(int val)
{
    int a = val;
    a++;
    return &a;
}
int main(void)
{
    int a = 10;
    int *val = increment(a);
    printf("\n Value is [%d] \n", *val);
    return 0;
}
// infinite