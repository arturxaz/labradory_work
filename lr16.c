#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double rad, y1, y2, error_result;
    system("chcp 65001 > NUL");
    printf("Введите угол(от 0 до M_PI/2): ");
    scanf("%lf", &rad);
    y1 = sin(rad);
    y2 = rad - pow(rad, 3) / 6 + pow(rad, 5) / 120;
    error_result = fabs(y1 - y2);
    printf("\nАбсолютная величина ошибки равна: %lf\n", error_result);
    system("pause");
    return 0;
}