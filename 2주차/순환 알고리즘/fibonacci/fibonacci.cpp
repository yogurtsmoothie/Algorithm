﻿#include <iostream>
using namespace std;

int Fibonacci(int n) // F(n) = F(n-2) + F(n-1), n > 1, F(0) = F(1) = 1;
{
	if (n == 0) return (1); //빠뜨리지 않도록 주의
	else if (n == 1) return (1); //빠뜨리지 않도록 주의
	else return(Fibonacci(n - 2) + Fibonacci(n - 1));
}

void main() {
	int n;
	cout << "숫자를 입력하세요 : ";
	cin >> n;
	cout << n << "번째 Fibonacci 숫자는 = " << Fibonacci(n) << endl;
}