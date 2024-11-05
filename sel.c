#include <stdio.h> 
int main()  
{ 
 int arr[10]={6,12,0,18,11,99,55,45,34,2}; 
 int n=10; 
 inti, j, position, swap; 
 printf(“Array elements before sorting”); 
 for (i = 0; i< n; i++) 
  printf("%d\t", arr[i]); 
 for (i = 0; i< (n - 1); i++)  
 { 
  position = i; 
  for (j = i + 1; j < n; j++)  
  { 
   if (arr[position] >arr[j]) 
   position = j; 
  } 
  if (position != i)  
  { 
   swap = arr[i]; 
   arr[i] = arr[position]; 
   arr[position] = swap; 
  } 
 } 
 printf(“Array elements after sorting”); 
 for (i = 0; i< n; i++) 
  printf("%d\t", arr[i]); 
 return 0; 
}