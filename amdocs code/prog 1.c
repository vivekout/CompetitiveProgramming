#include <stdio.h>
//#include "student.h"
#include <stdbool.h>
struct node *next;
bool detectLoop(struct node *head)
{
    if (next == head)
        return 0;
    else
        return 1;
}