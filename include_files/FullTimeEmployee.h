#ifndef FullTimeEmploye
#define FullTimeEmploye
#include"Employee.h"
class FullTimeEmployee:public Employee{
  private:
  const EmploymentType type= EmploymentType::FullTime;
   
  
public:
 FullTimeEmployee(string id,string name,double basesalary,Role role,EmployeeStatus status);
 void displayDetails()const override;
};
#endif