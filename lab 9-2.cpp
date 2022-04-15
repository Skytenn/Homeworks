//ugugdsun tootoi hamgiin oirhon baih palindrom toog ol
#include<iostream>
#include<math.h>
using namespace std;
int ant(int n,int s )
{
	for (int i=2;i<=n;i++)
	{
        s=s*10+n%10;
        n=n/10;
		if(n==s) return 0;
	}
	return 1;
	
}

int main()
{
int n,l,q,s;
cout<<"Too oruulna uu="; cin>>n;
int i=0;
while (true)
{
	if (ant(n-i)==1) {
		cout<<n-i;
		return 0;
	}
	
	if(ant(n+i)==1) {
		cout<<n+i;
		return 0;
	}
	i++;
	
}

}