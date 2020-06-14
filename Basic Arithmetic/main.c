#include <stdio.h>

void main (void)
{
	int num1, num2, sum, product, difference;
	float quotient;

	printf("\n Enter the fisrt and the second number:");
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;
    product = num1*num2;
    difference= num1- num2;
    quotient = num1%num2;


    printf("\n\nSum is %d" , sum);
    printf("\n\nproduct is %d" , product);
    printf("\n\ndifference is %d" , difference);
    printf("\n\nquotient is %f" , quotient);
    return;
}
