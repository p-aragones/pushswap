/*
** EPITECH PROJECT, 2020
** main
** File description:
** main file and function
*/

#include "push.h"

int main(int ac, char **av)
{
    int error = 0;

    if (ac < 2)
        return (84);
    error = push(ac, av);
    (void)ac;
    return (error);
}