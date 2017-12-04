#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
bool used[100];
int a[100][100];
int n; 
queue <int> q;
int parent[100];
int level[100];
//int counter=0;
//vector <int> pathtov; 
//void path(int u,int v){
//	if (parent[v]==u){
//		pathtov.push_back(u);
//		return;
//	}
//	else {
//		
//	}
//	
//}
void bfs(int v){
	used[v]=true;
	parent[v]=0;
	level[v]=0;
	for (int i=1; i<=n; i++){
		if (a[v][i]==1 && used[i]==false){
			q.push(i);
			parent[i]=v;
			level[i]=level[v]+1;
		}
	}
	while (!q.empty()){
		used[q.front()]=true;
		for (int i=1; i<=n; i++){
			if (a[q.front()][i]==1 && used[i]==false){
				q.push(i);
				parent[i]=q.front();
				level[i]=level[q.front()]+1;
			}
		}
		q.pop();
	}
}
int main()
{
	cin>>n;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	bfs(1);
	for (int i=1; i<=n; i++){
		cout<<used[i]<<endl;
		cout<<"parent"<<i<<" "<<parent[i]<<endl;
		cout<<"level"<<i<<" "<<level[i]<<endl;
	}
	int u;
	int v;
	cin>>u>>v;
	int parentof=v;
	for (int i=level[u]; i<=level[v]; i++){
		cout<<parentof<<"---";
		parentof=parent[parentof];
	}
	return 0;
}
