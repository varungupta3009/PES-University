/* 1_toUpper.c [L4P1F1] */

#include <stdio.h>

int main()

{
								/* Program to convert all alphabets in a string to Upper Case */

								char c;

								printf("\nEnter a string:\n");

								while ((c = getchar()) != '\n')
								{
																if (c >= 97 && c <= 122)
																								c = c - 32;
																putchar(c);
								}

								getchar();
								return 0;
}

/***** END OF FILE *****/
