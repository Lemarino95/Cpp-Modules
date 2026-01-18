#include "whatever.hpp"


int	main()
{
	std::cout << Y << "/* ~~~~~~~~~~~~~~ INT ~~~~~~~~~~~~~~~~~ */" << NO_C << "\n";
	int a = 2;
	int b = 7;

	std::cout << G << "a = " << a;
	std::cout << ", b = " << b << NO_C << "\n";
	swap(a, b);
	std::cout << LG << "a = " << a;
	std::cout << ", b = " << b << NO_C << "\n";
	std::cout << "max : " << ::max(a, b) << "\n";
	std::cout << "min : " << ::min(a, b) << "\n";

	std::cout << Y << "/* ~~~~~~~~~~~~~~ CHAR ~~~~~~~~~~~~~~~~~ */" << NO_C << "\n";
	char	c1 = 'g';
	char	c2 = '$';

	std::cout << B << "c1 = " << c1;
	std::cout << ", c2 = " << c2 << NO_C << "\n";
	::swap(c1, c2);
	std::cout << LC << "c1 = " << c1;
	std::cout << ", c2 = " << c2 << NO_C << "\n";
	std::cout << "min : " << ::min(c1, c2) << "\n";
	std::cout << "max : " << ::max(c1, c2) << "\n";

	std::cout << Y << "/* ~~~~~~~~~~~~~~ CHAR* ~~~~~~~~~~~~~~~~~ */" << NO_C << "\n";

	char	s1[] = "ca";
	char	s2[] = "sto";

	std::cout << M << "s1 = " << s1;
	std::cout << ", s2 = " << s2 << NO_C << "\n";
	swap(*s1, *s2);
	std::cout << BM << "s1 = " << s1;
	std::cout << ", s2 = " << s2 << NO_C << "\n";
	std::cout << "max : " << ::max(*s1, *s2) << "\n";
	std::cout << "min : " << ::min(*s1, *s2) << "\n";

	std::cout << Y << "/* ~~~~~~~~~~~~~~ STRING ~~~~~~~~~~~~~~~~~ */" << NO_C << "\n";

	std::string	s4 = "ro";
	std::string	s5 = "ma";

	std::cout << R << "s4 = " << s4;
	std::cout << ", s5 = " << s5 << NO_C << "\n";
	swap(s4, s5);
	std::cout << BR << "s4 = " << s4;
	std::cout << ", s5 = " << s5 << NO_C << "\n";
	std::cout << "max : " << ::max(s4, s5) << "\n";
	std::cout << "min : " << ::min(s4, s5) << "\n";

}
