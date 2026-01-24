#include "easyfind.hpp"

int main()
{
	std::vector<int> ar;
	ar.push_back(1);
	ar.push_back(2);
	ar.push_back(3);
	ar.push_back(42);
	ar.push_back(5);
	try
	{
		easyfind(ar, 42);
		easyfind(ar, 9);
	}
	catch(std::exception &e)
	{
		std::cout << R << "Exception caught:" << e.what() << NO_C << std::endl;
	}
}
