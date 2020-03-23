#include <iostream>
#include <conio.h>
#include <malloc.h>
#include <cstdlib>
using namespace std;

struct node
{
      string student;
      int nim;
      node* next;
};

node* p;
node* q;
node* r;
node* data;
node* gone;
node* help;

void initialization()
{
      p = NULL; //Inisialisasi
      q = NULL; //Inisialisasi
}

void memasukkan()
{
      node* recent;
      for(int i=0;i<4;i++) {
      recent = new node;
      cout<<"Masukan Nama Mahasiswa : ";
      cin>>recent->student;
      cout<<"Masukan NIM Mahasiswa  : ";
      cin>>recent->nim;
      recent->next = NULL;
      if(p == NULL) {
        p = recent;
        p->next = NULL;
      } else {
        help = p;
        while(help->next != NULL) {
            help = help->next;
        }
        help->next = recent;
      }
    }
}


void deleted()
{
    string d;
    if (p != NULL)
    {
    if(p->next != NULL)
    {
    help = p;
    while(help->next->next!=NULL)
    {
    help = help->next;
    }
    gone = help->next;
    d = gone->student;
    help->next = NULL;
    delete gone;
    }
    else
    {
    d = p->student;
    p = NULL;
    }
    cout<<d<<" terhapus";
    }
    else
    cout<<"Masih kosong\n";
}
void print()
{
      r = p;
      if(p == NULL)
            cout<<"\ntidak ada data dalam linked list"<<endl;
      else
      {
            cout<<"Nama Mahasiswa \t NIM \n";
            while(r!=NULL)
            {
                  cout<<r->student<<"\t\t"<<r->nim<<endl;
                  r = r->next;
            }
            cout<<endl;
      }
}

int main()
{
    int nim;
    string mahasiswa;
      initialization();
      memasukkan();
      print();
      deleted();
      cout<<endl;
      print();
      return EXIT_SUCCESS;
}
