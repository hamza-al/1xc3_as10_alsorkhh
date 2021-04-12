#include <stdio.h>

double pi = 3.14159;
double sphere(double radius) { return pi * radius * radius * radius * 4 / 3; }
double cube(double side) { return side * side * 6; }
double square(double side) { return side * side; }
int main()
{
    double req;
    int option;
    do
    {
        printf("1)Compute the area of a square\n2) Compute the volume of a sphere\n3)Compute the surface area of a cube\n4)Quit\nEnter an option: ");
        scanf("%d", &option);
        printf("\n");
        switch (option)
        {
        case 1:
            printf("Enter side length (cm): ");
            scanf("%lf", &req);
            printf("%.2lf (cm) \n", square(req));
            printf("\n");
            break;
        case 2:
            printf("Enter radius (cm): ");
            scanf("%lf", &req);
            printf("%.2lf (cm) \n", sphere(req));
            printf("\n");
            break;
        case 3:
            printf("Enter edge length (cm): ");
            scanf("%lf", &req);
            printf("%.2lf (cm) \n", cube(req));
            printf("\n");
            break;
        }

    } while (option != 4);
    printf("Goodbye!\n");
    return 0;
}
