//ugugdsun tootoi hamgiin oirhon baih palindrom toog ol
#include<iostream>
#include<cmath>
using namespace std;
int pl(long long n)
{
	long long r,s=0;
	r=n;
	while(r!=0)
	{
		s=s*10+r%10;
		r/=10;
	}
	if(n==s) return 1;
	else return 0;
	
}
int main()
{
int n,i=1;
cout<<"Too oruulna uu="; cin>>n;
int r=n;
while (true)
{
	
	if(pl(r-i)==1) {cout<<r-i;return 0;}
	if(pl(r+i)==1) {cout<<r+i;return 0;}
	i++;	
}
return 0;
}