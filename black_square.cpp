#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int a,b,c,d,high,sum=0,i;
cin>>a>>b>>c>>d;
string s;
cin>>s;

high = s.size();

for( i=0; i<high; i++){

	if(s[i] == '1'){
  sum += a;
	}
	if(s[i] == '2'){
   sum += b;
	}
	if(s[i] == '3'){
    sum += c;
	}
	if(s[i] == '4'){
    sum += d;
	}


}
cout<<sum;


}
