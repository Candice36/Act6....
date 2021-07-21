#include <iostream>
#include <iomanip>

int main()
{

	double d =  160.2356;
	

	std::cout << std::fixed;
	std::cout << std::setprecision(3);
	std::cout << d;
}