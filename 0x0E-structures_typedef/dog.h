#ifndef FILE_DOG_H
#define FILE_DOG_H

/**
 * struct dog - a dog struct
 * @name : dog name
 * @age : age of dog
 * @owner : owner's name of dog
 *
 * Description: just along dog struct in kitty world
 *
 * Return: Description of the returned value
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
