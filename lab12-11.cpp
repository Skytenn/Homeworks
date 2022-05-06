//Эхний n ширхэг анхны тоог массиваар дүүргэх
#include<iostream>
using namespace std;
int a[100];  // Энэ массив хоосон байгаа.
int main()
{ int l=1,n;
cout<<"husnegtiin hemjeeg oruulna uu=";cin>>n;
	for (int i=2;;i++)
	{
		int j=i;
		int ok=1;
		for (int t=2;t*t<=j;t++){
			if(j%t==0) {
				ok=0;
				break;
			}
		}
		if(ok==1) {
			a[l]=j;
			l++;
		}
		if(l==n) {
			break;
		}
	}
int p=0;
for (int q=1;q<l;q++)
{
	cout<<"\n a["<<q<<"]="<<a[q]<<" ";	
	if(p==7)  { p=0;
				cout<<endl;
				}
	else p++;

 } 


return 0;
}