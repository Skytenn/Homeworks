//Ugugdsun too palindrom esehiig shalga
#include <iostream>
using namespace std;
int rev(int n, int temp)
{
	if (n == 0)
		return temp;
	temp = (temp * 10) + (n % 10);

	return rev(n / 10, temp);
}
int main()
{
    int n,temp;
	cout<<"Too oruulna uu= "; cin>>n;
	 temp=rev(n, 0);
	if (temp==n)
		cout<<"Palindrome mun: "<<n<<endl;
	else
		cout<<"Palindrome bish" <<endl;
	return 0;
}
