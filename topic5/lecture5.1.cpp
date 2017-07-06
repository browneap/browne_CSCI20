#include<iostream>
using namespace std;

int main(){
    double x = 5.5;
    double y = 7.7;
    
    x = y;
    y = x;
    
    cout<<x<<"     "<<y<<endl;
}

//Does this swap the values?
//How would you fix it so it does swap the values?
//Create a swap function.
//What challenges did you have?