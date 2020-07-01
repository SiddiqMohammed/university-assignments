#include <stdio.h>

void call_by_reference(int*);

void main(void)
{
    int num;

    printf("\n Enter number:");
    scanf("%d", &num);

    call_by_reference(&num);

    printf("\n Number after call by reference is: %d", num);

    return;
}

void call_by_reference(int* arg)
{
    *arg = 75;
    return;
}
