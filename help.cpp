#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string str;
	string res="\"";
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		if(str[i]==' ')
			res=res+"\""+','+"\"";
		else
			if(str[i]>='a'&&str[i]<='z')
				res=res+char(str[i]-32);
			else
				res=res+str[i];
	}
	cout<<res<<"\""<<endl;
}
