#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  const int S = 10000;
  int arr[S];
  int c = 0;
    for(int k = 0; k < S; k++)
      arr[k] = 1;
    for (int i = 1; i < S; i++)
    {
    if (arr[i] == 1 && i != 1)
        {
          for (int j = i*2; j < S; j=j+i)
          {
              arr[j] = 0;
          }
        }
    }
        for(int a = 2; a < S; a++)
        {
          if(arr[a] == 1)
          {
            cout << a << " is a prime number\n";
            c++;
          }
        }
        cout << "A total of  " << c << " prime numbers were found.\n";
   return 0;
   
