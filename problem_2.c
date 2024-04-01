#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int min = num1 - num2;
    int mlt = num1 * num2;
    float dvd = num1 / num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, min);
    printf("%d * %d = %d\n", num1, num2, mlt);
    printf("%d / %d = %.2f\n", num1, num2, dvd);
    return 0;
}