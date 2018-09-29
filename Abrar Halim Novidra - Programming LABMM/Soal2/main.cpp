#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using  namespace std;
int main(){
    int M1['r']['s'],M2['r']['s'],tambah['r']['s'],pengurangan['r']['s'],Y['r']['s'],Z['r']['s'],X['r']['s'];
    int r,s;
    cout<<"Soal 2 [Abrar Halim Novidra- 1301164383]"<<endl;
    cout<<"Jumlah Baris = ";
    cin>>r;
    cout<<"Jumlah Kolom = ";
    cin>>s;
    cout<<endl;

    cout<<"Input Matrik A " <<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            cout<<"\tArray ["<<i<<"]["<<j<<"] = ";
            cin>>M1[i][j];
        }
    }
    getch();

    cout<<"Input Matrik B " <<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
           cout<<"\tArray ["<<i<<"]["<<j<<"] = ";
             cin>>M2[i][j];
        }
    }
    getch();

    cout<<"\nMatrik A "<<endl;
    for (int a=0;a<r;a++){
        cout<<"\t [ ";
        for (int b=0;b<s;b++){
           cout<<M1[a][b]<<" ";
        }
        cout<<"] "<<endl;
    }
    getch();

    cout<<"\nMatrik B "<<endl;
    for (int a=0;a<r;a++){
        cout<<"\t [ ";
        for (int b=0;b<s;b++){
           cout<<M2[a][b]<<" ";
        }
        cout<<"] "<<endl;
    }
    getch();

    cout<<"\nHasil Penjumlahan Matrik A+B "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            tambah[i][j]=M1[i][j]+M2[i][j];
        }
    }
    for (int i=0;i<r;i++){
        cout<<"\t [ ";
        for (int j=0;j<s;j++){
            cout<<tambah[i][j]<<" ";
        }
        cout<<"] "<<endl;
    }
    getch();

    cout<<"\nHasil Perkalian Matrik A*B "<<endl;
    for (int i=0;i<r;i++){
        for (int j=0;j<s;j++){
            X[i][j]=0;
            for(int k=0;k<r;k++){
                X[i][j]=X[i][j]+M1[i][k]*M2[k][j];
            }
        }
    }

    for (int i=0;i<r;i++){
        cout<<"\t [ ";
        for (int j=0;j<s;j++){
            cout<<X[i][j]<<" ";
        }
        cout<<" ]"<<endl;
    }
    getch();

    cout<<"\nHasil Pengurangan Matrik A-B "<<endl;
    for (int i=0;i<r;i++){
        for (int j=0;j<s;j++){
            pengurangan[i][j]=M1[i][j]-M2[i][j];
        }
    }
    for (int i=0;i<r;i++){
        cout<<"\t [ ";
        for (int j=0;j<s;j++){
            cout<<pengurangan[i][j]<<" ";
        }
        cout<<" ]"<<endl;
    }
    getch();

    cout<<"\nHasil Perpangkatan Matrik A^2  "<<endl;
    for (int i=0;i<r;i++){
        for (int j=0;j<s;j++){
            Y[i][j]=0;
            for(int k=0;k<r;k++){
                Y[i][j]=Y[i][j]+M1[i][k]*M1[k][j];
            }
        }
    }

    for (int i=0;i<r;i++){
        cout<<"\t [ ";
        for (int j=0;j<s;j++){
            cout<<Y[i][j]<<" ";
        }
        cout<<" ]"<<endl;
    }
    getch();

    cout<<"\nHasil Perpangkatan Matrik B^2  "<<endl;
    for (int i=0;i<r;i++){
        for (int j=0;j<s;j++){
            Z[i][j]=0;
            for(int k=0;k<r;k++){
                Z[i][j]=Z[i][j]+M2[i][k]*M2[k][j];
            }
        }
    }

    for (int i=0;i<r;i++){
        cout<<"\t [ ";
        for (int j=0;j<s;j++){
            cout<<Z[i][j]<<" ";
        }
        cout<<" ]"<<endl;
    }
    getch();

 return 0;
}
