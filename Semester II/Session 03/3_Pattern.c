/* 3_Pattern.c [L3P3F1] */

#include <stdio.h>

int main()

{
        /* Program to print a given pattern:
           1 = 1
           1 + 2 = 3
           1 + 2 + 3 = 6
           and so on... */

        int n, i, j, s = 0;

        printf("Enter the number of Equations: ");
        scanf("%d", &n);
        printf("\n");

        for (i = 1; i <= n; i++)
        {
                for (j = 1; j <= i; j++)
                {
                        printf("%d + ", j);

                }
                s += i;
                printf("\b\b");
                printf("= %d\n", s);
        }

        return 0;
}

/***** END OF FILE *****/
