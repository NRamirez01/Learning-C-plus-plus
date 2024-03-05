#include <iostream>

int main()
{	
	[[maybe_unused]] int i = 1;


	int x{};      // value initialization
	std::cin >> x; // we're immediately replacing that value
	std::cout << '\n' << x; // we're immediately replacing that value
	return 0;
}