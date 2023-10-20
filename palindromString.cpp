#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class stringPalindrome{
    char p[20];
    int i, n;
    int flag = 0;
    public:
    void input(){
        cout<<"Enter the character: "<<endl;
        cin>>p;
    }
    
    void output(){
        n = strlen(p);
        for(i=0; i<n; i++){
            if(p[i] != p[n - i - 1]){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout <<p<< " is a not palindrome" << endl; 
        } else{
            cout <<p<< " is a palindrome" << endl; 
        }
    }
};

int main(){
    stringPalindrome obj;
    obj.input();
    obj.output();

    return 0;
}

/*
* OUTPUT OF THE PROGRAM
Enter the character:
ABCDCBA
ABCDCBA is a palindrome

case 2:
Enter the character:
ABC
ABC is a not palindrome
*/