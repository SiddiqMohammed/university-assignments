#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int input;
    int sum = 0;

    do{
        printf("\nEnter a number:");
        scanf("%d", &input);
        sum = sum + input;
    }while(input |=0);

    printf("\n Sum = %d \n\n", sum);
    return;
}
