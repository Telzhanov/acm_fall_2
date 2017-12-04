#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	int number=1;
	int sum=2;
	int i=1;
	cin>>n;
	while (sum<n){
		sum=pow(2,2);
	}
	if (sum>n){
		sum=sum/2;
	}
	if (sum==n){
		cout<<number;
	}
	else{
		for (int j=0; j<n-sum; j++){
			number++;
		}
		cout<<number;
	}
	return 0;
}
