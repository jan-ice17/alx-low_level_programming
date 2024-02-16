#include "hash_tables.h"
/**
 * key_index - Computes index of a key within a hash table.
 * @key: key for which the index is to be calculated.
 * @size: size of the hash table.
 *
 * Return: computed index of the key.
 *
 * Description: This function utilizes the djb2 algorithm to 
 *   compute the index where the key should be stored in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}