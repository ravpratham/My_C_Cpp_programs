#include <iostream>
using namespace std;

int main(){
    int mat1[3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << "inp_matrix1["<<i<<"]["<<j<<"] = ";
            cin >> mat1[i][j];
        }
    }

    int mat2[3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << "inp_matrix2["<<i<<"]["<<j<<"] = ";
            cin >> mat2[i][j];
        }
    }

    

    for (int i=0;i<3;i++){
       cout << endl; 
        for (int j=0;j<3;j++){
            cout << mat1[i][j];
        }
    }

    for (int i=0;i<3;i++){
       cout << endl; 
        for (int j=0;j<3;j++){
            cout << mat2[i][j];
        }
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
int array[3][2];
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 2; j++)
{
cout<<"ns["<<i<<"]["<<j<<"]=  ";
cin>>array[i][j];
}
}
// output each array element’s value
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 2; j++)
{
cout << "Element at array[" << i
<< "][" << j << "]: ";
cout <<array[i] [j]<<endl;
}
}
return 0;
}*/