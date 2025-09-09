// Task #7
#include <stdio.h>

int main() {
    int length;
    int width;
    int area;
    int perimeter;
    printf("Welcome to the rectangle area and perimeter calculator\n");
    printf("Enter width\n");
    scanf("%d", &width);
    printf("Enter length\n");
    scanf("%d", &length);
    area = length * width ;
    perimeter = 2 * (length + width);
    printf("The area is: %d\n", area);
    printf("The perimeter is: %d", perimeter);
    
    return 0;
}
