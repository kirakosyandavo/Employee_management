#include"PartTimeEmployee.h"
PartTimeEmployee::PartTimeEmployee(string id,string name,double basesalary,Role role,EmployeeStatus status,double hours_worked,double hourly_wage ):Employee(id,name, basesalary, role,status){
    m_Hours_worked=hours_worked;
    m_Hourly_wage=hourly_wage;
    cout<<"you add succesfully"<<endl;

}
double PartTimeEmployee::calculateSalary(){
 return m_Hours_worked*m_Hourly_wage*rate;
}
void PartTimeEmployee::displayDetails()const{
    cout<< m_Hours_worked<<endl;
    cout<<m_Hourly_wage<<endl;
    Employee::displayDetails();
    cout<<toString(type)<<endl;
}