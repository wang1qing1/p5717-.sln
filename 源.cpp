#include<stdio.h>
int main()
{
	int arr[3], i, a, b, c, t = 0, j;
	for (i = 0; i <= 2; i++)
		scanf_s("%d", &arr[i]);
	for (i = 0; i <= 1; i++)
	{
		j = 0;
		for (j; j <= 1 - i; j++)
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
	}
	a = arr[0];
	b = arr[1];
	c = arr[2];
	if (a + b <= c || c - b >= a)
	{
         printf("Not triangle\n");
         goto wq;
	}
    if (a * a + b * b == c * c)
		printf("Right triangle\n");
	else if (a * a + b * b - c * c > 0)
		printf("Acute triangle\n");
	else if (a * a + b * b - c * c < 0)
		printf("Obtuse triangle\n");
	if ((a == b) || (a == c) || (c == b))
		printf("Isosceles triangle\n");
	if (a == b && b == c )
		printf("Equilateral triangle\n");
	wq:
	return 0;
}