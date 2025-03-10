#include"EmployeeStatus.h"
const char* toString(Role role){
   switch(role){
   case Role::Intern:
    return"Intern"; 
   case Role::Junior:
    return "Junior";
   case Role::Middle:
    return "Middle";
   case Role::Senior:
   return "Senior";
 }
 return "";
}
const char* toString(EmployeeStatus status){
  switch (status){
    case EmployeeStatus::Active:
      return "Active";
   case EmployeeStatus::On_Leave:
     return "On_leave";
    case EmployeeStatus::Inactive:
       return "Inactive";
    case EmployeeStatus::Retired:
    return "Retired";
  }
  return "";
}
const char* toString(EmploymentType type){
   switch(type){

    case EmploymentType::FullTime:
    return "FullTime";
    case EmploymentType::PartTime:
    return "PartTime";
   }
   return "";
}
double getRateForRole(Role role){
        switch(role){
            case Role::Intern:
             return 1.0;
            case Role::Junior:
            return 1.2;
            case Role::Middle:
             return 1.5;
            case Role::Senior:
            return 2.0;
          }
          return 0;
        }  
        Role& operator++(Role& role){
        switch(role){
          case Role::Intern:
          role=Role::Junior;
           return role;
          case Role::Junior:
          role=Role::Middle;
          return role;
          case Role::Middle:
          role=Role::Senior;
          return role;
          case Role::Senior:
          return role;
        }
        return role;    
      }
      EmployeeStatus& operator++(EmployeeStatus& status){
        switch(status){
     case EmployeeStatus::Active:
     status=EmployeeStatus::On_Leave;
       return status;
     case EmployeeStatus::On_Leave:
     status=EmployeeStatus::Inactive;
     return status;
      case EmployeeStatus::Inactive:
      status=EmployeeStatus::Retired;
      return status;
      case EmployeeStatus::Retired:
      return status;
    } 
    return status;  

 }


   


