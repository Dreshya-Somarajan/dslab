#include<stdio.h>
#include<stdio.h>
int s[100],j,res[100];
void AdjacencyMatrix(int a[][100],int n){
int i,j;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
a[i][j]=rand()%2;
}
}
}
void dfs(int u,int n,int a[][100]){
int v;
s[u]=1;
for(v=0;v<n;v++){
if(a[u][v]==1&&s[v]==0){
dfs(v,n,a);
}
}
j+=1;
res[j]=u;
}
void topological_order(int n,int a[][100]){
int u;
for(u=0;u<n;u++){
s[u]=0;
}
j=0;
for(u=0;u<n;u++){
s[u]=0;
}
j=0;
for(u=0;u<n;u++){
if(s[u]==0){
dfs(u,n,a);
}
}
}
int main(){
int a[100][100],n,i,j;
printf("enter the number of vertices:");
scanf("%d",&n);
AdjacencyMatrix(a,n);
printf("\n\t\t Adjacency matrix of the graph:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
topological_order(n,a);
printf("\n Topological order:");
for(i=n;i>0;i--){
printf("->%d",res[i]);
}
return 0;
}
