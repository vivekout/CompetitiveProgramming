#include <stdio.h>
#define MAXSIZE 15
#define TRUE 1
#define FALSE 0
struct Stack
{
    int top;
    int array[MAXSIZE];
} st;

int isEmpty()
{
    if (st.top == -1)
        return TRUE;
    else
        return FALSE;
}
void push(int num)
{
    if (isFull())
        printf("Stack is Full...\n");
    else
    {
        st.array[st.top + 1] = num;
        st.top++;
    }
}
int pop()
{
    if (isEmpty())
        printf("Stack is Empty...\n");
    else
    {
        st.top = st.top - 1;
        return st.array[st.top + 1];
    }
}
