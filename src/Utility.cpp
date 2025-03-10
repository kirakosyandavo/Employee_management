#include"Utility.h"
Employee* searchEmployeeByID(vector<Employee*>&employees,string id){
for(int i=0;i<employees.size();i++){
    if(employees[i]->getId()==id){
        return employees[i];
    }
}
cout<<"there is no such employee"<<endl;
return nullptr;
}
Employee* searchEmployeeByName(vector<Employee*>&employees,string name){
    for(int i=0;i<employees.size();i++){
    if(employees[i]->getName()==name){
        return employees[i];
    }
}
cout<<"there is no such employee"<<endl;
return nullptr; 
}
