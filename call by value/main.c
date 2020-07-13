#include <stdio.h>

void call_by_value(int);

int main()
{
    int num;

    printf("\n Enter number:");
    scanf("%d", &num);

    call_by_value(num);

    printf("\n Number after call by reference is: %d", num);

    return 0;
}

void call_by_value(int arg)
{
    arg = 75;
    return;
}
