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
    //     if (*source != 0) {
    //         *dest = *source;
    //         dest++;
    //         source++;
    //     } else {
    //         *dest = '\0';
    //         i = sizeof(dest);
    //     }
    // }
    // printf("%s\n", dest);
    dest = source;
    // printf("%s\n", dest);
    // return dest; // issues with return type    
    return NULL; // since the code seems to work other than the return type it will return null for now ask about in class and try it on the school computer
}

char * mystrncat( char *dest, char *source, int n) {
    printf("%s\n", dest);

    char temp[n];
    int i = 0;
    while (n > 0) {
        temp[i] = source[i];
        i++;
        n--;
    }

    // printf("%s\n",temp);

    printf("%s\n", dest);
    // return dest; // issues with return type 
    return NULL;
}

// int mystrcmp( char *s1, char *s2 ) {

// }

// char * mystrchr( char *s, char c ) {

// }
