#include <iostream>
using namespace std;
int a[105][105];
bool used[105];
int d[105];
int n,x,y;
int it;
int w;
int MAX=2147483647;
int main()
{
	cin>>n;
	cin>>x>>y;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	for (int i=1; i<=n; i++){
		if (i==x){
			d[i]=0;
		}
		else{
			d[i]=MAX;	
		}
	}
	for (int i=1; i<=n; i++){
		int mini=MAX;
		for (int j=1; j<=n; j++){
			if (d[j]<mini && used[j]==false){
				mini=d[j];
				it=j;
			}		
		}
		used[it]=true;
		for (int j=1; j<=n; j++){
		if (a[it][j]>-1 && it!=j){
				d[j]=min(d[j],d[it]+a[it][j]);
				
		}
	}	
}
	if (d[y]==MAX){
		cout<<-1;
	}
	else{
		cout<<d[y];	
	}
	
	return 0;
}

