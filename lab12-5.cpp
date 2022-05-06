//Neg hemjeest husnegtiin hamgiin baga toog ol
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[100],n,i,min=a[0];
    cout<<"Husnegtiin hemjeeg oruulna uu=";cin>>n;
    for(i=1;i<=n;i++)
    {cout<<" a["<<i<<"]=";cin>>a[i]; }
    for (i=1;i<=n;i++)  
    {
        if(a[i]<min)  min=a[i]; 
    }
    cout<<"Hamgiin baga too="<<min;
}