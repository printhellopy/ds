#include <stdio.h> 
int main() 
{ 
int i, low, high, mid, n, key, array[100]; 
printf("Enter number of elements \n"); 
scanf("%d",&n); 
printf("Enter %d integers \n",n); 
for(i = 0; i< n; i++) 
scanf("%d",&array[i]); 
printf("Enter value to find \n"); 
scanf("%d", &key); 
low = 0; 
high = n - 1; 
mid = (low+high)/2; 
while (low <= high) 
{ 
I 
f(array[mid] < key) 
low = mid + 1; 
else if (array[mid] == key)  
{ 
printf("%d found at position %d\n", key, mid+1); 
break; 
} 
else 
high = mid - 1; 
mid = (low + high)/2; 
} 
if(low > high) 
printf("%d is not found in array\n", key); 
return 0; 
}