#include<stdio.h>

void main(void)
{
int select;
int square, circle, rl, rb;

printf("1-Square \n2-Circle \n3-Rectangle\n");
scanf("%d", &select);

switch (select)
{
case 1:
printf("\nEnter the side of the square:");
scanf("%d", &square);
printf("\nArea is %d", square*square);
break;

case 2:
printf("\nEnter the radius of the circle:");
scanf("%d", &circle);
printf("\nArea is %f", 3.14*circle*circle);
break;

case 3:
printf("\nEnter the length and breadth of the rectangle:");
scanf("%d %d", &rl, &rb);
printf("\nArea is %d", rl*rb);
break;

default:
printf("\n Invalid Action! Fag!");
break;
}


return;
}

