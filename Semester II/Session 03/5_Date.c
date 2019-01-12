/* 5_Date.c [L3P5F1] */

#include <stdio.h>
#include <stdlib.h>

void main()

{
        /* Program to manually increment a given date by one day */
        int DD, MM, YY, MAX, LY = 0;

        printf("Enter a Date (DD/MM/YYYY): ");
        scanf("%d/%d/%d", &DD, &MM, &YY);

        if (!(YY%4) && YY%100 || !(YY%400))
                LY = 1;

        if (MM==1 || MM==3 || MM==5 || MM==7 || MM==8 || MM==10 || MM==12)
                MAX=31;
        else if (MM==4 || MM==6 || MM==9 || MM==11)
                MAX=30;
        else if (LY)
                MAX=29;
        else
                MAX=28;

        if (MM<1 || MM>12 || DD<1 || DD>MAX || YY<1 || YY>10000)
        {
                printf("You have entered an Invalid Date");
                exit(3009);
        }

        if (DD == MAX)
        {
                if (MM == 12)
                {
                        DD = 1; MM = 1; YY++;
                }
                else
                {
                        DD = 1; MM++;
                }
        }

        else
                DD++;

        if (LY)
                printf("\n%d is a Leap Year!\n", YY);

        printf("The Next Day: %d/%d/%d\n",DD,MM,YY);
}

/***** END OF FILE *****/
