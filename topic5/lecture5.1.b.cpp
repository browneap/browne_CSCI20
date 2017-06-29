#include <iostream>
using namespace std;

int main()
{
    int alpha = 5;
int beta = 20;

int * alphaPtr = &alpha;
int * betaPtr = &beta;

cout<<*alphaPtr<<endl;
cout<<*betaPtr<<endl;

*alphaPtr += 5;
betaPtr = alphaPtr;

cout<<*alphaPtr<<endl;
cout<<*betaPtr<<endl;
}