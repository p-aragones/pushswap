/*
** EPITECH PROJECT, 2020
** init_numbers
** File description:
** initialize array of numbers
*/

#include "libmy.h"
#include "push.h"

int *init_numbers(int ac, char **av, int *numbers)
{
    int i = 1;
    int j = 0;

    while (i < ac) {
        if (my_str_isnum(av[i]) == 1) {
            numbers[j] = my_getnbr(av[i]);
            i++;
            j++;
        } else
            return (NULL);
    }
    return (numbers);
}