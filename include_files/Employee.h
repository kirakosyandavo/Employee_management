#ifndef Employe
#define Employe
#include"EmployeeStatus.h"
using namespace std;

class Employee{
    protected:
    string employeeId;
    string m_name;
    double m_basesalary;
    Role m_role;
    EmployeeStatus m_status;
    double rate;
  public:
  Employee(string id,string name,double basesalary,Role role,EmployeeStatus status);
  virtual double calculateSalary();
  virtual void promote();
  virtual string getId();
  virtual string getName();
  virtual void displayDetails()const;
  virtual ~Employee()=default;
  virtual void updateStatus(EmployeeStatus newStatus);
  virtual void updateRole(Role newRole);
};
#endif 