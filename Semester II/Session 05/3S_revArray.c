/* 3S_revArray.c [L5P3F2] */

#include <stdio.h>
#include "rev.h"

void rev(int a[])

{
                /* Program to print an Array in the reverse order - Server */
                
                int i;

                for(i=4; i>=0; i--)
                printf("%d ", a[i]);
                
                putchar('\n');

}

/***** END OF FILE *****/
