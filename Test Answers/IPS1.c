#include <stdio.h>
int prime(int n);

int main(){
    int term1 = 0, term2 = 1, nextTerm = term1 + term2, arr[20], count = 0;
    
    while (nextTerm <= 100){
        printf("%d ", nextTerm);
        arr[count] = nextTerm;
        count++;

        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
    }

    printf("\n");

    for (int i = 0; i < count; i++){
        if (prime(arr[i]) == 1){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}


int prime(int n){
    int result = 1;

    if (n == 0 || n == 1){
        result = 0;
    }

    for (int i = 2; i <= n/2; i++){
        if (n % i == 0){
            result = 0;
            break;
        }
    }

    return result;
}
