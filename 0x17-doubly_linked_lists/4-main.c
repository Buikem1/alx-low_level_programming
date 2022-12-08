
ceasar28
/
alx-low_level_programming-1
Public
forked from ermiast/alx-low_level_programming-1
Code
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming-1/0x17-doubly_linked_lists/4-main.c
@Emmastro
Emmastro Submit
 1 contributor
28 lines (26 sloc)  593 Bytes
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
