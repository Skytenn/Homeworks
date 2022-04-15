/*ugugdsun toog 2 tooni kubuudiin niilbert heden ynzaar zadalj boloh we?*/
#include <iostream>
using namespace std;
int main()
{
    int i=1,s=1,a;
    cout<<"Too oruulna uu="; cin>>a;
    do {
        i++;
        s++;
       if (i*i*i+s*s*s==a)  break;
        
    }while (i<a);
     cout<<i<<" ba "<<s<<"-iin kubiin niilber baina";
                        

}