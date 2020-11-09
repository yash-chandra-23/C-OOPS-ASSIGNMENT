#include <iostream>
using namespace std;
#include <math.h>
int main()
{
	cout << "pythagorean triples" << endl;
	
	for(int side1 = 1; side1 < 500; side1 ++)
	{
		for(int side2 = side1+1; side2 < 500; side2 ++)
		{
			for(int hypotenuse = side2+1; hypotenuse < 500; hypotenuse ++)
			{   
				if (pow(side1,2) + pow(side2,2) == pow(hypotenuse,2) && hypotenuse <= 500)
				{
					cout <<side1<<"^2"<< " + " << side2<<"^2"<< " = "  << hypotenuse<<"^2"<< endl;
				}
			}
		}	
	}	
	return 0;
}
