#include <stdio.h>
float main()
{
    float r, area;
    const pi = 3.14;
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = pi * r * r;
    printf("The area of circle is %f", area);
    return 0;
}
