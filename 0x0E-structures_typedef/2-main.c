#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "django";
    my_dog.age = 37.5;
    my_dog.owner = "lankeyb";
    print_dog(&my_dog);
    return (0);
}
