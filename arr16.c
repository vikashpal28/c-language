#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[15] = { -6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2 },
		i, sum = 0;
	float min, hell = 0, sd, n = 0;

	printf("Your data is :");

	for (i = 0; i<15; i++)//sum of the data
	{
		printf(" %d,", a[i]);
		sum = sum + a[i];
	n++;
	}
	min = sum / n;//calculating mean of the data.

	for (i = 0; i<15; i++)//finding standard deviation of the data
		hell = hell + pow((a[i] - min), 2);

	sd = (sqrt(hell)) / n;

	printf("\n\nMean of the data = %f\n\nStandard deviation of data = %f", min, sd);

	_getch();
	return 0;
}
 