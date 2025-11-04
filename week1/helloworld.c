#include <stdio.h>

int main () {
    while (1) {
        int i;
        scanf ("%d",&i);
        
        if (i == 0) {
           printf("helloworld\n");
        } else if (i == 1) {
            printf("HELLOWORLD\n");
        } else if (i == -1) {
            break;
        }
    }
    return 0;
}

  