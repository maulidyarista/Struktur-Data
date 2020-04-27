#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;

main()
{
    int i, j, a, k, m;
    char nama[5][20], temp[40];

    cout<<"Inputkan 5 Nama\n";

    for (i=1;i<=5;i++)
     { cout<<"Input nama ke-"<<i<<" = ";gets(nama[i]);
       if (i>1)
        { for (j=1;j<=(i-1);j++)
           { a=(strcmp(nama[i], nama[j]));
               if (a<=0)
                { strcpy (temp, nama[i]);
                  for (k=(i-1);k>=j;k--)
                   { m=(k+1);
                     strcpy (nama[m], nama[k]);
                   }
                  strcpy (nama[j], temp);
                }
           }
        }
      }
    cout<<"\nHasil pengurutannya adalah : \n";
    for (i=1;i<=5;i++)
     { cout<<"\n"<<nama[i];}
return 0;
}
