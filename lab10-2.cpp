//toonii factioral oloh
#include<iostream>
using namespace std;
int fact(int a )
{
    int i,n,s=1;
    for (i=1;i<=a;i++)
        s=s*i;
return (s);
}
int main()
{
    int x;
    cout<<"Too oruulna uu="; cin>>x;
    cout<<fact(x);

}