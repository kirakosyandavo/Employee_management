#include "Employee.h"
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
#include "Utility.h"
int main(){
vector<Employee*>employes;
employes.push_back(new FullTimeEmployee("101","Brayn",2000,Role::Intern,EmployeeStatus::Active));
employes.push_back(new FullTimeEmployee("102","Bob",3000,Role::Junior,EmployeeStatus::On_Leave));
employes.push_back(new PartTimeEmployee("103","Mary",1500,Role::Senior,EmployeeStatus::Active,3,2));
employes.push_back(new PartTimeEmployee("104","Jane",4000,Role::Senior,EmployeeStatus::Retired,1,4));
    for(int i=0;i<employes.size();i++){
        employes[i]->displayDetails();
    }
    for(int i=0;i<employes.size();i++){
        employes[i]->promote();
    }
    for(int i=0;i<employes.size();i++){
        employes[i]->displayDetails();
    }

    return 0;

}
