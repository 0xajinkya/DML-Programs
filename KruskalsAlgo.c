#include <stdio.h>

int main()
{
    int n, ne = 1, a, b, min, mincost = 0;

    printf("\nEnter The Number Of Vertices Of The Graph\n");
    scanf("\n%d", &n);

    int adj[n][n];

    printf("\nEnter The Adjacency Matrix\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &adj[i][j]);

            if (adj[i][j] == 0)
            {
                adj[i][j] = 999;
            }
        }
        printf("\n");
    }

    printf("\nThe Adjacency Matrix Is\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    while (ne < n)
    {
        min = 999;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][j] < min)
                {
                    min = adj[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        printf("\nEdge(%d %d) = %d\n", a, b, min);
        mincost += min;
        adj[a][b] = adj[b][a] = 999;
        ne++;
    }
    printf("\nThe Cost Of The Minium Spanning Tree %d\n", mincost);

    return 0;
}