#include <iostream>
using namespace std;
class employee{
    int empId, age;
    char name[25], add[25], designation[25], PhoneNo[10];
    public:
    // intput value functions
    void input(){
        cout<<"*****************************"<<endl;
        cout<<"Enter Employees Details"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"Enter employee Name: ";
        cin>>name;
        cout<<"\n Enter employee ID: ";
        cin>>empId;
        cout<<"\n Enter employee age:";
        cin>>age;
        cout<<"\n Enter employee address: ";
        cin>>add;
        cout<<"\n Enter employee designation: ";
        cin>>designation;
        cout<<"\n Enter employee Phone Number: "; 
        cin>>PhoneNo;
    }

    //  output of the employee details
    void output(){
        cout<<"*****************************"<<endl;
        cout<<"Employee Details"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Employee age: "<<age<<endl;
        cout<<"Employee Designation: "<<designation<<endl;
        cout<<"Employee address: "<<add<<endl;
        cout<<"Employee Phone Number: "<<PhoneNo<<endl;
    }

    // Search employee by ID function
    void searchbyId(int id){
        if(this->empId == id){
            cout<<"*****************************"<<endl;
            cout<<"Search employee by ID"<<endl;
            cout<<"*****************************"<<endl;
            cout<<"Employee details Found"<<endl;
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee ID: "<<empId<<endl;
            cout<<"Employee age: "<<age<<endl;
            cout<<"Employee Designation: "<<designation<<endl;
            cout<<"Employee address: "<<add<<endl;
            cout<<"Employee Phone Number: "<<PhoneNo<<endl;
            exit(0);
        } else{
            cout<<"Employee"<<id <<"details Not Found!"<<endl;
        }
    }
};
int main(){
    employee emp[3];
    int id, i;
    for(i = 0; i<3; i++){
        emp[i].input();
    }

    for(i = 0; i<3; i++){
        emp[i].output();
    }

    cout<<endl;
    cout<<"*************************"<<endl;
    cout<<"Enter employee Id to be search:";
    cin>>id;

    for(i=0; i<3; i++){
        emp[i].searchbyId(id);
    }

    return 0; 
}

/*
* OUTPUT OF THE PROGRAM
*****************************
Enter Employees Details
*****************************
Enter employee Name: Anshu

 Enter employee ID: 22

 Enter employee age:19

 Enter employee address: A-Block

 Enter employee designation: CEO

 Enter employee Phone Number: 1234567891
*****************************
Enter Employees Details
*****************************
Enter employee Name: Rohit

 Enter employee ID: 23

 Enter employee age:22

 Enter employee address: B-Block

 Enter employee designation: Manager

 Enter employee Phone Number: 1235467891
*****************************
Enter Employees Details
*****************************
Enter employee Name: Deepali

 Enter employee ID: 24

 Enter employee age:19

 Enter employee address: C-Block

 Enter employee designation: HR

 Enter employee Phone Number: 1234576981
*****************************
Employee Details
*****************************
Employee Name: Anshu
Employee ID: 22
Employee age: 19
Employee Designation: CEO
Employee address: A-Block
Employee Phone Number: 1234567891
*****************************
Employee Details
*****************************
Employee Name: Rohit
Employee ID: 23
Employee age: 22
Employee Designation: Manager
Employee address: B-Block
Employee Phone Number: 1235467891
*****************************
Employee Details
*****************************
Employee Name: Deepali
Employee ID: 24
Employee age: 19
Employee Designation: HR
Employee address: C-Block
Employee Phone Number: 1234576981

*************************
Enter employee Id to be search:22
*****************************
Search employee by ID
*****************************
Employee details Found
Employee Name: Anshu
Employee ID: 22
Employee age: 19
Employee Designation: CEO
Employee address: A-Block
Employee Phone Number: 1234567891
*/