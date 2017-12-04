#include <iostream>
#include <cmath>
using namespace std; 

int main(){
	int n;
	char animal[100];
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>animal[i];
	}
	long long pos=n-1;
	unsigned long long decimal=0;
	for (int i=0; i<n; i++){
		if (animal[i]=='Z'){
			decimal=decimal+(unsigned long long)pow(2,pos-i);	
		}
	}
	cout<<(unsigned long long)pow(2,n)-1-decimal;
	return 0;
}
