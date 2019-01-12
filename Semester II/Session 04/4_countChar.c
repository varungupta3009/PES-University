/* 4_countChar.c [L4P4F1] */

#include <stdio.h>

int main()

{
								/* Program to count the occurance of each character in a sequential word */

								char c, p = '\0';
								int n = 0;

								printf("\nEnter a string:\n");

								while (p != '\n')
								{
																c = getchar();
																if (c != p && p != '\0')
																{
																								printf("\n%c occurs %d times.", p, n);
																								n = 0;
																}

																n++;
																p = c;
								}

								getchar();
								return 0;
}

/***** END OF FILE *****/
