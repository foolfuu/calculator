#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void jam(long double x , long double y)
{
    cout<<x+y;
    return;
}

void man(long double x , long double y)
{
    cout<<x-y;
    return;
}

void zar(long double x , long double y)
{
    cout<<x*y;
    return;
}

void tag(long double x , long double y)
{
    cout<<x/y;
    return;
}

void sinos(long double x)
{
    cout<<sin(x);
    return;
}

void cosinos(long double x)
{
    cout<<cos(x);
    return;
}

void sqrte(long double x)
{
    cout<<sqrt(x);
    return;
}

void gha(long double x)
{
    if(x < 0)
    {
        x = x*-1;
    }
    cout<<x;
    return;
}

void power(long double x,long double y)
{
    cout<<pow(x,y);
    return;
}

void fisa(long double x,long double y)
{
    cout<<sqrt((x*x) + (y*y));
    return;
}




int main()
{
    cout <<"1: +"<<endl
         <<"2: -"<<endl
         <<"3: *"<<endl
         <<"4: /"<<endl
         <<"5: sinos"<<endl
         <<"6: cosinos"<<endl
         <<"7: sqrt"<<endl
         <<"8: ||"<<endl
         <<"9: power"<<endl
         <<"10: fisaghores"<<endl
         <<"11: exit"<<endl;

    string xc;
    while(1)
    {
        cout<<endl<<endl<<"Enter your number: ";
        cin>>xc;

        if(xc == "1")
        {
            long double a,b;
            cout<<"number1: ";
            cin>>a;
            cout<<"number2: ";
            cin>>b;
            cout<<a<<" + "<<b<<" = ";
            jam(a,b);

        }

        else if(xc == "2")
        {
            long double a,b;
            cout<<"number1: ";
            cin>>a;
            cout<<"number2: ";
            cin>>b;
            cout<<a<<" - "<<b<<" = ";
            man(a,b);
        }

        else if(xc == "3")
        {
            long double a,b;
            cout<<"number1: ";
            cin>>a;
            cout<<"number2: ";
            cin>>b;
            cout<<a<<" * "<<b<<" = ";
            zar(a,b);
        }

        else if(xc == "4")
        {
            long double a,b;
            cout<<"number1: ";
            cin>>a;
            cout<<"number2: ";
            cin>>b;
            cout<<a<<" / "<<b<<" = ";
            tag(a,b);
        }

        else if(xc == "5")
        {
            long double a;
            cout<<"number1: ";
            cin>>a;
            cout<<"sin("<<a<<") = ";
            sinos(a);
        }

        else if(xc == "6")
        {
            long double a;
            cout<<"number1: ";
            cin>>a;
            cout<<"cos("<<a<<") = ";
            cosinos(a);
        }

        else if(xc == "7")
        {
            long double a;
            cout<<"number1: ";
            cin>>a;
            cout<<"sqrt("<<a<<") = ";
            sqrte(a);
        }

        else if(xc == "8")
        {
            long double a;
            cout<<"number1: ";
            cin>>a;
            cout<<"|"<<a<<"| = ";
            gha(a);
        }

        else if(xc == "9")
        {
            long double a,b;
            cout<<"number1: ";
            cin>>a;
            cout<<"number2: ";
            cin>>b;
            cout<<a<<"**"<<b<<" = ";
            power(a,b);
        }

        else if(xc == "10")
        {
            long double a,b;
            cout<<"1: ";
            cin>>a;
            cout<<"2: ";
            cin>>b;
            cout<<"3: ";
            fisa(a,b);
        }
        else if(xc == "11")
            break;
    }

    //getch();
    return 1;
}
