/*
** EPITECH PROJECT, 2020
** sort_la
** File description:
** sort list
*/

#include "libmy.h"
#include "push.h"
#include "stdio.h"

empty_t init_empty(empty_t empty, int ac)
{
    empty.la = (ac - 1);
    empty.lb = 0;
    empty.space = 0;
    return (empty);
}

int sorted(int *la, int ac)
{
    int i = 0;

    while (i < (ac - 2)) {
        if (la[i] > la[i + 1])
            return (0);
        i++;
    }
    return (1);
}

void sort_la(int *l_a, int *l_b, int ac, empty_t *empty)
{
    if (l_a[0] > l_a[1]) {
        sa(l_a, empty);
    }
    pb(l_a, l_b, ac, empty);
}

void sort_lb(int *l_a, int *l_b, int ac, empty_t *empty)
{
    if (l_b[0] < l_b[1]) {
        sb(l_b, empty);
    }
    pa(l_a, l_b, ac, empty);
}

int sort_list(int *l_a, int *l_b, int ac)
{
    int *temp_array = malloc(sizeof(int) * (ac - 1) * 2);
    empty_t empty = init_empty(empty, ac);

    if (temp_array == NULL)
        return (84);
    while (sorted(l_a, ac) == 0) {
        while (empty.la != 1) {
            sort_la(l_a, l_b, ac, &empty);
        }
        pb(l_a, l_b, ac, &empty);
        while (empty.lb != 1) {
            sort_lb(l_a, l_b, ac, &empty);
        }
        pa(l_a, l_b, ac, &empty);
    }
    my_putchar('\n');
    return (0);
}