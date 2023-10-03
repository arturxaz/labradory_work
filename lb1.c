#include <stdio.h>
#include <math.h>
#include <stdlib.h>

 double calculate_error(double angle) {
    double approx_sin = angle - angle*angle*angle/6 + angle*angle*angle*angle*angle/120;
    double true_sin = sin(angle);
    double error = fabs(approx_sin - true_sin);
    return error;
}

int main() {
    double angle;
    system("chcp 65001>nul");
    printf("Введите значение угла (от 0 до π/2): ");
    scanf("%lf", &angle);

    double error = calculate_error(angle);
    printf("Абсолютная ошибка: %lf\n", error);

    return 0;
}