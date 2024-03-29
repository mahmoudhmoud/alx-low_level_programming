#include "hash_tables.h"


/**
 * shash_table_create - sawb jd
 * @size: ajmo
 * Return: rad tam
 */


shash_table_t *shash_table_create(unsigned long int size)

{

	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_node_t) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{

		sht->array[i] = NULL;

	}
	return (sht);

}


/**
 * make_shash_node - sawab wahda jdida
 * @key: tafort
 * @value: malomat
 * Return: rado tam
 */


shash_node_t *make_shash_node(const char *key, const char *value)

{

	shash_node_t *shn;

	shn = malloc(sizeof(shash_node_t));
	if (shn == NULL)
		return (NULL);
	shn->key = strdup(key);
	if (shn->key == NULL)
	{
		free(shn);
		return (NULL);
	}
	shn->value = strdup(value);
	if (shn->value == NULL)
	{

		free(shn->key);
		free(shn);
		return (NULL);

	}
	shn->next = shn->snext = shn->sprev = NULL;
	return (shn);

}


/**
 * add_to_sorted_list - zido tam
 * @table: hadik
 * @node: bach tzad
 * Return: dir kawi
 */


void add_to_sorted_list(shash_table_t *table, shash_node_t *node)

{

	shash_node_t *tmp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tmp = table->shead;
	while (tmp != NULL)
	{

		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tmp = tmp->snext;

	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;

}


/**
 * shash_table_set - hat sarot
 * @ht: kharaj
 * @key: sarotha
 * @value: malomat
 * Return: yadak ywalo
 */


int shash_table_set(shash_table_t *ht, const char *key, const char *value)

{

	unsigned long int index;
	char *new_value;
	shash_node_t *shn, *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{

		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;

	}
	shn = make_shash_node(key, value);
	if (shn == NULL)
		return (0);
	shn->next = ht->array[index];
	ht->array[index] = shn;
	add_to_sorted_list(ht, shn);
	return (1);

}


/**
 * shash_table_get - atah kima
 * @ht: wila fin
 * @key: sarot dyalo
 * Return: ja kikan
 */


char *shash_table_get(const shash_table_t *ht, const char *key)

{

	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{

		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;

	}
	return (NULL);

}


/**
 * shash_table_print - katbo
 * @ht: bach ktab
 * Return: diro kawi
 */


void shash_table_print(const shash_table_t *ht)

{

	shash_node_t *tmp;
	char flag = 0; /* 0 before printing any data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp != NULL)
	{

		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;

	}
	printf("}\n");

}


/**
 * shash_table_print_rev - kayaktab karaj
 * @ht: tam lih
 * Return: dir awi
 */


void shash_table_print_rev(const shash_table_t *ht)

{

	shash_node_t *tmp;
	char flag = 0; /* 0 before printing any data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{

		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;

	}
	printf("}\n");

}


/**
 * shash_table_delete - mhih
 * @ht: mhih
 * Return: dir kai
 */


void shash_table_delete(shash_table_t *ht)

{

	unsigned long int i;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{

			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;

		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);

}
