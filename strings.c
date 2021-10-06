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

char * mystrcpy( char *dest, char *source ) {
    // int i;
    // for (i = 0; i < sizeof(dest); i++) {
    //     if (source[i] != 0) {
    //         dest[i] = source[i];
    //     } else {
    //         dest[i] = source[i];
    //         i = sizeof(dest);
    //     }
    // }
    return dest; // issues with return type
}

// char * mystrncat( char *dest, char *source, int n) {

// }

// int mystrcmp( char *s1, char *s2 ) {

// }

// char * mystrchr( char *s, char c ) {

// }
