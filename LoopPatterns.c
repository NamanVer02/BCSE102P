# include <stdio.h>
int main(){
    int n, size, min1, min2, min;
    printf("Enter an integer for size of the pattern: ");
    scanf("%d", &n);
    size = 2*n - 1;
    
    for (int i = 1; i < size+  1; i++){
        min1 = 0;
        min2 = 0;
        for (int j = 1; j < size + 1; j++){
            (i < size - i) ? (min1 = i - 1) : (min1 = size - i);
            (j < size - j) ? (min2 = j - 1) : (min2 = size - j);
            (min1 < min2) ? (min = min1) : (min = min2);

            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}

/*
An interger input of 3 should give this result

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3

*/
