// a
/* Makes an array of 1,000 integers and returns a pointer to it */

#define SIZE 1000

int *makeArrayOfInts() {
   int arr[SIZE];
   int i;
   for (i=0; i<SIZE; i++) {
      arr[i] = i;
   }
   return arr;
}

// TODO: Explain what is wrong with this function. 
// Rewrite the function so that it correctly achieves the intended result using  malloc().
int *makeArrayOfInts2() {
   int *arr = malloc(sizeof(int) * SIZE);
   if (arr == NULL) {
     printf("Memory allocation failed");
     return NULL;
   }
  // assert (arr != NULL);
  for (int i = 0; i < SIZE; i++) {
    arr[i] = i;
  } 
  return arr;
}


// b
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void func(int **a) {
   *a = malloc(sizeof(int));
   assert(a != NULL);
}

int main(void) {
   int *p;

   func(&p);
   *p = 6;
   printf("%d\n",*p);
   free(p);

   return 0;
}
// TODO: Explain what is wrong with this program.

// c
struct node {
   int value;
   struct node *next;
};

int main(void) {
   struct node *n = malloc(sizeof(struct node));
 
   n->value = 42;
   n->next = NULL;
}

// TODO: Modify the code above so that it allocates the struct on the heap, instead of the stack.
// Memory
// Heap (empty) Stack (node)
// Heap (node) Stack (no node)

