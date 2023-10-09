#include <iostream>
using namespace std;
class sum{
    public:
    int a, b, sum;
    void input(){
        cout<<"********************"<<endl;
        cout<<"INPUT ALL THE VALUES"<<endl;
        cout<<"********************"<<endl;
        cout<<"\nEnter the value of a: ";
        cin>>a;
        cout<<"\nEnter the value of b: ";
        cin>>b;
    }

    void plus(){
        cout<<"********************"<<endl;
        cout<<"SUM OF ALL THE VALUES"<<endl;
        cout<<"********************"<<endl;
        sum = a+b;
        cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
    }
};

int main(){
    sum s1;
    s1.input();
    s1.plus();

    return 0; 
}

/*
*OUTPUT OF THE PROGRAM

********************
INPUT ALL THE VALUES
********************

Enter the value of a: 4

Enter the value of b: 5
********************
SUM OF ALL THE VALUES
********************
Sum of 4 and 5 is 9

*/