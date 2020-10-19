#ifndef STH
#define STH
/**
 * struct dog - my dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
#endif
