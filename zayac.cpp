#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	int dp[1005];
	int tmp1=-1;
	int tmp2=-1;
	int tmp3=-1;
	string str;
	freopen ("lepus.in", "r",stdin);
    freopen ("lepus.out","w", stdout);
	cin>>n;
	cin>>str;
	dp[1]=0;
	for (int i=2; i<=n; i++){
		if (str[i-1]=='w'){
			dp[i]=-1;
		}
		else{
			if (str[i-1]=='"'){
				if (dp[i-1]!=-1){
					tmp1=dp[i-1]+1;	
				}
				else{
					tmp1=dp[i-1];
				}
				if((i-3)>0){
					if (dp[i-3]!=-1){
						tmp2=dp[i-3]+1;		
					}
					else{
						tmp2=dp[i-3];
					}
				}
				if ((i-5)>0){
					if (dp[i-5]!=-1){
						tmp3=dp[i-5]+1;		
					}
					else{
						tmp3=dp[i-5];
					}
				}
				   if(tmp1 >= tmp2 && tmp1 >= tmp3)
				    {
				        dp[i]=tmp1;
				    }
				
				    if(tmp2 >= tmp1 && tmp2 >= tmp3)
				    {
				        dp[i]=tmp2;
				    }
				
				    if(tmp3 >= tmp1 && tmp3 >= tmp2) {
				        dp[i]=tmp3;
				    }				
			}
			if (str[i-1]=='.'){
				if (dp[i-1]!=-1){
					tmp1=dp[i-1];	
				}
				else{
					tmp1=dp[i-1];
				}
				if((i-3)>0){
					if (dp[i-3]!=-1){
						tmp2=dp[i-3];		
					}
					else{
						tmp2=dp[i-3];
					}
				}
				if ((i-5)>0){
					if (dp[i-5]!=-1){
						tmp3=dp[i-5];		
					}
					else{
						tmp3=dp[i-5];
					}
				}
				  if(tmp1 >= tmp2 && tmp1 >= tmp3)
				    {
				        dp[i]=tmp1;
				    }
				
				    if(tmp2 >= tmp1 && tmp2 >= tmp3)
				    {
				        dp[i]=tmp2;
				    }
				
				    if(tmp3 >= tmp1 && tmp3 >= tmp2) {
				        dp[i]=tmp3;
				    }	
			}
		}
	}
	cout<<dp[n];
	return 0;
}
