// Project No. 1 
// Clock implementation

#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
    int h, m, s, a, arr;
    arr = a = 0;

    while( arr == 0)
    {
        cout<<"Enter hour : "<<endl;
        cin>>h;

        cout<<"Enter Minutes : "<<endl;
        cin>>m;

        cout<<"Enter Seconds : "<<endl;
        cin>>s;

        if( h < 24 && m < 60 && s < 60)
        {
            arr++;
        }
        else
        {
            system("cls");
        }
    }

    while( a== 0)
    {
        system("cls");
        cout<<h<<":"<<m<<":"<<s<<endl;     // h: m: s
        Sleep(1000);
        s++;

        if(s > 59)  // for seconds
        {
            s =0;
            m++;
        }

        if(m > 59)  // for minutes
        {
            m= 0;
            h++;
        }

        if(h > 24)  // for hour
        {
            h =0;
        }
    }
    return 0;
}