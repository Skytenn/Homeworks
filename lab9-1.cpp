//ugugdsun tootoi hamgiin oirhon baih anhnii toog ol
#include<iostream>
#include<math.h>
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
int n,l,q;
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