#include "Data.hpp"

Data::Data() : _bday(0) {}

Data::Data(int bday) : _bday(bday) {}

Data::~Data() {}

int	Data::getBday() { return _bday; }
