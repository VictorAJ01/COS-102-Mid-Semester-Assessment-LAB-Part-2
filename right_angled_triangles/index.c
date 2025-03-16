#include <stdio.h>

void main()
{
    int angle1, angle2, angle3; // Variable declaration

    printf("Enter first angle: "); // Prompt user for angle1
    scanf("%d", &angle1);          // Assign value entered by user to angle1

    // Input validation for angle1
    while (angle1 <= 0)
    {
        printf("First angle must be greater than zero. Please enter a valid angle: ");
        scanf("%d", &angle1);
    }

    printf("Enter second angle: "); // Prompt user for angle2
    scanf("%d", &angle2);           // Assign value entered by user to angle2

    // Input validation for angle2
    while (angle2 <= 0 || angle2 >= 180 || (angle1 + angle2) >= 180)
    {
        printf("Second angle must be greater than zero and the sum of angles must be less than 180. Please enter a valid angle: ");
        scanf("%d", &angle2);
    }

    angle3 = 180 - (angle1 + angle2); // Calculation for angle3

    // Conditional statement to determine whether the triangle is a right-angled triangle or not.
    if (angle1 == 90 || angle2 == 90 || angle3 == 90)
    {
        printf("That's a right angle triangle\n");
    }
    else
    {
        printf("Not a right angle triangle\n");
    }
}