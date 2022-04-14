#include <stdio.h>
void factorize(int n);
int perfect_num(int n);

int main(){
    int x1, x2, sum = 0;
    printf("Enter the values of x1 and x2 seperated by a space : ");
    scanf("%d %d", &x1, &x2);

    for (int i = x1; i < x2; i++){
        if (perfect_num(i) == 1){
            printf("%d - ", i);
            factorize(i);
            sum += i;
            printf("\n");
        }
    }

    printf("Final sum : %d", sum);

    return 0;
}


void factorize(int n){
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            printf("%d ", i);
        }
    }
}


int perfect_num(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }

    if (sum == n){
        return 1;
    }
    else{
        return 0;
    }
}
