#include "H.h"
#include <stdio.h>

int count = 0;

int count_components_dfs(int n, int A[n][n])
{
    count = 0;
    int visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            ++count;
            DFS(i, visited, n, A);
        }
    }
    return count;
}

void DFS(int v, int *visited, int n, int A[n][n])
{
    visited[v] = 1;
    for (int i = 0; i < n; i++)
    {
        if ((A[v][i]) && (visited[i] == 0))
        {
            DFS(i, visited, n, A);
        }
    }
}

int count_components_bfs(int n, int A[n][n])
{
    count = 0;
    int visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            ++count;
            BFS(i, visited, n, A);
        }
    }
    return count;
}

void BFS(int v, int *visited, int n, int A[n][n])
{
    visited[v] = 1;
    for (int i = 0; i < n; i++)
    {
        if ((A[v][i]) && (visited[i] == 0))
        {
            DFS(i, visited, n, A);
        }
    }
}