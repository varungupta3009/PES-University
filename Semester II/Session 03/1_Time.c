/* 1_Time.c [L3P1F1] */

#include <stdio.h>
#include <time.h>

int main(void)

{
								/* Program to display the runtime of a code segment */;

								clock_t start, end;
								start = clock();
								int c = 1000000000;

								while(c)
								{
																c--;
								}

								end = clock();
								double duration = ((double)(end-start)/CLOCKS_PER_SEC);

								printf("\nTime taken to execute the included code segment: %f\n\n", duration);

								return 0;
}

/***** END OF FILE *****/
