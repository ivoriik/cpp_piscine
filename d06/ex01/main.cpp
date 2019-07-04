#include <iostream>
#include <time.h>
#include "Serialize.hpp"

int			main(void)
{
	srand(time(NULL));
	void		*buff = serialize();
	Data		*data = deserialize(buff);
	std::cout	<< data->s1 << " "
				<< data->nb << " "
				<< data->s2
				<< std::endl;
	return 0;
}