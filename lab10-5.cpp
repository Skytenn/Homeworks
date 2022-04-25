//Ugugdsun toonii buh tsipr ni tegsh esehiig shalga
#include<iostream>
#include<cmath>
using namespace std;
int tgsh(int a)
    {
        int t,c=0,i,s=0;
        while(a!=0)
        {
		i=a%10;
        if (i%2==0)  s++;
        t=a/10;
        c++;
        a=a/10;         
        }
        if(s==c) return 1;
        else return 0;
    }

int main()
{
    int a,s,c;
    cout<<"Too oruulna uu="; cin>>a;
	if(tgsh(a)) cout<<"buh tsipr tegsh";
            else cout<<"buh tsipr tegsh bish";
      

return 0;
}