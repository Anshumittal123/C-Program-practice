// SUM OF THE DIGITS
#include <iostream>
using namespace std;
class Sum{
    private:
    int num, rem, rev, sum = 0;
    public:

    void input(){
        cout<<"Enter the number of elements: "<<endl;
        cin>>num;
    }

    void output(){
        while(num >0){
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        cout<<"Sum of the digits is: "<<sum<<endl;
    }
}; 

int main(){
    Sum obj;
    obj.input();
    obj.output();

    return 0; 
}

/*
* OUTPUT OF THE PROGRAMS
Enter the number of elements:
112
Sum of the digits is: 4
*/