//ugugdsun tootoi hamgiin oirhon baih palindrom toog ol
#include<iostream>
#include<math.h>
using namespace std;
int anhtoo(int n,int s=0, int m=0 )
{
        
	for (int i=2;i<=n;i++)
	{
        m=n;
        s=s*10+n%10;
        n=n/10;
		if(m==s) return 0;
	}
	return 1;
	
}

int main()
{
int n,l,q,m;
cout<<"Too oruulna uu="; cin>>n;
m=n;
int i=0;
while (true)
{
	if (anhtoo(l==m)) {
		cout<<n+i;
		return 0;
	}
	
	if(anhtoo(l==m)) {
		cout<<n-i;
		return 0;
	}
	i++;
	
}

}