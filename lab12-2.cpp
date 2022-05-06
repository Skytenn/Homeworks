// neg hemjeest husnegtiin buh elementiin niilberiig olno uu?
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[100],n,k,i,l=0;
    cout<<"Husnegtiin toog oruulna uu=";cin>>n;
    for(i=1;i<=n;i++)
  {cout<<"a["<<i<<"]= ";cin>>a[i]; }
    for (i=1;i<=n;i++)  
    {
       l=l+a[i];
    }
    cout<<"niilber="<<l;
    
}