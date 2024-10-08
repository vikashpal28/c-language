#include<stdio.h>
#include<math.h>
int main()
{
	float a[6][4]={
		//	Plot No. 	 a      b      angle
		1,		137.4,	80.9,	0.78,
		2,		155.2,	92.62,	0.89,
		3,		149.3,	97.93,	0.89,
		4, 		160.0,	100.25,	1.35,
		5, 		155.6,	68.95,	1.25,
		6,		149.7,	120.0,	1.75,
	},
		ar[6],//areas
		max;
	int i, x = 0;//plot no.

	for (i = 0; i<6; i++)
	{
		ar[i] = (0.5)*a[i][1] * a[i][2] * sin(a[i][3]);
		if (max<ar[i])
		{
			max = ar[i];
			x = a[i][0];
		}
	}

	printf("\n\n\nAreas of the triangles are ~ ");

	for (i = 0; i<6; i++)
		printf("\n%f : %2f,", a[i][0], ar[i]);

	printf("\n\n\nNumber %d. triangle has maximum area of %2f.", x, max);

	
	return 0;
}
/*
output 
Areas of the triangles are ~
1.000000 : 3908.707275,
2.000000 : 5585.057129,
3.000000 : 5680.763184,
4.000000 : 7825.301270,
5.000000 : 5090.647461,
6.000000 : 8838.161133,


Number 6. triangle has maximum area of 8838.161133.*/