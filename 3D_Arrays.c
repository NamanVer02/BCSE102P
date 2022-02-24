#include<stdio.h>
int main()
{
    int element, position;
    
    //Initializing array
    int arr[2][3][2] = {
        {{1, 2}, {3, 5}, {7 ,5}},
        {{4, 6}, {1, 5}, {5, 6}}
    };
    
    //Printing original array
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("( ");
            for (int k = 0; k < 2; k++){
                printf("%d ", arr[i][j][k]);
            }
            printf(")");
        printf(", ");
        }
        printf("\n");
    }

    //Insert elements into specific position (mid, first last) of column c
    int elements[3][2] = {{3, 4}, {5, 7}};


    //Remove given number of elements

    //Remove elements from a specific position (mid, first, last)

    //Search and print position of element
    element = 7;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 2; k++){
                if (arr[i][j][k] == element){
                    printf("The element %d was located at position (%d, %d, %d) \n", element, i+1, j+1, k+1);
                }
            }
        }
    }
    

    //Check for non zero values at a position (a, b, c)
    int a = 0, b = 1, c = 1;
    if (arr[a][b][c] != 0){
        printf("Element at position (%d, %d, %d) is not a zero \n", a, b, c);
    }
    else{
        printf("Element at position (%d, %d, %d) is a zero \n", a, b, c);
    }
    

    //Compare with a 1D array for values
    int arr2[2] = {2, 5};
    for (int x = 0; x < 2; x++){
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 2; k++){
                    int elmnt1 = arr[i][j][k];
                    int elmnt2 = arr2[x];
                    if (elmnt1 > elmnt2){
                        printf("Element %d from first array is greater than element %d from second array \n", elmnt1, elmnt2);
                    }
                    else if (elmnt1 < elmnt2){
                        printf("Element %d from first array is lesser than element %d from second array \n", elmnt1, elmnt2);
                    }
                    else{
                        printf("Element %d from first array is equal to element %d from second array \n", elmnt1, elmnt2);
                    }
                }
            }
        }    
    }


    //Compare with 1D char array for values

    //Sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 2; k++){
                sum += arr[i][j][k];
            }
        }
    }
    printf("The sum of all elements is %d \n", sum);

    //Maximum element
    int max;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 2; k++){
                if (arr[i][j][k] >= max){
                    max = arr[i][j][k];
                }
            }
        }
    }
    printf("Maximum element of the array is %d", max);

    

    return 0;
}
