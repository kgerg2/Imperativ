#ifndef LL_H
#define LL_H

typedef struct elem {
	char value;
	struct elem *next;
} elem_t;

typedef struct {
	elem_t* head;
	int length;
} lista_t;

lista_t create_list();

void print_list(lista_t l);

void push(lista_t *l, char v);

void del(lista_t *l, int i);

void insert(lista_t *l, char v, int i);

char pop(lista_t *l);

#include "ll.c"
#endif
