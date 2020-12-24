#include <iostream>

int sum(int a, int b)
{
       	return a + b; 
}

int main()
{
	int a = 1, b = 3;
	auto ptr_func = sum;
	std::cout << ptr_func(a, b) << std::endl;
	return 0;
}
