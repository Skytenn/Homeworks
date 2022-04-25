//ugugdsun natural toog 3 anhnii toonii niilbert zaldlaj boloh uu
#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int anh_too(int n)
{
	for (int i=2;i<=n/2;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
	
}
int main()
{
int s=0;
int n;
cout<<"too oruulna uu="; cin>>n;
int i=2;
while(n>1)
{
	if(n%i==0 && anh_too(i)){
		s++;
		n/=i;
		
	} else i++;
}

if(s==3) cout<<"huwaaj bolno, anhnii too ni= "<<i<<" baina";
else cout<<"bolohgui";
return 0;
}