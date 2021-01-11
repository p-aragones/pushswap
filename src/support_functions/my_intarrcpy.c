/*
** EPITECH PROJECT, 2020
** my_intarrcpy
** File description:
** copy a int array
*/

#include "libmy.h"
#include "push.h"

void pb(int *l_a, int *l_b, int ac, empty_t *empty)
{
    int i = ac - 2;

    while (i > 0) {
        l_b[i] = l_b[i - 1];
        i--;
    }
    i = 0;
    l_b[0] = l_a[0];
    while (i < (ac - 1)) {
        l_a[i] = l_a[i + 1];
        i++;
    }
    if (empty->space == 0) {
        my_putstr("pb");
        empty->space = 1;
    } else
        my_putstr(" pb");
    empty->la--;
    empty->lb++;
}

void pa(int *l_a, int *l_b, int ac, empty_t *empty)
{
    int i = ac - 1;

    while (i > 0) {
        l_a[i] = l_a[i - 1];
        i--;
    }
    l_a[0] = l_b[0];
    while (i < (ac - 1)) {
        l_b[i] = l_b[i + 1];
        i++;
    }
    if (empty->space == 0) {
        my_putstr("pa");
        empty->space = 1;
    } else
        my_putstr(" pa");
    empty->la++;
    empty->lb--;
}

void sa(int *l_a, empty_t *empty)
{
    int temp = 0;

    temp = l_a[0];
    l_a[0] = l_a[1];
    l_a[1] = temp;
    if (empty->space == 0) {
        my_putstr("sa");
        empty->space = 1;
    } else
        my_putstr(" sa");
}

void sb(int *l_b, empty_t *empty)
{
    int temp = 0;

    temp = l_b[0];
    l_b[0] = l_b[1];
    l_b[1] = temp;
    if (empty->space == 0) {
        my_putstr("sb");
        empty->space = 1;
    } else
        my_putstr(" sb");
}