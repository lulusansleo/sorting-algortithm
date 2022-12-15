/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** _h
*/

#ifndef pushswap_h
    #define pushswap_h

    #include <stddef.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>

    typedef struct list {
        int value;
        struct list *next;
    } list_t;

    int pushswap(int ac, char **av);
    void free_list(list_t *head);
    list_t *create_list(int ac, char **av);
    int add_node(list_t **head, char *value, int i);
    void display_list(list_t *head);
    int len_list(list_t **head);
    void swap_first(list_t **head);
    void throw(list_t **head_a, list_t **head_b);
    int len_list(list_t **head);
    void rotate_end(list_t **head);
    int is_sorted(list_t *list);
    int radix(list_t **list_a, list_t **list_b, int max, int index);
    void rotate_first(list_t **head);
    int count_neg(list_t *head);

#endif /* !pushswap_h */
