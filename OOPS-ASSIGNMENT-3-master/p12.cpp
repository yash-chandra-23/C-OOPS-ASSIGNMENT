#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
void stringReverse(string str,int first,int last)
{
	cout<<str[last]<<" ";
	
	if(first==last)
	{
		return;
	}
	
	return stringReverse(str,first,last-1);
}
int main()
{
    string str;
    cout<<"Enter String:";
    getline(cin,str);
    int c= str.length();
    
	cout<<"The Reverse String is: ";
    stringReverse(str,0,c);
}
