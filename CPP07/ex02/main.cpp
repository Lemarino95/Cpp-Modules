#include "Array.hpp"

#define TEST 7

class Tommi
{
	public:
		std::string	name;
		Tommi() {name = "tommi";}
};

std::ostream& operator<<(std::ostream&os, const Tommi&tommi)
{
	os << tommi.name;
	return os;
}

int main()
{
	Array<int>	emptyarr;

	std::cout << "Emptyarr size: " << emptyarr.size() << "\n";
	try { std::cout << "Emptyarr[1]: " << emptyarr[1] << "\n"; }
	catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout  << "\n";

	Array<int>	arrInt(TEST);
	std::cout << "ArrInt size: " << arrInt.size() << "\n";
	try { std::cout << "ArrInt[1]: " << arrInt[1] << "\n"; }
	catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	try { std::cout << "ArrInt[TEST + 1]: " << arrInt[TEST + 1] << "\n"; }
	catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


	std::cout  << "\n";

	Array<char>	arrChar(TEST);
	std::cout << "ArrChar size: " << arrChar.size() << "\n";
	std::string str = "fareweel";
	for (int i = 0; i < TEST; i++)
	{
		arrChar[i] = str[i];
	}
	try
	{
		for (int i = 0; i < TEST; i++)
		{
			std::cout << "ArrChar[i]: " << arrChar[i] << "\n";
		}
	}
	catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout  << "\n";

	Array<Tommi>	tommi(TEST);
	// tommi[1] = Tommi("Tomtom");
	std::cout << "\"" << tommi[1] << "\"" << "\n";

	// Array<char>	arrChar2(arrChar);
	// for (int i = 0; i < TEST; i++)
	// {
	// 	std::cout << "ArrChar2[i]: " << arrChar2[i] << "\n";
	// }
}
