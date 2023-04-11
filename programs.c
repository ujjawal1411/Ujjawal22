#include <math.h>
void main() 
{
 float radius, perimeter, area;
  printf("Enter radius of the Circle:\n");
  scanf("%f", & radius);
  perimeter = 2 * radius;
  printf("Perimeter of the circle: %0.4f\n", perimeter);
  area = perimeter * radius * radius;
  printf("Area of circle: %0.4f\n", area);
}

