#include <iostream>
#include <cstdio>
using namespace std;
int n;
int a[150];
int dp[150];
//int maxa=INT_MIN;
//void step(int i, int val){
//	if (i==n){
//		maxa=max(maxa,val);
//		return;
//	}
//	else {
//		if (i+2<=n){
//		step(i+2,val+a[i+2]);
//		}
//		if (i+1<=n){
//		step(i+1,val+a[i+1]);	
//		}	
//	}
//}
int main()
{

	freopen ("ladder.in", "r",stdin);
    freopen ("ladder.out","w", stdout);
	cin>>n;
	a[0]=0;
	for (int i=1;  i<=n; i++){
		cin>>a[i];
	}
	dp[0]=0;
	dp[1]=a[1];
	for (int i=2; i<=n; i++){
		dp[i]=max(dp[i-1]+a[i],dp[i-2]+a[i]);
	}
//	step(0,0);
//	cout<<maxa;
	cout<<dp[n];
	return 0;
}
