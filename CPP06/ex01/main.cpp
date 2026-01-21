#include "Serializer.hpp"

int	main()
{
	uintptr_t	seri;
	Data*		deseri;
	Data	data(56);

	seri = Serializer::serialize(&data);
	deseri = Serializer::deserialize(seri);

	std::cout << "Original: " << &data << "\n";
	std::cout << "Serialized: " << seri << "\n";
	std::cout << "Deserialized: " << deseri << "\n";
	std::cout << "Data content: " << deseri->getBday() << "\n";
}
