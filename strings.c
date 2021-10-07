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
    // for (i = 0; i < strlen(dest); i++) {
    //     if (*source != 0) {
    //         *dest = *source;
    //         dest++;
    //         source++;
    //     } else {
    //         *dest = '\0';
    //         i = strlen(dset);
    //     }
    // }
    // printf("%s\n", dest);
    dest = source;
    // printf("%s\n", dest);
    // return dest; // issues with return type    
    return NULL; // since the code seems to work other than the return type it will return null for now ask about in class and try it on the school computer
}

char * mystrncat( char *dest, char *source, int n) {
    // printf("%s\n", dest);

    // int i = 0;
    // for (i = 0; i < n; i++) {
    //     printf("i: %d\n",i);
    //     dest[strlen(dest)+i] = source[i];
    //     printf("%c\n", source[i]);
    //     printf("%d\n", strlen(dest)+i);
    // }

    // printf("i got here");
    // dest += strlen(dest);
    // printf("i got here");
    // while (n > 0) {
    //     *dest = *source;
    //     dest++;
    //     source++;
    // }
    // *dest = 0;

    // printf("%s\n", dest);
    // return dest; // issues with return type 
    return NULL;
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
    return (s2 - s1)/4; // why divide by 4? but ok
}

// char * mystrchr( char *s, char c ) {

// }
