#include <stdio.h>
int prime(int n);
int multiple(int n);

int main(){
    int arr1[100], arr2[50], count = 0, count2 = 0;

    for (int i = 1; i < 100; i++){
        if (prime(i) == 1){
            arr1[count] = i;
            count++;
        }
    }

    for (int i = 0; i < count; i++){
        printf("%d ", arr1[i]);
        if (multiple(arr1[i]) == 1){
            arr2[count2] = arr1[i];
            count2++;
        }
    }

    printf("\n");
    
    for (int i = 0; i < count2; i++){
        printf("%d ", arr2[i]);
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


int multiple(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }

    if (sum % 5 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
