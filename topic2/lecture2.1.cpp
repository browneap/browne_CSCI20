#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = rand() % 10 + 1;

    int userNumber = 0;
    cout<<"Please choose a number between 1 and 10\n";
    cin>>userNumber;

    cout<<"You picked: "<<userNumber<<"  The number was: "<<randomNumber<<endl;
}