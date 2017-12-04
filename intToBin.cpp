#include <iostream>
#include <string> 
#include <sstream>
#include <algorithm>
using namespace std;
int decimal;
string binary="";
string intToBin(int dec, string binary){
	stringstream ss;
    int a = dec%2;
    dec=dec/2;
    ss<<a;
    std::string str;
    ss>>str;
	if (dec==1){
		return binary+str+"1";
	}
	
	else {
		return intToBin(dec,binary+str);	
	}
}
int main()
{
	string ans="";
	cin>>decimal;
	if (decimal==1){
		cout<<1;
		return 0;
	}
	if (decimal==0){
		cout<<0;
		return 0;
	}
	binary=intToBin(decimal,binary);
	for (int i=0; i<binary.size(); i++){
		ans+=binary[binary.size()-1-i];
	}
	cout<<ans;
	return 0;
}

