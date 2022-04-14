#include <stdio.h>
#include <stdlib.h>
void my_arithmetic(int* n1, int* n2);
int my_fact(int n);

int main(){
    int n1, n2, n3;
    printf("Enter the two numbers seperated by a space : ");
    scanf("%d %d", &n1, &n2);
    n3 = abs(n1 - n2);
    int *a = &n1, *b = &n2, *c = &n3;
    
    if (n1 == 0 && n2 == 0){
        printf("Zeroes");
    }
    else if (n2 == 0){
        printf("Error, division by zero.");
    }
    else{
        my_arithmetic(a, b);
        printf("\n%d", my_fact(*c));
    }
    
    return 0;
}


void my_arithmetic(int* n1, int* n2){
    int add, sub, mult, div;
    add = *n1 + *n2;
    sub = *n1 - *n2;
    mult = *n1 * *n2;
    div = *n1 / *n2;

    printf("%d %d %d %d", add, sub, mult, div);
}

int my_fact(int n){
    if (n >= 1){
        return n * my_fact(n - 1);
    }
    else{
        return 1;
    }
}
