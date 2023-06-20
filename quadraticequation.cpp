#include <iostream>
#include <cmath>

void calcRoots(int a, int b, double discr)
{
	double froot, sroot;

	froot = (-b + sqrt(discr)) / (2 * a);
	sroot = (-b - sqrt(discr)) / (2 * a);

	std::cout << "First root: " << froot << "\n";
	std::cout << "Second root: " << sroot << "\n";
}

void checkDiscr(int a, int b, int c)
{
	const double discr = pow(b, 2) - 4 * a * c;
	std::cout << "Discriminant is: " << discr << "\n";

	if (discr > 0)
	{
		std::cout << "The equation has two different real roots." << "\n";
		calcRoots(a, b, discr);
	}
	else if (discr == 0)
	{
		std::cout << "The equation has two identical valid roots" << "\n";
		calcRoots(a, b, discr);
	}
	else
	{
		std::cout << "Equation has no roots" << "\n";
	}
}

int main()
{
	int a, b, c, x = 1;

	std::cout << "Enter a coefficient: ";
	std::cin >> a;
	std::cout << "Enter b coefficient: ";
	std::cin >> b;
	std::cout << "Enter c coefficient: ";
	std::cin >> c;

	if (a == 0 && b != 0)
	{
		std::cout << "Equation is linear, not quadratic" << "\n";
	}
	else
	{
		checkDiscr(a, b, c);
	}
}