//codeforce problme no:- 231A
//problme:- team
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d=0,n;
	cin>>n;
	while(n--){
		cin>>a>>b>>c;
		if(a+b+c>1){
			d++;
		}
	}
	cout<<d;
	return 0;
}
