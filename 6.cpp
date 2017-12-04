#include <iostream>
using namespace std;
int a[100][100];
int d[100][100];
int n;
int main()
{
	cin>>n;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			d[i][j]=a[i][j];
		}
	}
	for (int k=1; k<=n; k++){
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
	int maxi=-999999;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (d[i][j]>maxi){
				maxi=d[i][j];
			}
		}
	}
	cout<<maxi;
	return 0;
}

