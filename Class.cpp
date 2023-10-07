#include <iostream>
using namespace std;
class student{
    private:
    int RollNo, age, Marks;
    char name[20];
    public:
    void get(){
        cout<<"Enter the Student name:"<<endl;
        cin>>name;
        cout<<"Enter the student Roll Number:"<<endl;
        cin>>RollNo;
        cout<<"Enter the student age: "<<endl;
        cin>>age;
        cout<<"Enter the student Marks:"<<endl;
        cin>>Marks;
    }
    void show(){
        cout<<"Students Details"<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student RollNo:"<<RollNo<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Student Marks: "<<Marks<<endl;
    }
};

int main(){
    student s1, s2, s3;
    s1.get();
    s1.show();
    s2.get();
    s2.show();
    s3.get();
    s3.show();

    return 0; 
}