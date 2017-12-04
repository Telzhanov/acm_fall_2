#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <utility>
using namespace std;
int main()
{
	string str;
	vector<pair<char,int> > v1;
	cin>>str;
	int maxi;

	for (int i=0; i<str.size(); i++){
		if (str[i]=='a'){
			int k=i;
			while(str[k]=='a'){
				maxi++;
				k++;
			}
			i=k;
			v1.push_back(make_pair('a',maxi));
			maxi=0;
		}
	if (str[i]=='b'){
		int k=i;
			while(str[k]=='b'){
				maxi++;
				k++;
			}
			i=k;
			v1.push_back(make_pair('b',maxi));
			maxi=0;
	}
	}
	for (int i=0; i<v1.size(); i++){
		cout<<v1.at(i).first<<v1.at(i).second;
	}
}
