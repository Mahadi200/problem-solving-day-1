#include<stdio.h>

int main ()
{
    double radius;
    double perimeter,area,pi=3.1416;

    printf("Enter the radius of the circle :");
    scanf("%lf",&radius);

    perimeter = 2*pi*radius;
    area = pi*radius*radius;

printf("Perimeter of the Circle = %.6f \n",perimeter);
printf("Area of the Circle = %.6f\n",area);

return 0;
}
