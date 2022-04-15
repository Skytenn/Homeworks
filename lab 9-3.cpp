//ugugdsun natural toog 3 anhnii toonii niilbert zaldlaj boloh uu
#include<iostream>
#include<cmath>
using namespace std;
int ant(int n)
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
	if(n%i==0 && ant(i)){
		s++;
		n/=i;
		
	} else i++;
}

if(s==3) cout<<"huwaaj bolno, anhnii too ni= "<<i<<" baina";
else cout<<"NO";
return 0;
}