#include"dog.h"

int _len(char *str);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - create object dog
 * @name: name
 * @age: teh age
 * @owner: the owner
 * Return: the dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);


	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(char) * (_len(name)));
	dog->owner = malloc(sizeof(char) * (_len(owner)));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);

}

/**
 * _len - the string lenght
 * @str: the string
 * Return: lenght plus one
*/

int _len(char *str)
{
	int len = 1;

	while (str)
		len++;
	return (len);
}

/**
 *_strcpy - makes a copy of a string
* @dest:buffer
* @src: buffer
* Return:0
*/
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index++])
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}
