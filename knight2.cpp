#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int dp[100][100];
	int a[100][100];
	int tmp1=999999;
	int tmp2=999999;
	int tmp3=999999;
	freopen ("king2.in", "r",stdin);
    freopen ("king2.out","w", stdout);
	for (int i=1; i<=8; i++){
		for (int j=1; j<=8; j++){
			cin>>a[i][j];
		}
	}
//	cout<<a[1][7];
	dp[8][1]=0;
	for (int i=8; i>=1; i--){
		for (int j=1; j<=8; j++){
			if (i+1<9){
				tmp1=dp[i+1][j]+a[i][j];	
			}
			if (j-1>0){
				tmp2=dp[i][j-1]+a[i][j];
			}
			if (i+1<9 && j-1>0){
				tmp3=dp[i+1][j-1]+a[i][j];
			}
			if(tmp1 <= tmp2 && tmp1 <= tmp3)
				    {
				        dp[i][j]=tmp1;
				    }
				
				    if(tmp2 <= tmp1 && tmp2 <= tmp3)
				    {
				        dp[i][j]=tmp2;
				    }
				
				    if(tmp3 <= tmp1 && tmp3 <= tmp2) {
				        dp[i][j]=tmp3;
				    }
				    if (i==8 && j==1){
				    	dp[i][j]=0;
					}
//					cout<<tmp1<<tmp2<<tmp3;
					tmp1=999999;
					tmp2=999999;
					tmp3=999999;
		}
	}
	cout<<dp[1][8];
	return 0;
}
