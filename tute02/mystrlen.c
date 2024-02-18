#include "mystrlen.h"
#include <stdio.h>

int mystrlen(char *s) {
    char *t;
    for (t = s; * t != '\0'; t++);
    return t - s;
}



