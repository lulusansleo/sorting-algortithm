/*
** EPITECH PROJECT, 2022
** my getnbr
** File description:
** get nbr
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int neg = 0;

    if (*str == '-') {
        str++;
        neg = 1;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        nb = nb * 10 + str[i] - '0';
    }
    if (neg)
        nb = -nb;
    return nb;
}
