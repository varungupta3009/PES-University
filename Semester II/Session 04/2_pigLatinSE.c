/* 2_pigLatinSE.c [L4P2F1] */

#include <stdio.h>

int main()

{
								/* Program to shift the first character of every word to the end of the word */

								char c, fc;
								int f = 1;

								printf("\nEnter a sentence:\n");

								while ((c = getchar()) != '\n')
								{
																if (f)
																{
																								fc = c;
																								f = 0;
																}
																else if (c == ' ')
																{
																								f = 1;
																								putchar(fc);
																								putchar(' ');
																}
																else
																								putchar(c);
								}

								putchar(fc);

								getchar();
								return 0;
}

/***** END OF FILE *****/
