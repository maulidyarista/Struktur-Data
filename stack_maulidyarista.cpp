#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <string>
#define MaxElemen 200

using namespace std;

struct Timbunan
{
 char Contents[MaxElemen];
   int Top;
} T;

void PUSH (char p){
if(T.Top == MaxElemen){
 cout<<"Tumpukan Sudah Penuh";
 getch();
}
else{
 T.Top = T.Top + 1;
 T.Contents[T.Top] = p;
}
}

char POP(){
 char result;
 if(T.Top == 0){
    cout<<"Tumpukan sudah kosong";
      result = ' ';
   }
   else{
    result = T.Contents[T.Top];
      T.Top = T.Top - 1;
   }
   return result;
}


int main()
{
     int i,total,backer;
     char Sentence[MaxElemen];
     bool palindrome=true;

     T.Top =0;
     cout<<"Aplikasi Stack untuk Membalik kalimat\n";
     cout<<"======================================="<<endl;
     cout<<"     Maulidya Rista Yuniar NIM 057    "<<endl;
     cout<<"======================================="<<endl;


     cout<<endl<<"Masukkan sembarang kalimat : ";
     cin.getline(Sentence,sizeof(Sentence));
     cout<<"Kalimat Asli : "<<Sentence;

     total=strlen(Sentence);
     backer=total-1;
     cout<<endl<<"jumlah kata= "<<total<<endl;


     for(i=0;i<strlen(Sentence);i++)
     {
      PUSH(Sentence[i]);
      }

      cout<<"Kalimat Setelah di Balik : ";

      for (i=0;i<strlen(Sentence);i++)
      {
       cout<<""<<POP();
      }

      for (int a=0;a<total;a++)
      {
          if((char)tolower(Sentence[a])!=(char)tolower(Sentence[backer]))
            palindrome=false;
          break;
      }
            if (palindrome)
                cout<<"palindrome";
            else
                cout<<"\nbukan palindrome";
            return 0;
       getch();
    }

