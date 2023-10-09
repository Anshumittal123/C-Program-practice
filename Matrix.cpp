#include <iostream>
using namespace std;
class Matrix{
    private:
    int mat[2][2];
    public:
    void input(){
        cout<<"*************************"<<endl;
        cout<<"INPUT OF THE PROGRAM"<<endl;
        cout<<"*************************"<<endl;
        int i, j;
        cout<<"enter matrix elements: "<<endl;
        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                cin>>mat[i][j];
            }
        }
    }

    void output(){
        cout<<"*************************"<<endl;
        cout<<"OUTPUT OF THE PROGRAM"<<endl;
        cout<<"*************************"<<endl;
        int i, j;
        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                cout<<mat[i][j]<<endl;
            }
            cout<<endl;
        }
    }

    Matrix plus(Matrix Mat2){
        cout<<"*************************"<<endl;
        cout<<"PLUS A TWO MATRIX"<<endl;
        cout<<"*************************"<<endl;
        int i, j;
        Matrix Mat3;
        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                Mat3.mat[i][j] = mat[i][j] + Mat2.mat[i][j];
            }
        }
        return Mat3;
    }
};

int main(){
    Matrix M1, M2, M3;
    M1.input();
    M2.input();
    M1.output();
    M2.output();
    M3 = M1.plus(M2);
    M3.output();

    return 0; 
}

/*
*Output of the program 
*************************
INPUT OF THE PROGRAM
*************************
enter matrix elements:
2
2
2
2
*************************
INPUT OF THE PROGRAM
*************************
enter matrix elements:
2
2
2
2
*************************
OUTPUT OF THE PROGRAM
*************************
2
2

2
2

*************************
OUTPUT OF THE PROGRAM
*************************
2
2

2
2

*************************
PLUS A TWO MATRIX
*************************
*************************
OUTPUT OF THE PROGRAM
*************************
4
4

4
4
*/