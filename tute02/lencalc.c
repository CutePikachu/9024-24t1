#include <stdio.h>
#include "mystrlen.h"

int main(int argc, char *argv[]) {
    char s[MAXLEN];
    while (1) {
        printf("Please enter a string: \n");
        scanf("%s", &s);
        int len = mystrlen(s); 
        printf("%d\n", len);
    }
    return 0;
}
