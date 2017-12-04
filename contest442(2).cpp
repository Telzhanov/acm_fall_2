#include <iostream>
#include <string>
using namespace std;
int main()
{
	string danil="Danil";
	string olya="Olya";
	string slava="Slava";
	string ann="Ann";
	string nikita="Nikita";
	string str;
	int count=0;
	cin>>str;
	for (int i=0; i<str.size(); i++)
	{
		if (str[i]==danil[0] && str[i+1]==danil[1] && str[i+2]==danil[2] && str[i+3]==danil[3] && str[i+4]==danil[4])
		count++;
		if (str[i]==olya[0] && str[i+1]==olya[1] && str[i+2]==olya[2] && str[i+3]==olya[3])
		count++;
		if (str[i]==slava[0] && str[i+1]==slava[1] && str[i+2]==slava[2] && str[i+3]==slava[3] && str[i+4]==slava[4])
		count++;
		if (str[i]==ann[0] && str[i+1]==ann[1] && str[i+2]==ann[2])
		count++;
		if (str[i]==nikita[0] && str[i+1]==nikita[1] && str[i+2]==nikita[2] && str[i+3]==nikita[3] && str[i+4]==nikita[4] && str[i+5]==nikita[5])
		count++;
	}
	if (count==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
