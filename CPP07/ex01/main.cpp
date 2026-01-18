#include "iter.hpp"

template <typename T>
void	swaptest(T &p1)
{
	std::cout << B << "prima = " << p1 << NO_C << "\n";
	p1 = 52;
	std::cout << LC << "dopo = " << p1 << NO_C << "\n";
	std::cout << "~~~" << "\n";
}

template <typename T>
void	ftprint(T &p1)
{
	std::cout << BGG << p1 << NO_C;
}

int main()
{
	char	s[] = "huhuhuhuh";
	iter(s, 10, &swaptest<char>);
	std::cout << M << "s: " << s << NO_C << "\n";

	std::cout << "\n";

	const char	cc[] = "const char*";
	iter(cc, 11, &ftprint<const char>);

	std::cout << "\n";

	std::cout << "\n";

	int	d[] = {6,8,9,4,6};
	iter(d, 5, &swaptest<int>);
	std::cout << M << "d: ";
	for(int i = 0; i < 5; i++)
		std::cout << d[i] << " ";
	std::cout << NO_C << "\n";
}
