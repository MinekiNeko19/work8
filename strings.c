#include <stdio.h>
#include "strings.h"

int mystrlen(char *s) {
    int len = 0;
    int i;
    for (i = 0; i < sizeof(s); i++) {
        if (*(s+i) != 0) {
            len++;
        } else {
            i = sizeof(s);
        }
    }
    return len;
}

// char * mystrncpy( char *dest, char *source ) {

// }

// char * mystrcat( char *dest, char *source, int n) {

// }

// int mystrcmp( char *s1, char *s2 ) {

// }

// char * mystrchr( char *s, char c ) {

// }
