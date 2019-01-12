/* 1.c [L2P2F1] */

#include<stdio.h>
#include<math.h>

int main(void)

{
	/* Program to input sides of a tringle and calculate the area */;
	float a, b, c, s;
	double A;
	printf("\nInput the 3 sides:\n\n");
	scanf("%f %f %f", &a, &b, &c);
	s = (a+b+c)/2;
	A = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nArea of the Triangle: %f\n\n", A);
	return 0.0;
}

/***** END OF FILE *****/
