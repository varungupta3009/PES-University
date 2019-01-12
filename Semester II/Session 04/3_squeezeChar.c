/* 3_squeezeChar.c [L4P3F1] */

#include <stdio.h>

int main()

{
								/* Program to squeeze the same adjacent characters into a single character */

								char c, p = '\0';

								printf("\nEnter a string:\n");

								while ((c = getchar()) != '\n')
								{
																if (c != p)
																								putchar(c);
																p = c;
								}

								getchar();
								return 0;
}

/***** END OF FILE *****/
