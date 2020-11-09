#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(a=1;a<=n;a++)
    {
        for(b=n;b>a;b--)
        {
            cout<<" ";
        }
        cout<<"*";
        for(b=1;b<(a-1)*2;b++)
        {
            cout<<" ";
        }
        if(a==1)
        {
            cout<<"\n";
        }
        else
        {
            cout<<"*\n";
        }
    }
    for(a=n-1;a>=1;a--)
    {
        for(b=n;b>a;b--)
        {
            cout<<" ";
        }
        cout<<"*";
        for(b=1;b<(a-1)*2;b++)
        {
            cout<<" ";
        }
        if(a==1)
        {
            cout<<"\n";
        }
        else
            cout<<"*\n";
    }
}
