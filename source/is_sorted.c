/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** is_sorted
*/

#include "my.h"
#include "pushswap.h"

int is_sorted(list_t *list)
{
    list_t *tmp_list = list;

    while (tmp_list->next->value >= tmp_list->value) {
        tmp_list = tmp_list->next;
        if (tmp_list->next == NULL)
            return 1;
    }
    return 0;
}

int find_biggest(list_t *list)
{
    list_t *tmp_list = list;
    int max = list->value, ret = 1;

    while (tmp_list->next != NULL) {
        if (tmp_list->next->value > max)
            max = tmp_list->next->value;
        tmp_list = tmp_list->next;
    }
    while (max != 1 && max != 0) {
        ret++;
        max = max / 2;
    }
    return ret;
}

int radix(list_t **list_a, list_t **list_b, int max, int index)
{
    int size = len_list(list_a);

    max--; index++;
    for (int i = 0; i < size; i++) {
        if (((*list_a)->value >> index & 1) != 1) {
            throw(list_a, list_b);
            write(1, " pb", 3);
        } else {
            rotate_first(list_a);
            write(1, " rra", 4);
        }
    }
    while (*list_b != NULL) {
        throw(list_b, list_a);
        write(1, " pa", 3);
    }
    if (max != 0)
        radix(list_a, list_b, max, index);
    return 0;
}
