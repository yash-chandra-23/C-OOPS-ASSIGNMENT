#include<iostream>
using namespace std;
class Complex
{
	public:
		friend Complex operator*(Complex const &,Complex const &);
		Complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		void print()
		{
			cout<<real<<"+i"<<img<<endl;
		}
		private:
			int real,img;
			
};
Complex operator*(Complex const &obj1,Complex const &obj2)
{
	
	Complex result;
	result.real=(obj1.real*obj2.real)-(obj1.img*obj2.img);
	result.img=(obj1.real*obj2.img)+(obj2.real*obj1.img);
	return result;
}
int main()
{   int x,y,w,z;
	cout<<"enter the real part of 1st complex no.";
	cin>>x;
	cout<<"enter the imaginary part of 1st complex no.";
	cin>>y;
	Complex c1(x,y);
	cout<<"enter the real part of 2nd complex no.";
	cin>>w;
	cout<<"enter the imaginary part of 2nd complex no.";
	cin>>z;
	Complex c2(w,z);
	
	Complex c3=c1*c2;
	c1.print();
	c2.print();
	c3.print();
	
}
