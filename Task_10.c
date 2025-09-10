// Task #10 
#include <stdio.h>

int main() {
    int num_1 = -10;
    int num_2 = 99;
    int temp;
    
    printf("Originally (num_1 = %d) and (num_2 = %d) \n", num_1, num_2);
    
    // Swapping with a third variable
    temp = num_1;
    num_1 = num_2;
    num_2 = temp;
    
    printf("After swapping (num_1 = %d) and (num_2 = %d) \n", num_1, num_2);
    
    // Swapping without a third variable 
    num_1 = num_1 + num_2;
    num_2 = num_1 - num_2;
    num_1 = num_1 - num_2;
    
    printf("After swapping again (num_1 = %d) and (num_2 = %d)", num_1, num_2);
    
    
    return 0;
}
