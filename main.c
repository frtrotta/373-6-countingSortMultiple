#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int countingSortMultiple(int v[], int n, int orderedV[]);

#define N 10
#define MIN_VALUE 2
#define MAX_VALUE 7

int main(int argc, char** argv) {
    int v[N], orderedV[N];
    int i;
    
    srand((unsigned)time(NULL));

    printf("Unordered values\n");
    for (i = 0; i < N; i++) {
        v[i] = MIN_VALUE + (rand() % MAX_VALUE) +1;
        printf("%d: %d\n", i, v[i]);
    }
    
    countingSortMultiple(v, N, orderedV);
    
    printf("\n\nOrdered values\n");
    for (i = 0; i < N; i++) {
        printf("%d: %d\n", i, orderedV[i]);
    }
    
    return (EXIT_SUCCESS);
}

int countingSortMultiple(int v[], int n, int orderedV[]) {
    int r = 0;
    if(n > 0) {
        // TODO Implement here
    }
    else
        r = -1;
    return r;
}