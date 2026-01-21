#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &obj) { return *this; }

ScalarConverter::ScalarConverter(const ScalarConverter &obj) { operator=(obj); }

ScalarConverter::~ScalarConverter() {}

static void	printinvalid(char*)
{
	// std::cout << "~~~~~~~~~~INVALID~~~~~~~~~~~~~~" << "\n";
	std::cout << "char: " << "impossible" << "\n";
	std::cout << "int: " << "impossible" << "\n";
	std::cout << "float: " << "nanf" << "\n";
	std::cout << "double: " << "nan" << "\n";
}

// std::fixed - Forces fixed-point notation (always shows decimals)
// std::setprecision(n) - Sets number of digits after decimal point
static void	printchar(char* input)
{
	char	c = input[0];

	// std::cout << "~~~~~~~~~~CHAR~~~~~~~~~~~~~~" << "\n";
	std::cout << "char: " << "\'" << c << "\'" << "\n";
	std::cout << "int: " << static_cast<int>(c) << "\n";
	std::cout << std::fixed << std::setprecision(1);
	std::cout <<  "float: " << static_cast<float>(c) << "f" << "\n";
	std::cout << "double: " << static_cast<double>(c) << "\n";
}

static void	printint(char* input)
{
	float	f = std::atof(input);
	int		i = std::atoi(input);

	// std::cout << "~~~~~~~~~~INT~~~~~~~~~~~~~~" << "\n";
	if (f > 126 || f < 0)
		std::cout << "char: impossible" << "\n";
	else if (!isprint(i))
		std::cout << "char: Non displayable" << "\n";
	else
		std::cout << "char: " << "\'" << (char)i << "\'" << "\n";

	if (f < static_cast<float>(INT_MIN) || f > static_cast<float>(INT_MAX))
		std::cout << "int: impossible" << "\n";
	else
		std::cout << "int: " << i << "\n";

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(i) << "f" << "\n";
	std::cout << "double: " << static_cast<double>(i) << "\n";
}

static void	printfloat(char* input)
{
	float	f = std::atof(input);

	// std::cout << "~~~~~~~~~~FLOAT~~~~~~~~~~~~~~" << "\n";
	if (f > 126 || f < 0)
		std::cout << "char: impossible" << "\n";
	else if (!isprint(f))
		std::cout << "char: Non displayable" << "\n";
	else
		std::cout << "char: " << "\'" << (char)f << "\'" << "\n";

	if (f < static_cast<float>(INT_MIN) || f > static_cast<float>(INT_MAX))
		std::cout << "int: impossible" << "\n";
	else
		std::cout << "int: " << static_cast<int>(f) << "\n";

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << "\n";
	std::cout << "double: " << static_cast<double>(f) << "\n";
}

static void	printdouble(char* input)
{
	char*	end = NULL;
	double	d = std::strtod(input, &end);

	// std::cout << "~~~~~~~~~~DOUBLE~~~~~~~~~~~~~~" << "\n";
	if (d > 126 || d < 0)
		std::cout << "char: impossible" << "\n";
	else if (!isprint(d))
		std::cout << "char: Non displayable" << "\n";
	else
		std::cout << "char: " << "\'" << (char)d << "\'" << "\n";

	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
		std::cout << "int: impossible" << "\n";
	else
		std::cout << "int: " << static_cast<int>(d) << "\n";

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(d) << "f" << "\n";
	std::cout << "double: " << d << "\n";
}


void	ScalarConverter::convert(char* input)
{
	int	type = get_type(input);

	void	(*fptr[5])(char* input_);
	fptr[0] = &printinvalid;
	fptr[1] = &printchar;
	fptr[2] = &printint;
	fptr[3] = &printfloat;
	fptr[4] = &printdouble;

	fptr[type](input);
}
