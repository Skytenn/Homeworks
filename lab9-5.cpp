/*tsipruudiin niilberni anhnii too baih toonuudiig ol*/
#include<iostream>
#include<cmath>
using namespace std;
int ant(int n)
{
	for (int i=2;i<=n/2;i++)
	{
		if(n%i==0) return 0;
	}
 if(n!=1) return 1;
 else return 0;
	
}
int main()
{
int a,s=0;
cout<<"too oruulna uu="; cin>>a;
for (int i=2;;i++)
{
	int j=i,q=0;
	while(j!=0)
	{
		q=q+j%10;
		j/=10;
	}
	if(ant(q)==1) {
		s++;
		cout<<i<<" ";
	}
	if(s==a) {
	return 0;	
	}
}


return 0;
}