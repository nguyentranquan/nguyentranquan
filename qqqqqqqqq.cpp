#include<iostream>

#include<conio.h>

using namespace std;

#define MAX  100 

#define TRUE 1 

#define FALSE 0 

int G[MAX][MAX], n, chuaxet[MAX]; 

void Init(){ 

 freopen("DFS.IN", "r", stdin); 

 cin>>n; 

 cout<<"So dinh cua ma tran n = "<<n<<endl;

 //nhap ma tran lien ke.

 for(int i=1; i<=n;i++){ 

  for(int j=1; j<=n;j++){ 

   cin>>G[i][j]; 

  } 

 } 

} 

/* Depth First Search */

void DFS(int G[][MAX], int n, int v, int chuaxet[]){ 

 cout<<"Duyet dinh : "<<v<<endl;

 int u; 

 chuaxet[v]=FALSE; 

 for(u=1; u<=n; u++){ 

  if(G[v][u]==1 && chuaxet[u]) 

   DFS(G,n, u, chuaxet); 

 } 

} 

void main(){ 

 Init(); 

 for(int i=1; i<=n; i++) 

  chuaxet[i]=TRUE; 

 for(int i=1; i<=n;i++) 

  if(chuaxet[i]) 

   DFS( G,n, i, chuaxet); 

 _getch(); 

}
