/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** pushswap
*/

#include "pushswap.h"

void rotate_first(list_t **head)
{
    list_t *tail = (*head);
    list_t *tmp = (*head);

    while (tail->next != NULL)
        tail = tail->next;
    tail->next = tmp;
    *head = (*head)->next;
    tmp->next = NULL;
}

int find_small(list_t **l_a)
{
    list_t *tmp = *l_a;
    int index = 0;
    int smol = (*l_a)->value;
    int tmp_index = 0;

    while (tmp != NULL) {
        tmp_index++;
        if (smol > tmp->value) {
            index = tmp_index;
            smol = tmp->value;
        }
        tmp = tmp->next;
    }
    return index;
}

int get_small(list_t **l_a)
{
    list_t *tmp = *l_a;
    int smol = (*l_a)->value;

    while (tmp != NULL) {
        if (smol > tmp->value)
            smol = tmp->value;
        tmp = tmp->next;
    }
    return smol;
}

int pushswap(int ac, char **av)
{
    list_t *l_a = create_list(ac, av);
    list_t *l_b = NULL;
    int max = find_biggest(l_a), index = 0, nrneg = count_neg(l_a);

    if (is_sorted(l_a))
        return 0;
    rotate_first(&l_a);
    write(1, "ra", 3);
    radix(&l_a, &l_b, max, index);
    for (int i = 0; i < nrneg; i++) {
        write(1, " rra", 4);
        rotate_end(&l_a);
    }
    write(1, "\n", 1);
    free_list(l_b);
    free_list(l_a);
    return 0;
}
