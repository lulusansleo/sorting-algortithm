/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** linked list
*/

#include "pushswap.h"
#include "my.h"

int add_node(list_t **head, char *value, int i)
{
    list_t *next = *head;
    list_t *tmp = NULL;

    for (int a = 2; a < i; a++) {
        next = next->next;
    }
    tmp = malloc(sizeof (list_t));
    tmp->value = my_getnbr(value);
    tmp->next = NULL;
    next->next = tmp;
    return 0;
}

list_t *create_list(int ac, char **av)
{
    list_t *head = malloc(sizeof (list_t));
    head->value = my_getnbr(av[1]);
    head->next = NULL;

    for (int i = 2; i < ac; i++) {
        if (add_node(&head, av[i], i) == -1) {
            free_list(head);
            return NULL;
        }
    }
    return head;
}

void free_list(list_t *head)
{
    list_t *tmp = head;

    while (tmp != NULL) {
        tmp = tmp->next;
        free(head);
        head = tmp;
    }
    free(tmp);
}

int len_list(list_t **head)
{
    list_t *tmp = *head;
    int len = 0;

    while (tmp != NULL) {
        tmp = tmp->next;
        len++;
    }
    return len;
}
