/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** pushswap
*/

#include "libmy.h"
#include "push.h"

int push(int ac, char **av)
{
    int *l_a = my_malloc((ac - 1));
    int *l_b = my_malloc((ac - 1));

    if (l_a == NULL || l_b == NULL)
        return (84);
    l_a = init_numbers(ac, av, l_a);
    sort_list(l_a, l_b, ac);
    return (0);
}