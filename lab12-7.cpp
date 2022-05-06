//90 ees ih, 80-90 hoorond,70-80 hoornd heden shirheg too baigaag ol
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[200],n,i,c=0,j=0,l=0,k=0,s=0;
    cout<<"Husnegtiin hemjeeg oruulna uu=";cin>>n;
    for(i=1;i<=n;i++)
    {cout<<"a["<<i<<"]=";cin>>a[i]; }
    for (i=1;i<=n;i++) 
    {
        if (a[i]>=90) c++;
        if ((a[i]>=80) && (a[i]<90)) j++;
        if ((a[i]>=70)&& (a[i]<80)) l++;
        if ((a[i]>=60)&&(a[i]<70)) k++;
        if (a[i]<60) s++;
    } 
cout<<"\n 90-s ih too "<<c<<" -shirheg bn";
cout<<"\n 80-90 iin hoorond "<<j<<" -shirheg bn";
cout<<"\n 70-80 iin hoorond "<<l<<" -shirheg baina";
cout<<"\n 60-70 iin hoorond "<<k<<" -shirheg baina";
cout<<"\n 60-aas baga "<<s<<" -shirheg baina";

}
