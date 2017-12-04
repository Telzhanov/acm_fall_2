#include <iostream>
using namespace std;
int a[100];
int n;
int findMax(int max,int i)
{
	if (i==n){
		return max;
	}
	else {
		if (a[i]>max){
			max=a[i];
		}
		return findMax(max,i+1);
	}
}
int main()
{
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<findMax(a[0],0);
	return 0;
}
