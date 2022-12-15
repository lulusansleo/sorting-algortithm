/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** list functions
*/

#include "pushswap.h"

void swap_first(list_t **head)
{
    list_t *tmp = (*head)->next;

    (*head)->next = tmp->next;
    tmp->next = *head;
    *head = tmp;
}

void throw(list_t **head_a, list_t **head_b)
{
    list_t *tmp = (*head_a)->next;

    (*head_a)->next = (*head_b);
    (*head_b) = (*head_a);
    *head_a = tmp;
}

void rotate_end(list_t **head)
{
    list_t *tail = (*head);
    list_t *tmp = NULL;

    while (tail->next->next != NULL)
        tail = tail->next;
    tmp = tail;
    tail = tail->next;
    tmp->next = NULL;
    tail->next = *head;
    (*head) = tail;
}

list_t *create_b(void)
{
    list_t *l_b = malloc(sizeof (list_t));
    l_b->value = 0;
    l_b->next = NULL;
    return l_b;
}
