#include <stdio.h>
#include <math.h>

float parallelogramArea(float base, float height) 
{
    return base * height;
}

float cuboidSurfaceArea(float length, float width, float height) 
{
    return 2 * (length * width + length * height + width * height);
}

float rhombusArea(float side, float height) 
{
    return side * height;
}

float sphereSurfaceArea(float radius) 
{
    return 4 * M_PI * radius * radius;
}

float ellipseArea(float majorRadius, float minorRadius) 
{
    return M_PI * majorRadius * minorRadius;
}

int main() 
{
    int choice;
    float area, base, height, length, width, side, radius, majorRadius, minorRadius;

    printf("Choose a shape to calculate its area:\n");
    printf("1. Parallelogram\n");
    printf("2. Cuboid\n");
    printf("3. Rhombus\n");
    printf("4. Sphere\n");
    printf("5. Ellipse\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            printf("Enter base length and height of the parallelogram: ");
            scanf("%f %f", &base, &height);
            area = parallelogramArea(base, height);
            break;

        case 2:
            printf("Enter length, width, and height of the cuboid: ");
            scanf("%f %f %f", &length, &width, &height);
            area = cuboidSurfaceArea(length, width, height);
            break;

        case 3:
            printf("Enter side length and height of the rhombus: ");
            scanf("%f %f", &side, &height);
            area = rhombusArea(side, height);
            break;

        case 4:
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);
            area = sphereSurfaceArea(radius);
            break;

        case 5:
            printf("Enter major and minor radii of the ellipse: ");
            scanf("%f %f", &majorRadius, &minorRadius);
            area = ellipseArea(majorRadius, minorRadius);
            break;

        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("The area is: %f\n", area);

    return 0;
}
