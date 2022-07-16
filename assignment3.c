// 1. Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d is positve", n);
    }
    else
        printf("%d is non positive", n);
    return 0;
}

// 2. Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0)
        printf("%d is divisible by 5", n);

    else
        printf("%d is not dividible by 5", n);
    return 0;
}

/*3. Write a program to check whether a given number is an even number or an odd
number.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d is even", n);

    else
        printf("%d is odd", n);
    return 0;
}

// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a;
    a = n / 2;
    printf("%d\n", a);
    if (a * 2 == n)
        printf("%d is even", n);

    else
        printf("%d is odd", n);
    return 0;
}

// 5. Write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 99 && n < 1000)
    {
        printf("%d is three-digit number ", n);
    }

    else
        printf("%d is not three-digit number ", n);

    return 0;
}

// 6. Write a program to print greater between two numbers. Print one number of both are
// the same

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);

    if (n > m)
        printf("%d is greater", n);

    else if (n == m)
        printf("Both are same with value %d", n);

    else
        printf("%d is greater", m);

    return 0;
}
// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary root.
#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, d, root1, root2, realPart, imagPart;
    printf("Enter a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

//
// 8. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is loop year", year);
    }
    else
        printf("%d is not a leap year", year);

    return 0;
}
// 9. Write a program to find the greatest among three given numbers. Print number once
//  if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
    float SP, CP;
    printf("enter selling price and cost price: ");
    scanf("%f %f", &SP, &CP);
    float profit = SP - CP;
    float loss = CP - SP;
    if (SP > CP)
    {
        float percent = (profit / CP) * 100;
        printf("profit of %f%% ", percent);
    }
    else
    {
        float percent = (loss / CP) * 100;
        printf("loss of %f%%", percent);
    }
    return 0;
}
// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
    float SP, CP;
    printf("enter selling price and cost price: ");
    scanf("%f %f", &SP, &CP);
    float profit = SP - CP;
    float loss = CP - SP;
    if (SP > CP)
    {
        float percent = (profit / CP) * 100;
        printf("profit of %f%% ", percent);
    }
    else
    {
        float percent = (loss / CP) * 100;
        printf("loss of %f%%", percent);
    }
    return 0;
}
// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
#include <stdio.h>
int main()
{

    float a, b, c, d, e;
    printf("Enter three numbers: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    float avg = (a + b + c + d + e) / 5;
    if (avg >= 33)
    {
        printf("Student is passed with %.2f out of 100", avg);
    }
    else
        printf("Student is failed.");

    return 0;
}

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{

    char a;
    printf("Enter  charcater: ");
    scanf("%c", &a);

    if (a >= 97 && a <= 122)
    {
        printf("%c is lowercase", a);
    }
    else if (a >= 65 && a <= 90)
        printf("%c is uppercase", a);

    return 0;
}

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 3 == 0 && a % 2 == 0)
        printf("%d is divisible by 2 and 3", a);
    else
        printf("%d is not divisible by 2 and 3", a);
    return 0;
}

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
    int a;
    int y = 8;
    printf("Enter a number: ");
    scanf("%d", &a);
    if ((a % 3 == 0 && a % 7 == 0) && a != 0)
        printf("%d is divisible by 3 and 7", a);
    else if (a % 7 == 0 && a != 0)
        printf("%d is divisible by 7", a);

    else if (a % 3 == 0 && a != 0)
        printf("%d is divisible by 3", a);

    return 0;
}

// 15. Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
        printf("%d is positive", a);
    else if (a < 0)
        printf("%d is negative", a);

    else
        printf("%d is zero", a);

    return 0;
}

// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main()
{

    char a;
    printf("Enter  charcater: ");
    scanf("%c", &a);

    if (a >= 97 && a <= 122)
    {
        printf("%c is lowercase", a);
    }
    else if (a >= 65 && a <= 90)
        printf("%c is uppercase", a);

    else if (a >= 32 && a <= 47 || a >= 58 && a <= 64 || a >= 91 && a <= 96 || a <= 123 && a >= 126)
        printf("%c is special character", a);
    else if (a >= 48 && a <= 57)
        printf("%c is digit", a);
    return 0;
}
// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        printf("invalid");
    }

    else
        printf("valid");

    return 0;
}
// 18. Write a program which takes the month number as an input and display number of
// days in that month
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a month number: ");
    scanf("%d", &a);
    if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
    {
        printf("there are 31 days in these months");
    }
    else if (a == 2)
    {
        printf("28/29 days in this month");
    }
    else
    {
        printf("30 days in this month");
    }

    return 0;
}
