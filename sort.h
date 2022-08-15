#ifndef SORT_H
#define SORT_H

/** Standard Libraries  **/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap_int(int *x, int *y);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

<<<<<<< HEAD
void recall_sort(int *array, size_t size, int low, int high);
size_t partition(int *array, size_t size, int low, int high);
void swap_num(int *array, size_t size, int a, int b);
=======
>>>>>>> 83027c01f1bf84a4dae02cde88a3794816d9573e
#endif
