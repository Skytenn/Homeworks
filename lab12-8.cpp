//Zeregt dewshuuleh bodlogiig hiine uu
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[100],n,i,c,e,s;
    cout<<"Husnegtiin hemjeeg oruulna uu=";cin>>n;
    cout<<"dewshuuleh zergiig oruulna uu="; cin>>e;
    for(i=1;i<=n;i++)
    {cout<<"a["<<i<<"]=";cin>>a[i]; }
    for (i=1;i<=n;i++) 

    {

        c=pow(e,a[i]);
        cout<<"\n a["<<i<<"]="<<c;
    }

}