/* 4_spiralMatrix.c [L3P4F1] */

#include <stdio.h>

int main()

{
        /* Program to generate a Spiral Matrix of a given order */

        int a[100][100], row, col;

        printf("Enter the order: ");
        scanf("%d %d", &row, &col);

        char direc;
        direc = 'U';
        int n = row * col, l = 0, RR = 0, DC = col - 1, LR = row - 1, UC = 0, r, c, i, j;

        while (l != n) {
                if (direc == 'U') {
                        r = RR;
                        RR++;
                        for (c = 0; c < col; c++) {
                                if (!a[r][c]) {
                                        a[r][c] = l + 1;
                                        l++;
                                }
                        }
                        direc = 'R';
                } else if (direc == 'R') {
                        c = DC;
                        DC--;
                        for (r = 0; r < row; r++) {
                                if (!a[r][c]) {
                                        a[r][c] = l + 1;
                                        l++;
                                }
                        }
                        direc = 'D';
                } else if (direc == 'D') {
                        r = LR;
                        LR--;
                        for (c = col - 1; c > -1; c--) {
                                if (!a[r][c]) {
                                        a[r][c] = l + 1;
                                        l++;
                                }
                        }
                        direc = 'L';
                } else if (direc == 'L') {
                        c = UC;
                        UC++;
                        for (r = row - 1; r > -1; r--) {
                                if (!a[r][c]) {
                                        a[r][c] = l + 1;
                                        l++;
                                }
                        }
                        direc = 'U';
                }
        }

        for (i = 0; i < row; i++) {
                for (j = 0; j < col; j++)
                        printf("%d\t", a[i][j]);
                printf("\n");
        }

        return 0;
}

/***** END OF FILE *****/
