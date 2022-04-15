#include <stdio.h>
#include <stdlib.h>
int m = 2, n = 4;
float gpa(int arr[2]);
void print(float gpa);

struct Student{
    int marks[2];
    int courses;
};

int main(){
    int arr[m*n], i = 0;
    struct Student student1, student2, student3, student4;
    printf("Enter the marks of students in a single line seperated by space : ");
    
    while (i < m*n && scanf("%d", &arr[i]) == 1){
        i++;
    }

    student1.marks[0] = arr[0];
    student1.marks[1] = arr[1];
    student2.marks[0] = arr[2];
    student2.marks[1] = arr[3];
    student3.marks[0] = arr[4];
    student3.marks[1] = arr[5];
    student4.marks[0] = arr[6];
    student4.marks[1] = arr[7];

    printf("%0.2f %0.2f %0.2f %0.2f \n\n", gpa(student1.marks), gpa(student2.marks), gpa(student3.marks), gpa(student4.marks));
    print(gpa(student1.marks));
    print(gpa(student2.marks));
    print(gpa(student3.marks));
    print(gpa(student4.marks));

    return 0;
}


float gpa(int arr[2]){
    float sum = 0;
    for (int i = 0; i < 2; i++){
        sum += arr[i];
    }

    return sum / 20;

}


void print(float gpa){
    if (gpa > 9){
        printf("Assume this is the beautiful circle with an E inside.");
    }
    else if (gpa < 9 && gpa > 7){
        printf("Assume this is the triangular flower pots.");
    }
    else if (gpa < 7 && gpa > 4){
        printf("Assume this is the star of stars.");
    }
    else{
        printf("Assume this is the hollow square.");
    }

    printf("\n");
}
