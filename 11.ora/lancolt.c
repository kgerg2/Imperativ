#include "ll.h"

int main(){
	lista_t lista = create_list();
	push(&lista, 'a');
	printf("%c\n", pop(&lista));
	push(&lista, 'b');
	push(&lista, 'c');
	push(&lista, 'd');
	del(&lista, 2);
	insert(&lista, 'x', 2);
	print_list(lista);
	return 0;
}
