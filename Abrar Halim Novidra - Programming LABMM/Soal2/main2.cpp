#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using  namespace std;
int main(){
int K['r']['s'],L['r']['s'],M['r']['s'],N['r']['s'],O['r']['s'],T['r']['s'],X['r']['s'];
int pilih,max,min;
int a,b,x,r,s;
system("CLS");
welcome:
system("CLS");
cout<<"Jumlah Baris = ";
cin>>r;
cout<<"Jumlah Kolom = ";
cin>>s;
cout<<endl;
menu:
system("CLS");
cout<<"**************************************************************************"<<endl;
cout<<"**********                Program Matrik "<<r<<" * "<<s<<"                  **********"<<endl;
cout<<"**************************************************************************"<<endl;
cout<<"\n\n\t\tMENU : "<<endl;
cout<<"\t1.Input Matrik";
cout<<"\n\t2.Output Matrik";
cout<<"\n\t3.Penjumlahan Matrik";
cout<<"\n\t4.Pengurangan Matrik";;
cout<<"\n\t9.Perkalian Dua Matrik";
cout<<"\n\n\t11.Setel Ulang Baris Dan Kolom Matrik";
cout<<"\n\t12.Keluar Program";
cout<<"\n\tnMasukkan Pilihan : ";
cin>>pilih;
 if(pilih==1){
system("CLS");
 input:
system("CLS");
 cout<<"\t\tMENU INPUT : ";
 cout<<"\n\t\t1.Input Matrik A";
 cout<<"\n\t\t2.Input Matrik B";
 cout<<"\n\t\t3.Kembali Ke Menu Utama";
 cout<<"\n\t\tMasukkan Pilihan : ";
 cin>>pilih;
 cout<<endl;
    if(pilih==1){
     for(int a=0;a<r;a++){
        for(int b=0;b<s;b++){
           cout<<"\tArray ["<<a<<"]["<<b<<"] = ";
             cin>>K[a][b];
          }
       }
       getch();
       goto input;
    }
  else if(pilih==2){
     for(int a=0;a<r;a++){
        for(int b=0;b<s;b++){
           cout<<"\tArray ["<<a<<"]["<<b<<"] = ";
             cin>>L[a][b];
          }
       }
       getch();
       goto input;
    }
  else if(pilih==3){
     goto menu;
    }
    else {
     cout<<"\n\tPilihan Anda Salah . . .\n";
         cout<<"\tERROR";
     getch();
     goto input;
  }
 }
 else if(pilih==2){
system("CLS");
 output:
system("CLS");
 cout<<"\tMENU OUTPUT : ";
 cout<<"\n\t1.Output Matrik A";
 cout<<"\n\t2.Output Matrik B";
 cout<<"\n\t3.Kembali Ke Menu Utama";
 cout<<"\n\tMasukkan Pilihan : ";
 cin>>pilih;
  if(pilih==1){
       cout<<"\n\tMatrik A\n";
         for (int a=0;a<r;a++){
        for (int b=0;b<s;b++){
           cout<<K[a][b]<<"\t";
            }
            cout<<endl;
       }
       getch();
       goto output;
    }
    else if(pilih==2){
       cout<<"\n\tMatrik B\n";
     for (int a=0;a<r;a++){
        for (int b=0;b<s;b++){
           cout<<L[a][b]<<"\t";
          }
            cout<<endl;
       }
       getch();
       goto output;
    }
    else if(pilih==3){
     goto menu;
    }
    else {
     cout<<"\n\tPilihan Anda Salah . . .\n";
     cout<<"\tERROR";
         getch();
     goto output;
    }
 }
   else if(pilih==3){
system("CLS");
 jumlah:
system("CLS");
   cout<<"MENU JUMLAH: ";
   cout<<"\n\t1.Matrik A + Matrik B";
   cout<<"\n\t2.Kembali Ke Menu Utama";
   cout<<"\n\tMasukkan Pilihan : ";
   cin>>pilih;
    if(pilih==1){
       cout<<"\n\tMatrik A \n";
       for (int a=0;a<r;a++){
        for (int b=0;b<s;b++){
           cout<<K[a][b]<<"\t";
            }
            cout<<endl;
       }
       getch();
         cout<<"\n\tMatrik B \n";
       for (int a=0;a<r;a++){
        for (int b=0;b<s;b++){
           cout<<L[a][b]<<"\t";
            }
            cout<<endl;
       }
         getch();
         cout<<"\n\tMatrik A + Matrik B \n";
       for(int a=0;a<r;a++){
          for(int b=0;b<s;b++){
             M[a][b]=K[a][b]+L[a][b];
            }
         }
         for (int a=0;a<r;a++){
        for (int b=0;b<s;b++){
           cout<<M[a][b]<<"\t";
          }
            cout<<endl;
       }
       getch();
       goto jumlah;
      }
      else if(pilih==2){
     goto menu;
    }
      else {
     cout<<"\n\tPilihan Anda Salah . . .\n";
         cout<<"\tERROR";
     getch();
     goto jumlah;
  }
   }
   else if(pilih==4){
system("CLS");
 kurang:
system("CLS");
   cout<<"\tMENU KURANG: ";
   cout<<"\n\t1.Matrik A - Matrik B";
   cout<<"\n\t2.Kembali Ke Menu Utama";
   cout<<"\n\tMasukkan Pilihan : ";
   cin>>pilih;
    if(pilih==1){
       cout<<"\n\tMatrik A \n";
       for (int a=0;a<r;a++){
        for (int b=0;b<s;b++){
           cout<<K[a][b]<<"\t";
            }
            cout<<endl;
       }
         getch();
         cout<<"\n\tMatrik B \n";
       for (int a=0;a<r;a++){
        for (int b=0;b<s;b++){
           cout<<L[a][b]<<"\t";
            }
            cout<<endl;
       }
         getch();
         cout<<"\n\tMatrik A - Matrik B \n";
         for (int a=0;a<r;a++){
        for (int b=0;b<s;b++){
             N[a][b]=K[a][b]-L[a][b];
            }
         }
         for (int a=0;a<r;a++){
        for (int b=0;b<s;b++){
           cout<<N[a][b]<<"\t";
          }
            cout<<endl;
       }
       getch();
       goto kurang;
      }
      else if(pilih==2){
     goto menu;
    }
      else {
     cout<<"\n\tPilihan Anda Salah . . .\n";
         cout<<"\tERROR";
     getch();
     goto kurang;
  }
   }
   else if(pilih==5){

   }
   if(pilih==7){

   }
if(pilih==8){

}
if(pilih==9){
    system("CLS");
    kalimatrik:
    system("CLS");
   cout<<"\tMENU KALI MATRIK : ";
   cout<<"\n\t1.Matrik A * Matrik B";
   cout<<"\n\t2.Kembali Ke Menu Utama";
   cout<<"\n\tMasukkan Pilihan : ";
   cin>>pilih;
    if(pilih==1){
       if(r==s){
          cout<<"\n\tMatrik A \n";
          for (int a=0;a<r;a++){
         for (int b=0;b<s;b++){
            cout<<K[a][b]<<"\t";
           }
           cout<<endl;
        }
          getch();
          cout<<"\n\tMatrik B \n";
          for (int a=0;a<r;a++){
         for (int b=0;b<s;b++){
            cout<<K[a][b]<<"\t";
           }
           cout<<endl;
        }
          getch();
            for (int a=0;a<r;a++){
             for (int b=0;b<s;b++){
                X[a][b]=0;
                  for(int c=0;c<r;c++){
                   X[a][b]=X[a][b]+K[a][c]*L[c][b];
                  }
               }
            }
            cout<<"\n\tMatrik A * Matrik B \n";
            for (int a=0;a<r;a++){
             for (int b=0;b<s;b++){
                cout<<X[a][b]<<"\t";
               }
               cout<<endl;
            }
            getch();
            goto kalimatrik;
         }
         if(r!=s){
          cout<<"\n\tMatrik Anda Tidak Dapat Mengeksekusi Operasi Ini\n";
            cout<<"\tKarena Ordo Matrik Anda Tidak Mendukung\n";
    getch();
            goto kalimatrik;
         }
      }
      else if(pilih==2){
     goto menu;
    }
      else {
     cout<<"\n\tPilihan Anda Salah . . .\n";
         cout<<"\tERROR";
     getch();
     goto kalimatrik;
  }
   }
   else if(pilih==11){
      goto welcome;
   }
   else if(pilih==12){
    cout<<"\n\tMakasih Ya . . ^_^ \n";
      goto end;
   }
   else {
    cout<<"\n\tPilihan Anda Salah . . .\n";
    cout<<"\tERROR";
    getch();
    goto menu;
   }
end:
getch();
system ("pause");
}
