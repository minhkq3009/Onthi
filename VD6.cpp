#include <stdio.h>

int calculateArea(int length, int width) {
    int area = length * width;
    return area;
}

int calculatePerimeter(int length, int width) {
    int perimeter = 2 * (length + width);
    return perimeter;
}

int main() {
    int choice;
    int length, width;

    printf("1. Calculate area\n");
    printf("2. Calculate perimeter\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            int area = calculateArea(length, width);
            printf("Area of the rectangle: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            int perimeter = calculatePerimeter(length, width);
            printf("Perimeter of the rectangle: %.2f\n", perimeter);
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

