#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int n,m;
int a[111][111];
int used[111];
int tmpused[111];
int r1,r2;
void dfs(int v) {
    used[v] = 1;
    for (int i = 1; i <= n; i++) {
        if (a[v][i] == 1 && used[i] == 0) {
            dfs(i);
        }
    }
}
void tmpdfs(int v){
	tmpused[v] = 1;
    for (int i = 1; i <= n; i++) {
        if (a[v][i] == 1 && tmpused[i] == 0) {
            tmpdfs(i);
        }
    }
}

int main () {
	vector< pair < int,int> > bridge;
	cin >> n>>m;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			a[i][j]=0;
		}
	}
	for (int i=0; i<m; i++){
		int e1,e2;
		cin>>e1>>e2;		
    	a[e1][e2]=1;
    	a[e2][e1]=1;
    }
    dfs(1);
	    for (int i=1; i<=n; i++){
    	for (int j=1; j<=n; j++){
    		if (a[i][j]==1){
    			a[i][j]=0;
    			a[j][i]=0;
    			for (int x=1; x<=n; x++){
    				tmpused[x]=0;
				}
				tmpdfs(1);
				for (int s=1; s<=n; s++){
					if (tmpused[s]!=1){
						bridge.push_back(make_pair(i,j));		
						break;
					}
				}
				a[i][j]=1;
				a[j][i]=1;
				}
				
			}
		
			
		}
		int sz=bridge.size()/2;
		cout<<m-sz;
	return 0;
}

