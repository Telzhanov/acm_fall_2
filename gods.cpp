#include <iostream>
using namespace std;
int main()
{
	int n;
	int cnt[1000];
	cin>>n;
	string names[1000];
	for (int i=0; i<n; i++){
		cin>>names[i];
	}
	int m;
	cin>>m;
	string get[1000];
	for (int i=0; i<m; i++){
		cin>>get[i];
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			int counter=0;
			if (names[i].size()==get[j].size()){
				for (int k=0; k<names[i].size(); k++){
				if (names[i][k]!=get[j][k]){
					counter++;
				}
			}	
			}
			if (counter==1){
				cnt[i]++;
				counter=0;
			}
		}
	}
	for (int i=0; i<n; i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
