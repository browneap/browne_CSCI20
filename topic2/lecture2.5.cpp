#include <iostream>
using namespace std;

class Salary
{
    private: 
        double annual_;
    public:
        void SetAnnualSalary(double salary)
        {
            annual_ = salary;
        }
        double GetAnnualSalary()
        {
            return annual_;
        }
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};