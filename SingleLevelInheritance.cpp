#include <iostream>
using namespace std;
class A{
    public:
    int i;
    void showi(){
        cout<<"Output of the class A"<<endl;
        cout<<"i = "<<i<<endl;
    }
};
class B : public A{
    public:
    int j;
    void showj(){
        cout<<"Output of the Class B"<<endl;
        cout<<"there are value of class A. we can access it. with the use of Inheritance."<<endl;
        cout<<"j ="<<j<<endl;
    }
};

int main(){
    A obj1;
    obj1.i=2;
    obj1.showi();
    B obj2;
    obj2.i=3;
    obj2.j=4;
    obj2.showi();
    obj2.showj();

    return 0;
}

/*
* OUTPUT OF THE INHERITANCE PROGRAM
Output of the class A
i = 2
Output of the class A
i = 3
Output of the Class B
there are value of class A. we can access it. with the use of Inheritance.
j =4
*/