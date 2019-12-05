#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

lista_t create_list(){
	return (lista_t){NULL, NULL, 0};
}

void print_list(lista_t l){
	elem_t *e = l.head;
	printf("[");
	while (e->next) {
		printf("%c, ", e->value);
		e = e->next;
	}
	printf("%c]", e->value);
}

void push(lista_t *l, char v){
	elem_t *new = malloc(sizeof(elem_t));
	new->value = v;
	new->next = NULL;
	new->prev = l->last;
	if (l->length){
		l->last->next = new;
		l->last = new;
		l->length++;
	} else {
		*l = (lista_t){new, new, 1};
	}
}

char pop(lista_t *l){
	if(l->length == 1){
		char v = l->head->value;
		free(l->head);
		l->head = NULL;
		l->length = 0;
		return v;
	} else if(l->length > 0) {
		elem_t *e = l->head;
		while(e->next->next) e = e->next;
		char v = e->next->value;
		free(e->next);
		e->next = NULL;
		l->length--;
		return v;
	}
	return '\0';
}

void del(lista_t *l, int i){
	if (i==0) {
		elem_t *uj = l->head->next;
		free(l->head);
		l->head = uj;
		l->length--;
	} else{
		elem_t *e = l->head;
		while (i > 1 && e) {
			e = e->next;
			i--;
		}
		if (i == 1 && e && e->next) {
			elem_t *uj = e->next->next;
			free(e->next);
			e->next = uj;
			l->length--;
		}
	}
}

void insert(lista_t *l, char v, int i){
	if (i==0) {
		elem_t *uj = malloc(sizeof(elem_t));
		*uj = (elem_t){v, l->head};
		l->head = uj;
		l->length++;
	} else{
		elem_t *e = l->head;
		while (i > 1 && e) {
			e = e->next;
			i--;
		}
		if (i == 1 && e) {
			elem_t *uj = malloc(sizeof(elem_t));
			*uj = (elem_t){v, e->next};
			e->next = uj;
			l->length++;
		}
	}
}
