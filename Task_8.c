// Task #8

#include <stdio.h>

int main(){
    float marks_1;
    float marks_2; 
    float marks_3; 
    int num_of_subjects = 3;
    float total_marks;
    float percentage;
    
    printf("Welcome to the percentage calculator!\n");
    
    printf("Enter your marks for subject 1\n");
    scanf("%f", &marks_1);
    printf("Enter your marks for subject 2\n");
    scanf("%f", &marks_2);
    printf("Enter your marks for subject 3\n");
    scanf("%f", &marks_3);
    
    total_marks = marks_1 + marks_2 + marks_3 ;
    percentage = total_marks / num_of_subjects ;
    
    printf("Your percentage is: %.2f", percentage);
    
    return 0; 
    
}
