#include <iostream>
using namespace std;
class student{
    private:
    int age, marks, studentID;
    char name[];

    public:
    // Input function
    void get(){
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your student ID: "<<endl;
        cin>>studentID;
        cout<<"Enter your age: "<<endl;
        cin>>age;
        cout<<"Enter your marks: "<<endl;
        cin>>marks;
    }

    // show  output of the value that you enter into student details.
    void show(){
        cout<<"Students details"<<endl;
        cout<<"Student name: "<<name<<endl;
        cout<<"Student ID: "<<studentID<<endl;
        cout<<"Student age: "<<age<<endl;
        cout<<"Student Marks: "<<marks<<endl;
    }
};

int main(){
    student s1, s2;
    s1.get();
    s1.show();
    s2.get();
    s2.show();

    return 0; 
}

/*
* OUTPUT OF THE PROGRAM
Enter your name:
Anshu
Enter your student ID:
23
Enter your age:
19
Enter your marks:
86
Students details
Student name: Anshu
Student ID: 23
Student age: 19
Student Marks: 86
Enter your name:
Rohit
Enter your student ID:
24
Enter your age:
22
Enter your marks:
86
Students details
Student name: Rohit
Student ID: 24
Student age: 22
Student Marks: 86
*/