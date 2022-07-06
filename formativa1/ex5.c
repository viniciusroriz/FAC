#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int blanks = n;
    int astrsk = 1;

    for(int i=0; i<n; i++) {
        for(int j=1; j<blanks; j++) {
            printf(" ");
        }
        for(int k=0; k<astrsk; k++) {
            printf("*");
        }
        astrsk += 2;
        blanks--;
        printf("\n");
    }

    return 0;
}