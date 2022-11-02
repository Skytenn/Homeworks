// Ugugdsun too hurtelh toonii factorial oloh
#include <iostream>
using namespace std;
int factorial(int);

int main() {
    int n,r;
    cout << " Too oruulna uu=  "; cin>>n;
    r= factorial(n);
    cout << "Factorial: "<<r;
    return 0;
}
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
    
}
