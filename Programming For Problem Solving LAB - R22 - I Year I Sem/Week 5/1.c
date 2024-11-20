#include <stdio.h>
#include <math.h>
void main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a: ");
    scanf("%f", &a);
    printf("Enter coefficients b: ");
    scanf("%f", &b);
    printf("Enter coefficients c: ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f\n", root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}