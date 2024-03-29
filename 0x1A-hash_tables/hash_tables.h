#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Nod of a hash tabl
 * @key: The key, str
 * The key is unique in the HashTable
 * @value: The val correspondin to a key
 * @next: A pointr to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data struct
 * @size: The size of the arr
 * @array: An arr of size @size
 * Each cell of this array is a pointr to the first nod of a linkd list,
 * because we want our HashTable to use a Chainin collsn handlin
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Nod of a sortd hash table
 * @key: The key, str
 * The key is unique in HashTable
 * @value: The value corrspondin to a key
 * @next: A pointr to the nxt nod of the List
 * @sprev: A pointr to the prev elment of the sortd linkd list
 * @snext: A pointr to the nxt elemnt of the sortd linkd list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sortd hash tabl data structure
 * @size: The size of the arr
 * @array: An arr of size @size
 * Each cell of this arr is a pointr to the first nod of a linkd list,
 * because we want our HashTable to use Chainin collisn handling
 * @shead: A pointr to first element of the sortd linkd list
 * @stail: A pointr to last elment of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
