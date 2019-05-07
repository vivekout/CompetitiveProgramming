#include <stdio.h>


int main()
{
    char s[12]="string";
    s[6]='s';
    s[7]='g';
    s[8]='\0';


    printf("%d\n", strlen(s));

}
//ans 8