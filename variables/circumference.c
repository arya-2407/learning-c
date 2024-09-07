#include <stdio.h>

int main(){

    const double PI=3.14159;
    double radius;
    double circumference;

    printf("\nEnter radius of circle : ");
    scanf("%lf",&radius);

    circumference=2*radius*PI;
    printf("The circumference of the circle with radius %lf is %.2lf",radius,circumference);





    return 0;
}