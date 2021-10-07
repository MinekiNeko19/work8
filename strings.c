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
    char *p = dest;
    while (*source) {
        *p = *source;
        p++;
        source++;
    }
    *p = 0;
    return dest;
}

char * mystrncat( char *dest, char *source, int n) {
    char *p = dest+strlen(dest);
    while (n > 0) {
        *p = *source;
        p++;
        source++;
        n--;
    }
    return dest;
}

int mystrcmp( char *s1, char *s2 ) {
    // int same = 0;
    while(*s1 == *s2 && ((*s1 != 0) || (*s2 != 0))) {
        printf("s1 val: %c %d\ts2 val: %c %d\n",*s1, *s1, *s2, *s2);
        // if (*s1 != *s2) {
        //      return (*s2 - *s1);
        // }
        s1++;
        s2++;
    }
    if (*s2 > *s1) return -1;
    if (*s1 > *s2) return 1;
    return 0;
    // return *s1-*s2;
}

char * mystrchr( char *s, char c ) {
    int i = 1;
    while (*s && i) {
        if (*s == c) {
            i = 0;
        } else {
            s++;
        }
    }
    // while (*s != 0) {
    //     if (*s == c) {
    //         return s;
    //     }
    //     s++;
    // }
    if (!i) return s;
    return NULL;
}
