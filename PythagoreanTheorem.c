#include <stdio.h>
#include <math.h>

int main (){

    double sideA, sideB, hypotenuse;
    int option;

    printf("\nPythagorean Theroem Calculator");
    printf("\nType [1] to find a cathetus or [2] to find the hypotenuse: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\nType the value of the hypotenuse: ");
        scanf("%lf", &hypotenuse);
        printf("\nType the value of the cathetus: ");
        scanf("%lf", &sideA);
        sideB = sqrt(pow(hypotenuse, 2) - pow(sideA, 2));
        printf("\nThe size of the cathetus is %lf", sideB);
        break;
    
    case 2:
        printf("\nType the value of the first cathetus: ");
        scanf("%lf", &sideA);
        printf("\nType the value of the second cathetus: ");
        scanf("%lf", &sideB);
        hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2));
        printf("\nThe size of the hypotenuse is %lf", hypotenuse);
        break;

    default:
        printf("\nInvalid input!");
    }

    return 0;

}