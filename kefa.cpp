#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int k;
	int a[1000];
	int x[1000];
	int y[1000];
	int c[1000];
	int g[100][100];
	int dp[100][100];
	cin>>n>>m>>k;
	for (int i=1; i<=n; i++){
		cin>>a[i];
		dp[1<<(i-1)][i]=a[i];
	}
	for (int i=1; i<=k; i++){
		cin>>x[i];
		cin>>y[i];
		cin>>c[i];
		g[x[i]][y[i]]=c[i];
		
	}
	for (int mask=0; mask<(1<<n); mask++){
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				if (((mask&(1<<(i-1)))>0) && ((mask&(1<<(j-1)))==0)){
					dp[mask+(1<<j-1)][j]=max(dp[mask][i]+a[j]+g[i][j],dp[mask+(1<<j-1)][j]);
				}
			}
		}
	}
	return 0;
}
