/*
** EPITECH PROJECT, 2020
** move_array
** File description:
** move array one pos
*/

#include "libmy.h"

int *move_array(int *array, int *array_cpy, int max)
{
    int i = 0;

    while (i <= max) {
        array[i + 1] = array_cpy[i];
        i++;
    }
    return (array);
}

void print_array(int *la, int *lb, int ac)
{
    int i = 0;

    while (i < ac - 1) {
        my_put_nbr(la[i]);
        my_putchar(' ');
        i++;
    }
    my_putchar('\n');
    i = 0;
    while (i < ac - 1) {
        my_put_nbr(lb[i]);
        my_putchar(' ');
        i++;
    }
    my_putchar('\n');
}