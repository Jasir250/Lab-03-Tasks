// Task #09
#include <stdio.h>


int main() {
    char name[20];
    int age;
    
    printf("What is your name\?\n");
    scanf("%s", &name);
    printf("What is your age\?\n");
    scanf("%d", &age);
    printf("User's name is: %s \nUser's age is: %d", name, age);
    
    return 0;
}
