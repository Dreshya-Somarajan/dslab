#include<stdio.h>
void bfs(int);
int graph[10][10],visited[10],total;
int main()
{
int i,j;
printf("enter the vertices");
scanf("%d",&total);
printf("enter the adjacency matrix");
for(i=0;i<total;i++)
{
for(j=0;j<total;j++)
{
scanf("%d",&graph[i][j]);
}
}
for(i=0;i<total;i++)
{
visited[i]=0;
}
printf("bfstraversal are");
bfs(0);
return 0;
}
void bfs(int vertex)
{
int j;
printf("%d\t",vertex);
visited[vertex]=1;
for(j=0;j<total;j++)
{
if(!visited[j]&&graph[vertex][j])
{
bfs(j);
}
}
}
