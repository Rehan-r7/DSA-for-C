// Online C compiler to run C program online
#include <stdio.h>
#define N 9
#define INF 999
#define min(a,b) (((a)<(b))?(a):(b))

void display(int graph[N][N])
{
    printf("\n");
    for(int i = 0 ;i<N;i++)
    {
        for(int j = 0;j<N;j++)
        {
            printf(" %d ",graph[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int shortestDist(int graph[N][N]) {
 
    // dist[i] is going to store shortest
    // distance from node i to node N-1.
    int dist[N];
 
    dist[N-1] = 0;
 
    // Calculating shortest path for
    // rest of the nodes
    for (int i = N-2 ; i >= 0 ; i--)
    {
 
        // Initialize distance from i to
        // destination (N-1)
        dist[i] = INF;
 
        // Check all nodes of next stages
        // to find shortest distance from
        // i to N-1.
        for (int j = i ; j < N ; j++)
        {
            // Reject if no edge exists
            if (graph[i][j] == INF)
                continue;
 
            // We apply equation to
            // distance to target through j.
            // and compare with minimum distance
            // so far.
            dist[i] = min(dist[i], graph[i][j] +
                                        dist[j]);
        }
        display(graph);
    }
 
    return dist[0];
}

int main() {
    // Write C code here
                    
    int graph[N][N]={{0 , 5 , 2 ,INF,INF,INF,INF,INF,INF},
                    {INF, 0,INF, 3 ,INF, 3 ,INF,INF,INF},
                    {INF,INF,0 , 6 , 5 , 8 ,INF,INF,INF},
                    {INF,INF,INF, 0,INF,INF, 1 ,INF,INF},
                    {INF,INF,INF,INF,0 ,INF, 6 , 2 ,INF},
                    {INF,INF,INF,INF,INF, 0, 6 , 2 ,INF},
                    {INF,INF,INF,INF,INF,INF,0 ,INF, 7 },
                    {INF,INF,INF,INF,INF,INF,INF,0 , 3 },
                    {INF,INF,INF,INF,INF,INF,INF,INF,0}};
    int ans =  shortestDist(graph);
    printf("%d",ans);
    return 0;
}
