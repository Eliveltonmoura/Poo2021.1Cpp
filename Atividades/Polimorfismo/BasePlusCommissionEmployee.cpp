#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &fist, const string &last,
                                                       const string &ssn, double sale, double rote double salary)
    : CommissionEmployee(fist, last, ssn, sales, rote) // chamando explicimate o contrutor da classe basica
{

    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    this->baseSalary = (salary < 0.0) ? 0.0 : salary;
}
string BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}
void BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print()

{
    cout << "base-salaried ";
    CommissionEmployee::print();

    cout << "\nbase salary: " << getBaseSalary();
}