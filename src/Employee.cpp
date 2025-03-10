#include"Employee.h"
double Employee::calculateSalary(){
   return m_basesalary*rate;
}
void Employee::promote(){
    ++m_role;
    rate=getRateForRole(m_role);
}
void Employee::updateStatus(EmployeeStatus newStatus){
    m_status=newStatus;    
}
 string Employee::getId(){
    return employeeId;
}
 string Employee::getName(){
    return m_name;
 }

void Employee::updateRole(Role newRole){
    m_role=newRole;
    rate=getRateForRole(m_role);
}
void Employee::displayDetails()const{
  cout<<employeeId<<endl;
  cout<<m_name<<endl;
  cout<<m_basesalary<<endl;
  cout<<toString(m_role)<<endl;
  cout<<toString(m_status)<<endl;
  cout<<getRateForRole(m_role)<<endl;
}
Employee::Employee(string id,string name,double basesalary,Role role,EmployeeStatus status){
employeeId=id;
m_name=name;
m_basesalary=basesalary;
m_role=role;
m_status=status;
rate=getRateForRole(m_role);
}