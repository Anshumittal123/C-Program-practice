// Palindrome of a number
#include <iostream>
using namespace std;
class palindrome{
    private:
    int num, rem, rev=0, end;
    public:

    void input(){
        cout<<"Enter the number: "<<endl;
        cin>>num;
    }

    void output(){
        end = num;
        while (num > 0)
        {
            rem = num % 10;
            rev = (rev * 10) + rem;
            num = num / 10;
        }
        cout<<"The reverse of the number is:"<<rev<<endl;
        if(end == rev){
            cout<<"The number is a palindrome."<<endl;
        } else{
            cout<<"The number is not a palindrome."<<endl;
        }
    }
};

int main(){
    palindrome obj;
    obj.input();
    obj.output();

    return 0; 
}

/*
* OUTPUT OF THE PROGRAM
case 1:
Enter the number:
12321
The reverse of the number is:12321
The number is a palindrome.

case 2:
Enter the number:
12331
The reverse of the number is:13321
The number is not a palindrome.
*/