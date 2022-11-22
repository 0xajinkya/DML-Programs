#include<stdio.h>

int main(){
    int n, ne = 1, visited[10]= {0}, min, mincost = 0, a, b;
    printf("\nEnter The Number Of Vertices\n");
    scanf("\n%d", &n);

    int adj[n][n];
    printf("\nEnter The Adjacency Matrix\n");
    for(int i =1; i<=n; i++){
        for(int j = 1; j <= n; j++){
            scanf("%d", &adj[i][j]);

            if(adj[i][j] == 0)
                adj[i][j] = 999;
        }
        printf("\n");
    }

    printf("\nThe Adjacency Matrix Is\n");
    for(int i =1; i<=n; i++){
        for(int j = 1; j <= n; j++){
            if(adj[i][j] == 999){
                printf("%d ", 0);
                continue;
            }
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    visited[1] = 1;
    while(ne < n){
        min = 999;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(visited[i] == 1){
                    if(adj[i][j] < min){
                        min = adj[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if(visited[a] == 0 || visited[b] == 0){
            printf("\nEdge(%d %d) = %d", a, b, min);
            mincost+=min;
            {
            adj[a][b] = adj[b][a] = 999;
            ne++;
            visited[b] =1;
            }
        }
    }

    printf("\nWeight Of Minimun Spanning Tree Is %d \n", mincost);
    return 0;
}