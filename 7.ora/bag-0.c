#include<stdio.h>


/* Make the bag empty */
void erase(short *storage){
	int i;
	for(i=0; i<1000; i++) storage[i] = 0;
}

/* Insert one element into the bag */
void insert(unsigned char c, short *storage){
	storage[c]++;
}

/* Insert multiple elements into the bag */
void insertMultiple(unsigned char* c, short *storage){
	do{
		insert(*c, storage);
	} while(*++c != '\0');
}

/* Remove one element from the bag and return the number of 
   same elements remaining in the bag*/
int pop(unsigned char c, short *storage){
	if(storage[c] > 0) storage[c]--;
	return storage[c];
}

/* Remove every occurance of the give elemet from the bag*/
void removeAll(unsigned char c, short *storage){
	storage[c] = 0;
}

/* Count the number of occurences of the given element*/
int count(unsigned char c, short *storage){
	return storage[c];
}

/* Return true if there is no element in the bag */
int isEmpty(short *storage){
	int i;
	for(i=0; i<1000; i++)
		if(storage[i] > 0)
			return 0;
	return 1;
}

/* Return true if there is no free space left in the bag */
int isFull(){
	return 0;
}

/* Return the total number of elements stored currently in
   the bag*/
int size(short *storage){
	int i, s=0;
	for(i=0; i<1000; i++)
		s += storage[i];
	return s;
}

/* Print the contents of the bag */
void print();


/* Implementations */

/* TODO */

/* Main function to test the functionality */

int main(int argc, char *argv[]) {
    short storage[1000];
    int i;
    for(i=0; i<argc; i++) insertMultiple((unsigned char*)argv[i], storage);
    erase(storage);
    insert('a', storage);
    insert('b', storage);
    insert('a', storage);
    if (count('a', storage)!=2) printf("Error\n");
    pop('a', storage);
    pop('c', storage);
    if (count('a', storage)!=1 || size(storage)!=2) printf("Error\n");
    unsigned char t[] = "abacde";
    insertMultiple(t, storage);
    if (isEmpty(storage) || isFull(storage) || size(storage)!=8) printf("Error\n");
    int cnt = pop('a', storage);
    if (cnt!=2 || count('a', storage)!=2 || size(storage)!=7) printf("Error\n");
    removeAll('b', storage);
    if (count('b', storage)!=0 || size(storage)!=5) printf("Error\n");    

    return 0;
}
