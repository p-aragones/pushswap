/*
** EPITECH PROJECT, 2020
** library
** File description:
** specific
*/

#ifndef PUSH_H_
#define PUSH_H_

#include <unistd.h>
#include <stdlib.h>

typedef struct empty_s {
    int la;
    int lb;
    int space;
} empty_t;

int *init_numbers(int, char **, int *);
int push(int, char **);
int sort_list(int *, int *, int);
int *move_array(int *, int *, int);
int *my_intarrcpy(int *, int *, int);
int sorted(int *, int);
void sa(int *, empty_t *);
void sb(int *, empty_t *);
void pb(int *, int *, int, empty_t *);
void pa(int *, int *, int, empty_t *);
void print_array(int *, int *, int);

#endif