// neg hemjeest husnegtiin toonuuiin  dundajiig ol
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[100],k,i;
	float s,l=0,n;
    cout<<"Husnegtiin toog oruulna uu=";cin>>n;
    for(i=1;i<=n;i++)
  {cout<<"a["<<i<<"]= ";cin>>a[i]; }
    for (i=1;i<=n;i++)  
    {
       l=l+a[i];
	   s=l/n;
    }
    cout<<"Dundaj="<<s;
    
}