#include <iostream>
using namespace std;

int factorial(int n) // n! = n * (n-1)!, n>1, 1! = 1, 0! = 1;
{
	if (n == 0) return (1);
	else if (n == 1) return (1);
	else //if(n > 1)
	{
		int prod = n * factorial(n - 1);
		return prod;
	}
}