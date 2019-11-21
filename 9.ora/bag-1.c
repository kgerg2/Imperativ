#include <stdio.h>
#include <stdlib.h>

struct bag {
	char c;
	int db;
};

/* Make the bag empty */
void erase(struct bag *storage, int *len){
	int i;
	for(i=0; i<*len; i++) storage[i].db = 0;
}

/* Insert one element into the bag */
void insert(unsigned char c, struct bag *storage, int *len){
	int i = 0;
	while (i < *len && storage[i].c != c && storage[i].db > 0) i++;
	if (i == *len) {
		storage = realloc(storage, sizeof(struct bag)*(*len)*2);
		printf("realloc(storage, %d*%d*2) == %p", sizeof(struct bag), *len, storage);
		if (storage == NULL) {
			struct bag *new = malloc(sizeof(struct bag)*(*len)*2);
			if (storage == NULL) {
				printf("Insert succesfully failed.\n");
			} else {
				
			}
		} else {
			storage[*len].c = c;
			storage[*len].db = 1;
			*len *= 2;
			printf("%d\n", *len);
		}
	} else if (storage[i].c == c){
		storage[i].db++;
	} else {
		storage[i].c = c;
		storage[i].db = 1;
	}
}

/* Insert multiple elements into the bag */
void insertMultiple(unsigned char* c, struct bag *storage, int *len){
	do{
		insert(*c, storage, len);
	} while(*++c != '\0');
}

/* Remove one element from the bag and return the number of 
   same elements remaining in the bag*/
int pop(unsigned char c, struct bag *storage, int *len){
	int i = 0;
	while (i < *len && storage[i].c != c) i++;
	if (i == *len) return 0;
	if (storage[i].db > 0) storage[i].db--;
	return storage[i].db;
}

/* Remove every occurance of the give elemet from the bag*/
void removeAll(unsigned char c, struct bag *storage, int *len){
	int i = 0;
	while (i < *len && storage[i].c != c) i++;
	if (i < *len) storage[i].db = 0;
}

/* Count the number of occurences of the given element*/
int count(unsigned char c, struct bag *storage, int *len){
	int i = 0;
	while (i < *len && storage[i].c != c) i++;
	return i < *len ? storage[i].db : 0;
}

/* Return true if there is no element in the bag */
int isEmpty(struct bag *storage, int *len){
	int i;
	for(i=0; i<*len; i++)
		if(storage[i].db > 0)
			return 0;
	return 1;
}

/* Return true if there is no free space left in the bag */
int isFull(){
	return 0;
}

/* Return the total number of elements stored currently in
   the bag*/
int size(struct bag *storage, int *len){
	int i, s = 0;
	for(i=0; i<*len; i++)
		s += storage[i].db;
	return s;
}

void print(struct bag *storage, int *len) {
    int i;
    printf("{ ");
    for(i=0; i<*len; i++) {
        printf("%c: %d, ", storage[i].c, storage[i].db);
    }
    printf("}\n");
}

/* Main function to test the functionality */

int main() {
	int len = 1;
	struct bag *storage;
	storage = malloc(sizeof(struct bag));
    erase(storage, &len);
    printf("itt\n");
    insert('a', storage, &len);
    insert('b', storage, &len);
    insert('a', storage, &len);
    if (count('a', storage, &len)!=2) printf("Error\n");
    pop('a', storage, &len);
    pop('c', storage, &len);
    if (count('a', storage, &len)!=1 || size(storage, &len)!=2) printf("Error\n");
    unsigned char t[] = "abacde";
    insertMultiple(t, storage, &len);
    if (isEmpty(storage, &len) || isFull(storage, &len) || size(storage, &len)!=8) printf("Error\n");
    int cnt = pop('a', storage, &len);
    if (cnt!=2 || count('a', storage, &len)!=2 || size(storage, &len)!=7) printf("Error\n");
    removeAll('b', storage, &len);
    if (count('b', storage, &len)!=0 || size(storage, &len)!=5) printf("Error\n");    

    return 0;
}
