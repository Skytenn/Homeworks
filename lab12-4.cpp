//Neg hemjeest husnegtiin hamgiin ih toog ol
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[100],n,k,i,max=0;
    cout<<"Husnegtiin toog oruulna uu=";cin>>n;
    for(i=1;i<=n;i++)
   {cout<<"a["<<i<<"]= ";cin>>a[i]; }
    for (i=1;i<=n;i++)  
    {
        if (a[i]>max) {
            max=a[i];
        }
    
    }
    cout<<"Hamgiin ih element="<<max;
}