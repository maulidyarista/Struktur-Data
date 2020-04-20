#include <iostream>

using namespace std;

int main()
{
    cout << "========================" << endl;
    cout << "-_-_SEARCHING NUMBER_-_-     " << endl;
    cout << "========================\n" << endl;

int a, numb_search, Data[10];
int b;
bool found = true;

    cout << "Enter the amount of Data : ";
    cin >> a;
    for(int c=0; c<a; c++)
    {
        cout <<"Enter the data - " <<c<<" = ";
        cin >> Data[c];
    }
    b=0;
    cout <<"\nThe data you want to find : ";
    cin >> numb_search;
    found=0;

    while((b<10)&&(found==0))
    {
        if(Data[b]== numb_search)
        {
        found=1;
        cout <<"\nNumber "<< numb_search<<" Found in position number "<<b;
        }
        else
        b=b+1;
    }
    if(found)
    cout<<"\n\nThe searched data is available"<<endl;
    else
    cout<<"\n\nThe searched data is unavailable"<<endl;
}
