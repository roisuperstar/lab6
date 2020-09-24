#include <stdio.h>
main()
{
	int num1, num2, a, j, sum;
	sum=0;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: "); 
	scanf("%d", &num2);
	

	for (j=num1; j<=num2; j++)
		{
			
			if (j%2==1 && j>=num1 && j<=num2)
			{
				printf("%d ", j);
				sum += j;
			}
		}
	printf("\nSum = %d", sum);
	
}
