/* 5_crazyConstants.c [L4P5F1] */

#include <stdio.h>

int main()

{
								/* Program to print the value of special constants in the world's most eccentric manner
								   "May I have a large container of Coffee Mocha for Varun Procoder extremely rapidly superfast now ha ha?"
								   "To express e properly is possibly a proposal to consider logs based naturally  Isnt it???"
								   "I have a root of a two whose square is one crossed two"
								   ~ Composed by Geniuses, Re-composed by VRG */

								char c;
								int n = 0, f = 1;

								printf("\nEnter a special sentence:\n");

								while ((c = getchar()) != '\n')
								{
																if (c == ' ')
																{
																								printf("%d", n);
																								n = 0;
																								if (f)
																								{
																																putchar('.');
																																f = 0;
																								}
																}

																else
																								n++;
								}

								printf("%d", n);

								getchar();
								return 0;
}

/***** END OF FILE *****/
