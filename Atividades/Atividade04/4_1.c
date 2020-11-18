#include <stdio.h>  
   
int main() {  
    
    int x, y;  
    printf("Insira dois valores inteiros: \n");  
    scanf("%d %d", &x, &y);  
    
    if(y < x) 
    {
        printf("%d é o menor\n", y);          
    } 
    else if (x < y)
    { 
        printf("%d é o menor\n", x);  
    } 
    return 0;  
}