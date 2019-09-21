#include "H.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        int A[m][m];
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < m; k++)
            {
                scanf("%d", &A[j][k]);
            }
        }
        printf("%d\n", count_components_dfs(m, A));
        printf("%d\n", count_components_bfs(m, A));
    }
    return 0;
}