//1 march 2021
//Rithesh singh
//switcn case: menu driven program
#include <stdio.h>
#include <math.h>
int main() {
int value, area;
scanf("%d",&value);
switch(value) 
{
    case 1:
    printf("its a square");
    int side ;
    scanf("%d",&side);
    area = side * side;
    printf("\narea of the given square is \t%d",area);
    break;

    case 2:
    printf("its a rectangle ");
    int length, breadth ;
    scanf("%d %d",&length, &breadth);
    area = length* breadth;
    printf("\narea of the given rectangle is \t%d",area);
    break;

    case 3:
    printf("its a triangle ");
    int base , height  ;
    scanf("%d %d",&base, &height);
    float area = 0.5* base* height;
    printf("\narea of the given triangle is \t%d",area);
    break;

    case 4:
    printf("its a circle");
    int radius ;
    scanf("%d",&radius);
    float area = 3.14 * radius * radius;
    printf("\narea of the given circle is \t%f",area);
    break;

    default :
    printf("invalid entry");
}
return 0;
}
