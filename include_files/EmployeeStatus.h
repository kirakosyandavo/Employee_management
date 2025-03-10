#ifndef EMPLOYEESTATUS
#define EMPLOYEESTATUS
#include<iostream>
enum class EmployeeStatus{
    Active,
    On_Leave,
    Inactive,
    Retired
};
enum class Role{
    Intern,
    Junior,
    Middle,
    Senior

};
enum class EmploymentType{
    FullTime,
    PartTime  
}; 
Role& operator++(Role& role); 
EmployeeStatus& operator++(EmployeeStatus& status);
 const char* toString(Role role);
 const char* toString(EmployeeStatus status);
 const char* toString(EmploymentType type);
  double getRateForRole(Role role);
  #endif
