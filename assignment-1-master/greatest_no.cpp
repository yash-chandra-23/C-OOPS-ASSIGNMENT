#include<iostream>
using namespace std;
int main() {
	int num1,num2,num3;
	cout<<"Enter value for first number: ";
	cin>>num1;
	cout<<"Enter value for second number: ";
	cin>>num2;
	cout<<"Enter value for third number: ";
	cin>>num3;
	if(num1>num2&&num1>num3) {
		cout<<"greatest number is: "<<num1<<endl;
	} else if(num2>num1&&num2>num3) {
		cout<<num2<<" is the greatest number"<<endl;
	} else {
		cout<<"greatest number is: "<<num3<<endl;
	}
	return 0;
}
