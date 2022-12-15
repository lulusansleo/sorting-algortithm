/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** main file
*/

#include "pushswap.h"

int main(int ac, char **av)
{
    if (ac < 2)
        return 84;
    if (ac == 2)
        return 0;
    else
        pushswap(ac, av);
    return 0;
}
