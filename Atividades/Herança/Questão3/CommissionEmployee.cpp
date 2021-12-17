#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string 
                            &last, const string &ssn, double sales, double rate)
    : firstName(first), lastName(last), socialSecurityNumber(ssn)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}

double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
}
void CommissionEmployee::print() const 
{
    cout << "Commission employee: "
         << getFirstName() << ' ' << getLastName()
         << "\nsocial security number: "
         << getSocialSecurityNumber()
         << "\nGross sales: " << getGrossSales()
         << "\ncommission rate: " << getCommissionRate();
}