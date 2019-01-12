/* 6_Mis-match.c [L4P6F1] */

#include <stdio.h>

int main()

{
								/* Program to check whether a set of parantheses in a string is mismatched and to validate the same */

								char c;
								int F = 0;

								printf("\nEnter a set of parantheses:\n");

								while ((c = getchar()) != '\n' && F >= 0)
								{
																if (c == '(')
																								F++;
																else
																								F--;
								}

								if (F)
																printf("\nThe entered set of parantheses is Mis-matched!\n");
								else
																printf("\nAll looks good, doc!\n");

								getchar();
								return 0;
}

/***** END OF FILE *****/
