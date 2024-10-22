#include<stdio.h>

int main()
{

    int height,width,perimeter,area;
    height = 7;
    width = 5 ;
    perimeter =  2 * ( width+height);

    printf("Have give, \t Height of 7 and width of 5 inches \n \n");
    printf("Perimeter of the rectangel = %d inches \n",perimeter);

    area = width*height;

    printf ("Area of the rectangel = %d square inches \n",area );

    return 0 ;

}
