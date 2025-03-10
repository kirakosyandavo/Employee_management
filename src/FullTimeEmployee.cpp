#include"FullTimeEmployee.h"
FullTimeEmployee::FullTimeEmployee(string id, string name, double basesalary,Role role,EmployeeStatus status):Employee(id,name, basesalary, role,status){
     cout<<"you add succesfully"<<endl;
}
 void FullTimeEmployee:: displayDetails()const {
      Employee::displayDetails();
      cout<<toString(type)<<endl;
 }
 
