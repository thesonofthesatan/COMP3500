#include <stdio.h>

int sum(int num[], int n) 
{ 
    int sum = 0;
    int i = 0;
    for (i; i < n; i++) 
    sum += num[i]; 
  
    return sum; 
} 
  
int main() 
{ 
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int n = sizeof(num) / sizeof(num[0]); 
    printf("Sum of given numay is %d", sum(num, n)); 
    return 0; 
} 

