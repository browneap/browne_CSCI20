#include<iostream>
using namespace std;

int main(){
    double x = 5.5;
    double y = 7.7;
    
    x = y;
    y = x;
    
    cout<<x<<"     "<<y<<endl;
}