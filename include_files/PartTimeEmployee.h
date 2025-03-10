#ifndef ParttimeEmploye
#define ParttimeEmploye
#include"Employee.h"
class PartTimeEmployee:public Employee{
 double m_Hours_worked;
 double m_Hourly_wage;
 const EmploymentType type=EmploymentType::PartTime;  
 public:
  double calculateSalary ()override;
  void displayDetails()const override;
  PartTimeEmployee(string id,string name,double basesalary,Role role,EmployeeStatus status,double hours_worked,double hourly_wage );

};
#endif