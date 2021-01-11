/*
** EPITECH PROJECT, 2020
** my_malloc
** File description:
** fill spaces with \0
*/

#include <stdlib.h>
#include <stddef.h>

int *my_malloc(int size)
{
    int i = 0;
    int *str = malloc(sizeof(int) * size);

    if (str == NULL)
        return (NULL);
    while (i < size) {
        str[i] = 0;
        i++;
    }
    return (str);
}
