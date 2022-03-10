#include <stdio.h>
void main(){
   int a[] = {4, 6, 9, 1}, *p[4];
   
   // Printing array using pointer array
   printf("Original Array : ");
   for(int i = 0; i < 4; i++){
      p[i] = &a[i]; 
      printf("%d ", *p[i]);
   }


   // Printing memory addresses of the array elements
   printf("\nMemory Addresses of Array Elements : ");
   for (int i = 0; i < 4; i++){
      p[i] = &a[i];
      printf("%d: (%d)  ", *p[i], p[i]);
   }
   

   // Define char array , find the ASCII values and store the same in the second array and print both along with the addresses
   char b[] = {'a', 'c', 'y', 'd'}, *q[4]; 
   int c[4];
   
   printf("\n\nChareters, ACSII values and addresses for a char array \n");
   for (int i = 0; i < 4; i++){
      q[i] = &b[i];
      c[i] = *q[i];
      printf("ASCII value for %c is %d and its memory address is %d \n", b[i], c[i], p[i]);
   }

   
   // Define a float array, Define a char array, store the items and price in both. get the total price of purchased items. 
   char d[] = {'A', 'B', 'C'}, *r[3];
   int e[] = {10, 15, 15}, *s[3], sum = 0;

   printf("\n\nItems and their total price\n");
   for (int i = 0; i < 3; i++){
      r[i] = &d[i];
      s[i] = &e[i];
      sum += *s[i];
      printf("Item %c (address %d) costs %d (address %d). \n", *r[i], r[i], *s[i], s[i]);
   }

   printf("Total cost = %d", sum);
   
   
   
}


