// 1 hemjeest husnegtiin surug element buriig -1 eer urjuulen uu
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[100],n,k,i,l;
    cout<<"Husnegtiin toog oruulna uu=";cin>>n;
    for(i=1;i<=n;i++)
    {cout<<"a["<<i<<"]= ";cin>>a[i]; }
    for (i=1;i<=n;i++)  
    {
    if (a[i]<0)  {
        a[i]=a[i]*(-1); }
    cout<<"\n a["<<i<<"] = "<<a[i];
    }

}
