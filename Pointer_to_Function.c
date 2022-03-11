#include <stdio.h>
#include <math.h>
#include <string.h>

void display(int *x){
    *x = 30;
    return;
}

void fixtures(char *x[]){
    char pre[] = "Un", post[] = "able";
    printf("%s%s%s",pre, *x, post);
}

void trigno(float *x){
    printf("\n\nThe vaules of sin, cos and tan are : %f, %f and %f \n", sin(*x), cos(*x), tan(*x));
}

int main(){
    int a;
    // pass the pointer argument as a function parameter 
    display(&a);
    printf("Passing pointers to function!\n");
    printf("Value is: %d \n", a);

    
    //Do the prefix and postfix assignment inside the function and print the values in the main for the pointer argument
    char b[] = "question", *p[20];
    for (int i = 0; i < strlen(b); i++){
        p[i] = &b[i];
    }
    printf("\nApplying fixtures to the root word question\n");
    fixtures(p);


    // Do the Sin, Cos and Tan calculation of the values using the above method
    float c = 0.785398;
    trigno(&c);
    return 0;
}



 
