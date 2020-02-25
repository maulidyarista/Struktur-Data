#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

//deklarasi struck
struct data_pembeli
{
    long int kode_pbl[20]={"P001","P002","P003","P004","P005"};
    char nama[40]={ "DIANA", "RINA", "LINA", "DONI", "DODI" };
    char status [20]={ "M", "M", "BM", "BM", "M" };
}
//deklarasi variabel struct
data_pembeli[5];

struct data_barang
{
    char kode_brg[20]={"BRG001","BRG002","BRG003","BRG004","BRG005"};
    char nama_brg[40]={ "Pensil", "Buku Tulis", "Penghapus", "Penggaris", "Ballpoint" };
    int harga[20]={ "2000", "3500", "1000", "1500", "2500" };
}
data_barang[5];

int main()
{
    //input struct data pembeli
    int total, jumbel, uang;

    starthere:
    cout<<"Masukkan Kode Pembeli :"; cin>>data_pembeli[5].kode_pbl]; if(data_pembeli.kode_pbl==0){
    cout<<data_pembeli[5].nama; cout<<data_pembeli[5].status
    }else(data_pembeli[5].kode_pbl==1){ cout<<"Kode Anda Salah";
    goto starthere;
}
starthere2:
    cout<<"Masukkan Kode Barang :"; cin>>data_barang.kode_brg[; if(data_barang[5].kode_brg==0{
    cout<<[5].nama_brg; cout<<data_barang[5].harga;
    }else(barang_data.kode[5]_brg==1){ cout<<"Kode Anda Salah";
    goto starthere2;

    cout<<"Jumlah yang dibeli :"; cin>>jumlah<<endl<<endl; cout<<"Input uang anda :";



