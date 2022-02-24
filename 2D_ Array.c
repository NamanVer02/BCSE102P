# include <stdio.h>
int main(){
    // Initializing array
    int arr[3][2] = {{1, 2}, {3, 6}, {9, 4}};
    
    // Print original array    
    for (int i = 0; i < 3; i++){
        printf("\n( ");
        
        for (int j = 0; j < 2; j++){
            printf("%d ", arr[i][j]);
        }
        
        printf(")");
    }
    printf("\n");

    
    //Insert elements in odd numbered positions
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if (i%2 == 0 && j%2 == 0){
                printf("Enter value to insert at position (%d, %d) : ", i+1, j+1);
                scanf("%d", &arr[i][j]);
            }
        }
    }

    for (int i = 0; i < 3; i++){
        printf("\n( ");
        
        for (int j = 0; j < 2; j++){
            printf("%d ", arr[i][j]);
        }
        
        printf(")");
    }
    printf("\n");


    //Insert elements in even numbered positions
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if (i%2 != 0 && j%2 != 0){
                printf("Enter value to insert at position (%d, %d) : ", i+1, j+1);
                scanf("%d", &arr[i][j]);
            }
        }
    }

    for (int i = 0; i < 3; i++){
        printf("\n( ");
        
        for (int j = 0; j < 2; j++){
            printf("%d ", arr[i][j]);
        }
        
        printf(")");
    }
    printf("\n");


    //Find position of an element
    int element = 9, count = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if (arr[i][j] == element){
                printf("Position of the element %d is (%d, %d) \n", element, i+1, j+1);
                count += 1;
            }
        }
    }
    if (count == 0){
        printf("No such element was found \n");
    }
    

    //Check for non zero value in a postion (a, b)
    int a = 1, b = 0;
    if (arr[a-1][b-1] == 0){
        printf("Value at (%d, %d) is zero \n", a, b);
    }
    else{
        printf("Value at (%d, %d) is not zero \n", a, b);
    }


    //Find sum of all elements
    int sum = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            sum += arr[i][j];
        }
    }
    printf("The sum of the array elements is %d \n", sum);


    // Initializing a new array
    int arr2[3][2] = {{1, 2}, {3, 6}, {9, 4}};

    // Print the second array    
    for (int i = 0; i < 3; i++){
        printf("\n( ");
        
        for (int j = 0; j < 2; j++){
            printf("%d ", arr2[i][j]);
        }
        
        printf(")");
    }
    printf("\n");



    //Find maximum of array
    int max;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if (arr2[i][j] >= max){
                max = arr2[i][j];
            }
        }
    }
    printf("Maximum element of array is %d \n", max);


    //Find minimum of array
    int min;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if (arr2[i][j] <= min){
                min = arr2[i][j];
            }
        }
    }
    printf("Minimum element of array is %d \n", min);


    
    return 0;
}

