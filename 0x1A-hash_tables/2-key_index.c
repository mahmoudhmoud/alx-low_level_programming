#include "hash_tables.h"


/**
 * key_index - atih lih tam tama
 * @key: saroto
 * @size: ajam dyalo dak
 * Return: rado tam
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)

{

	return (hash_djb2(key) % size);

}
