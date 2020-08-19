#include<stdio.h>
#include<stdlib.h>
void swap(int*, int*);

void main(void)
{
int number;
char binary[128];



printf("\n Enter a number:");
scanf("%d",&number);

ltoa(number, binary, 2);
printf("\n Number n binar is %s", binary);

return;
}
