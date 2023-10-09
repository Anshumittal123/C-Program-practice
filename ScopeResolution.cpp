#include <iostream>
using namespace std;
class complex{
    private:
    int real, imag;
    public:
    void input();
    void output();
    complex plus(complex c2);
};

void complex::input(){
    cout<<"********************************"<<endl;
    cout<<"INPUT OF THE REAL AND IMAG"<<endl;
    cout<<"********************************"<<endl;
    cout<<"Enter real and imag value"<<endl;
    cin>>real>>imag;
}

void complex::output(){
    cout<<"********************************"<<endl;
    cout<<"INPUT OF THE REAL AND IMAG"<<endl;
    cout<<"********************************"<<endl;
    cout<<real;
    if(imag >=0){
        cout<<"+"<<imag<<"i"<<endl;
    } else{
        cout<<imag<<"i"<<endl;
    }
}

complex complex::plus(complex c2){
    cout<<"********************************"<<endl;
    cout<<"PLUS OF THE REAL AND IMAG NUMBER"<<endl;
    cout<<"********************************"<<endl;
    complex c3;
    c3.real = real + c2.real;
    c3.imag = imag + c2.imag;
    return c3; 
}

int main(){
    complex c1, c2, c3;
    c1.input();
    c1.output();
    cout<<endl;   
    c2.input();
    c2.output();
    cout<<endl; 
    c3 = c1.plus(c2);
    c3.output();
    return 0; 
}

/*
*OUTPUT OF THE PROGRAM

********************************
INPUT OF THE REAL AND IMAG
********************************
Enter real and imag value
2
3
********************************
INPUT OF THE REAL AND IMAG
********************************
2+3i

********************************
INPUT OF THE REAL AND IMAG
********************************
Enter real and imag value
4
5
********************************
INPUT OF THE REAL AND IMAG
********************************
4+5i

********************************
PLUS OF THE REAL AND IMAG NUMBER
********************************
********************************
INPUT OF THE REAL AND IMAG
********************************
6+8i

*/