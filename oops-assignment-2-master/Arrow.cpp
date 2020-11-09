#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(a=1;a<=n;a++)
    {
        for(b=a;b<n;b++)
        {
            cout<<" ";
        }
        for(c=1;c<=(2*a-1);c++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(a=1;a<=2*n;a++)
    {
        for(b=1;b<n;b++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<"\n";
    }
}
