#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * REturn: struct dog
 * if fails, return NULL
 */

dog_t *new_dog(char *name, flaot age, char *owner)
{
	dog_t *p_dog;
	int i, lname, lowner;


