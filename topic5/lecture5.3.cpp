#include <iostream>
using namespace std;

class Salary
{
    private: 
        double annual_;
    public:
        void Salary();
        void SetAnnualSalary(double salary);
        double GetAnnualSalary();
        void Print();
};

void Salary::Salary()
{
    annual_ = 0;    
}
void Salary::SetAnnualSalary(double salary)
{
    if (salary > 0){
        annual_ = salary;
    }
    else
        annual_ = 0;
}
double Salary::GetAnnualSalary()
{
    return annual_;
}
void Salary::Print()
{
     cout<<"$"<<annual_<<endl;
}

int randomNumberGenerator ()
{
    srand(time(0));
    int randomNumber = rand() % 10 + 1;

    return randomNumber;
}

int main()
{
    Salary Joe;
    int r = randomNumberGenerator()*10,000;
    Joe.SetAnnualSalary(r);
    Joe.Print();
    
}