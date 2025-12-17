#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

/*~~~~~~~~~~~~~~~COLORS~~~~~~~~~~~~~~~*/
# define NO_C "\e[0m"
# define BLACK "\e[30m"
# define R "\033[31m"
# define G "\e[32m"
# define LG "\033[32;1m"
# define Y "\033[33m"
# define B "\033[34m"
# define M "\033[95m"
# define LC "\033[96m"
# define BGR "\033[41m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

// Copies the string buf replacing s1 with s2 and returns the new string. 
std::string	replace_str(std::string buf, char* s1, char* s2)
{
	std::string	newstr;
	size_t i = 0;
	
	while (buf[i])
	{
		const char*	bad_str = std::strstr(buf.c_str() + i, s1);
		if (&buf[i] == bad_str)
		{
			newstr += s2;
			i += (std::strlen(s1) - 1);
		}
		else
			newstr += buf[i];
		i++;
	}
	return newstr;
}

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << R << "insert: executable, target file," << \
			" string to replace, new string" << NO_C << std::endl;
		return 1;
	}

	/* Open input file */
	std::ifstream	infile(av[1]);
	if (!infile.is_open())
	{
		std::cerr << "Failed to open the file." << "\n";
		return 2;
	}

	/* Assemble output file's name */
	char*	ofilename = new char[std::strlen(av[1]) + 9];
	ofilename = std::strcpy(ofilename, av[1]);
	std::ofstream	outfile(std::strcat(ofilename, ".replace"));
	delete[] ofilename;

	/* Write in the outputfile */
	std::string	buf;
	std::string	newstr;
	int line_count = 0;
	while(!infile.eof())
	{
		if (line_count > 0)
			outfile << "\n";
		line_count++;

		getline(infile, buf);
		if (std::strstr(buf.c_str(), av[2]) && av[2][0])
		{
			newstr = replace_str(buf, av[2], av[3]);
			outfile << newstr;
		}
		else
			outfile << buf;
	}

	infile.close();
	return 0;
}
