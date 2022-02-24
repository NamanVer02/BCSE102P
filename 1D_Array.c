# include <stdio.h>
int main(){
    // Initializing array
    int arr[50] = {1, 2, 3, 4, 5};
    int n = 5;
    
    /*
    printf("Enter size of array as an integer (max 50) \n");
    scanf("%d", &size);
    for (int i = 0; i < size; i++){
        printf("Enter the element at position %d :  ", i+1);
        scanf("%d", &arr[i]);
    }
    */
    
    // Print original array    
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    //Insert element 2 at position 2
    int position = 2, element = 2;
    for (int i = n; i >= position; i--){
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    n++;
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


    //Insert x elements at a position
    position = 4;
    int x = 3, elements[10] = {4, 7, 9};
    for(int i = 0; i < x; i++){
        int element = elements[i];
        for (int j = n; j >= position; j--){
            arr[j] = arr[j - 1];
        }
        arr[position - 1] = element;
        n++;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
    //Remove duplicates from array
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k < n; k++){
                    arr[k] = arr[k + 1];
                }
                j--;
                n--;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
    //Remove one element from array
    position = 5;
    for (int i = position - 1; i < n-1; i++){
        arr[i] = arr[i + 1];
    }
    
    n--;
    
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    //Search for an element
    element = 9;
    position = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == element){
            position = i+1;
        }
    }
    printf("Position of element %d is %d \n", element, position);


    //Check for non-zero values at a postion
    position = 4;
    if (arr[position-1] != 0){
        printf("The element at position %d is not a zero \n", position);
    }
    else{
        printf("The element at postion %d is a zero \n", position);
    }

    
    //Create another array and compare
    int arr2[50] = {2, 5, 1, 4, 6, 9};
    for (int i = 0; i < n; i++){
        if (arr[i] > arr2[i]){
            printf("Element %d is greater than element %d \n", arr[i], arr2[i]);
        }
        else if (arr[i] < arr2[i]){
            printf("Element %d is lesser than element %d \n", arr[i], arr2[i]);
        }
        else{
            printf("Both elements are equal to %d \n", arr[i]);
        }
    }


    //Create 1 char array and compare

    //Find sum of all elements
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("The sum of %d elements of the array is : %d \n", n, sum);
    
    
    //Printing the array for reference
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    //Find maximum of elements
    int max;
    for (int i = 0; i < n; i++){
        if (arr[i] >= max){
            max = arr[i];
        }   
    }
    printf("The maximum of the elements of the array is %d \n", max);


    //Find minimum of elements
    int min;
    for (int i = 0; i < n; i++){
        if (arr[i] <= min){
            min = arr[i];
        }      
    }
    printf("The minimum of the elements of the array is %d \n", min);

    return 0;
}

