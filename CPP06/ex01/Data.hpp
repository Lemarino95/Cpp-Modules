#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
private:
	int	_bday;
public:
	Data();
	Data(int bday);
	~Data();

	int	getBday();
};


#endif
