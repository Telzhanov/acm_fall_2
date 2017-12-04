#include <iostream>
using namespace std;
int a[100][100];
int d[100][100];
int n;
int m;
int maxv=2147483640;
int main()
{
    cin>>n;
    cin>>m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i==j){
                d[i][j]=0;
            }
            else{
                d[i][j]=maxv;
            }
        }
    }
    for (int i=1; i<=m; i++){
        int x,y,w;
        cin>>x>>y>>w;
        d[x][y]=w;
     d[y][x]=w;
    }
    for (int k=1; k<=n; k++){
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n; j++){
                if (d[i][k]<maxv && d[k][j]<maxv){
                    if (d[i][k]+d[k][j]<d[i][j]){
                        d[i][j]=d[i][k]+d[k][j];
                    }
                }
            }
        }
    }
    int maxi=-99999;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (maxi<d[i][j] && d[i][j]!=maxv){
                maxi=d[i][j];
            }
        }
    }
    
    cout<<maxi;
 
    return 0;
   
}

