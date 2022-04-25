//ugugdsun natural toog 3 palindrom toonii niilbert zaldlaj boloh uu
#include<iostream>

using namespace std;
int fal_n(int n)
{   int s=n;
	int l=0;
	while(n!=0)
	{
		l=l*10+n%10;
		n/=10;
	}
	if(s==l) return 1;
	else return 0;
}
int main()
{

int n;
cout<<"too oruulna uu="; cin>>n;
for (int q=1;q<n;q++)
{
for (int i=1;i<n;i++)
	for (int j=1;j<n;j++)
		{
			if(fal_n(i)&&fal_n(j)&&fal_n(q))
			
			if(i+j+q==n) {
				cout<<"zadlaj bolno, palindrom toonuud ni= " <<i<<" "<<j<<" "<<q<<endl;
				return 0;
			}
			
		}
}
cout<<"ugui";
return 0;
}