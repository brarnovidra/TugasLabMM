#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char nim[8];
    int a = 0;
    cout<<"Soal 3 [Abrar Halim Novidra- 1301164383]"<<endl;
    do{
        cout << "Input NIM : ";
        cin >> nim;
        a = strlen(nim);
        if(a==8){
            cout<<nim[0]<<" menyatakan kode universitas"<<endl;
            cout<<nim[1]<<" menyatakan kode fakultas"<<endl;
            cout<<nim[2]<<" menyatakan kode jurusan"<<endl;
            cout<<nim[3]<<" menyatakan kode angkatan"<<endl;
            cout<<nim[4]<<nim[5]<<nim[6]<<nim[7]<<" menyatakan kode nomor mahasiswa."<<endl;
        }else{
            cout<<"Inputan Salah, NIM Harus 8 Digit"<<endl;
        }
	}while(a!=8);

    return 0;
}
