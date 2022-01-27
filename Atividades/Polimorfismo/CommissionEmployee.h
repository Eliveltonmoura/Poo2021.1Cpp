#include <iostream>
#include <string>

using namespace std;

class CommissionEmployee
{
private:
    string fistName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;
    double comissionRate;

public:
    CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);
    void setFistName(const &);
    string getFistName() const;
    void setLastNome(const &);
    string getLastNome() cont;
    void setSocialSecurityNumber(cosnt string &);
    string getSocialSecurityNumber() const;
    void setGrossSales(double);
    double getGrossSales() const;
    void setComissionRate(double);
    double gatComissionRote() const;

    void earmins() const;
    void print() const;
};
