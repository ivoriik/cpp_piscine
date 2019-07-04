#include <stdlib.h>
#include <iostream>
#include "Serialize.hpp"

#define		AR_LEN	8
#define		STR_LEN ((AR_LEN << 1) + sizeof(int))
char const	alnum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

void		*serialize(void)
{
	char				*str = new char[STR_LEN];

	for (unsigned int i = 0; i < AR_LEN; ++i)
		str[i] = alnum[rand() % (sizeof(alnum) - 1)];
	*(reinterpret_cast<int *>(&str[AR_LEN])) = rand();
	for (unsigned int i = AR_LEN + sizeof(int); i < STR_LEN; ++i)
		str[i] = alnum[rand() % (sizeof(alnum) - 1)];
	return (reinterpret_cast<void *>(str));
}

Data		*deserialize(void *raw)
{
	Data				*res = new Data;

	res->s1.append(reinterpret_cast<char *>(raw), AR_LEN);
	res->nb = *reinterpret_cast<int *>(&reinterpret_cast<char *>(raw)[8]);
	res->s2.append(&reinterpret_cast<char *>(raw)[12], AR_LEN);
	return (res);
}