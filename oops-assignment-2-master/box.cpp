#include<iostream>
using namespace std;
int main()
{
    int i,j,c,r;
    cout<<"Enter number of rows:";
    cin>>c;
    cout<<"Enter number of columns:";
    cin>>r;
    for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0)
			{cout << "*";}
			else if (i == r - 1)
			{
				cout << "*";
			} else if (j == 0 )
			{
				cout << "*";
			} else if ( j == c - 1)
			{
				cout << "*";

			} else {
				cout << " ";
			}

		}
		cout << "\n";
         }
}
