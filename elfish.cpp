#include <iostream>
#include <utility>
using namespace std;
int counter;
string str1;
string str2;
pair<char,bool> p[100];
int elfish(int i){
	if (i==str1.size()){
		return counter;	
	}
	else{
			for (int j=0; j<str2.size(); j++){
				if (str1[i]==p[j].first && p[j].second==false){
					p[j].second=true;
					counter++;
				}
			}
		return elfish(i+1);	
	}
}
int main()
{
	cin>>str1;
	cin>>str2;
	for (int j=0; j<str2.size(); j++){
		char c=str2[j];
		p[j].first=c;
		p[j].second=false;
	}
	int size=str2.size();
	if (elfish(0)-size>=0){
		cout<<"contains all second string letters";
	}
	else{
		cout<<"not contains all second string letters";
	}
	return 0;
}
