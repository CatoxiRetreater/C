#include <stdio.h>

int main() {
    int choice;
    float base, height, length, width, side, radius, major, minor, area;

    printf("Select a shape to compute its area:\n");
    printf("1. Parallelogram\n");
    printf("2. Cuboid\n");
    printf("3. Rhombus\n");
    printf("4. Sphere\n");
    printf("5. Ellipse\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the base and height of the parallelogram:\n");
            scanf("%f %f", &base, &height);
            area = base * height;
            printf("The area of the parallelogram is: %f", area);
            break;
        case 2:
            printf("Enter the height, length, and width of the cuboid:\n");
            scanf("%f %f %f", &height, &length, &width);
            area = 2 * (length * width + length * height + width * height);
            printf("The area of the cuboid is: %f", area);
            break;
        case 3:
            printf("Enter the side and height of the rhombus:\n");
            scanf("%f %f", &side, &height);
            area = side * height;
            printf("The area of the rhombus is: %f", area);
            break;
        case 4:
            printf("Enter the radius of the sphere:\n");
            scanf("%f", &radius);
            area = 4 * 3.14 * radius * radius;
            printf("The area of the sphere is: %f", area);
            break;
        case 5:
            printf("Enter the major and minor radius of the ellipse:\n");
            scanf("%f %f", &major, &minor);
            area = 3.14 * major * minor;
            printf("The area of the ellipse is: %f", area);
            break;
        default:
            printf("Invalid choice.");
    }

    return 0;
}