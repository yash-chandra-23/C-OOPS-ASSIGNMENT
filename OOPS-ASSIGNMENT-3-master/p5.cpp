#include <iostream>
using namespace std;
float calculateCharges(float customer_time);
int main()
{
  int number;
  cout<<"enter the number of customers";
  cin>>number;
float customer_fees[number];

   float customer_times[number];

  int i;
  float a,b;

  for(i = 0; i < number; i++)

  {

    cout << "Enter the time of parking of " << i+1 << " customer: ";

    cin >> customer_times[i];
    a= a + customer_times[i];
    customer_fees[i] = calculateCharges(customer_times[i]);

  }

  for(i = 0; i < number; i++)

{
    cout << "Customer's " << i+1 << " fee for " << customer_times[i] << " = " << customer_fees[i] << endl;
    b= b + customer_fees[i];
}
    cout<<"Total Hours: "<<a<<endl;
    cout<<"Total charges: "<<b<<endl;
  return 0;

}


float calculateCharges(float customer_time)

{

  float amount = 2 + (0.5 * ((int)customer_time - 3));

  if(amount > 10)

    return 10;

  else return amount;

}
