#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strcpy - prints one char out of the 2
 *
 * @dest: value of string
 *
 * @src: string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0, b = 0;

	while (src[counter] != '\0')
	{
		counter++;
	}
	while (b <= counter)
	{
		dest[b] = src[b];
		b++;
	}
	return (dest);
}

/**
 * _strlen - count
 *
 * @s: value
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * new_dog - create new
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of the dog
 *
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *d_name, *d_owner;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	d_name = malloc(_strlen(name) + 1);
	if (d_name == NULL)
	{
		free(n_dog);
		free(d_name);
		return (NULL);
	}
	d_owner = malloc(_strlen(owner) + 1);
	if (d_owner == NULL)
	{
		free(n_dog);
		free(d_name);
		free(d_owner);
		return (NULL);
	}
	d_name = _strcpy(d_name, name);
	d_owner = _strcpy(d_owner, owner);
	n_dog->name = d_name;
	n_dog->age = age;
	n_dog->owner = d_owner;
	return (n_dog);
}
