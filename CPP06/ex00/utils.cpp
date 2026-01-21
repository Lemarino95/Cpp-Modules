#include "ScalarConverter.hpp"

static int	parse_number(char* input)
{
	int	i = 0;
	int	point_c = 0;

	if ('-' == input[0] || '+' == input[0])
		i++;
	while (input[i])
	{
		if (!isdigit(input[i]))
		{
			if ('.' == input[i])
			{
				point_c++;
				if (point_c > 1)
					return NONPRINTABLE;
			}
			else if ('f' == input[i] && point_c && !input[i+1])
				return FLOAT;
			else
				return NONPRINTABLE;
		}
		i++;
	}
	if (point_c)
	{
		char*	end = NULL;
		if (std::strtod(input, &end) <= MAXFLOAT)
			return FLOAT;
		return DOUBLE;
	}
	return INT;
}

// 0 = nonprintable
// 1 = char
// 2 = int
// 3 = float
// 4 = double
int	get_type(char* input)
{
	if (!input[0])
		return INT;
	if (!input[1])
	{
		if (isprint(input[0]))
		{
			if (isdigit(input[0]))
				return INT;
			return CHAR;
		}
		else
			return NONPRINTABLE;
	}
	else
	{
		if (!std::strcmp(input, "inff") || !std::strcmp(input, "-inff") \
			|| !std::strcmp(input, "inf") || !std::strcmp(input, "-inf"))
				return DOUBLE;
		else if (!std::strcmp(input, "nanf") || !std::strcmp(input, "nan"))
			return NONPRINTABLE;
	}
	return parse_number(input);
}
