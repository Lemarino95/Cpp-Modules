#include "Span.hpp"
#include <cstdlib>
#include <ctime>

#define TEST 5
int main()
{
	Span	span1;
	Span	span2(TEST);
	std::vector<int> vect;
	vect.push_back(5);
	vect.push_back(17);
	vect.push_back(3);
	vect.push_back(8);
	vect.push_back(4);
	// vect.push_back(62);

	try
	{
		span2.addSequence(vect);
		// span2.addNumber(5);
		// span2.addNumber(17);
		// span2.addNumber(3);
		// span2.addNumber(8);
		// span2.addNumber(4);
		span2.addNumber(62);
		Span	span3(span2);

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
		std::cout << BGG << "Span3: " << NO_C;
		std::cout << "size=" << span3.getSize() << "; ";
		for (int i = 0; i < span3.getSize(); i++)
			std::cout << G << span3.getElem(i)<< "(" << i << ")" << "; " << NO_C;

		std::cout << "\n";
	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

		std::cout << M << span3.shortestSpan() << "\n";
		std::cout << B << span3.longestSpan() << NO_C << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << R << e.what() << NO_C << '\n';
	}
}

/* #define TEST 50000
int	main()
{
	Span	span(TEST);
	std::srand(std::time(0));

	try
	{
		for (int i = 0; i < TEST; i++)
		{
			span.addNumber(std::rand());
		}

		for (int i = 0; i < TEST; i++)
		{
			std::cout << G << span.getElem(i) << "; " << NO_C;
			std::cout << "\n";
		}

		std::cout << M << span.shortestSpan() << "\n";
		std::cout << B << span.longestSpan() << NO_C << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << R << e.what() << NO_C << '\n';
	}
} */
