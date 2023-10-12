// program of constructor 
#include <iostream>
using namespace std;
class complex{
    int real, imag;
    public:
    complex(){
        real =0;
        imag=0;
    }
    void input(){
        cout<<"Enter real and imaginary value: "<<endl;
        cin>>real>>imag;
    }
    complex(int r, int i){
        real=r;
        imag = i;
    }
    void output(){
        cout<<real;
        if(imag >= 0){
            cout<<"+"<<imag<<"i"<<endl;
        }else{
            cout<<imag<<"i"<<endl;
        }
    }
};

int main(){
    complex c1, c2(2, 3);
    c1.input();
    c1.output();
    c2.output();

    return 0; 
}

/*
* OUTPUT OF THE PROGRAM
Enter real and imaginary value:
3
4
3+4i
2+3i
*/