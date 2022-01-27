#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const string &fist, const string &last,
                                       const string &ssn, double sale, double rote)
    : fistName(fist), lastName(last), socialSecurityNumber(ssn)
{ // construtos, onde passa os valores para variaveis na primeira execusão.

    setGrossSales(sale);
    setComissionRate(rote);
}
void CommissionEmployee::setFistName(const &fist)
{
    this->fistName = fist;
}
string CommissionEmployee::getFistName() const
{
    return fistName;
}
void CommissionEmployee::setLastNome(const &last)
{
    this->fistName = last;
}
string CommissionEmployee::getLastNome() cont
{
    return lastName;
}
void CommissionEmployee::setSocialSecurityNumber(cosnt string &ssn)
{
    this->getSocialSecurityNumber = ssn;
}
string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}
void CommissionEmployee::setGrossSales(double sales)
{
    this->grossSales = sales;
}
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}
void CommissionEmployee::setComissionRate(double rate)
{
    this->comissionRate = rote;
}
double CommissionEmployee::gatComissionRote() const
{
    return comissionRate;
}

void CommissionEmployee::earmins() const
{
    return getCommissionRote() + getGrossSales();
}
void CommissionEmployee::print() const
{
    cout << "commission employee: " << getFirstName()
         << ' ' << getLastName() << "\nsocial security number: "
         << getSocialSecurityNumber() << "\ngross sales: " << getGrossSales()
         << "\ncommission rate: " << getCommissionRate();
}
