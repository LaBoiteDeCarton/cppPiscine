#ifndef DATA_STRUCT_HPP
# define DATA_STRUCT_HPP
# include <cstdint>

struct Data
{
	int		some_int;
	float	some_float;
	void*	some_void;
	Data*	some_data;
};

uintptr_t	serialize( Data *ptr );
Data*		deserialize( uintptr_t raw );

#endif