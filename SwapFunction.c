#include<stdio.h>
void swap(int x,int y){
	int t;
	printf("Original values of a and b are %d, %d \n", x, y);
    t = x;
	x=y;
	y=t;
	printf("Swapped values of a, b are as folows: %d, %d \n",x,y); 	
}

//Function to swap array elements
void swap_array(int array1[3], int array2[3]){
    int x, y;
    printf("Array 1 : ");
    for (int i = 0; i < 3; i++){
        printf("%d ", array1[i]);
    }

    printf("\n");

    printf("Array 2 : ");
    for (int i = 0; i < 3; i++){
        printf("%d ", array2[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++){
        x = array1[i];;
        y = array2[i];
        
        array1[i] = y;
        array2[i] = x;
    }

    printf("Array 1 now is : ");
    for (int i = 0; i < 3; i++){
        printf("%d ", array1[i]);
    }

    printf("\n");

    printf("Array 2 now is : ");
    for (int i = 0; i < 3; i++){
        printf("%d ", array2[i]);
    }

    printf("\n");
}


//Functions to swap elements sequentially
void swap_seq1(int x, int y, int z){
    int t;
    printf("Original values of x, y, z are %d, %d and %d \n", x, y, z);
    t = x;
    x = y;
    y = t;
    printf("After first swap, we have x = %d, y = %d and whole (%d %d %d) \n", x, y, x, y, z);

    t = x;
    x = z;
    z = t;
    printf("After second swap, we have x = %d, z = %d and whole (%d %d %d) \n", x, z, x, y, z);

    t = y;
    y = z;
    z = t;
    printf("After third swap, we have y = %d, z = %d and whole (%d %d %d) \n", y, z, x, y, z);


}

void swap_seq2(int w, int x, int y, int z){
    int t, q;
    printf("Original values of w, x, y, z are %d, %d, %d and %d \n", w, x, y , z);
    t = w;
    q = x;
    w = y;
    x = z;
    y = t;
    z = q;
    printf("After swapping 2 elements at the same time we have w = %d, x = %d, y = %d, z = %d and whole (%d %d %d %d)", w,x,y,z,w,x,y,z);

}

int main(){
	int a = 3, b = 7;
    int arr[3] = {1, 2, 3}, arr2[3] = {9, 8, 7};
		
	swap(a,b);	
    swap_array(arr, arr2);
    swap_seq1(4, 5, 6);
    swap_seq2(1, 4, 7, 9);
}
