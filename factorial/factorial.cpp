#include <iostream>
using namespace std;

int factorial(int n) // n! = n * (n-1)!, n>1, 1! = 1, 0! = 1;
{
	int prod = 1;

	for (int i = 1; i <= n; i++) // n! = 1 * 2 * 3 * ... * n
		prod = prod * i;

	return(prod);
}