#include <stdio.h>

#include "dog.h"
/**
 * d- struct of type dog
 * Return: This function does not return
 */
void print_dog(struct dog *d)
{
    if (d->name == NULL && d->owner == NULL)
        printf("\n");
    if (d->name == NULL)
        printf("Name: (nul)\n");
    printf("Name:%s\n", d->name);
    printf("Age:%f\n", d->age);
    printf("Owner:%s\n", d->owner);
}
