#include <iostream>
using namespace std;
class SavingAccount{
    private:
    char cname[25];
    char cadd[25];
    char phoneNo[10];
    int account;
    float bal;
    public:
    // Input customer details
    void open(){
        cout<<"enter the customer name:";
        cin>>cname;
        cout<<"enter customer addres:";
        cin>>cadd;
        cout<<"Enter account number:";
        cin>>account;
        cout<<"Enter customer phone number:";
        cin>>phoneNo;
        cout<<"Enter opening balance:";
        cin>>bal;
    }

    // Display the details
    void display(){
        cout<<"Customer Details"<<endl;
        cout<<"Customer Name: "<<cname<<endl;
        cout<<"Customer account: "<<account<<endl;
        cout<< "customer Phone number: "<<phoneNo<<endl;
        cout<<"Customer address: "<<cadd<<endl;
        cout<<"Customer account opening balnace is: "<<bal<<endl;
    }

    // deposit function
    void deposit(float amount){
        bal = bal + amount;
        cout<<amount<<" is deposited successfully"<<endl;
    }

    // Withdraw function
    void withdraw(float amount){
        if(amount <= bal){
            bal = bal - amount;
            cout<<amount<<" is withdraw successfully"<<endl;
        }else{
            cout<<"Insufficient balance"<<endl;
        }
    }

    float balancecheck(){
        return bal;
    }
};
int main(){
    SavingAccount c1, c2;
    c1.open();
    c1.display();
    c1.deposit(2000);
    c1.withdraw(1550);
    cout<<"Remaining balance is = "<<c1.balancecheck();

    return 0;
}

/*
* Output of the program : 
enter the customer name:AnshuMittal
enter customer addres:B-block
Enter account number:24343243
Enter customer phone number:1234567891
Enter opening balance:500
Customer Details
Customer Name: AnshuMittal
Customer account: 24343040
customer Phone number: 1234567891
Customer address: B-block
Customer account opening balnace is: 500
2000 is deposited successfully
1550 is withdraw successfully
Remaining balance is = 950
*/