#include <iostream>
#include <string>
#include "CommissionEmployee.h"

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
private:
    double baseSalary;

public:
    BasePlusCommissionEmployee(const string &fist, const string &last,
                               const string &ssn, double sale, double = 0.0 double = 0.0);

    void setBaseSalary(double);
    string getBaseSalary() const;

    void earnings() const;
    void print() const;
};
